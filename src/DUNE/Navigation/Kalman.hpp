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
#include <DUNE/Tasks/Task.hpp>
#include <Eigen/Dense>

#pragma once

namespace DUNE
{
  namespace Navigation
  {
	  // Export DLL Symbol.
    //class DUNE_DLL_SYM Kalman;

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
      Kalman(int id, double dt, const Eigen::MatrixXd& A, const Eigen::MatrixXd& C, const Eigen::MatrixXd& Q, const Eigen::MatrixXd& R, const Eigen::MatrixXd& P, const Eigen::VectorXd angle_tag);

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
      void init();

      /**
      * Initialize the filter with a guess for initial states.
      */
      void init(double t0, const Eigen::VectorXd& x0);

      /**
      * Update the estimated state based on measured values. The
      * time step is assumed to remain constant.
      */
      void update(const Eigen::VectorXd& y, double durationLost);

      /**
      * Update the estimated state based on measured values,
      * using the given time step and dynamics matrix.
      */
      void update(const Eigen::VectorXd& y, double durationLost, double dt, const Eigen::MatrixXd A);

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
      inline double angle_diff(double a,double b);
      

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

#endif