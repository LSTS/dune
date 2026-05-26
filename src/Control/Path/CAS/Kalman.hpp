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
 *    \file   kalman.h
 *    \brief  Declares the Kalman class.
 *    \author Giorgio D. K. M. Kufoalor
 */

#ifndef DUNE_NAVIGATION_KALMAN_HPP_INCLUDED_
#define DUNE_NAVIGATION_KALMAN_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
//#include <DUNE/Tasks/Task.hpp>
#include <Eigen/Dense>

//#pragma once

// Import namespaces.
using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace CAS
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM Kalman;
      
      class Kalman
      {
        public:
        /**
        * Create a Kalman filter with the specified matrices.
        *   A - System dynamics matrix
        *   C - Output matrix
        *   Q - Process noise covariance
        *   R - Measurement noise covariance
        *   P - Estimate error covariance
        */
        Kalman(int id_, double dt_, const Eigen::MatrixXd& A_, const Eigen::MatrixXd& C_, const Eigen::MatrixXd& Q_, const Eigen::MatrixXd& R_, const Eigen::MatrixXd& P_, const Eigen::VectorXd angle_tag_):
          angle_tag(angle_tag_),
          A(A_),
          C(C_),
          Q(Q_),
          R(R_),
          P0(P_),
          m(C_.rows()),
          n(A_.rows()),
          dt(dt_),
          initialized(false),
          I(n, n),
          x_hat(n),
          x_hat_new(n),
          id(id_)
        {
          I.setIdentity();
        }

        /**
        * Create a blank estimator.
        */
        Kalman();
        
        /** 
        * Create a destructor
        */
        ~Kalman();

        /**
        * Initialize the filter with initial states as zero.
        */
        void init(void)
        {
          x_hat.setZero();
          P = P0;
          t0 = 0;
          t = t0;
          initialized = true;
        }

        /**
        * Initialize the filter with a guess for initial states.
        */
        void init(double t0_, const Eigen::VectorXd& x0) {
          x_hat = x0;
          P = P0;
          this->t0 = t0_;
          t = t0;
          initialized = true;
        }

        /**
        * Update the estimated state based on measured values. The
        * time step is assumed to remain constant.
        */
        void update(const Eigen::VectorXd& y, double durationLost)
        {
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

        /**
        * Update the estimated state based on measured values,
        * using the given time step and dynamics matrix.
        */
        void update(const Eigen::VectorXd& y, double durationLost, double dt_, const Eigen::MatrixXd A_)
        {
          this->A = A_;
          this->dt = dt_;
          update(y, durationLost);
        }

        /**
        * Return the current state and time.
        */
        Eigen::VectorXd state() { return x_hat; };
        Eigen::MatrixXd errorCov() { return P; };
        double time() { return t; };
        int filter_id(){return id;};
        
        /**
        * Compute angle difference
        */
        inline double angle_diff(double a,double b)
        {
          double dif = fmod(b - a + M_PI,2*M_PI);
          if (dif < 0)
              dif += 2*M_PI;
          return dif - M_PI;
        }
        

      private:

        // Specifies which states are angles
        Eigen::VectorXd angle_tag;
        
        // Matrices for computation
        Eigen::MatrixXd A, C, Q, R, P, K, P0;

        // System dimensions
        int m, n;

        // Initial and current time
        double t0, t;

        // Discrete time step
        double dt;

        // Is the filter initialized?
        bool initialized;

        // n-size identity
        Eigen::MatrixXd I;

        // Estimated states
        Eigen::VectorXd x_hat, x_hat_new;

        // Filter id
        int id;

      };
    }
  }
}
#endif