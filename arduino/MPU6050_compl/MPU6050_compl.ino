/* Copyright (C) 2012 Kristian Lauszus, TKJ Electronics. All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Contact information
 -------------------

 Kristian Lauszus, TKJ Electronics
 Web      :  http://www.tkjelectronics.com
 e-mail   :  kristianl@tkjelectronics.com
 */
#include "ros.h"
#include "geometry_msgs/PoseStamped.h"

ros::NodeHandle nh;
geometry_msgs::PoseStamped Pose;

ros::Publisher pos("pos", &Pose);

#include <Wire.h>
//#include "Kalman.h" // Source: https://github.com/TKJElectronics/KalmanFilter

#define RESTRICT_PITCH // Comment out to restrict roll to ±90deg instead - please read: http://www.freescale.com/files/sensors/doc/app_note/AN3461.pdf


/* IMU Data */
double accX, accY, accZ;
double gyroX, gyroY, gyroZ;
double ax_prev, ay_prev, az_prev;
double vel_x, vel_y, vel_z;

uint8_t count_x,count_y,count_z;

double compAngleX, compAngleY; // Calculated angle using a complementary filter

uint32_t timer_ang;
uint8_t i2cData[14]; // Buffer for I2C data

void setup() {
  Serial.begin(115200);
  Wire.begin();
  TWBR = ((F_CPU / 400000L) - 16) / 2; // Set I2C frequency to 400kHz

  i2cData[0] = 7; // Set the sample rate to 1000Hz - 8kHz/(7+1) = 1000Hz
  i2cData[1] = 0x00; // Disable FSYNC and set 260 Hz Acc filtering, 256 Hz Gyro filtering, 8 KHz sampling
  i2cData[2] = 0x00; // Set Gyro Full Scale Range to ±250deg/s
  i2cData[3] = 0x00; // Set Accelerometer Full Scale Range to ±2g
  while (i2cWrite(0x19, i2cData, 4, false)); // Write to all four registers at once
  while (i2cWrite(0x6B, 0x01, true)); // PLL with X axis gyroscope reference and disable sleep mode

  while (i2cRead(0x75, i2cData, 1));
  if (i2cData[0] != 0x68) { // Read "WHO_AM_I" register
    Serial.print(F("Error reading sensor"));
    while (1);
  }

  delay(100); // Wait for sensor to stabilize

  /* Set kalman and gyro starting angle */
  while (i2cRead(0x3B, i2cData, 6));
  accX = (i2cData[0] << 8) | i2cData[1];
  accY = (i2cData[2] << 8) | i2cData[3];
  accZ = (i2cData[4] << 8) | i2cData[5];

  // Source: http://www.freescale.com/files/sensors/doc/app_note/AN3461.pdf eq. 25 and eq. 26
  // atan2 outputs the value of -π to π (radians) - see http://en.wikipedia.org/wiki/Atan2
  // It is then converted from radians to degrees
#ifdef RESTRICT_PITCH // Eq. 25 and 26
  double roll  = atan2(accY, accZ) * RAD_TO_DEG;
  double pitch = atan(-accX / sqrt(accY * accY + accZ * accZ)) * RAD_TO_DEG;
#else // Eq. 28 and 29
  double roll  = atan(accY / sqrt(accX * accX + accZ * accZ)) * RAD_TO_DEG;
  double pitch = atan2(-accX, accZ) * RAD_TO_DEG;
#endif

  nh.initNode();
  nh.advertise(pos);
  delay(100);
  
  timer_ang = micros();
  Pose.header.stamp.sec=timer_ang/1000000;
  Pose.header.stamp.nsec=(timer_ang-Pose.header.stamp.sec*1000000)*1000;
  
  compAngleX=roll; // Set starting angle
  compAngleY=pitch;
  
  vel_x=0;
  vel_y=0;
  vel_z=0;
  
  count_x=0;
  count_y=0;
  count_z=0;
  /*bool calibrated; //Return 0 on success
  double correction_val_x, correction_val_y, correction_val_z;
  while((int)calibrated){
    double* calibrate[];
    calibrate=Calibration();
    correction_val_x=calibrate[0];
    correction_val_y=calibrate[1];
    correction_val_z=calibrate[2];
    
    calibrated=calibrate[3];
  } */ 
}

void loop() {
  while(Pos_Ang_Calc()); //dades, angleX, angeleY, timer
  /* Print Data */
#if 0 // Set to 1 to activate
  Serial.print(accX); Serial.print("\t");
  Serial.print(accY); Serial.print("\t");
  Serial.print(accZ); Serial.print("\t");

  Serial.print(gyroX); Serial.print("\t");
  Serial.print(gyroY); Serial.print("\t");
  Serial.print(gyroZ); Serial.print("\t");

  Serial.print("\t");
#endif

  //Pose.header.stamp.sec=timer_pos/1000000; //timer_pos because is the last updated
  //Pose.header.stamp.nsec=(timer_pos-Pose.header.stamp.sec*1000000)*1000;
  
  Pose.pose.orientation.x = compAngleX;
  Pose.pose.orientation.y = compAngleY;
  
  pos.publish(&Pose);
  nh.spinOnce();
  
  delay(2);
}
