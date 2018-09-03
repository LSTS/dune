#include "sensor_model.h"

sensor_model::sensor_model()
{
    //ctor
}

double sensor_model::sensor_model_HavingFire(double x){

    return ( pow(x,2)+ 0.2  )/1.3;
  }

double sensor_model::sensor_model_notHavingFire(double x){

    return -log10(x+0.5)+0.4 ;/// (-pow(x,2)+2)/3 ;
}

































