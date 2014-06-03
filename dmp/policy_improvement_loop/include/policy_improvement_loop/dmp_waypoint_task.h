/*********************************************************************
 Computational Learning and Motor Control Lab
 University of Southern California
 Prof. Stefan Schaal
 *********************************************************************
 \remarks    ...

 \file   dmp_waypoint_task.h

 \author Peter Pastor and Mrinal Kalakrishnan
 \date   Feb 20, 2010

 *********************************************************************/

#ifndef DMP_WAYPOINT_TASK_H_
#define DMP_WAYPOINT_TASK_H_

// system includes
//#include <task_manager/task.h>
#include <policy_library/dmp_policy.h>
#include <Eigen/Core>

#include <dynamic_movement_primitive/icra2009_dynamic_movement_primitive.h>
#include <dynamic_movement_primitive_controller/dmp_joints_controller.h>

#include <rosrt/rosrt.h>

// local includes

namespace DMPWaypointTask
{

class DMPWaypointTask// : public task_manager_interface::Task
{
public:

  /*! Constructor
   */
  DMPWaypointTask();

  /*! Destructor
   */
  virtual ~DMPWaypointTask();

  bool first_init(ros::NodeHandle& node_handle);
  
  /**
   * Initializes the task for a given number of time steps
   * @param node_handle
   * @return
   */
  //bool initialize(ros::NodeHandle& node_handle);
  bool initialize();

  /**
   * Executes the task for the given policy parameters, and returns the costs per timestep
   * @param parameters [num_dimensions] num_parameters - policy parameters to execute
   * @param costs Vector of num_time_steps, state space cost per timestep (do not include control costs)
   * @param terminal_cost
   * @param iteration_number
   * @return
   */
  bool execute(std::vector<Eigen::VectorXd>& parameters,
               Eigen::VectorXd& costs,
               double& terminal_cost,
               const int iteration_number = 0);

  /**
   * Get the Policy object of this Task
   * @param policy
   * @return
   */
  bool getPolicy(boost::shared_ptr<policy_library::Policy>& policy);

  /**
   * Sets the Policy object of this Task
   * @param policy
   * @return
   */
  bool setPolicy(const boost::shared_ptr<policy_library::Policy> policy);

  /**
   * Gets the weight of the control cost
   * @param control_cost_weight
   * @return
   */
  bool getControlCostWeight(double& control_cost_weight);

  dynamic_movement_primitive_controller::DMPJointPositionController dmp_controller_;
  boost::shared_ptr<policy_library::DMPPolicy> policy_;

private:
  ros::NodeHandle node_handle_;
  int num_time_steps_;
  bool write_to_file_;

  int num_dimensions_;
  Eigen::VectorXd start_;
  Eigen::VectorXd goal_;
  Eigen::VectorXd waypoint_;
  double waypoint_time_;
  double movement_time_;

  int num_rollouts_;
  int num_reused_rollouts_;
  bool logging_flag_;

  double waypoint_cost_weight_;
  double control_cost_weight_;
  double acceleration_cost_weight_;
  double inclination_cost_weight_;

  double sampling_frequency_;
  int trial_counter_;
  int noiseless_rollout_counter_;
  int noisy_rollout_counter_;

  void readParameters();

  std::vector<std::string> variable_names_; //pel dmp_joint_controller
};

}

#endif /* DMP_WAYPOINT_TASK_H_ */
