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
//#include <DUNE/Tasks/Task.hpp>

#include "Kalman.hpp"
#include <Eigen/Dense>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace CAS
    {
			// Export DLL Symbol.
			class DUNE_DLL_SYM obstacle;

			class obstacle
			{
				public:
				/// Constructor
				obstacle(const Math::Matrix& state, double T, double dt, const Eigen::Matrix<double,-1,1>& chi_os, const Eigen::Matrix<double,-1,1>& u_os, int obst_filter_on):
					n_samp_(T/dt)
				{
					AH_0 = -1; // -1: unknown, 1: ahead, 0: behind
					SB_0 = -1; // -1: unknown, 1: starboard, 0: port

					id_ = state(9);
					durationTracked = 0.0;
					durationLost = 0.0;

					// check previous ID
					std::cout << "new obst id: " << id_ << std::endl;

					T_ = T;
					dt_ = dt;
					dt_f = dt;			 // Filter sampling time: using 5s fixed intervals!
					n_branches_ = 1; // default!
					n_br_chi_ = 1;	 // default!
					n_br_u_ = 1;		 // default!

					if (chi_os.rows() > 1)
					{
						chi_os_ = chi_os;
						n_br_chi_ = chi_os_.rows();
						n_branches_ = n_br_chi_;
					}

					if (u_os.rows() > 1)
					{
						u_os_ = u_os;
						n_br_u_ = u_os_.rows();
						n_branches_ *= n_br_u_;
					}

					x_.resize(n_samp_);
					y_.resize(n_samp_);
					u_.resize(n_samp_);
					v_.resize(n_samp_);

					if (n_branches_ > 1)
					{
						psi_br.resize(n_branches_);
						// u_br.resize(n_branches_);
						x_m.resize(n_samp_, n_branches_);
						y_m.resize(n_samp_, n_branches_);
						u_m.resize(n_samp_, n_branches_);
						v_m.resize(n_samp_, n_branches_);
					}

					A_ = state(5);
					B_ = state(6);
					C_ = state(7);
					D_ = state(8);

					l = A_ + B_;
					w = C_ + D_;

					calculatePosOffsets();

					// psi_ = state(2);
					psi_ = normalize(state(2)); // bug fix: use normalize angle // MR interface output sign change
					x_(0) = state(0) + os_x * std::cos(psi_) - os_y * std::sin(psi_);
					y_(0) = state(1) + os_x * std::sin(psi_) + os_y * std::cos(psi_);
					u_(0) = state(3);
					v_(0) = state(4);

					//**************

					// Before calculating predicted trajectory,
					// use the above position and velocity as measurements, and run them through a Kalman filter

					// Kalman filter parameters
					n = 5; // Number of states : x, y, psi=chi, u, v.
					m = 5; // Number of measurements

					A.resize(n, n);			 // System dynamics matrix
					C.resize(m, n);			 // Output matrix
					Q.resize(n, n);			 // Process noise covariance
					R.resize(m, m);			 // Measurement noise covariance
					P.resize(n, n);			 // Estimate error covariance
					angle_tag.resize(n); //

					x0.resize(n);
					yM.resize(n); // Initial state and measurement vectors

					// Rotation matrix elements
					psi_ = normalize_angle_360(state(2));
					r11_ = std::cos(psi_); // use estimate from previous state?
					r12_ = -std::sin(psi_);
					r21_ = std::sin(psi_);
					r22_ = std::cos(psi_);

					// Discrete LTI/LTV motion
					A << 1, 0, 0, dt_f * r11_, dt_f * r12_,
							0, 1, 0, dt_f * r21_, dt_f * r22_,
							0, 0, 1, 0, 0,
							0, 0, 0, 1, 0,
							0, 0, 0, 0, 1;

					C << 1, 0, 0, 0, 0,
							0, 1, 0, 0, 0,
							0, 0, 1, 0, 0,
							0, 0, 0, 1, 0,
							0, 0, 0, 0, 1;

					// Covariance matrices
					// the state, psi, is treated as a random constant, and thus not varying with any other state.
					Q << .050, .000, .000, .001, .000,
							.000, .050, .000, .000, .001,
							.000, .000, .010, .000, .000,
							.001, .000, .000, .001, .000,
							.000, .001, .000, .000, .001;

					R << .2, .0, .0, .0, .0,
							.0, .2, .0, .0, .0,
							.0, .0, .1, .0, .0,
							.0, .0, .0, .01, .0,
							.0, .0, .0, .0, .01;

					P << .1, .0, .0, .0, .0,
							.0, .1, .0, .0, .0,
							.0, .0, .1, .0, .0,
							.0, .0, .0, .1, .0,
							.0, .0, .0, .0, .1;

					// angle tag: specifies which state is an angle
					angle_tag << 0, 0, 1, 0, 0;

					// initialize estimates
					x_hat.setZero();

					// Construct the filter
					filter = new Kalman(id_, dt_f, A, C, Q, R, P, angle_tag);

					// Best guess of initial states
					x0 << x_(0), y_(0), psi_, u_(0), v_(0);

					filter->init(0.0, x0); // time important?

					filter->update(x0, durationLost); // measurement yM=x0 in the first time step

					if (obst_filter_on > 0)
					{
						// obtain estimated state from filter
						x_hat = filter->state();

						// obtain estimated P
						P = filter->errorCov();

						// obtain duration tracked
						durationTracked = filter->time();

						// use current state estimate for prediction
						x_(0) = x_hat(0);
						y_(0) = x_hat(1);
						psi_ = normalize(x_hat(2));
						u_(0) = x_hat(3);
						v_(0) = x_hat(4);

						std::cout << "\n"
											<< std::endl;
						std::cout << "P_hat: \n"
											<< P.transpose() << std::endl;
						std::cout << "x_hat: \n"
											<< x_hat.transpose() << std::endl;
						std::cout << "psi_hat: \n"
											<< psi_ * 180.0 / M_PI << std::endl;
						std::cout << "\n"
											<< std::endl;
					}
					else
					{
						psi_ = normalize(state(2));
					}

					// compute initial state for predicted branches
					if (n_branches_ > 1 && obst_filter_on > 0)
					{
						int k = 0;
						for (int i = 0; i < n_br_u_; i++)
						{

							for (int j = 0; j < n_br_chi_; j++)
							{
								psi_br(k) = normalize(psi_ + chi_os_(j, 0));

								// adjust course uncertainty (limit at 0.31 rad = 10 deg)
								if (chi_os_(j, 0) < 0 && P(2, 2) > 0)
									psi_br(k) = normalize(psi_ + chi_os_(j, 0) - std::min(std::sqrt(P(2, 2)), 0.31));

								if (chi_os_(j, 0) > 0 && P(2, 2) > 0)
									psi_br(k) = normalize(psi_ + chi_os_(j, 0) + std::min(std::sqrt(P(2, 2)), 0.31));

								x_m(0, k) = x_(0);
								y_m(0, k) = y_(0);

								u_m(0, k) = u_(0) + u_os_(i, 0);

								// adjust speed uncertainty (limit at 2 m/s)
								if (u_os_(i, 0) < 0 && P(3, 3) > 0)
									u_m(0, k) = u_(0) + u_os_(i, 0) - std::min(std::sqrt(P(3, 3)), 2.0);

								if (u_os_(i, 0) > 0 && P(3, 3) > 0)
									u_m(0, k) = u_(0) + u_os_(i, 0) + std::min(std::sqrt(P(3, 3)), 2.0);

								if (u_m(0, k) < 0.0)
									u_m(0, k) = 0.0;

								v_m(0, k) = v_(0);

								k++;
							}
						}
					}

					r11_ = std::cos(psi_);
					r12_ = -std::sin(psi_);
					r21_ = std::sin(psi_);
					r22_ = std::cos(psi_);

					calculateTrajectory(obst_filter_on);				
				}

				/// Destructor
				~obstacle(){
				}

				Eigen::VectorXd getX()
				{
					return x_;
				}

				Eigen::VectorXd getY()
				{
					return y_;
				}

				Eigen::VectorXd getU()
				{
					return u_;
				}

				Eigen::VectorXd getV()
				{
					return v_;
				}

				double getPsi()
				{
					return psi_;
				}

				double getA()
				{
					return A_;
				}

				double getB()
				{
					return B_;
				}

				double getC()
				{
					return C_;
				}

				double getD()
				{
					return D_;
				}

				double getL()
				{
					return l;
				}

				double getW()
				{
					return w;
				}

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
				
				void updateTrajectory(const Math::Matrix& state, int obst_filter_on)
				{
					// check previous ID
					// std::cout << "previous id: " << id_ << ", current id: " << state(9) << ", filter id: " << filter->filter_id() << std::endl;

					// psi_in = state(2); // for logging
					psi_ = normalize(state(2)); // bug fix: use normalize angle // MR interface output sign change
					x_(0) = state(0) + os_x * std::cos(psi_) - os_y * std::sin(psi_);
					y_(0) = state(1) + os_x * std::sin(psi_) + os_y * std::cos(psi_);
					u_(0) = state(3);
					v_(0) = state(4);

					if (obst_filter_on > 0)
					{
						// Rotation matrix elements
						psi_ = normalize_angle_360(state(2));
						r11_ = std::cos(psi_);
						r12_ = -std::sin(psi_);
						r21_ = std::sin(psi_);
						r22_ = std::cos(psi_);

						// update system dynamics matrix
						A << 1, 0, 0, dt_f * r11_, dt_f * r12_,
								0, 1, 0, dt_f * r21_, dt_f * r22_,
								0, 0, 1, 0, 0,
								0, 0, 0, 1, 0,
								0, 0, 0, 0, 1;

						// Measurements
						yM << x_(0), y_(0), psi_, u_(0), v_(0);

						filter->update(yM, durationLost, dt_f, A); // measurement y=x0 in the first time step

						// obtain estimated state from filter
						x_hat = filter->state();

						// obtain estimated P
						P = filter->errorCov();

						// obtain duration tracked
						durationTracked = filter->time();

						std::cout << "P_hat: \n"
											<< P.transpose() << std::endl;
						std::cout << "x_hat: \n"
											<< x_hat.transpose() << std::endl;
						std::cout << "\n"
											<< std::endl;

						// use current state estimate for prediction
						x_(0) = x_hat(0);
						y_(0) = x_hat(1);
						psi_ = normalize(x_hat(2));
						u_(0) = x_hat(3);
						v_(0) = x_hat(4);

						// std::cout << "psi_hat_prev: \n" << psi_hat_prev*180.0/M_PI << std::endl;
						std::cout << "psi_hat: \n"
											<< psi_ * 180.0 / M_PI << std::endl;
						std::cout << "\n"
											<< std::endl;
					}
					else
					{
						filter->init(0.0, yM); // reset filter! time important?
					}

					// compute initial state for predicted branches
					if (n_branches_ > 1 && obst_filter_on > 0)
					{
						int k = 0;
						for (int i = 0; i < n_br_u_; i++)
						{
							for (int j = 0; j < n_br_chi_; j++)
							{
								// u_br(k) = state(3) + u_os_[i];
								// psi_br(k) = normalize_angle_diff(psi_ + chi_os_(j,0), psi_);
								psi_br(k) = normalize(psi_ + chi_os_(j, 0));

								// adjust course uncertainty (limit at 0.0077rad=5deg or 0.031rad=10deg)
								if (chi_os_(j, 0) < 0 && P(2, 2) > 0)
									psi_br(k) = normalize(psi_ + chi_os_(j, 0) - std::min(std::sqrt(P(2, 2)), 0.031));

								if (chi_os_(j, 0) > 0 && P(2, 2) > 0)
									psi_br(k) = normalize(psi_ + chi_os_(j, 0) + std::min(std::sqrt(P(2, 2)), 0.031));

								x_m(0, k) = x_(0);
								y_m(0, k) = y_(0);

								u_m(0, k) = u_(0) + u_os_(i, 0);

								// adjust speed uncertainty (limit at 2 m/s)
								if (u_os_(i, 0) < 0 && P(3, 3) > 0)
									u_m(0, k) = u_(0) + u_os_(i, 0) - std::min(std::sqrt(P(3, 3)), 2.0);

								if (u_os_(i, 0) > 0 && P(3, 3) > 0)
									u_m(0, k) = u_(0) + u_os_(i, 0) + std::min(std::sqrt(P(3, 3)), 2.0);

								if (u_m(0, k) < 0.0)
									u_m(0, k) = 0.0;

								v_m(0, k) = v_(0);

								k++;
							}
						}
					}

					// Rotation matrix elements. Uses estimated heading if filter is on.
					r11_ = std::cos(psi_);
					r12_ = -std::sin(psi_);
					r21_ = std::sin(psi_);
					r22_ = std::cos(psi_);

					calculateTrajectory(obst_filter_on);
				}

				void updateTrajectory(int obst_filter_on)
				{
					Math::Matrix state_copy(10);
					//state_copy << x_hat(0), x_hat(1), x_hat(2), x_hat(3), x_hat(4), A_, B_, C_, D_, id_;
					state_copy(0) = x_hat(0);
					state_copy(0) = x_hat(1);
					state_copy(0) = x_hat(2);
					state_copy(0) = x_hat(3);
					state_copy(0) = x_hat(4);
					state_copy(0) = A_;
					state_copy(0) = B_;
					state_copy(0) = C_;
					state_copy(0) = D_;
					state_copy(0) = id_;
					updateTrajectory(state_copy, obst_filter_on);
				}
				
			private:
				void calculatePosOffsets()
				{
					os_x = A_-B_;
					os_y = D_-C_;
				}

				void calculateTrajectory(int obst_filter_on)
				{
					double r11, r12, r21, r22;

					// original - stem
					if (n_branches_ < 2 || obst_filter_on == 0)
					{
						for (int i = 1; i < n_samp_; i++)
						{
							x_(i) = (x_(i - 1) + (r11_ * u_(i - 1) + r12_ * v_(i - 1)) * dt_);
							y_(i) = (y_(i - 1) + (r21_ * u_(i - 1) + r22_ * v_(i - 1)) * dt_);
							u_(i) = (u_(i - 1));
							v_(i) = (v_(i - 1));
						}
					}
					else
					{
						// branches
						for (int j = 0; j < n_branches_; j++)
						{

							r11 = std::cos(psi_br(j));
							r12 = -std::sin(psi_br(j));
							r21 = std::sin(psi_br(j));
							r22 = std::cos(psi_br(j));

							for (int i = 1; i < n_samp_; i++)
							{
								x_m(i, j) = (x_m(i - 1, j) + (r11 * u_m(i - 1, j) + r12 * v_m(i - 1, j)) * dt_);
								y_m(i, j) = (y_m(i - 1, j) + (r21 * u_m(i - 1, j) + r22 * v_m(i - 1, j)) * dt_);
								u_m(i, j) = (u_m(i - 1, j));
								v_m(i, j) = (v_m(i - 1, j));
							}
						}
					}
				}

				inline double normalize(double angle)
				{
					while(angle <= -M_PI) angle += 2*M_PI; 
					while (angle > M_PI) angle -= 2*M_PI;
					return angle;
				}

				inline double normalize_angle_360(double angle){
					angle = fmod(angle,2*M_PI);
					if (angle < 0)
					angle += 2*M_PI;
					return angle;
				}

				inline double angle_diff(double a,double b){
					double dif = fmod(b - a + M_PI,2*M_PI);
					if (dif < 0)
						dif += 2*M_PI;
					return dif - M_PI;
				}
				
				// Assures that the numerical difference is at most PI
				//double normalize_angle_diff(double angle, double angle_ref);

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
}
#endif /* OBSTACLE_H_ */
