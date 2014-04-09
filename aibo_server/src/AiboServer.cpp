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

#include <aibo_server/IRArray.h>
#include <aibo_server/BumperArray.h>
#include <aibo_server/Accel.h>
#include <aibo_server/Sound.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/JointState.h>
#include <aibo_server/TouchArray.h>

#define NUM_MOTORS 18

namespace aibo
{

  AiboServer::AiboServer(const char* IP) :
    _nh( "~" )
  {

    _client = new urbi::UClient(IP, 54000);

    /**if (_client->error() )  //  Validation of the client creation
      ROS_ERROR ("Error connecting to the Urbi Server %s", IP);
      urbi::exit(1);
*/	//get node name
	_nName= ros::this_node::getName();

    // set the topics that will publish the Aibo sensor values
    _aiboIR = _nh.advertise<aibo_server::IRArray>(_nName + "/aibo/infrared", 100, false);
    _aiboSound = _nh.advertise<aibo_server::Sound>(_nName + "/aibo/sound", 100, false);
    _aiboImage = _nh.advertise<sensor_msgs::Image>(_nName + "/aibo/image", 100, false);
    _aiboJoint = _nh.advertise<sensor_msgs::JointState>(_nName + "/aibo/joints", 100, false);
    _aiboAccel = _nh.advertise<aibo_server::Accel>(_nName + "/aibo/accel", 100, false);
    _aiboPaw = _nh.advertise<aibo_server::BumperArray>(_nName + "/aibo/paws", 100, false);
    _aiboTouch = _nh.advertise<aibo_server::TouchArray>(_nName + "/aibo/touch", 100, false);
	//_aiboSubJoint = _nh.advertise<aibo_server::Joints>(_nName + "/aibo/subJoints", 100);
    //sub=_nh.subscribe<aibo_server::Joints>("/aibo/subJoints", 1000, &AiboServer::setOnJoint, &AiboServer);

    // set callbacks for sensors
    
    _client->setCallback (urbi::callback(*this, &AiboServer::onDistanceSensor),"distanceChest");
    //_client->send("loop distanceChest << distanceChest.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onDistanceSensor),"distanceNear");
    //_client->send("loop distanceNear << distanceNear.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onDistanceSensor),"distanceFar");
    //_client->send("loop distanceFar << distanceFar.val,");
    //_client->setCallback (urbi::callback(*this, &AiboServer::onSoundSensor),"speaker");
    //_client->send("loop speaker << speaker.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onImageSensor),"camera");
    //_client->send("loop camera << camera.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRF1");
    //_client->send("loop legRF1 << legRF1.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRF2");
    //_client->send("loop legRF2 << legRF2.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRF3");
    //_client->send("loop legRF3 << legRF3.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRH1");
    //_client->send("loop legRH1 << legRH1.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRH2");
    //_client->send("loop legRH2 << legRH2.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legRH3");
    //_client->send("loop legRH3 << legRH3.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLF1");
    //_client->send("loop legLF1 << legLF1.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLF2");
    //_client->send("loop legLF2 << legLF2.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLF3");
    //_client->send("loop legLF3 << legLF3.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLH1");
    //_client->send("loop legLH1 << legLH1.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLH2");
    //_client->send("loop legLH2 << legLH2.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"legLH3");
    //_client->send("loop legLH3 << legLH3.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"neck");
    //_client->send("loop neck << neck.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"headTilt");
    //_client->send("loop headTilt << headTilt.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"headPan");
    //_client->send("loop headPan << headPan.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"tailPan");
    //_client->send("loop tailPan << tailPan.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"tailTilt");
    //_client->send("loop tailTilt << tailTilt.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onJointSensor),"mouth");
    //_client->send("loop mouth << mouth.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onAccelSensor),"accelX");                 //inicialment estava posat _client->setCallback (*this, &AiboServer::onAccelSensor,"accelX");
    //_client->send("loop accelX << accelX.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onAccelSensor),"accelY");
    //_client->send("loop accelY << accelY.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onAccelSensor),"accelZ");
    //_client->send("loop accelZ << accelZ.val,");
	_client->setCallback (urbi::callback(*this, &AiboServer::onPawSensor),"pawLF");
    //_client->send("loop pawLF << pawLF.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onPawSensor),"pawLH");
    //_client->send("loop pawLH << pawLH.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onPawSensor),"pawRF");
    //_client->send("loop pawRF << pawRF.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onPawSensor),"pawRH");
    //_client->send("loop pawRH << pawRH.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onTouchSensor),"chinSensor");
    //_client->send("loop chinSensor << chinSensor.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onTouchSensor),"backSensorF");
    //_client->send("loop backSensorF << backSensorF.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onTouchSensor),"backSensorM");
    //_client->send("loop backSensorM << backSensorM.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onTouchSensor),"backSensorR");
    //_client->send("loop backSensorR << backSensorR.val,");
    _client->setCallback (urbi::callback(*this, &AiboServer::onTouchSensor),"headSensor");
    //_client->send("loop headSensor << headSensor.val,");
       
    _client->send ("motors on;");  // activates motors
    setBlendingmode();
    startPosition();
    std::cout << "start"<<std::flush;
	

  }

