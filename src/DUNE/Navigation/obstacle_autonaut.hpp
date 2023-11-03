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
 *    \file   obstacle.h
 *    \brief  Declares the obstacle class.
 *    \author Inger Berge Hagen, Giorgio D. K. M. Kufoalor
 */


#ifndef DUNE_NAVIGATION_OBSTACLE_HPP_INCLUDED_
#define DUNE_NAVIGATION_OBSTACLE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Navigation/Kalman.hpp>
#include <Eigen/Dense>

namespace DUNE
{
  namespace Navigation
  {
	// Export DLL Symbol.
    class DUNE_DLL_SYM obstacle;

	class obstacle
	{
		public:

		/// Constructor
		obstacle(const Math::Matrix& state, double T, double dt, const Eigen::Matrix<double,-1,1>& chi_os, const Eigen::Matrix<double,-1,1>& u_os, int obst_filter_on); //9->10

		/// Destructor
		~obstacle();

		Eigen::VectorXd getX();
		Eigen::VectorXd getY();
		Eigen::VectorXd getU();
		Eigen::VectorXd getV();
		double getPsi();
		double getA();
		double getB();
		double getC();
		double getD();
		double getL();
		double getW();

		Eigen::VectorXd x_;
		Eigen::VectorXd y_;
		Eigen::VectorXd u_;
		Eigen::VectorXd v_;

		Eigen::VectorXd psi_br;
		
		Eigen::MatrixXd x_m;
		Eigen::MatrixXd y_m;
		Eigen::MatrixXd u_m;
		Eigen::MatrixXd v_m;
			
		Eigen::MatrixXd chi_os_;
		Eigen::MatrixXd u_os_;
		
		
		double psi_;
		double A_, B_, C_, D_, l, w;
		double os_x, os_y;
		double durationTracked, durationLost;
		
		int id_;
		
		// Kalman parameters
		int n; // Number of states : x, y, psi=chi, u, v. 
		int m; // Number of measurements

		Eigen::MatrixXd A; // System dynamics matrix
		Eigen::MatrixXd C; // Output matrix
		Eigen::MatrixXd Q; // Process noise covariance
		Eigen::MatrixXd R; // Measurement noise covariance
		Eigen::MatrixXd P; // Estimate error covariance
		
		Eigen::VectorXd x0, yM; // Initial state, measurement
		Eigen::VectorXd x_hat; // Current state estimate
		
		Eigen::VectorXd angle_tag; // identifies angles in the state vector
			
		Kalman* filter;
		
		int AH_0, SB_0; // current status on obstacle location  
		
		void updateTrajectory(const Math::Matrix& state, int obst_filter_on);
		void updateTrajectory(int obst_filter_on);
		
		
		private:

		void calculatePosOffsets();

		void calculateTrajectory(int obst_filter_on);

		inline double normalize(double angle);
		inline double normalize_angle_360(double angle);
		inline double angle_diff(double a,double b);
		
		// Assures that the numerical difference is at most PI
		double normalize_angle_diff(double angle, double angle_ref);

		int n_branches_;
		int n_br_chi_;
		int n_br_u_;
		
		const int n_samp_;
		double T_;
		double dt_, dt_f;

		//Elements of the rotation matrix
		double r11_, r12_, r21_, r22_;
	};
  }
}

#endif /* OBSTACLE_H_ */
