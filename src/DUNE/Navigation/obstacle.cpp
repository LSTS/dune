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
 *    \file   obstacle.cpp
 *    \brief  Defines the obstacle class.
 *    \author Inger Berge Hagen, Giorgio D. K. M. Kufoalor
 */ 

#include <DUNE/DUNE.hpp>
#include <DUNE/Navigation/obstacle.hpp>
#include <DUNE/Navigation/Kalman.hpp>

namespace DUNE
{
  namespace Navigation
  {
	obstacle::obstacle(const Math::Matrix& state, double T, double dt)
	: n_samp_(T/dt)
	{
		T_ = T;
		dt_ = dt;

		x_.resize(n_samp_);
		y_.resize(n_samp_);
		u_.resize(n_samp_);
		v_.resize(n_samp_);
		
		A_ = state(5);
		B_ = state(6);
		C_ = state(7);
		D_ = state(8);

		l = A_ + B_;
		w = C_ + D_;

		calculatePosOffsets();

		//psi_ = state(2);
		psi_ = normalize(state(2)); // bug fix: use normalize angle // MR interface output sign change
		x_(0) = state(0) + os_x*std::cos(psi_) - os_y*std::sin(psi_);
		y_(0) = state(1) + os_x*std::sin(psi_) + os_y*std::cos(psi_);
		u_(0) = state(3);
		v_(0) = state(4);

		 
		r11_ = std::cos(psi_);
		r12_ = -std::sin(psi_);
		r21_ = std::sin(psi_);
		r22_ = std::cos(psi_);

		calculateTrajectory();
		
	}

	obstacle::~obstacle(){
	}

	Eigen::VectorXd obstacle::getX(){
		return x_;
	}

	Eigen::VectorXd obstacle::getY(){
		return y_;
	}

	Eigen::VectorXd obstacle::getU(){
		return u_;
	}

	Eigen::VectorXd obstacle::getV(){
		return v_;
	}

	double obstacle::getPsi(){
		return psi_;
	}

	double obstacle::getA(){
		return A_;
	}

	double obstacle::getB(){
		return B_;
	}

	double obstacle::getC(){
		return C_;
	}

	double obstacle::getD(){
		return D_;
	}

	double obstacle::getL(){
		return l;
	}

	double obstacle::getW(){
		return w;
	}
	void obstacle::calculatePosOffsets(){
		os_x = A_-B_;
		os_y = D_-C_;
	}

	void obstacle::calculateTrajectory()
	{
		for (int i=1; i<n_samp_; i++)
		{
			x_(i) = (x_(i-1) + (r11_*u_(i-1) + r12_*v_(i-1))*dt_);
			y_(i) = (y_(i-1) + (r21_*u_(i-1) + r22_*v_(i-1))*dt_);
			u_(i) = (u_(i-1));
			v_(i) = (v_(i-1));
		}
	}


	inline double obstacle::normalize(double angle)
	{
		while(angle <= -M_PI) angle += 2*M_PI; 
		while (angle > M_PI) angle -= 2*M_PI;
		return angle;
	}

	inline double obstacle::normalize_angle_360(double angle){
		angle = fmod(angle,2*M_PI);
		if (angle < 0)
		angle += 2*M_PI;
		return angle;
	}

	inline double obstacle::angle_diff(double a,double b){
		double dif = fmod(b - a + M_PI,2*M_PI);
		if (dif < 0)
			dif += 2*M_PI;
		return dif - M_PI;
	}
  }
}