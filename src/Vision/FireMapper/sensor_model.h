#ifndef SENSOR_MODEL_H
#define SENSOR_MODEL_H


#include <math.h>
#include <iostream>


class sensor_model
{
public:
  sensor_model();

  virtual double sensor_model_HavingFire(double x);

  virtual double sensor_model_notHavingFire(double x);

};

//to change the sendor model we can creat a derived class that can redefine the sensor model for both cases havingfire/nithavingfire







#endif // SENSOR_MODEL_H
