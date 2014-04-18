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

double angx=0; //Podria fer-se amb calcul inicial al setup
double angy=0;
double angz=0;

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

double ang_accel_x;
double ang_accel_y;

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
    
    prev_time=double(millis()/double(1000)); //en segons
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
    if(count==100)
    {      
        dt=double(millis()/double(1000)); //en segons
        dt-=prev_time;
        
	gx_mean=gx_sum/double(100);
	gy_mean=gy_sum/double(100);
	gz_mean=gz_sum/double(100);
        //Podria afegir-se de si no arriba a tal limit que la mitjana sigui 0

	ax_mean=ax_sum/double(100);
	ay_mean=ay_sum/double(100);
	az_mean=az_sum/double(100);

        double llista[]={gx_mean,gy_mean,gz_mean,ax_mean,ay_mean,az_mean};
        
        int i=0;
        while(i<6)
        {
            if(i>2 && llista[i]<0.0856) //error de 0.5º per accelerometre
            {
                llista[i]=0;
            }else if (i<=2 && llista[i]<5) //error de 0.5º per gyroscopi
            {
		llista[i]=0;
            }
            i++
        }

        angx=angx+llista[0]*dt;
        angy=angy+llista[1]*dt;
        angz=angz+llista[2]*dt;


        ang_accel_x=asin(llista[3]/double(9.81)); //Rotacio x --> accel y
        ang_accel_y=asin(llista[4]/double(9.81));

        Serial.println("Angles segons gyro (X,Y)=(");
        Serial.print(angx,angy);
        Serial.print("); i segons accel:(");
        Serial.print(ang_accel_x,ang_accel_y);
        Serial.print(")");
        
        prev_time=double(millis()/double(1000));        
	count=0;
    }
    count++;
    delay(1);
}