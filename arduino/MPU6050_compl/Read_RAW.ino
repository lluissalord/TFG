bool Read_RAW(){
  /* Update all the values */
  while (i2cRead(0x3B, i2cData, 14));
  accX = ((i2cData[0] << 8) | i2cData[1]);// + 2000.0;
  accY = ((i2cData[2] << 8) | i2cData[3]);// + 3319.84;
  accZ = ((i2cData[4] << 8) | i2cData[5]);// + 664.48;
  //tempRaw = (i2cData[6] << 8) | i2cData[7];
  gyroX = (i2cData[8] << 8) | i2cData[9];
  gyroY = (i2cData[10] << 8) | i2cData[11];
  gyroZ = (i2cData[12] << 8) | i2cData[13];
  
  return false;  
}
