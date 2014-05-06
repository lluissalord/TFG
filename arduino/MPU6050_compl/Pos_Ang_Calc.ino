bool Pos_Ang_Calc(){
  
  //Reduce the noise, it does a mean of ten samples
  double ax_sum=0, ay_sum=0, az_sum=0;
  double gx_sum=0, gy_sum=0, gz_sum=0;
  
  uint8_t i=0;
  while(i<10){
    while(Read_RAW());
    ax_sum+=accX;
    ay_sum+=accY;
    az_sum+=accZ;
    
    gx_sum+=gyroX;
    gy_sum+=gyroY;
    gz_sum+=gyroZ;
    i++;    
  }
  
  accX= (double)ax_sum/10;
  accY=(double)ay_sum/10;
  accZ=(double)az_sum/10;
  
  gyroX=(double)gx_sum/10;
  gyroY=(double)gy_sum/10;
  gyroZ=(double)gz_sum/10;
  
  while(Ang_Calc()); //Calculate de angles: compAngleX and compAngleY
  while(Pos_Calc(/*ax_sum, ay_sum, az_sum*/)); //Calculate de position
  
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
  
  return false;
}