  AiboServer::~AiboServer()
  {
    delete _client;
  }
  
  urbi::UCallbackAction AiboServer::onTouchSensor(const urbi::UMessage &msg) 
  {
   double value = (double)msg.value->val;
    
    if (msg.tag == "chinSensor")
      _touch1 = value;
    else
    {
      if (msg.tag == "backSensorF")
        _touch2 = value;
      else 
      {
        if (msg.tag == "backSensorM")
          _touch3 = value;
        else
        {
          if (msg.tag == "backSensorR")
            _touch4 = value;
          else
            _touch5 = value; // for headsensor case
        }
      }
    }

    return urbi::URBI_CONTINUE;
  }
  
  urbi::UCallbackAction AiboServer::onPawSensor(const urbi::UMessage &msg) 
  {
    double value = (double)msg.value->val;
	if (msg.tag == "pawLF")
      _pawLF = value;
    if (msg.tag == "pawLH")
      _pawLH = value;
    if (msg.tag == "pawRF")
      _pawRF = value;
    if (msg.tag == "pawRH")
      _pawRH = value;
    return urbi::URBI_CONTINUE;
  }
  
  urbi::UCallbackAction AiboServer::onAccelSensor(const urbi::UMessage &msg) 
  {
  
    double value = (double)msg.value->val;
    
	std::cout << "callback called"<<std::flush;

    if (msg.tag == "accelX")
      _accelX = value;
    if (msg.tag == "accelY")
        _accelY = value;
    if (msg.tag == "accelZ") 
        _accelZ = value;
    
    
    return urbi::URBI_CONTINUE;
  }
  
