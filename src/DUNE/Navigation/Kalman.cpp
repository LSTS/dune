/*
 *    This file is part of SB-MPC Library.
 *
 *    SB-MPC -- Scenario-Based MPC for Maritime Collision Avoidance.
 *    Copyright (C) 2016-2019 Inger Berge Hagen, Giorgio D. Kwame Minde Kufoalor, 
 *    NTNU Trondheim.
 *    Developed within the Autosea Project (Sensor fusion and collision avoidance for 
 *    autonomous surface vehicles) under the supervision of Tor Arne Johansen. 
 *    All rights reserved.
 *
 *    SB-MPC Library is software used according to the conditions of the Autosea Consortium.
 *    <https://www.ntnu.edu/autosea>
 */

 
/**
 *    \file   kalman.cpp
 *    \brief  Defines the Kalman class.
 *    \author Giorgio D. K. M. Kufoalor
 */ 

#include <DUNE/DUNE.hpp>
#include <DUNE/Navigation/Kalman.hpp>

namespace DUNE
{
  namespace Navigation
  {
    Kalman::Kalman(int id_, double dt_, const Eigen::MatrixXd& A_, const Eigen::MatrixXd& C_, const Eigen::MatrixXd& Q_, const Eigen::MatrixXd& R_, const Eigen::MatrixXd& P_, const Eigen::VectorXd angle_tag_)
      : angle_tag(angle_tag_), A(A_), C(C_), Q(Q_), R(R_), P0(P_),
        m(C_.rows()), n(A_.rows()), dt(dt_), initialized(false),
        I(n, n), x_hat(n), x_hat_new(n), id(id_)
    {
      I.setIdentity();
    }

    Kalman::Kalman(void) {}

    Kalman::~Kalman(void) {}

    void Kalman::init(double t0_, const Eigen::VectorXd& x0) {
      x_hat = x0;
      P = P0;
      this->t0 = t0_;
      t = t0;
      initialized = true;
    }

    void Kalman::init() {
      x_hat.setZero();
      P = P0;
      t0 = 0;
      t = t0;
      initialized = true;
    }

    void Kalman::update(const Eigen::VectorXd& y, double durationLost) {

      if(!initialized)
        throw std::runtime_error("Filter is not initialized!");

      Eigen::VectorXd y_diff;
      y_diff.resize(n);

      x_hat_new = A * x_hat;
      P = A*P*A.transpose() + Q;
    
      if (durationLost == 0.0){    
        K = P*C.transpose()*(C*P*C.transpose() + R).inverse();
        
        y_diff = y - C*x_hat_new;
        
        // Correct difference for a state that is an angle
        // Only if C is a square matrix. Can be generalized for all C implementations!
        
        if (m==n){
            for (int i=0; i<n; i++){
          if ( angle_tag(i) == 1 ) 
              y_diff(i) = angle_diff(x_hat_new(i), y(i)); // y - x_hat_new	  
            } 
        }
        
        
        //x_hat_new += K * (y - C*x_hat_new);
        x_hat_new += K * y_diff;
        
        P = (I - K*C)*P;
      }
      // else, we run the filter as an open-loop predictor, i.e. K = 0.0  
      
      x_hat = x_hat_new;

      t += dt; // not used in filter computation, but for fault detection (measurement loss!)
      std::cout << "tracking for approx. " << t << "secs" << std::endl;
    }

    void Kalman::update(const Eigen::VectorXd& y, double durationLost, double dt_, const Eigen::MatrixXd A_) {

      this->A = A_;
      this->dt = dt_;
      update(y, durationLost);
    }

    inline double Kalman::angle_diff(double a,double b){
        double dif = fmod(b - a + M_PI,2*M_PI);
        if (dif < 0)
            dif += 2*M_PI;
        return dif - M_PI;
    }
  }
}


