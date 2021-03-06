/*********************************************************************
  Computational Learning and Motor Control Lab
  University of Southern California
  Prof. Stefan Schaal 
 *********************************************************************
  \remarks		...
 
  \file		variable_name_map.h

  \author	Peter Pastor, Mrianl Kalakrishnan
  \date		Feb 27, 2011

 *********************************************************************/

#ifndef VARIABLE_NAME_MAP_H_
#define VARIABLE_NAME_MAP_H_

// system includes
#include <ros/ros.h>

#include <cassert>
#include <stdio.h>
#include <string>
#include <vector>
#include <tr1/unordered_map>

// local includes

namespace dynamic_movement_primitive_controller
{

class VariableNameMap
{

public:

  /*! Constructor
   */
  VariableNameMap()
    : initialized_(false), start_index_(0) {};
  /*! Destructor
   */
  virtual ~VariableNameMap() {};

  /*!
   * @param supported_variable_names
   * @param used_variable_names
   * @return True on success, otherwise False
   */
  bool initialize(const std::vector<std::string>& supported_variable_names,
                  const std::vector<std::string>& used_variable_names,
                  const int start_index = 0)
  {
    supported_name_to_index_map_.clear();
    start_index_ = start_index;
    for (int i = start_index_; i < start_index_ + (int)supported_variable_names.size(); ++i)
    {
      supported_name_to_index_map_.insert(std::tr1::unordered_map<std::string, int>::value_type(supported_variable_names[i - start_index_], i));
    }

    used_to_supported_map_.resize(supported_variable_names.size(), -1);
    supported_to_used_map_.resize(supported_variable_names.size(), -1);

    for (int i = 0; i < (int)used_variable_names.size(); ++i)
    {
      int supported_index;
      if(!getSupportedVariableIndex(used_variable_names[i], supported_index))
      {
        ROS_ERROR("Could not match >%s<.", used_variable_names[i].c_str());
        return false;
      }
      used_to_supported_map_[i] = supported_index;
      supported_to_used_map_[supported_index - start_index_] = i;
    }

    return (initialized_ = true);
  }


  /*!
   * Uses the joint_names provided by SL as supported_variable_names
   * @param supported_variable_names
   * @return True on success, otherwise False
   */
  bool initialize(const std::vector<std::string>& used_variable_names,
                  const int start_index = 0)
  {
    std::vector<std::string> supported_variable_names;
    return initialize(supported_variable_names, used_variable_names, start_index);
  }

  /*!
   * REAL-TIME REQUIREMENTS
   */
  void reset()
  {
    assert(initialized_);
    for (int i = 0; i < (int)used_to_supported_map_.size(); ++i)
    {
      used_to_supported_map_[i] = -1;
    }
  }

  /*!
   * @param used_variable_name
   * @param index
   * @return True on success, otherwise False
   * REAL-TIME REQUIREMENTS
   */
  bool set(const std::string& used_variable_name, const int index)
  {
    assert(initialized_);
    if ((index < 0) || (index >= (int)used_to_supported_map_.size()))
    {
      return false;
    }
    std::tr1::unordered_map<std::string, int>::iterator it = supported_name_to_index_map_.find(used_variable_name);
    if(it == supported_name_to_index_map_.end())
    {
      return false;
    }
    int supported_index;
    if(!getSupportedVariableIndex(used_variable_name, supported_index))
    {
      return false;
    }
    used_to_supported_map_[index] = supported_index;
    supported_to_used_map_[supported_index - start_index_] = index;
    return true;
  }
  /*!
   * @param used_index
   * @param supported_index
   * @return True on success, otherwise False
   * REAL-TIME REQUIREMENTS
   */
  bool getSupportedVariableIndex(const int used_index, int& supported_index) const
  {
    assert(initialized_);
    if((used_index >= 0) && (used_index < (int)used_to_supported_map_.size()))
    {
      if(used_to_supported_map_[used_index] >= 0)
      {
        supported_index = used_to_supported_map_[used_index];
        return true;
      }
    }
    return false;
  }
  /*!
   * @param supported_index
   * @param used_index
   * @return True on success, otherwise False
   * REAL-TIME REQUIREMENTS
   */
  bool getUsedVariableIndex(const int supported_index, int& used_index) const
  {
    assert(initialized_);
    int index = supported_index - start_index_;
    if((index >= 0) && (index < (int)supported_to_used_map_.size()))
    {
      if(supported_to_used_map_[index] >= 0)
      {
        used_index = supported_to_used_map_[index];
        return true;
      }
    }
    return false;
  }

  /**
   * Gets the index to the variable name
   * @param name
   * @return True on success, otherwise False
   * REAL-TIME REQUIREMENTS
   */
  bool getSupportedVariableIndex(const std::string& name, int& index) const
  {
    std::tr1::unordered_map<std::string, int>::const_iterator it = supported_name_to_index_map_.find(name);
    if (it != supported_name_to_index_map_.end())
    {
      index = it->second;
      return true;
    }
    return false;
  }
private:

  bool initialized_;
  int start_index_;

  std::tr1::unordered_map<std::string, int> supported_name_to_index_map_;
  std::vector<int> used_to_supported_map_;
  std::vector<int> supported_to_used_map_;

};

}

#endif /* VARIABLE_NAME_MAP_H_ */
