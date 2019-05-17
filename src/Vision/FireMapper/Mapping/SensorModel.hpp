#ifndef SENSOR_MODEL_H
#define SENSOR_MODEL_H

#include <math.h>
#include <iostream>

class AbstractSensorModel
{
public:
  virtual double having_fire(double x) = 0;

  virtual double not_having_fire(double x) = 0;
};

class DefaultSensorModel: public AbstractSensorModel
{
public:
  DefaultSensorModel() = default;

  double having_fire(double x) final;

  double not_having_fire(double x) final;
};

// to change the sendor model we can creat a derived class that can redefine the sensor model for
// both cases havingfire/nothavingfire

#endif // SENSOR_MODEL_H
