bool Pos_Calc(/*double ax_sum, double ay_sum, double az_sum, double correction_val_x, double correction_val_y, double correction_val_z*/){
  /*double accel_fix_x=ax_sum/10+9.81*sin(compAngleY);
  double accel_fix_y=ay_sum/10+9.81*sin(compAngleX);
  double accel_fix_z=az_sum/10+9.81*cos(compAngleX)*cos(compAngleY);
  */
  
  //Convert units from RAW to m/s**2  
  accX=accX*9.81/16384;//15658 
  accY=accY*9.81/16384;
  accZ=accZ*9.81/16384;
  
  accX=accX+9.81*sin(compAngleY*DEG_TO_RAD);//+correction_val_x;
  accY=accY-9.81*sin(compAngleX*DEG_TO_RAD);//+correction_val_y;
  accZ=accZ-9.81*cos(compAngleX*DEG_TO_RAD)*cos(compAngleY*DEG_TO_RAD);//+correction_val_z;
  
  if(abs(accX)<0.70){
    accX=0;
    count_x++;
    if(count_x>=20)
      vel_x=0;
  }else
    count_x=0;
    
  if(abs(accY)<0.70){
    accY=0;
    count_y++;
    if(count_y>=20)
      vel_y=0;
  }else
    count_y=0;
    
  if(abs(accZ)<0.70){
    accZ=0;
    count_z++;
    if(count_z>=20)
      vel_z=0;
  }else
    count_z=0;
  /*
  Serial.print(accX); Serial.print("\t");
  Serial.print(accY); Serial.print("\t");
  Serial.print(accZ); Serial.print("\t");
  
  Serial.print("\r\n");*/
  
  double dt_pos = (double)(micros() - (Pose.header.stamp.sec*1000000+Pose.header.stamp.nsec/1000)) / 1000000; // Calculate delta time
  Pose.header.stamp.sec=micros()/1000000;
  Pose.header.stamp.nsec=(micros()-Pose.header.stamp.sec*1000000)*1000;
  
  vel_x=vel_x+accX*dt_pos;
  vel_y=vel_y+accY*dt_pos;
  vel_z=vel_z+accZ*dt_pos;
  
  Pose.pose.position.x=Pose.pose.position.x+vel_x*dt_pos;
  Pose.pose.position.y=Pose.pose.position.y+vel_y*dt_pos;
  Pose.pose.position.z=Pose.pose.position.z+vel_z*dt_pos;
  
  return false;
}
