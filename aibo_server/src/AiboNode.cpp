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
   	std::cout << "urbiEXECUTE"<<std::flush;
	urbi::execute();
   	std::cout << "urbiEXECUTE22222"<<std::flush;
	return NULL;
}

int main(int argc, char** argv)
{

  ros::init(argc, argv, "aibo_server");
  aibo::AiboServer pepe (argv[1]);

  ROS_INFO ("Aibo Server Started");
  ros::Rate r(10);
  pthread_t t1;
  if(pthread_create(&t1, NULL, &urbiExecute,NULL)) {

	fprintf(stderr, "Error creating thread\n");
	return 1;
	}

  while (ros::ok())
  {
  	pepe.publishState();
  	pepe.sub = pepe._nh.subscribe<aibo_server::Joints>(pepe._nName + "/aibo/subJoints", 100, &aibo::AiboServer::setOnJoint, &pepe);
	ros::spinOnce();
	r.sleep();	
  }
  if(pthread_join(t1, NULL)) {

	fprintf(stderr, "Error joining thread\n");
	return 2;

	}
  
 
		
  ROS_INFO("Finished main loop");
  
  return(0);
}


