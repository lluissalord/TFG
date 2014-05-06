bool Ang_Calc(){  
  double dt_ang = (double)(micros() - timer_ang) / 1000000; // Calculate delta time
  timer_ang = micros();
  
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
  
  gyroX = gyroX / 131.0; // Convert to deg/s
  gyroY = gyroY / 131.0; // Convert to deg/s
  
  #ifdef RESTRICT_PITCH
  // This fixes the transition problem when the accelerometer angle jumps between -180 and 180 degrees
  if ((roll < -90 && compAngleX > 90) || (roll > 90 && compAngleX < -90))
    compAngleX = roll;
    
  if (abs(compAngleX) > 90)
    gyroY = -gyroY; // Invert rate, so it fits the restriced accelerometer reading
    
  #else
  // This fixes the transition problem when the accelerometer angle jumps between -180 and 180 degrees
  if ((pitch < -90 && compAngleY > 90) || (pitch > 90 && compAngleY < -90))
    compAngleY = pitch;
    
  if (abs(compAngleY) > 90)
    gyroX = -gyroX; // Invert rate, so it fits the restriced accelerometer reading
  #endif
  
  compAngleX = 0.93 * (compAngleX + gyroX * dt_ang) + 0.07 * roll; // Calculate the angle using a Complimentary filter
  compAngleY = 0.93 * (compAngleY + gyroY * dt_ang) + 0.07 * pitch;
  
  return false;
}
