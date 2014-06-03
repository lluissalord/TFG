/*
*  AiboNode.cpp
*  Copyright (c) 2013 Ricardo Tellez
*  Created on: 17-November-2013
*  Author: Ricardo Tellez
*  email: r_tellez@ouroboros.org
*
*/

#include "AiboServer.h"
#include <urbi/uabstractclient.hh>
#include <aibo_server/IRArray.h>
#include <aibo_server/BumperArray.h>
#include <aibo_server/Accel.h>
#include <aibo_server/Sound.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/JointState.h>
#include <aibo_server/TouchArray.h>
#include "std_msgs/String.h"

#define NUM_MOTORS 18

namespace aibo
{

  AiboServer::AiboServer(const char* IP) :
    _nh( "~" )
  {
	//One client for readin an one for sending
    _clientS = new urbi::UClient(IP, 54000);
	_clientR = new urbi::UClient(IP,54000);
   	//get node name
	_nName= ros::this_node::getName();

    // set the topics that will publish the Aibo sensor values
    _aiboIR = _nh.advertise<aibo_server::IRArray>(_nName + "/aibo/infrared", 1, false);
    _aiboSound = _nh.advertise<aibo_server::Sound>(_nName + "/aibo/sound", 1, false);
    _aiboImage = _nh.advertise<sensor_msgs::Image>(_nName + "/aibo/image", 1, false);
    _aiboJoint = _nh.advertise<aibo_server::Joints>(_nName + "/aibo/joints", 1000, false);
    _aiboAccel = _nh.advertise<aibo_server::Accel>(_nName + "/aibo/accel", 1, false);
    _aiboPaw = _nh.advertise<aibo_server::BumperArray>(_nName + "/aibo/paws", 1, false);
    _aiboTouch = _nh.advertise<aibo_server::TouchArray>(_nName + "/aibo/touch", 1, false);
	
    // set callbacks for sensors loop distanceChest << distanceChest.val & loop distanceNear << distanceNear.val;
    
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"distanceChest");
    _clientR->send("loop distanceChest << distanceChest.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"distanceNear");
    _clientR->send("loop distanceNear << distanceNear.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"distanceFar");
    _clientR->send("loop distanceFar << distanceFar.val,");
    //_clientR->setCallback (urbi::callback(*this, &AiboServer::onSoundSensor),"speaker");
    //_clientR->send("loop speaker << speaker.val,");
    //_clientR->setCallback (urbi::callback(*this, &AiboServer::onImageSensor),"camera");
    //_clientR->send("loop camera << camera.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRF1");
    _clientR->send("loop legRF1 << legRF1.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRF2");
    _clientR->send("loop legRF2 << legRF2.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRF3");
    _clientR->send("loop legRF3 << legRF3.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRH1");
    _clientR->send("loop legRH1 << legRH1.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRH2");
    _clientR->send("loop legRH2 << legRH2.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legRH3");
    _clientR->send("loop legRH3 << legRH3.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLF1");
    _clientR->send("loop legLF1 << legLF1.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLF2");
    _clientR->send("loop legLF2 << legLF2.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLF3");
    _clientR->send("loop legLF3 << legLF3.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLH1");
    _clientR->send("loop legLH1 << legLH1.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLH2");
    _clientR->send("loop legLH2 << legLH2.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"legLH3");
    _clientR->send("loop legLH3 << legLH3.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"neck");
    _clientR->send("loop neck << neck.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"headTilt");
    _clientR->send("loop headTilt << headTilt.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"headPan");
    _clientR->send("loop headPan << headPan.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"tailPan");
    _clientR->send("loop tailPan << tailPan.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"tailTilt");
    _clientR->send("loop tailTilt << tailTilt.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"mouth");
    _clientR->send("loop mouth << mouth.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"accelX");
    _clientR->send("loop accelX << accelX.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"accelY");
    _clientR->send("loop accelY << accelY.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"accelZ");
    _clientR->send("loop accelZ << accelZ.val,");
	_clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"pawLF");
    _clientR->send("loop pawLF << pawLF.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"pawLH");
    _clientR->send("loop pawLH << pawLH.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"pawRF");
    _clientR->send("loop pawRF << pawRF.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"pawRH");
    _clientR->send("loop pawRH << pawRH.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"chinSensor");
    _clientR->send("loop chinSensor << chinSensor.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"backSensorF");
    _clientR->send("loop backSensorF << backSensorF.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"backSensorM");
    _clientR->send("loop backSensorM << backSensorM.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"backSensorR");
    _clientR->send("loop backSensorR << backSensorR.val,");
    _clientR->setCallback (urbi::callback(*this, &AiboServer::onCall),"headSensor");
    _clientR->send("loop headSensor << headSensor.val;");
    // activates motors
    _clientS->send ("motors on;");  
    setBlendingmode();
    //startPosition();
    std::cout << "start"<<std::flush;
	

  }

  AiboServer::~AiboServer()
  {
    delete _clientR;
    delete _clientS;
  }
  
  urbi::UCallbackAction AiboServer::onCall(const urbi::UMessage &msg) 
  {
   double value = (double)msg.value->val;
    if (msg.tag == "chinSensor")
		_touch1 = value;
	if (msg.tag == "backSensorF")
		_touch2 = value;
    if (msg.tag == "backSensorM")
		_touch3 = value;
    if (msg.tag == "backSensorR")
		_touch4 = value;
    if (msg.tag == "headSensor")  
		_touch5 = value; 
	if (msg.tag == "pawLF")
		_pawLF = value;
    if (msg.tag == "pawLH")
		_pawLH = value;
    if (msg.tag == "pawRF")
		_pawRF = value;
    if (msg.tag == "pawRH")
		_pawRH = value;    
	if (msg.tag == "accelX")
		_accelX = value;
	if (msg.tag == "accelY")
		_accelY = value;
	if (msg.tag == "accelZ") 
        _accelZ = value;
    if (msg.tag=="legRF1")
		_jointRF1=value;
	if (msg.tag=="legRF2")
		_jointRF2=value;
	if (msg.tag=="legRF3")
		_jointRF3=value;
	if (msg.tag=="legRH1")
		_jointRH1=value;
	if (msg.tag=="legRH2")
		_jointRH2=value;
	if (msg.tag=="legRH3")
		_jointRH3=value;
	if (msg.tag=="legLF1")
		_jointLF1=value;
	if (msg.tag=="legLF2")
		_jointLF2=value;
	if (msg.tag=="legLF3")
		_jointLF3=value;
	if (msg.tag=="legLH1")
		_jointLH1=value;
	if (msg.tag=="legLH2")
		_jointLH2=value;
	if (msg.tag=="legLH3")
		_jointLH3=value;
	if (msg.tag=="neck")
		_headNeck=value;
	if (msg.tag=="headPan")
		_headPan=value;
	if (msg.tag=="headTilt")
		_headTilt=value;
	if (msg.tag=="mouth")
		_mouth=value;
	if (msg.tag=="tailTilt")
		_tailTilt=value;
	if (msg.tag=="tailPan")
		_tailPan=value;
	if (msg.tag == "distanceChest")
		_IRChest = value;
    if (msg.tag == "distanceNear")
        _IRNear = value;
   if (msg.tag == "distanceFar")  
        _IRFar = value;
    
    return urbi::URBI_CONTINUE;
  }
  
  
  
  urbi::UCallbackAction AiboServer::onImageSensor(const urbi::UMessage &msg) 
  {
          
    return urbi::URBI_CONTINUE;
  }
  
  urbi::UCallbackAction AiboServer::onSoundSensor(const urbi::UMessage &msg) 
  {
    /*
    if (msg.type != urbi::MESSAGE_DATA || urbi::USound(msg).soundFormat == urbi::SOUND_UNKNOWN)
    return urbi::URBI_CONTINUE;

    _sound = (urbi::USound)msg; */

    return urbi::URBI_CONTINUE;
  }

 

  void AiboServer::setBlendingmode()
  {
    // Stablishes the default mode of accepting conflicting assignments 
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command[100];
      
      sprintf (command,"%s.val->blend = cancel,",MOTORS[i]);
      _clientS->send(command);
      usleep (1000);
    }
  }


  void AiboServer::startPosition()
  {
    // Makes Aibo take the starting position  //////////////////////////
      // sends broadbase position to joints
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command[100];
      sprintf (command,"%s.val=%d smooth:2800,",MOTORS[i],BROADBASE_ANGLE[i]);
      _clientS->send(command);
      usleep (10000);
    }
    usleep(2000000);
      // sends sleeping position to joints
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command2[100];
      sprintf (command2,"%s.val=%d smooth:2800,",MOTORS[i],SLEEPING_ANGLE[i]);
      _clientS->send(command2);
      usleep(10000);
    }
    usleep(2000000);
      // sends stand up position to joints
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command3[100];
      sprintf (command3,"%s.val=%d smooth:2800,",MOTORS[i],CROUCHING_ANGLE[i]);
      _clientS->send(command3);
      usleep(10000);
    }
    usleep(2000000);
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command4[100];
      sprintf (command4,"%s.val=%d smooth:2800,",MOTORS[i],STANDUP_ANGLE[i]);
      _clientS->send(command4);
      usleep(10000);
    }
    usleep(2000000);
  }


  void AiboServer::publishState()
  {
		std::cout << "joint"<<std::flush;

    publishIRsMsg();
    publishSoundMsg();
    publishImageMsg();
    publishJointMsg();
    publishAccelMsg();
    publishPawMsg();
    publishTouchMsg();
  }

  void AiboServer::publishIRsMsg()
  {

    if (_aiboIR.getNumSubscribers() > 0)
    {
	
      aibo_server::IRArray msgArray;
      sensor_msgs::Range msg;
      msg.radiation_type = sensor_msgs::Range::INFRARED;
      msg.range = _IRChest;
      msgArray.IRs.push_back (msg);
      msg.range = _IRNear;
      msgArray.IRs.push_back (msg);
      msg.range = _IRFar;
      msgArray.IRs.push_back (msg);
      _aiboIR.publish(msgArray);
    }
  }

  void AiboServer::publishTouchMsg()
  {
    if (_aiboTouch.getNumSubscribers() > 0)
    {
  
      aibo_server::TouchArray msg;
      msg.touch.push_back(_touch1);
      msg.touch.push_back(_touch2);
      msg.touch.push_back(_touch3);
      msg.touch.push_back(_touch4);
      msg.touch.push_back(_touch5);
      _aiboTouch.publish(msg);
    }
  }

  void AiboServer::publishSoundMsg()
  {
    if (_aiboSound.getNumSubscribers() > 0)
    {
      aibo_server::Sound msg;
      _aiboSound.publish(msg);
    }
  }

  void AiboServer::publishJointMsg()
  {
    if (_aiboJoint.getNumSubscribers() > 0)
    {
	std::cout << "joint"<<std::flush;
      aibo_server::Joints msg;
      msg.jointRF1=(_jointRF1);
      msg.jointRF2=(_jointRF2);
      msg.jointRF3=(_jointRF3);
      msg.jointRH1=(_jointRH1);
      msg.jointRH2=(_jointRH2);
      msg.jointRH3=(_jointRH3);
      msg.jointLF1=(_jointLF1);
      msg.jointLF2=(_jointLF2);
      msg.jointLF3=(_jointLF3);
      msg.jointLH1=(_jointLH1);
      msg.jointLH2=(_jointLH2);
      msg.jointLH3=(_jointLH3);
      msg.headPan=(_headPan);
      msg.headNeck=(_headNeck);
      msg.headTilt=(_headTilt);
      msg.mouth=(_mouth);
      msg.tailTilt=(_tailTilt);
      msg.tailPan=(_tailPan);
      _aiboJoint.publish(msg);
    }
  }

  void AiboServer::publishImageMsg()
  {
    if (_aiboImage.getNumSubscribers() > 0)
    {
    
      sensor_msgs::Image msg;
      _aiboImage.publish (msg);
    }
  }

  void AiboServer::publishPawMsg()
  {
    if (_aiboPaw.getNumSubscribers() > 0)
    {
    
      aibo_server::BumperArray msg;
      msg.paws.push_back(_pawLF);
      msg.paws.push_back(_pawLH);
      msg.paws.push_back(_pawRF);
      msg.paws.push_back(_pawRH);
      _aiboPaw.publish(msg);
    }
  }

  void AiboServer::publishAccelMsg()
  {
    if (_aiboAccel.getNumSubscribers() > 0)
    {
      aibo_server::Accel msg;
      msg.x=_accelX;
      msg.y=_accelY;
      msg.z=_accelZ;
     
      _aiboAccel.publish(msg);
    }
  }
  void AiboServer::setOnJoint(const aibo_server::Joints::ConstPtr& msg) 
  {
	  
	 char cmd[1000];
     sprintf(cmd,"legLF1.val=%g time: 150 & legLF2.val=%g time: 150 & legLF3.val=%g time: 150 & legLH1.val=%g time: 150 & legLH2.val=%g time: 150 & legLH3.val=%g time: 150 & legRF1.val=%g time: 150 & legRF2.val=%g time: 150 & legRF3.val=%g time: 150 & legRH1.val=%g time: 150 & legRH2.val=%g time: 150 & legRH3.val=%g time: 150 & neck.val=%g time: 150 & mouth.val=%g time: 150 & headPan.val=%g time: 150 & headTilt.val=%g time: 150 & tailTilt.val=%g time: 150 & tailPan.val=%g time: 150,",msg->jointLF1,msg->jointLF2,msg->jointLF3,msg->jointLH1,msg->jointLH2,msg->jointLH3,msg->jointRF1,msg->jointRF2,msg->jointRF3,msg->jointRH1,msg->jointRH2,msg->jointRH3,msg->headNeck,msg->mouth,msg->headPan,msg->headTilt,msg->tailTilt,msg->tailPan);
     _clientS->send(cmd);
     usleep(150000);
  }
  

}
