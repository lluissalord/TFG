#include "ros.h"
#include "std_msgs/Float64MultiArray.h"

#include <Wire.h>

#include <SPI.h>
#include <I2Cdev.h>
#include <MPU60X0.h>

// class default I2C address is 0x68
// specific I2C addresses may be passed as a parameter here
// AD0 low = 0x68 (default for InvenSense evaluation board)
// AD0 high = 0x69
MPU60X0 accelgyro;

int16_t ax, ay, az;
int16_t gx, gy, gz;

ros::NodeHandle nh;

double angx=0; //Podria fer-se amb calcul inicial al setup
double angy=0;
double angz=0;

std_msgs::Float64MultiArray CoG;  //{pos,vel,freq};
ros::Publisher pos("pos", &CoG);

int count=0;

double gx_sum;
double gy_sum;
double gz_sum;
double gx_mean;
double gy_mean;
double gz_mean;

double ax_sum;
double ay_sum;
double az_sum;
double ax_mean;
double ay_mean;
double az_mean;

double accelx;
double accely;
double accelz;

double prev_time;
double dt;

void setup()
{   
    Wire.begin();

    // initialize serial communication
    // (38400 chosen because it works as well at 8MHz as it does at 16MHz, but
    // it's really up to you depending on your project)
    Serial.begin(38400);

    // initialize device
    Serial.println("Initializing I2C devices...");
    accelgyro.initialize();

    // verify connection
    Serial.println("Testing device connections...");
    Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");

    nh.initNode();
    nh.advertise(pos);
    prev_time=double(millis()/double(1000));//en segons
    
    CoG.layout.dim_length = 3;
    CoG.data_length = 7; //3,3,1
    CoG.layout.dim[0].label = "pose";
    CoG.layout.dim[0].size = 3;
    CoG.layout.dim[0].stride = 3;
    CoG.layout.dim[1].label = "vel";
    CoG.layout.dim[1].size = 3;
    CoG.layout.dim[1].stride = 3;
    CoG.layout.dim[2].label = "freq";
    CoG.layout.dim[2].size = 1;
    CoG.layout.dim[2].stride = 1;
    CoG.layout.data_offset = 0;
}

void loop()
{
    // read raw accel/gyro measurements from device
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    
    gx_sum+=gx;
    gy_sum+=gy;
    gz_sum+=gz;

    ax_sum+=ax;
    ay_sum+=ay;
    az_sum+=az;
    if(count==10)
    {
        dt=double(millis()/double(1000)); //en segons
        dt-=prev_time;
        
	gx_mean=gx_sum/double(10);
	gy_mean=gy_sum/double(10);
	gz_mean=gz_sum/double(10);
        //Podria afegir-se de si no arriba a tal limit que la mitjana sigui 0, esta fet en el de mesurar_angles

        angx=angx+gx_mean*dt;
        angy=angy+gy_mean*dt;
        angz=angz+gz_mean*dt;

	ax_mean=ax_sum/double(10);
	ay_mean=ay_sum/double(10);
	az_mean=az_sum/double(10);
        //Podria afegir-se de si no arriba a tal limit que la mitjana sigui 0, esta fet en el de mesurar_angles
        accelx=ax_mean+9.81*sin(angy); //Rotacio y --> accel x (observar signe)
        accely=ay_mean+9.81*sin(angx);//Rotacio x --> accel y (observar signe)
        accelz=az_mean+9.81*cos(angx)*cos(angy); 

        CoG.data[3]=CoG.data[3]+accelx*dt; //vel_x=vel_x+accelx*dt
        CoG.data[4]=CoG.data[4]+accely*dt;
        CoG.data[5]=CoG.data[5]+accelz*dt;

        CoG.data[0]=CoG.data[0]+CoG.data[3]*dt; //pos_x=pos_x+vel*dt
        CoG.data[1]=CoG.data[1]+CoG.data[4]*dt;
        CoG.data[2]=CoG.data[2]+CoG.data[5]*dt;

        pos.publish(&CoG); //es necessari & ??
        nh.spinOnce();

	prev_time=double(millis()/double(1000));
	count=0;
    }
    count++;
    delay(1);
}
