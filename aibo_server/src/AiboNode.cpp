/*
*  AiboNode.cpp
*  Copyright (c) 2013 Ricardo Tellez
*  Created on: 17-November-2013
*  Author: Ricardo Tellez
*  email: r_tellez@ouroboros.org
*
*/

		
#include "AiboServer.h"
#include <urbi/usyncclient.hh>
#include <urbi/uabstractclient.hh>
#include <urbi/uclient.hh>
#include <pthread.h>
#include <stdio.h>
void *urbiExecute(void*)
{
   	urbi::execute();
   	return NULL;
}

int main(int argc, char** argv)
{

	ros::init(argc, argv, "aibo_server");
	aibo::AiboServer pepe (argv[1]);
	ros::NodeHandle n;
	ROS_INFO ("Aibo Server Started");
	ros::Rate r(8);
	// crea thread
	//pthread_t t1;
	//ROS_INFO ("Aibo Server thread1");
	//pthread_create(&t1, NULL, &urbiExecute,NULL);
	//ROS_INFO ("Aibo Server thread2");
	//pthread_join(t1,NULL);
	pthread_t t1;
	if(pthread_create(&t1, NULL, &urbiExecute,NULL)) {

	fprintf(stderr, "Error creating thread\n");
	return 1;
	}
	pepe.sub = pepe._nh.subscribe<aibo_server::Joints>(pepe._nName + "/aibo/subJoints", 1000, &aibo::AiboServer::setOnJoint, &pepe);
	ROS_INFO ("Aibo Server thread3");
	ROS_INFO ("Aibo Server sub");	
  while (ros::ok())
  {
	ROS_INFO ("Aibo Server pub1");
  	pepe.publishState();
  	ros::spinOnce();
	r.sleep();	
  }
 	
  ROS_INFO("Finished main loop");
  
  return(0);
}


