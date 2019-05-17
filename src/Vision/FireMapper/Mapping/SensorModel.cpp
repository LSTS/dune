#include "SensorModel.hpp"

double DefaultSensorModel::having_fire(double x)
{
  return (pow(x, 2) + 0.2) / 1.3;
}

double DefaultSensorModel::not_having_fire(double x)
{
  return -log10(x + 0.5) + 0.4;/// (-pow(x,2)+2)/3 ;
}

































