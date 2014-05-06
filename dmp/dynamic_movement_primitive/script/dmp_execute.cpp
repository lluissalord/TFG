// system includes
#include <string>
#include <vector>
#include <stdio.h>
#include <dmp_lib/dynamic_movement_primitive.h>
#include <dmp_lib/icra2009_dynamic_movement_primitive.h>



int main(int argc, char** argv)
{
  std::vector<std::string> variable_names;
  variable_names.push_back("Leg_LF1");
  variable_names.push_back("Leg_LF2");
  const double k_gain = 100;
  const double d_gain = 2.0 * sqrt(k_gain); //importar llibreria per fer arrel quadrada
  const double sampling_frequency = 50; // Hz
  int num_samples = 150; //Per així tenir una durada de 3 sec
  const double initial_duration = 3; //sec
  std::vector<double> initial_start; //Inicialment i talvegada en tots es casos nomes 8 articulacions
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  initial_start.push_back(0.0); 
  std::vector<double> initial_goal; //Depen de la pendent (crear funció que doni les posicions)
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0); 
  initial_goal.push_back(0.0);

  bool positions_only = true; 
  int trajectory_length = num_samples;

  int num_rfs = num_samples;
  const double activation = 0.204456; //extret a partir d'un test creat i guardat en un arxiu bag

  lwr_lib::LWRParamPtr lwr_parameters(new lwr_lib::LWRParameters());
  if(!lwr_parameters->initialize(num_rfs, activation,false)) //Separacions de forma exponencial desactivades
  {
    dmp_lib::Logger::logPrintf("Could not initialize lwr_param", dmp_lib::Logger::ERROR);
    return false;
  }

  dmp_lib::ICRA2009DMPPtr icra2009dmp(new dmp_lib::ICRA2009DynamicMovementPrimitive());

  if(!icra2009dmp->initialize(variable_names, lwr_parameters, k_gain, d_gain))
  {
    dmp_lib::Logger::logPrintf("Could not initialize dmp", dmp_lib::Logger::ERROR);
    return false;
  }

  dmp_lib::TrajectoryPtr debug_min_jerk_trajectory; //nose fins a quin punt es necessaria ja que aquesta seria la de debug i nose si s'hauria de posar o ens la podriem estalviar
  if(!icra2009dmp->learnFromMinimumJerk(initial_start, initial_goal, sampling_frequency, initial_duration, debug_min_jerk_trajectory))
  {
    dmp_lib::Logger::logPrintf("Could not initialize trajectory with minium jerk", dmp_lib::Logger::ERROR);
    return false;
  }

  if (!icra2009dmp->setup())
  {
    dmp_lib::Logger::logPrintf("Could not setup DMP.", dmp_lib::Logger::ERROR);
    return false;
  }

  dmp_lib::Trajectory min_jerk_trajectory;
  if (!min_jerk_trajectory.initializeWithMinJerk(variable_names, sampling_frequency, initial_start, initial_goal, num_samples, positions_only, trajectory_length))
  {
    dmp_lib::Logger::logPrintf("Could not create minimum jerk trajectory for learning.", dmp_lib::Logger::ERROR);
    return false;
  }

  if(!icra2009dmp->propagateFull(min_jerk_trajectory, initial_duration, num_samples)) //Es fan totes les integrals i les posicions, velocitats i acceleracions que donen
  {
    return false;
  }
}