  urbi::UCallbackAction AiboServer::onJointSensor(const urbi::UMessage &msg) 
  {
    double value = (double)msg.value->val;
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

  urbi::UCallbackAction AiboServer::onDistanceSensor(const urbi::UMessage &msg) 
  {
    if (msg.type != urbi::MESSAGE_DATA)
      return urbi::URBI_CONTINUE;

    double value = (double)msg.value->val;
    
    if (msg.tag == "distanceChest")
      _IRChest = value;
    else
    {
      if (msg.tag == "distanceNear")
        _IRNear = value;
      else 
        _IRFar = value;
    }
    
    return urbi::URBI_CONTINUE;
  }
      


  void AiboServer::setBlendingmode()
  {
    // Stablishes the default mode of accepting conflicting assignments 
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command[100];
      sprintf (command,"blend[cancel] %s.val,",MOTORS[i]);
      _client->send(command);
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
      _client->send(command);
      usleep (10000);
    }
    usleep(2000000);
      // sends sleeping position to joints
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command2[100];
      sprintf (command2,"%s.val=%d smooth:2800,",MOTORS[i],SLEEPING_ANGLE[i]);
      _client->send(command2);
      usleep(10000);
    }
    usleep(2000000);
      // sends stand up position to joints
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command3[100];
      sprintf (command3,"%s.val=%d smooth:2800,",MOTORS[i],CROUCHING_ANGLE[i]);
      _client->send(command3);
      usleep(10000);
    }
    usleep(2000000);
    for (int i=0; i<NUM_MOTORS; i++)
    {
      char command4[100];
      sprintf (command4,"%s.val=%d smooth:2800,",MOTORS[i],STANDUP_ANGLE[i]);
      _client->send(command4);
      usleep(10000);
    }
    usleep(2000000);
  }


  void AiboServer::publishState()
  {
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

      _client->send("distanceChest << distanceChest.val;");
      _client->send("distanceNear << distanceNear.val;");
      _client->send("distanceFar << distanceFar.val;");
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
    _client->send("chinSensor << chinSensor.val;");
    _client->send("backSensorF << backSensorF.val;");
    _client->send("backSensorM << backSensorM.val;");
    _client->send("backSensorR << backSensorR.val;");
    _client->send("headSensor << headSensor.val;");
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
    _client->send("legRF1 << legRF1.val;");
    _client->send(" legRF2 << legRF2.val;");
    _client->send(" legRF3 << legRF3.val;");
    _client->send(" legRH1 << legRH1.val;");
    _client->send(" legRH2 << legRH2.val;");
    _client->send(" legRH3 << legRH3.val;");
    _client->send(" legLF1 << legLF1.val;");
    _client->send(" legLF2 << legLF2.val;");
    _client->send(" legLF3 << legLF3.val;");
    _client->send(" legLH1 << legLH1.val;");
    _client->send(" legLH2 << legLH2.val;");
    _client->send(" legLH3 << legLH3.val;");
    _client->send(" neck << neck.val;");
    _client->send(" headTilt << headTilt.val;");
    _client->send(" headPan << headPan.val;");
    _client->send(" tailPan << tailPan.val;");
    _client->send(" tailTilt << tailTilt.val;");
    _client->send(" mouth << mouth.val;");
      sensor_msgs::JointState msg;
      msg.position.push_back(_jointRF1);
      msg.position.push_back(_jointRF2);
      msg.position.push_back(_jointRF3);
      msg.position.push_back(_jointRH1);
      msg.position.push_back(_jointRH2);
      msg.position.push_back(_jointRH3);
      msg.position.push_back(_jointLF1);
      msg.position.push_back(_jointLF2);
      msg.position.push_back(_jointLF3);
      msg.position.push_back(_jointLH1);
      msg.position.push_back(_jointLH2);
      msg.position.push_back(_jointLH3);
      msg.position.push_back(_headPan);
      msg.position.push_back(_headNeck);
      msg.position.push_back(_headTilt);
      msg.position.push_back(_mouth);
      msg.position.push_back(_tailTilt);
      msg.position.push_back(_tailPan);
      _aiboJoint.publish(msg);
    }
  }

  void AiboServer::publishImageMsg()
  {
    if (_aiboImage.getNumSubscribers() > 0)
    {
    _client->send("loop camera << camera.val,");
      sensor_msgs::Image msg;
      _aiboImage.publish (msg);
    }
  }

  void AiboServer::publishPawMsg()
  {
    if (_aiboPaw.getNumSubscribers() > 0)
    {
    _client->send("pawLF << pawLF.val;");
    _client->send("pawLH << pawLH.val;");
    _client->send("pawRF << pawRF.val;");
    _client->send("pawRH << pawRH.val;");
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
			//std::cout << "accelworking"<<std::flush;
    _client->send("accelX << accelX.val,");
    _client->send("accelY << accelY.val,");
    _client->send("accelZ << accelZ.val;");
		std::cout << _aiboAccel.getNumSubscribers()<<std::flush;
      aibo_server::Accel msg;
      msg.x=_accelX;
      msg.y=_accelY;
      msg.z=_accelZ;
     
      _aiboAccel.publish(msg);
    }
  }
  void AiboServer::setOnJoint(const aibo_server::Joints::ConstPtr& msg) 
  {
	 char cmd[100];
     sprintf(cmd,"legLF1.val=%g,",msg->jointLF1);
     _client->send(cmd);
     usleep(1000);
	 sprintf(cmd,"legLF2.val=%g,",msg->jointLF2);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"legLF3.val=%g,",msg->jointLF3);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"legLH1.val=%g,",msg->jointLH1);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"legLH2.val=%g,",msg->jointLH2);
     _client->send(cmd);
     usleep(1000); 
     sprintf(cmd,"legLH3.val=%g,",msg->jointLH3);
     _client->send(cmd);
     usleep(1000); 
     sprintf(cmd,"legRF1.val=%g,",msg->jointRF1);
     _client->send(cmd);
     usleep(1000); 
     sprintf(cmd,"legRF2.val=%g,",msg->jointRF2);
     _client->send(cmd);
     usleep(1000);
     sprintf(cmd,"legRF3.val=%g,",msg->jointRF3);
     _client->send(cmd);
     usleep(1000); 
     sprintf(cmd,"legRH1.val=%g,",msg->jointRH1);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"legRH2.val=%g,",msg->jointRH2);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"legRH3.val=%g,",msg->jointRH3);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"neck.val=%g,",msg->headNeck);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"mouth.val=%g,",msg->mouth);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"headPan.val=%g,",msg->headPan);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"headTilt.val=%g,",msg->headTilt);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"tailTilt.val=%g,",msg->tailTilt);
     _client->send(cmd);
     usleep(1000);
      sprintf(cmd,"tailPan.val=%g,",msg->tailPan);
     _client->send(cmd);
     usleep(1000);
  }
  
	
  
  
	

}
