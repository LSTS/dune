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
		obstacle(const Math::Matrix& state, double T, double dt);

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

		double psi_;
		double A_, B_, C_, D_, l, w;
		double os_x, os_y;
		
		private:

		void calculatePosOffsets();

		void calculateTrajectory();

		inline double normalize(double angle);
		inline double normalize_angle_360(double angle);
		inline double angle_diff(double a,double b);
		
		// Assures that the numerical difference is at most PI
		double normalize_angle_diff(double angle, double angle_ref);

		const int n_samp_;
		double T_;
		double dt_;

		//Elements of the rotation matrix
		double r11_, r12_, r21_, r22_;
	};
  }
}

#endif /* OBSTACLE_H_ */
