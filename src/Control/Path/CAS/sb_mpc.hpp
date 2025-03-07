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
 *    \file   sb_mpc.h
 *    \brief  Declares the simulationBasedMpc class.
 *    \author Inger Berge Hagen, Giorgio D. K. M. Kufoalor
 */

#ifndef DUNE_NAVIGATION_SB_MPC_HPP_INCLUDED_
#define DUNE_NAVIGATION_SB_MPC_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "autonaut.hpp"
#include "obstacle.hpp"
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
			class DUNE_DLL_SYM simulationBasedMpc;

			class simulationBasedMpc
			{
			public:
				/// Constructor
				simulationBasedMpc(DUNE::Tasks::Task *task) : m_task(task),
					T_(0.0),
					DT_(0.0),
					T_stat_(0.0), /**< Prediction horizon for geographical constraints.**/
					pred_step(0),
					n_obst_branches(0),
					P_(0.0),
					P_G_(0.0),
					Q_(0.0),
					D_CLOSE_(0.0),
					D_SAFE_(0.0),
					D_SAFE_LAND_(0.0),
					K_COLL_(0.0),
					PHI_AH_(0.0),
					PHI_OT_(0.0),
					PHI_HO_(0.0),
					PHI_CR_(0.0),
					KAPPA_(0.0),
					KAPPA_TC_(0.0),
					K_P_(0.0),
					K_CHI_(0.0),
					K_DP_(0.0),
					K_DCHI_SB_(0.0),
					K_DCHI_P_(0.0),
					K_CHI_SB_(0.0),
					K_CHI_P_(0.0),
					D_INIT_(0.0),
					OBST_FILTER_ON_(0),
					T_LOST_LIMIT_(0.0),
					T_TRACKED_LIMIT_(0.0),
					GUIDANCE_STRATEGY_(0),
					WP_R_(0.0),
					LOS_LA_DIST_(0.0),
					LOS_KI_(0.0),
					ang_range_(0.0),
					granularity_(0.0)
				{
				}

				/// Destructor
				~simulationBasedMpc(void)
				{
				}

				/**
				 * @brief Sets the offset pair (u_os_best, psi_os_best) with the lowest cost
				 *
				 * @param u_os_best The reference parameter to store the best speed offset.
				 * @param psi_os_best The reference parameter to store the best heading offset.
				 * @param u_d The nominal speed
				 * @param psi_d The nominal heading
				 * @param asv_state The state of the asv: x, y, psi, u, v, r.
				 * @param waypoints The next waypoint.
				 * @param dynamic_obst Boolean true if a dynamic (vessel) obstacle is present.
				 * @param obst_states The states of the obstacles : x, y, u, v, A, B, C, D, id. (A, B, C, D - size from AIS)
				 * @param static_obst Boolean true if a static obstacle is present.
				 * @param static_obst_states The position (bearing and range) of the static obstacle in the USV body frame.
				 * @param grounding Cost of grounding based on several factors computed at high-level (i.e. weather).
				 * @param cost Cost returned to DUNE Task.
				 */

				void
				create(double T, double DT, double T_stat, double P, double P_G, double Q, double D_CLOSE,
							 double D_SAFE, double D_SAFE_LAND, double K_COLL, double PHI_AH, double PHI_OT, double PHI_HO, double PHI_CR,
							 double KAPPA, double KAPPA_TC, double K_P, double K_CHI, double K_DP, double K_DCHI_SB,
							 double K_DCHI_P, double K_CHI_SB, double K_CHI_P, double D_INIT, double ang_range, double granularity,
							 double WP_R, double LOS_LA_DIST, double LOS_KI, int GUIDANCE_STRATEGY)
				{
					T_ = T;
					DT_ = DT;
					T_stat_ = T_stat;

					pred_step = 1;

					P_ = P; // 0.5, (1.0), 2.0
					P_G_ = P_G;
					Q_ = Q;							// (4.0), 40.0, 10.0
					D_INIT_ = D_INIT;		// should be >= D_CLOSE 300.0 600.0 500.0 700.0 800 1852
					D_CLOSE_ = D_CLOSE; // 200.0 300.0 400.0 500.0 600 1000
					D_SAFE_ = D_SAFE;		// 40.0, 50.0, 70.0, 80.0, 100, 200, 185.2
					D_SAFE_LAND_ = D_SAFE_LAND;
					K_COLL_ = K_COLL;				// 0.5, (1.0), (0.1), 0.5, (10.0), 100.0 ;  need 0.1 when K_P_=10.5!
					PHI_AH_ = PHI_AH;				// 15.0, 22.5, 68.5 or more??
					PHI_OT_ = PHI_OT;				// 68.5
					PHI_HO_ = PHI_HO;				// 22.5 68.5 89.5 (> is large enough to trigger OT scenario)
					PHI_CR_ = PHI_CR;				// (68.5) 22.5
					KAPPA_ = KAPPA;					// (3.0), 3.0e2
					KAPPA_TC_ = KAPPA_TC;		// (10.0) 100.0 (*********************)
					K_P_ = K_P;							// (1.5), 2.5, (10.5) 100.5
					K_DP_ = K_DP;						// 2.0, (0.5) (cost requires <1)
					K_CHI_ = K_CHI;					// 1.3
					K_CHI_SB_ = K_CHI_SB;		// 1.5
					K_CHI_P_ = K_CHI_P;			// 100.5, (10.5), 5.5, 2.5, 1.5 (>1.5 red. flexibility to port)
					K_DCHI_SB_ = K_DCHI_SB; // 0.9, (0.5) 0.1 (cost requires <1)
					K_DCHI_P_ = K_DCHI_P;		// 1.2, 0.9 (cost requires <1)

					OBST_FILTER_ON_ = 0;	// 1=ON, 0=OFF! (**********************)
					T_LOST_LIMIT_ = 0;		// 15.0 s obstacle no longer relevant after this time
					T_TRACKED_LIMIT_ = 0; // 15.0 s obstacle still relevant if tracked for so long, choice depends on survival rate
					G_ = 0;								// 1.0e3

					GUIDANCE_STRATEGY_ = GUIDANCE_STRATEGY; // 0=Line-of-sight (LOS), 1= WP-pursuit (WPP), >1= Course-Hold (CH) or Heading-Hold (HH)
					WP_R_ = WP_R;														// WP acceptance radius (20.0)
					LOS_LA_DIST_ = LOS_LA_DIST;							// LOS lookahead distance (100.0) (********************)
					LOS_KI_ = LOS_KI;												// LOS integral gain (0.0)

					P_ca_last_ = 1;
					Chi_ca_last_ = 0;

					cost_ = INFINITY;

					ang_range_ = ang_range;
					granularity_ = granularity;

					int course_samples = 2 * Math::round(ang_range / granularity) + 1;
					Chi_ca_.resize(course_samples);
					Chi_ca_(0) = ang_range;
					for (int i = 1; i < course_samples; i++)
					{
						Chi_ca_(i) = Chi_ca_(i - 1) - granularity;
					}

					Chi_ca_ *= DEG2RAD; // Math::Angles::radians(Chi_ca);

					P_ca_.resize(1);
					P_ca_ << 1.0; //, 0.5, 1.0;

					asv = new autonaut(T, DT);

					if (OBST_FILTER_ON_ > 0)
					{
						// NB! swap +/- and left/right values in the following for NED (MR) version!
						chi_obst_os_.resize(3, 1);
						chi_obst_os_ << 5.0, 0.0, -0.1; // ENU: -5.0, 0.0, 0.1; NED: 5.0, 0.0, -0.1; uncertainty adjusted in obstacle.cpp
						chi_obst_os_ *= DEG2RAD;

						u_obst_os_.resize(3, 1);
						u_obst_os_ << -1.0, 0.0, 0.1; //-1.0, 0.0, 0.1 [m/s] uncertainty adjusted in obstacle.cpp
					}
					else
					{
						chi_obst_os_.resize(1, 1);
						chi_obst_os_ << 0.0; // stem only
						chi_obst_os_ *= DEG2RAD;

						u_obst_os_.resize(1, 1);
						u_obst_os_ << 0.0; // stem only
					}

					n_obst_branches = chi_obst_os_.rows() * u_obst_os_.rows(); // total branches
				}

				// REMOVED: Matrix& predicted_traj, Matrix& colav_status, Matrix& obst_status.
				//! param[out] obs The obstacle object with the worst cost.
				void
				getBestControlOffset(double &u_os_best, double &psi_os_best, double u_d, double psi_d_, const std::vector<double> &asv_state, const Eigen::Matrix<double, -1, 2> &waypoints_, const Math::Matrix &obst_states, Math::Matrix static_obst_states_, double &cost_mra, obstacle*& obs)
				{
					double cost = INFINITY;
					double cost_k = 0, cost_i = 0, cost_o = 0; // cost_ac = 0;
					int n_obst, n_wps, n_samp = T_ / DT_, n_samp_pred = n_samp / pred_step, n_psi_os_best = 0;
					Eigen::Vector2d d, v_o, v_s, los_0, d_s_wp1, los_s_wp1, d_wp0_wp1, los_wp0_wp1;
          //initialize los_s_wp1
          los_s_wp1 << 0.0, 0.0;
					double dist_k, dist = INFINITY;
					static bool colav_active = false;
					double phi_0, dist_0, CF_0;
					Eigen::VectorXd SB_0, AH_0, HL_0, HL_, ID_0, SOG_0, COG_0;
					Eigen::VectorXd CRG_0, OTG_0, OT_0, HOT_0, OBS_PASSED_0, PHI_0, DIST_0;
					// double r_limit=1.0; // TODO: specify/use a hard turn rate limit?

					double psi_d = psi_d_; // psi_Hd=psi_d_;

					int guidance_strategy = GUIDANCE_STRATEGY_; // 0=Line-of-sight (LOS), 1= WP-pursiut (WPP), >1= Course-Hold (CH) or Heading-Hold (HH)

					Eigen::VectorXd x_opt(n_samp_pred);
					Eigen::VectorXd y_opt(n_samp_pred);

					Eigen::MatrixXd waypoints(waypoints_.rows(), waypoints_.cols());
					waypoints = waypoints_;

					// Pure Anti-Grounding
					if (static_obst_states_(0, 0) != 10000.0 && obst_states.rows() == 0)
					{
						std::cout << "SB-MPC: PURE ANTI-GROUNDING" << std::endl;
						n_obst = 1;
						HL_0.resize(n_obst);
						HL_.resize(n_obst); // relative hazard level computed from cost
						OBS_PASSED_0.resize(n_obst);

						double Chi_ca_i = 0.0;
						int i_return_to_path = 0, ik_return_to_path = 0, i_return_to_path_best = n_samp; // iter at which ASV can return to path
						int cp = 0, n_cp = 1;																														 // course-offset iterator and change points
						for (auto j = 0; j < P_ca_.size(); j++)
						{ // iterates through speed 'offsets', only 1 speed
							for (auto i = 0; i < Chi_ca_.size(); i++)
							{ // iterates through course offsets
								// std::cout << "CHI_CA LOOP" << std::endl;
								for (int cp_ = 0; cp_ < n_cp; cp_++)
								{
									// setup for guidance behavior simulation
									if (cp_ > 0 && (0.0 == Chi_ca_[i] || (guidance_strategy < 2 && std::fabs(Chi_ca_[i]) >= 90.0 * DEG2RAD)))
										break;

									Chi_ca_i = Chi_ca_[i]; // offset for cp=0

									cp = cp_; // for forward iteration
									if (guidance_strategy >= 2 && cp_ > 0 && cp_ < n_cp)
										cp = n_cp - cp_; // for reverse iteration (not needed if return path is predicted?)

									if (cp > 0 && guidance_strategy < 2)
									{ // LOS, WPP

										if (Chi_ca_[i] > 0)
											Chi_ca_i = Chi_ca_[i] + 15.0 * DEG2RAD * cp;

										if (Chi_ca_[i] < 0)
											Chi_ca_i = Chi_ca_[i] - 15.0 * DEG2RAD * cp;
									}
									else if (cp > 0)
									{									// CH, HH; reverse iteration!
										Chi_ca_i = 0.0; // no offset => return to original ref.
									}

									if (std::fabs(Chi_ca_i * RAD2DEG) > 90.0)
										break;

									asv->linearPrediction(asv_state, u_d * P_ca_[j], psi_d + Chi_ca_i, waypoints, Chi_ca_i, cp, guidance_strategy, WP_R_, LOS_LA_DIST_, LOS_KI_);

									// Compute worst cost associated with the current control behavior and the corresponding scenarios for each obsbtacle
									cost_i = -1;
									cost_o = 0;
									ik_return_to_path = 0;
									i_return_to_path = 0;
									for (int k = 0; k < n_obst; k++)
									{
										HL_(k) = 0;

										for (int l = 0; l < n_obst_branches; l++)
										{
											cost_k = costFunction(P_ca_[j], Chi_ca_[i], k, 0, 0, 0, 0, 0, 0, u_d, l, ik_return_to_path, obst_states, static_obst_states_, i);

											if (guidance_strategy >= 2 && cp == 0 && Chi_ca_[i] != 0)
												cost_k = cost_k; // + 0.1*n_cp; // (a small) path deviation penalty

											if (guidance_strategy >= 2 && cp > 0)
												cost_k = cost_k; // + 0.1*cp; // (a small) path deviation penalty

											// save the worst cost among the branches of this obstacle
											if (cost_k > HL_(k) && OBS_PASSED_0(k) == 0)
												HL_(k) = cost_k;

											// save the overall worst cost for this control behavior
											if (cost_k > cost_i)
												cost_i = cost_k;

											// save the latest iter at which the ASV can return to its original path
											if (ik_return_to_path > i_return_to_path)
												i_return_to_path = ik_return_to_path;
										}
										// accumulate cost for all obstacles
										cost_o = cost_o + HL_(k);
									}

									// Save current scenario if cost is lower than that of previously checked controls
									std::cout << "New cost: " << cost_i << " With course offset: " << Chi_ca_[i] * RAD2DEG << std::endl;
									if (cost_i < cost)
									{
										cost = cost_i;						// Minimizing the overall cost
										u_os_best = P_ca_[j];			// test with 1
										psi_os_best = Chi_ca_[i]; // test with -30*DEG2RAD
										n_psi_os_best = cp + 1;		// number of course offsets
										i_return_to_path_best = i_return_to_path;
										std::cout << "Current cost is lower: " << cost << " With course offset: " << psi_os_best * RAD2DEG << std::endl;

										if (i_return_to_path > cp && i_return_to_path < n_samp - pred_step)
										{
											asv->linearPrediction(asv_state, u_d * P_ca_[j], psi_d, waypoints, 0, i_return_to_path, guidance_strategy, WP_R_, LOS_LA_DIST_, LOS_KI_);
										}

										x_opt = asv->m_x;
										y_opt = asv->m_y;

										// save the relative hazard level for each obstacle at the optimum
										// highest value indicates which obstacle is considered most dangerous
										for (int k = 0; k < n_obst; k++)
										{
											if (cost_o > 0)
											{
												HL_0(k) = HL_(k) / cost_o;
											}
											else
											{
												HL_0(k) = 0;
											}
										}
									}
								}
							}
						}

						P_ca_last_ = u_os_best;
						Chi_ca_last_ = psi_os_best;
						CF_0 = u_os_best * (1 - (std::fabs(RAD2DEG * psi_os_best) / 15.0) / 8.0); // 6 course offsets possible towards SB/P, 2 factors possible speed reduction

						std::cout << "_______________" << std::endl;
						std::cout << "PURE ANTI-GROUNDING" << std::endl;
						std::cout << "_______________" << std::endl;
						std::cout << "cost : " << cost << std::endl;
						std::cout << "course offset : " << Angles::degrees(psi_os_best) << std::endl;
						std::cout << "relative hazard level : " << HL_0 << std::endl;
						std::cout << "control freedom : " << CF_0 << std::endl;
						std::cout << "return to path at iter: " << i_return_to_path_best << std::endl;
						std::cout << "_______________" << std::endl;

						if (guidance_strategy < 2)
						{
							std::cout << "predicted course offsets: " << n_psi_os_best << std::endl;
						}
						else
						{
							std::cout << "using prediction path " << n_psi_os_best << std::endl;
						}
						std::cout << "_________________________________" << std::endl;
					}
					else if (obst_states.rows() > 0)
					{
						std::cout << "SB-MPC: DYNAMIC OBSTACLES" << std::endl;

						// Update list
						for (int i = 0; i < obst_states.rows(); i++)
						{
							bool obst_exists = false;
							// iterate through old obstacle list
							for (size_t j = 0; j < oldObstacles_.size(); j++)
							{

								// does obstacle exist in old obstacle list?
								if ((double)oldObstacles_[j]->id_ == obst_states(i, 9))
								{
									// update object in old list and move it to the new list,

									oldObstacles_[j]->durationLost = 0.0; // update

									oldObstacles_[j]->updateTrajectory(obst_states.row(i), OBST_FILTER_ON_); // update obstacle

									obst_vect.push_back(oldObstacles_[j]); // copy updated obstacle

									oldObstacles_.erase(oldObstacles_.begin() + j); // does not destroy this object, but the pointer to it!

									obst_exists = true;

									break;
								}
							}

							if (!obst_exists)
							{
								obstacle *obst = new obstacle(obst_states.row(i), T_, DT_ * pred_step, chi_obst_os_, u_obst_os_, OBST_FILTER_ON_);
								obst_vect.push_back(obst);
							}
						}

						// Keep terminated obstacles that may still be relevant, and compute duration lost as input to the cost of collision risk
						// Obstacle track may be lost due to sensor/detection failure, or the obstacle may go out of COLAV-target range
						// Detection failure will lead to the start (creation) of a new track (obstacle), typically after a short duration,
						// whereas an obstacle that is out of COLAV-target range may re-enter range with the same id.

						if (OBST_FILTER_ON_)
						{
							for (size_t j = 0; j < oldObstacles_.size(); j++)
							{

								// update duration lost
								oldObstacles_[j]->durationLost += DT_ * pred_step; // increment is the same as dt_f in obstacle!

								// is this old obstacle still relevant?
								if (oldObstacles_[j]->durationTracked >= T_TRACKED_LIMIT_ &&
										(oldObstacles_[j]->durationLost < T_LOST_LIMIT_ ||
										 oldObstacles_[j]->P(0, 0) <= 5.0 // 2.0
										 ))
								{
									// update object in old list and move it to the new list,

									oldObstacles_[j]->updateTrajectory(OBST_FILTER_ON_); // update obstacle

									obst_vect.push_back(oldObstacles_[j]); // copy updated obstacle

									oldObstacles_.erase(oldObstacles_.begin() + j); // does not destroy this object, but the pointer to it!

									std::cout << "NB! obstacle " << oldObstacles_[j]->id_ << " lost " << oldObstacles_[j]->durationLost << "s ago, but allowed to live!" << std::endl;
								}
							}
						}
						n_obst = obst_vect.size();
						std::cout << "n_obst: " << n_obst << std::endl;

						// delete and clear remaining (terminated) elements in the old list
						int n_obst_old = oldObstacles_.size();
						std::cout << "n_obst_old: " << n_obst_old << std::endl;
						for (int k = 0; k < n_obst_old; k++)
						{
							delete (oldObstacles_[k]);
						}
						oldObstacles_.clear();

						if (n_obst == 0)
						{
							u_os_best = 1;
							psi_os_best = 0;
							P_ca_last_ = 1;
							Chi_ca_last_ = 0;

							return;
						}

						// compute new behavior only if an obstacle enters the colav range!
						for (int k = 0; k < n_obst; k++)
						{
							d(0) = obst_vect[k]->x_[0] - asv_state[0];
							d(1) = obst_vect[k]->y_[0] - asv_state[1];
							dist_k = d.norm();
							if (dist_k < dist)
								dist = dist_k;
							if (dist < D_INIT_)
								colav_active = true;
						}

						// reset colav_active if static
						if (colav_active && dist > D_INIT_ + D_SAFE_)
							colav_active = false; // avoids switching on/off

						if (colav_active == false)
						{
							u_os_best = 1;
							psi_os_best = 0;
							P_ca_last_ = 1;
							Chi_ca_last_ = 0;

							for (int k = 0; k < n_obst; k++)
							{
								delete (obst_vect[k]);
							}
							obst_vect.clear();

							std::cout << "obs! obstacles were cleared " << std::endl;

							return;
						}
						// check next waypoints, handle when no wp exists (e.g. last waypoint reached)
						n_wps = waypoints.rows();

						// for saving current side (starboard/port, ahead/behind) of asv where an obstacle is located
						SB_0.resize(n_obst);
						AH_0.resize(n_obst);

						// for the current transition state of asv
						CRG_0.resize(n_obst);
						OTG_0.resize(n_obst);
						OT_0.resize(n_obst);
						HOT_0.resize(n_obst);
						DIST_0.resize(n_obst);

						OBS_PASSED_0.resize(n_obst);
						PHI_0.resize(n_obst); // relative bearing
						HL_0.resize(n_obst);
						HL_.resize(n_obst);		// relative hazard level computed from cost
						ID_0.resize(n_obst);	// for status tag list
						SOG_0.resize(n_obst); // speed for status tag list
						COG_0.resize(n_obst); // course for status tag list

						// current velocity vector of asv
						v_s(0) = asv_state[3];
						v_s(1) = asv_state[4];
						rot2d(normalize_angle(asv_state[2]), v_s);

						// Detect switching events with different options
						double R = 2 * WP_R_; // radius of acceptance, 2*R_ captures switching before it occurs.
						double psi_path = atan2(waypoints(1, 1) - waypoints(0, 1),
																		waypoints(1, 0) - waypoints(0, 0)); // path course

						// distance of track from wp0 to wp1
						double track_dist = sqrt(pow(waypoints(1, 0) - waypoints(0, 0), 2) + pow(waypoints(1, 1) - waypoints(0, 1), 2));

						// next waypoint directional vector for improving accuracy of scenario
						if (guidance_strategy < 2)
						{
							d_s_wp1(0) = waypoints(1, 0) - asv_state[0];
							d_s_wp1(1) = waypoints(1, 1) - asv_state[1];
							los_s_wp1 = d_s_wp1 / d_s_wp1.norm();

							d_wp0_wp1(0) = waypoints(1, 0) - waypoints(0, 0);
							d_wp0_wp1(1) = waypoints(1, 1) - waypoints(0, 1);
							los_wp0_wp1 = d_wp0_wp1 / d_wp0_wp1.norm();

							// last chance to detect a switch in waypoints --useful tool for debugging
							bool leg_passed = los_wp0_wp1.dot(-los_s_wp1) > cos(90 * DEG2RAD);

							std::cout << "leg_passed :  " << leg_passed << std::endl;
						}

						// ***Just testing !! along-track error using Eq (10.58 or 10.10) in Fossen 2011
						double along_track_dist = fabs((0 - asv_state[0]) * cos(psi_path) + (300 - asv_state[1]) * sin(psi_path));

						std::cout << "remaining track dist :  " << along_track_dist << std::endl;

						if (track_dist > R + asv->getL())
						{ // else last WP reached, assume constant course!

							// asv-wp radius
							double asv_wp_radius_sqrd = pow(asv_state[0] - waypoints(1, 0), 2) + pow(asv_state[1] - waypoints(1, 1), 2);

							// along-track error using Eq (10.58 or 10.10) in Fossen 2011
							along_track_dist = fabs((waypoints(1, 0) - asv_state[0]) * cos(psi_path) + (waypoints(1, 1) - asv_state[1]) * sin(psi_path));

							// WP switching criteria
							bool switch_wp =
									// circle of acceptance: (x_wp1 - x)² + (y_wp1 - y)² < R²
									asv_wp_radius_sqrd < R * R ||
									// progress along path: s_total - s(t) < R or s(t) < R? depends on s(t)
									along_track_dist < R;

							if (switch_wp)
							{
								std::cout << "switch waypoint !!" << std::endl; //

								for (int k = 0; k < waypoints_.rows() - 1; k++)
								{
									waypoints.row(k) = waypoints_.row(k + 1);
								}

								for (int i = 0; i < n_wps; i++)
								{
									std::cout << "waypoint " << i << " " << waypoints.row(i) << std::endl;
								}

								psi_path = atan2(waypoints(1, 1) - waypoints(0, 1),
																 waypoints(1, 0) - waypoints(0, 0)); // path course
							}
						}

						// next waypoint directional vector for improving accuracy of scenario
						if (guidance_strategy < 2)
						{
							d_s_wp1(0) = waypoints(1, 0) - asv_state[0];
							d_s_wp1(1) = waypoints(1, 1) - asv_state[1];
							los_s_wp1 = d_s_wp1 / d_s_wp1.norm();
						}

						for (int k = 0; k < n_obst; k++)
						{

							ID_0(k) = obst_vect[k]->id_;		// for status tag list
							SOG_0(k) = obst_vect[k]->u_[0]; // for status tag list
							COG_0(k) = obst_vect[k]->psi_;	// for status tag list

							d(0) = obst_vect[k]->x_[0] - asv_state[0];
							d(1) = obst_vect[k]->y_[0] - asv_state[1];
							dist_0 = d.norm();
							DIST_0(k) = dist_0;

							los_0 = d / dist_0;

							PHI_0(k) = atan2(d(1), d(0)); // bearing

							phi_0 = PHI_0(k) - normalize_angle(asv_state[2]);
							phi_0 = normalize_angle(phi_0);

							// obstacle at starboard/port side
							if (obst_vect[k]->SB_0 > -1 &&
									((phi_0 > -15 * DEG2RAD && phi_0 < 15 * DEG2RAD) ||
									 (phi_0 < -165 * DEG2RAD && phi_0 >= -180 * DEG2RAD) ||
									 (phi_0 > 165 * DEG2RAD && phi_0 <= 180 * DEG2RAD)))
							{
								SB_0(k) = obst_vect[k]->SB_0;
							}
							else
							{
								SB_0(k) = phi_0 >= 0; // ENU: < 0, NED (MR): >= 0
							}
							obst_vect[k]->SB_0 = (int)SB_0(k);
							std::cout << "SB_0 : " << SB_0(k) << std::endl;

							v_o(0) = obst_vect[k]->u_[0];
							v_o(1) = obst_vect[k]->v_[0];

							rot2d(obst_vect[k]->psi_, v_o);

							// obstacle ahead of asv
							double los_phi = acos(v_s.dot(los_0) / v_s.norm());
							if (obst_vect[k]->AH_0 > -1 && los_phi > PHI_AH_ * DEG2RAD && los_phi < 90.0 * DEG2RAD)
							{ // 112.5?
								{
									AH_0(k) = obst_vect[k]->AH_0;
									std::cout << "NONONO" << std::endl;
								}
							}
							else
							{
								AH_0(k) = v_s.dot(los_0) > cos(PHI_AH_ * DEG2RAD) * v_s.norm(); // 90.0 or PHI_AH_?
								std::cout << "SISISI" << std::endl;
							}
							obst_vect[k]->AH_0 = (int)AH_0(k);
							std::cout << "AH_0 : " << AH_0(k) << std::endl;

							// asv overtaking obstacle
							OTG_0(k) = (v_s.dot(v_o) > cos(PHI_OT_ * DEG2RAD) * v_s.norm() * v_o.norm() //)
													&& v_o.norm() > 0.25)																						// 0.05? collision cost will take care of stopped obstacles, only keep clear required!
												 && v_s.norm() > v_o.norm() && AH_0(k);

							if (guidance_strategy < 2)
							{																																							// check angle made with LOS to next WP
								OTG_0(k) = OTG_0(k) && v_o.dot(los_s_wp1) > cos(45 * DEG2RAD) * v_o.norm(); // PHI_OT_?
							}

							std::cout << "OTG_0 : " << OTG_0(k) << std::endl;

							// asv being overtaken by obstacle
							OT_0(k) = v_s.dot(v_o) > cos(PHI_OT_ * DEG2RAD) * v_s.norm() * v_o.norm() && v_s.norm() < v_o.norm() && !AH_0(k) && dist_0 < D_CLOSE_;

							if (guidance_strategy < 2)
							{ // check angle made with LOS to next WP
								OT_0(k) = OT_0(k) && v_o.dot(los_s_wp1) > cos(PHI_OT_ * DEG2RAD) * v_o.norm();
							}

							std::cout << "OT_0 : " << OT_0(k) << std::endl;

							// Obstacle out of way? use it to constrain CRG scenario only?
							OBS_PASSED_0(k) = ((v_o.dot(-los_0) < cos(112.5 * DEG2RAD) * v_o.norm() // obstacle's perspective
																	&& !OTG_0(k)) ||
																 (v_s.dot(los_0) < cos(112.5 * DEG2RAD) * v_s.norm() // ASV's perspective
																	&& !OT_0(k))) &&
																dist_0 > D_SAFE_; // D_SAFE_ or D_CLOSE_?

							if (guidance_strategy < 2 && dist_0 > D_CLOSE_)
							{ // check angle made with LOS to next WP
								OBS_PASSED_0(k) = OBS_PASSED_0(k) && v_s.dot(los_s_wp1) > cos(PHI_HO_ * DEG2RAD) * v_o.norm();
							}

							std::cout << "OBS_PASSED_0 : " << OBS_PASSED_0(k) << std::endl;

							// Crossing in progress
							CRG_0(k) = v_s.dot(v_o) < cos(PHI_CR_ * DEG2RAD) * v_s.norm() * v_o.norm() && !OBS_PASSED_0(k) // && AH_0(k)  test OBS_PASSED_0(k)
												 && !OTG_0(k) && !OT_0(k)																														 //;
												 && v_o.norm() > 0.25;																															 // 0.05?

							if (guidance_strategy < 2 && dist_0 > D_CLOSE_)
							{ // check angle made with LOS to next WP
								CRG_0(k) = CRG_0(k) && v_o.dot(los_s_wp1) < cos(PHI_CR_ * DEG2RAD) * v_o.norm();
							}

							std::cout << "CRG_0 : " << CRG_0(k) << std::endl;

							// Head-on transition in progress
							HOT_0(k) = v_o.norm() > 0.25																									 // 0.05?
												 && v_s.dot(v_o) < -cos(PHI_HO_ * DEG2RAD) * v_s.norm() * v_o.norm() // 89.5
												 && v_s.dot(los_0) > cos(PHI_AH_ * DEG2RAD) * v_s.norm()						 // reduces scope!
												 && AH_0(k);

							if (guidance_strategy < 2)
							{
								HOT_0(k) = HOT_0(k) && v_o.dot(los_s_wp1) < -cos(PHI_HO_ * DEG2RAD) * v_o.norm();
							}

							std::cout << "HOT_0 : " << HOT_0(k) << std::endl;
						}

						double Chi_ca_i = 0.0;
						int i_return_to_path = 0, ik_return_to_path = 0, i_return_to_path_best = n_samp; // iter at which ASV can return to path
						int cp = 0, n_cp = 3;																														 // course-offset iterator and change points
						for (auto j = 0; j < P_ca_.size(); j++)
						{ // iterates through speed 'offsets', only 1 speed
							for (auto i = 0; i < Chi_ca_.size(); i++)
							{ // iterates through course offsets
								for (int cp_ = 0; cp_ < n_cp; cp_++)
								{

									// setup for guidance behavior simulation
									if (cp_ > 0 && (0.0 == Chi_ca_[i] || (guidance_strategy < 2 && std::fabs(Chi_ca_[i]) >= 90.0 * DEG2RAD)))
										break;

									Chi_ca_i = Chi_ca_[i]; // offset for cp=0

									cp = cp_; // for forward iteration
									if (guidance_strategy >= 2 && cp_ > 0 && cp_ < n_cp)
										cp = n_cp - cp_; // for reverse iteration (not needed if return path is predicted?)

									if (cp > 0 && guidance_strategy < 2)
									{ // LOS, WPP

										if (Chi_ca_[i] > 0)
											Chi_ca_i = Chi_ca_[i] + 15.0 * DEG2RAD * cp;

										if (Chi_ca_[i] < 0)
											Chi_ca_i = Chi_ca_[i] - 15.0 * DEG2RAD * cp;
									}
									else if (cp > 0)
									{ // CH, HH; reverse iteration!

										Chi_ca_i = 0.0; // no offset => return to original ref.
									}

									if (std::fabs(Chi_ca_i * RAD2DEG) > 90.0)
										break;

									asv->linearPrediction(asv_state, u_d * P_ca_[j], psi_d + Chi_ca_i, waypoints, Chi_ca_i, cp, guidance_strategy, WP_R_, LOS_LA_DIST_, LOS_KI_);

									// Compute worst cost associated with the current control behavior and the corresponding scenarios for each obsbtacle
									cost_i = -1;
									cost_o = 0;
									ik_return_to_path = 0;
									i_return_to_path = 0;
									for (int k = 0; k < n_obst; k++)
									{
										HL_(k) = 0;

										for (int l = 0; l < n_obst_branches; l++)
										{

											// (bool)AH_0(k) and (bool)OBS_PASSED_0(k) unused?
											cost_k = costFunction(P_ca_[j], Chi_ca_[i], k, (bool)SB_0(k), (bool)CRG_0(k), (bool)OTG_0(k), (bool)OT_0(k), (bool)HOT_0(k), DIST_0(k), u_d, l, ik_return_to_path, obst_states, static_obst_states_, i);

											if (guidance_strategy >= 2 && cp == 0 && Chi_ca_[i] != 0)
												cost_k = cost_k + 0.1 * n_cp; // (a small) path deviation penalty

											if (guidance_strategy >= 2 && cp > 0)
												cost_k = cost_k + 0.1 * cp; // (a small) path deviation penalty

											// save the worst cost among the branches of this obstacle
											if (cost_k > HL_(k) && OBS_PASSED_0(k) == 0)
												HL_(k) = cost_k;

											// save the overall worst cost for this control behavior
											if (cost_k > cost_i) // XXX: Here is the worst cost !!  -> Element k
											{
												cost_i = cost_k;
												obs = obst_vect[k]; // save the obstacle with the worst cost
											} 

											// save the latest iter at which the ASV can return to its original path
											if (ik_return_to_path > i_return_to_path)
												i_return_to_path = ik_return_to_path;
										}

										// accumulate cost for all obstacles
										cost_o = cost_o + HL_(k);
									}

									// Save current scenario if cost is lower than that of previously checked controls
									if (cost_i < cost)
									{
										cost = cost_i;						// Minimizing the overall cost
										u_os_best = P_ca_[j];			// test with 1
										psi_os_best = Chi_ca_[i]; // test with -30*DEG2RAD
										n_psi_os_best = cp + 1;		// number of course offsets
										i_return_to_path_best = i_return_to_path;
										cost_mra = cost;

										if (i_return_to_path > cp && i_return_to_path < n_samp - pred_step)
										{
											asv->linearPrediction(asv_state, u_d * P_ca_[j], psi_d, waypoints, 0, i_return_to_path, guidance_strategy, WP_R_, LOS_LA_DIST_, LOS_KI_);
										}
										x_opt = asv->m_x;
										y_opt = asv->m_y;

										// save the relative hazard level for each obstacle at the optimum
										// highest value indicates which obstacle is considered most dangerous
										for (int k = 0; k < n_obst; k++)
										{
											if (cost_o > 0)
											{
												HL_0(k) = HL_(k) / cost_o;
											}
											else
											{
												HL_0(k) = 0;
											}
										}
									}
									// i-th combination of control behavior at t0 and selected future points in time
								}
								// i-th combination of control behavior at t0
							}
						}

						// Psi offset blocking: remove when debugging/tuning!!
						if (u_os_best == 0)
						{
							psi_os_best = Chi_ca_last_;
							std::cout << "Chi_ca_last used, since u_os_best is 0!" << std::endl;
						}

						// save current obstacle list
						oldObstacles_.resize(obst_vect.size());
						oldObstacles_ = obst_vect;

						// Reset all obstacle/filter memory!
						// -- filter can be reset without deleting obstacle, we need obstacle status when filter is off!
						if (false && OBST_FILTER_ON_ == 0)
						{ // test! (false = keep obstacle list and reset filter instead)
							for (int k = 0; k < n_obst; k++)
							{
								delete (oldObstacles_[k]);
							}

							oldObstacles_.clear();
						}

						obst_vect.clear();

						P_ca_last_ = u_os_best;
						Chi_ca_last_ = psi_os_best;
						CF_0 = u_os_best * (1 - (std::fabs(RAD2DEG * psi_os_best) / 15.0) / 8.0); // 6 course offsets possible towards SB/P, 2 factors possible speed reduction

						std::cout << "_______________" << std::endl;
						std::cout << "cost : " << cost << std::endl;
						std::cout << "course offset : " << Angles::degrees(psi_os_best) << std::endl;
						std::cout << "relative hazard level : " << HL_0 << std::endl;
						std::cout << "control freedom : " << CF_0 << std::endl;
						std::cout << "return to path at iter: " << i_return_to_path_best << std::endl;
						std::cout << "_______________" << std::endl;

						if (guidance_strategy < 2)
						{
							std::cout << "predicted course offsets: " << n_psi_os_best << std::endl;
						}
						else
						{
							std::cout << "using prediction path " << n_psi_os_best << std::endl;
						}
						std::cout << "_________________________________" << std::endl;
					}
				}

				/**
				 * @brief  Returns the simulation time (prediction horizon) [sec].
				 */
				double getT()
				{
					return T_;
				}

				/**
				 * @brief Returns the time step for the simulation [sec].
				 */
				double getDt()
				{
					return DT_;
				}

				/**
				 * @brief  Returns the simulation time (prediction horizon) for static obstacles [sec].
				 */
				double getT_stat()
				{
					return T_stat_;
				}

				/**
				 * @brief Returns the weight on time to evaluation instant
				 */
				double getP()
				{
					return P_;
				}

				/**
				 * @brief Returns the weight on time to evaluation instant for grounding
				 */
				double getP_G();

				/**
				 * @brief Returns the weight on distance at evaluation instant
				 */
				double getQ()
				{
					return Q_;
				}

				/**
				 * @brief Returns the distance where COLREGS are said to apply [m].
				 */
				double getDClose()
				{
					return D_CLOSE_;
				}

				/**
				 * @brief Returns the minimum distance which is considered as safe [m].
				 */
				double getDSafe()
				{
					return D_SAFE_;
				}

				/**
				 * @brief Returns the minimum distance which is considered as safe [m] for anti-grounding.
				 */
				double getDSafeLand();

				/**
				 * @brief Returns the collision cost
				 */
				double getKColl()
				{
					return K_COLL_;
				}

				/**
				 * @brief Returns the angle within which an obstacle is said to be ahead
				 * [deg].
				 */
				double getPhiAH()
				{
					return PHI_AH_;
				}

				/**
				 * @brief Returns the angle outside of which an obstacle will be said to
				 * be overtaking, if the speed of the obstacle is larger than the ship's
				 * own speed.
				 */
				double getPhiOT()
				{
					return PHI_OT_;
				}

				/**
				 * @brief Returns the angle within which an obstacle is said to be head
				 * on [deg].
				 */
				double getPhiHO()
				{
					return PHI_HO_;
				}

				/**
				 * @brief Returns the angle outside of which an obstacle is said to be
				 * crossing, if it is on the starboard side, heading towards the ship
				 * and not overtaking the ship.
				 */
				double getPhiCR()
				{
					return PHI_CR_;
				}

				/**
				 * @brief Returns the cost of not complying with the COLREGS.
				 */
				double getKappa()
				{
					return KAPPA_;
				}

				/**
				 * @brief Returns the cost of changing a COLREGS behavior.
				 */
				double getKappaTC()
				{
					return KAPPA_TC_;
				}

				/**
				 * @brief Returns the cost of deviating from the nominal speed.
				 */
				double getKP()
				{
					return K_P_;
				}

				/**
				 * @brief Returns the cost of changing the speed offset.
				 */
				double getKdP()
				{
					return K_DP_;
				}

				/**
				 * @brief Returns the cost of deviating from the nominal heading
				 */
				double getKChi()
				{
					return K_CHI_;
				}

				/**
				 * @brief Returns the cost of changing the heading offset to starboard.
				 */
				double getKdChiSB()
				{
					return K_DCHI_SB_;
				}

				/**
				 * @brief Returns the cost of changing the heading offset to port.
				 */
				double getKdChiP()
				{
					return K_DCHI_P_;
				}

				/**
				 * @brief Returns the possible offsets to the nominal heading [deg].
				 */
				Eigen::VectorXd getChiCA()
				{
					return Chi_ca_ * RAD2DEG;
				}

				/**
				 * @brief Returns the possible offsets to the nominal course, should be
				 * in the range [-1,1].
				 */
				Eigen::VectorXd getPCA()
				{
					return P_ca_;
				}

				/**
				 * @brief Returns the cost weights
				 */
				double getKChiSB()
				{
					return K_CHI_SB_;
				}

				double getKChiP()
				{
					return K_CHI_P_;
				}

				double getDInit()
				{
					return D_INIT_;
				}

				/**
				 * @brief Returns the grounding cost. (Entering a no-go zone)
				 */
				double getG()
				{
					return G_;
				}

				int getObstFilterStatus()
				{
					return OBST_FILTER_ON_;
				}

				double getTLostLimit()
				{
					return T_LOST_LIMIT_;
				}

				double getTTrackedLimit()
				{
					return T_TRACKED_LIMIT_;
				}

				/**
				 * @brief Returns guidance params
				 */
				int getGuidanceStrategy()
				{
					return GUIDANCE_STRATEGY_;
				}

				double getWpR()
				{
					return WP_R_;
				}

				double getLosLaDist()
				{
					return LOS_LA_DIST_;
				}

				double getLosKi()
				{
					return LOS_KI_;
				}

				/**
				 * @brief Sets the prediction horizon for static objects [sec].
				 */
				void setT_stat(double T_stat)
				{
					T_stat_ = T_stat;
				}

				void setP(double p)
				{
					if (p > 0.0)
						P_ = p;
				}

				void setQ(double q)
				{
					if (q > 0.0)
						Q_ = q;
				}

				void setDClose(double d_close)
				{
					if (d_close > D_SAFE_)
						D_CLOSE_ = d_close;
				}

				void setDSafe(double d_safe)
				{
					if (d_safe > 20.0)
						D_SAFE_ = d_safe;
				}

				void setDSafeLand(double d_safe_land);

				void setKColl(double k_coll)
				{
					if (k_coll > 0.0)
						K_COLL_ = k_coll;
				}

				void setPhiAH(double phi_AH)
				{
					PHI_AH_ = phi_AH;
				}

				void setPhiOT(double phi_OT)
				{
					PHI_OT_ = phi_OT;
				}

				void setPhiHO(double phi_HO)
				{
					PHI_HO_ = phi_HO;
				}

				void setPhiCR(double phi_CR)
				{
					PHI_CR_ = phi_CR;
				}

				void setKappa(double kappa)
				{
					if (kappa > 0.0)
						KAPPA_ = kappa;
				}

				void setKappaTC(double kappa_tc)
				{
					if (kappa_tc > 0.0)
						KAPPA_TC_ = kappa_tc;
				}

				void setKP(double K_P)
				{
					if (K_P > 0.0)
						K_P_ = K_P;
				}

				void setKdP(double K_dP)
				{
					if (K_dP > 0.0 && K_dP < 1)
						K_DP_ = K_dP;
				}

				void setKChi(double K_Chi)
				{
					if (K_Chi > 0.0)
						K_CHI_ = K_Chi;
				}

				void setKdChiSB(double K_dChi_SB)
				{
					if (K_dChi_SB > 0.0 && K_dChi_SB < 1)
						K_DCHI_SB_ = K_dChi_SB;
				}

				void setKdChiP(double K_dChi_P)
				{
					if (K_dChi_P > 0.0 && K_dChi_P < 1)
						K_DCHI_P_ = K_dChi_P;
				}

				void setChiCA(Eigen::VectorXd Chi_ca)
				{
					Chi_ca_.resize(Chi_ca.size());
					Chi_ca_ = Chi_ca * DEG2RAD;
				}

				void setPCA(Eigen::VectorXd P_ca)
				{
					P_ca_.resize(P_ca.size());
					P_ca_ = P_ca;
				}

				void setKChiSB(double K_Chi_SB)
				{
					if (K_Chi_SB > 0.0)
						K_CHI_SB_ = K_Chi_SB;
				}

				void setKChiP(double K_Chi_P)
				{
					if (K_Chi_P > 0.0)
						K_CHI_P_ = K_Chi_P;
				}

				void setDInit(double D_Init)
				{
					if (D_Init > D_SAFE_)
						D_INIT_ = D_Init;
				}

				void setG(double G)
				{
					G_ = G;
				}

				void setObstFilterStatus(int obst_filter_on)
				{
					OBST_FILTER_ON_ = obst_filter_on; // should be done at low speed?
				}

				void setTLostLimit(double tLostLimit)
				{
					T_LOST_LIMIT_ = tLostLimit;
				}

				void setTTrackedLimit(double tTrackedLimit)
				{
					T_TRACKED_LIMIT_ = tTrackedLimit;
				}

				void setGuidanceStrategy(int guidance_strategy)
				{
					GUIDANCE_STRATEGY_ = guidance_strategy;
				}

				void setWpR(double wp_radius)
				{
					WP_R_ = wp_radius;
				}

				void setLosLaDist(double los_la_d)
				{
					LOS_LA_DIST_ = los_la_d;
				}

				void setLosKi(double los_ki)
				{
					LOS_KI_ = los_ki;
				}

				void setAngRange(double ang_range)
				{
					ang_range_ = ang_range;
				}

				void setGran(double gran)
				{
					granularity_ = gran;
				}

			private:

				const double DEG2RAD = M_PI / 180.0f;
				const double RAD2DEG = 180.0f / M_PI;

				// bool AH_0, bool OBS_PASSED unused?
				double costFunction(double P_ca, double Chi_ca, int k, bool SB_0, bool CRG_0, bool OTG_0, bool OT_0, bool HOT_0, double DIST_0, double u_d, int l, int &ik_return_to_path, Math::Matrix obst_state, Math::Matrix static_obst_state, int chi_ca_index)
				{
					// bool AH_0, bool OBS_PASSED_0 unused?
					double dist, dist_to_land, phi, phi_o, psi_o, psi_rel, R, R_ground, C, C_ground, C1, C2, k_coll, d_safe_i, R_c, s_0;
					Eigen::Vector2d d, asv_pred_pos, los, los_inv, v_o, v_s;
					bool mu, OT, SB, HO, CR, OTG, CRG, OTN, HOT, mu_0;
					double d_safe = D_SAFE_;
					double d_close = D_CLOSE_;
					double d_safe_land = D_SAFE_LAND_;
					double H0 = 0;
					double H1 = 0;
					double H2 = 0;
					double cost = 0;
					double t = 0;
					double t0 = 0;
					int n_samp = T_ / DT_;
					double k_dchi_p = K_DCHI_P_;
					double k_dchi_sb = K_DCHI_SB_;
					double k_chi_p = K_CHI_P_;
					double k_chi_sb = K_CHI_SB_;
					int j = 0; // obstacle step counter
					int ik_H0 = -1, ik_CPA = 0;
					double d_CPA = INFINITY;

					// bool isGeoConstr;                   // no-go zone variable
					double gCost /*, n_geo_samp, d_geo*/; // no-go zone variable
					Eigen::Vector2d p0, p1, v0, v1;				// no-go zone variable

					ik_return_to_path = n_samp;

					for (int i = 0; i < n_samp - 1; i += pred_step)
					{ // using 5s or 10s fixed intervals for DT_=0.5

						R = 0;
						R_c = 0;
						R_ground = 0;
						C = 0;
						C1 = 0;
						C2 = 0;
						C_ground = 0;
						mu = 0;
            mu_0 = 0;
						gCost = 0;

						t += DT_ * pred_step;
						j = (int)(i / (double)pred_step); // synchronize asv and obstacle prediction steps

						if (static_obst_state(0, 0) != 10000.0)
						{
							asv_pred_pos(0) = asv->m_x[i];
							asv_pred_pos(1) = asv->m_y[i];

							dist_to_land = static_obst_state(chi_ca_index, 1);

							double risk_land = 0.0;

							if (dist_to_land <= d_safe_land && dist_to_land != 0.0)
								risk_land = d_safe_land / dist_to_land;

							R_ground = (1 / pow(std::fabs(t - t0), P_G_)) * pow(risk_land, Q_);
							C_ground = static_obst_state(chi_ca_index, 2);
						}
						if (obst_state.rows() > 0)
						{

							// link index 'l' with the correct obstacle branch prediction vector
							if (n_obst_branches > 1)
							{
								obst_vect[k]->psi_ = obst_vect[k]->psi_br(l);
								obst_vect[k]->x_[j] = obst_vect[k]->x_m(j, l);
								obst_vect[k]->y_[j] = obst_vect[k]->y_m(j, l);
								obst_vect[k]->u_[j] = obst_vect[k]->u_m(j, l);
								obst_vect[k]->v_[j] = obst_vect[k]->v_m(j, l);
							}

							d(0) = obst_vect[k]->x_[j] - asv->m_x[i];
							d(1) = obst_vect[k]->y_[j] - asv->m_y[i];
							dist = d.norm();

							// compute d_CPA and t_CPA
							if (dist < d_CPA)
							{
								d_CPA = dist;
								ik_CPA = i;
							}

							if (dist < d_close)
							{
								v_o(0) = obst_vect[k]->u_[j];
								v_o(1) = obst_vect[k]->v_[j];
								rot2d(obst_vect[k]->psi_, v_o);

								v_s(0) = asv->m_u[i];
								v_s(1) = asv->m_v[i];
								rot2d(asv->m_psi[i], v_s);

								psi_o = obst_vect[k]->psi_;
								psi_o = normalize_angle(psi_o); // already normalized!

								phi = atan2(d(1), d(0)) - asv->m_psi[i];
								phi = normalize_angle(phi);

								psi_rel = psi_o - asv->m_psi[i];
								psi_rel = normalize_angle(psi_rel); // change to angle_diff?
								// psi_rel = angle_diff(asv->m_psi[i], psi_o); // normalized

								los = d / dist;
								los_inv = -d / dist;

								// Calculating d_safe: bug fix: *DEG2RAD applied where missing!

								d_safe_i = d_safe + obst_vect[k]->getL() / 2; // obstacle size determines init d_safe

								if (phi < PHI_AH_ * DEG2RAD)
								{ // obst ahead
									d_safe_i = d_safe + asv->getL() / 2;
								}
								else if (phi > PHI_OT_ * DEG2RAD)
								{ // obst behind
									d_safe_i = 0.5 * d_safe + asv->getL() / 2;
								}
								else
								{
									d_safe_i = d_safe + asv->getW() / 2;
								}

								phi_o = atan2(-d(1), -d(0)) - obst_vect[k]->psi_;
								phi_o = normalize_angle(phi_o);

								if (phi_o < PHI_AH_ * DEG2RAD)
								{																								 // ship ahead
									d_safe_i += d_safe + obst_vect[k]->getL() / 2; // d_safe +
								}
								else if (phi_o > PHI_OT_ * DEG2RAD)
								{																											 // ship behind
									d_safe_i += 0.5 * d_safe + obst_vect[k]->getL() / 2; // 0.5*d_safe +
								}
								else
								{
									d_safe_i += d_safe + obst_vect[k]->getW() / 2; // d_safe +
								}

								if (v_s.dot(v_o) > cos(PHI_OT_ * DEG2RAD) * v_s.norm() * v_o.norm() && v_s.norm() > v_o.norm())
								{
									d_safe_i = d_safe + asv->getL() / 2 + obst_vect[k]->getL() / 2;
								}

								// Overtaken by obstacle
								OT = v_s.dot(v_o) > cos(PHI_OT_ * DEG2RAD) * v_s.norm() * v_o.norm() && v_s.norm() < v_o.norm();

								// Obstacle on starboard side
								SB = phi >= 0; // ENU: < 0, NED (MR): >= 0

								// Obstacle Head-on
								HO = v_o.norm() > 0.25 // 0.05?
										 && v_s.dot(v_o) < -cos(PHI_HO_ * DEG2RAD) * v_s.norm() * v_o.norm() && v_s.dot(los) > cos(PHI_AH_ * DEG2RAD) * v_s.norm();

								// Crossing situation: obstacle crossed!
								CR = v_o.norm() > 0.25 // 0.05?
										 && v_s.dot(v_o) < cos(PHI_CR_ * DEG2RAD) * v_s.norm() * v_o.norm() && v_s.dot(los) > cos(112.5 * DEG2RAD) * v_s.norm();
								//&& ( psi_rel > 0 ); // (ENU: > 0, NED: < 0) CR off when asv has right of way + fix for SB/P switches

								// Cost for violating no-go zone
								// if(isGeoConstr && (t<T_stat_)){
								//      p0 << asv->m_y[i], asv->m_x[i];
								//      d_geo = dist2staticObst(p0, v0, v1);
								//      gCost = (1/pow(std::fabs(t-t0),P_))*pow(D_SAFE_/d_geo,Q_);
								//     }

								// Transition - Overtaking obstacle
								// OTG = OTG_0 && SB; // test -- P only!
								// OTG = OTG_0 && !SB; //  test -- SB only!
								if (SB_0 && gCost == 0)
									OTG = OTG_0 && !SB; // prioritize SB
								if (!SB_0 && gCost == 0)
									OTG = OTG_0 && SB; // prioritize Port

								// Transition - Overtaken obstacle
								// OTN = OT_0 && SB; // test -- P only!
								// OTN = OT_0 && !SB; //  test -- SB only!
								if (SB_0)
									OTN = OT_0 && !SB; // prioritize SB
								if (!SB_0)
									OTN = OT_0 && SB; // prioritize Port

								// Transition - crossing obstacle
								CRG = CRG_0 && SB_0 && SB && Chi_ca - Chi_ca_last_ < 0; // a move to port (ENU: > 0, NED (MR): < 0 )

								// Transition - head-on maneuver in progress
								HOT = HOT_0 && (SB) && !CRG; // (SB || CR) ?

								mu = (SB && HO) || (SB && CR && !OT); // COLREGs according to Johansen
								mu_0 = CRG || OTG || OTN || HOT;			// COLREGs transition according to Giorgio

								R_c = KAPPA_TC_; // use Kappa or adapt computation

								// obstacle size determines d_safe
								d_safe_i = D_SAFE_ + obst_vect[k]->getL() / 2; // override d_safe_i computed above

								if (dist <= d_safe_i)
								{ // changed from < to <=. dist is the predicted distance to obst, while DIST_0 is the current distance to obst
									if (dist < 1)
										dist = 1; // safe numerics!
									R = (1 / pow(std::fabs(t - t0), P_)) * pow(d_safe_i / dist, Q_);
									k_coll = K_COLL_ * asv->getL() * obst_vect[k]->getL(); // L-influence!
									// k_coll = K_COLL_; // test: fixed penalty!
									C = k_coll * pow((v_s - v_o).norm(), 2); // relative velocity

									if (DIST_0 < d_safe_i)
									{
										R = (1 / pow(fabs(t - t0), P_)) * pow(d_safe_i / dist, Q_ * 10);
										k_coll = 10 * K_COLL_ * asv->getL() * obst_vect[k]->getL(); // L-influence!

										s_0 = fabs(u_d - v_o.norm()) + 1.0; // 1.0 ensures ||v_s||<||v_o||
										if (HOT_0 || CRG_0 || OTG_0 || OT_0)
										{
											C1 = k_coll * (1.0 / pow(v_s.norm() - (v_o.norm() + s_0), 2)); // speed
											C2 = 100 * k_coll * (1.0 / pow(1.0 + RAD2DEG * psi_rel, 2));	 // relative course
											C = C1 + C2;
										}

										R_c = 100 * KAPPA_TC_;
									}
								}
							}
							// HAZARD
							if (obst_vect[k]->durationLost > pred_step)
							{
								C = (2 * DT_ * pred_step / obst_vect[k]->durationLost) * C;
							}
						}

						H0 = C * R + C_ground * R_ground + KAPPA_ * mu + R_c * mu_0;

						if (H0 > H1)
						{
							H1 = H0; // Maximizing the cost with regards to time
											 // save and pass on this iteration (i) for return path prediction???
						}

						// iteration (i) at which the ASV can return to path without colliding with obstacle k
						if (H0 > 0)
						{
							ik_H0 = i;									// save iter at which there is a hazard
							ik_return_to_path = n_samp; // reset the possible return iter
						}
						else if (i == ik_H0 + 1)
						{
							ik_return_to_path = i; // the next iter without hazard indicates a possible return time
						}

						if (ik_CPA > ik_return_to_path)
							ik_return_to_path = ik_CPA + 1;
					}

					// Use symmetric control cost when overtaking to prioritize current side
					if ((OTG_0 || OT_0) && (DIST_0 > D_SAFE_))
					{
						k_dchi_p = K_DCHI_SB_;
						k_chi_p = K_CHI_SB_;
					}

					H2 = K_P_ * pow(1 - P_ca, 2) + sqrChi(Chi_ca, k_chi_p, k_chi_sb) + deltaP(P_ca) + deltaChi(Chi_ca, k_dchi_p, k_dchi_sb);
					// H2 = K_P_*(1-P_ca) + K_CHI_*pow(Chi_ca,2) + deltaP(P_ca) + deltaChi(Chi_ca);

					cost = H1 + H2;

					return cost;
				}

				double deltaP(double P_ca)
				{
					return K_DP_ * pow(P_ca_last_ - P_ca, 2);
				}

				double deltaChi(double Chi_ca, double k_dchi_p, double k_dchi_sb)
				{
					double dChi = Chi_ca - Chi_ca_last_;
					if (dChi < 0)
					{																	// ENU: > 0, NED (MR): < 0
						return k_dchi_p * pow(dChi, 2); // K_DCHI_P_
					}
					else if (dChi > 0)
					{																	 // ENU: < 0, NED (MR): > 0
						return k_dchi_sb * pow(dChi, 2); // _SB_
					}
					else
					{
						return 0;
					}
				}

				double sqrChi(double Chi_ca, double k_chi_p, double k_chi_sb)
				{
					double dChi = Chi_ca - Chi_ca_last_;
					if (dChi < 0)
					{																	 // ENU: > 0, NED (MR): < 0
						return k_chi_p * pow(Chi_ca, 2); // _P_
					}
					else
					{
						return k_chi_sb * pow(Chi_ca, 2); // _SB_
					}
				}

				inline double normalize_angle(double angle)
				{
					while (angle <= -M_PI)
						angle += 2 * M_PI;
					while (angle > M_PI)
						angle -= 2 * M_PI;
					return angle;
				}

				inline double normalize_angle_360(double angle)
				{
					angle = fmod(angle, 2 * M_PI);
					if (angle < 0)
						angle += 2 * M_PI;
					return angle;
				}

				inline double angle_diff(double a, double b)
				{
					double dif = fmod(b - a + M_PI, 2 * M_PI);
					if (dif < 0)
						dif += 2 * M_PI;
					return dif - M_PI;
				}

				void rot2d(double yaw, Eigen::Vector2d &res)
				{
					Eigen::Matrix2d R;
					R << cos(yaw), -sin(yaw),
							sin(yaw), cos(yaw);
					res = R * res;
				}

				// Methods dealing with geographical constraints
				/**
				 * @brief Finds distance to line segment
				 */
				double dist2staticObst(Eigen::Vector2d p1, Eigen::Vector2d v1, Eigen::Vector2d v2)
				{
					double d2line = distPoint2line(p1, v1, v2);
					if (isBehind(p1, v1, v2, d2line) || isBehind(p1, v2, v1, d2line))
						return d2line;
					else
						return std::min((v1 - p1).norm(), (v2 - p1).norm());
				}

				/**
				 * @brief Finds the orientation of the ordered triplet (p,q,r)
				 * Returns the test result:
				 * 0 -> p,q,r are colinear
				 * 1 -> Clockwise
				 * 2 -> Counterclockwise
				 */
				int orientation(Eigen::Vector2d p, Eigen::Vector2d q, Eigen::Vector2d r)
				{
					int val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1]);

					if (val == 0)
						return 0;							// colinear
					return val > 0 ? 1 : 2; // clock or counterclock wize
				}

				/**
				 * @brief Given three colinear points p,q,r. Checks if the point q is on the segment pr.
				 */
				bool onSegment(Eigen::Vector2d p, Eigen::Vector2d q, Eigen::Vector2d r)
				{
					if (q[0] <= std::max(p[0], r[0]) && q[0] >= std::min(p[0], r[0]) &&
							q[1] <= std::max(p[1], r[1]) && q[1] >= std::min(p[1], r[1]))
						return true;
					return false;
				}

				/**
				 * @brief Checks if the line segments defined by p1,q1 and p2,q2 intersects
				 */
				bool doIntersect(Eigen::Vector2d p1, Eigen::Vector2d q1, Eigen::Vector2d p2, Eigen::Vector2d q2)
				{
					// Find the four orientations needed for general and
					// special cases
					int o1 = orientation(p1, q1, p2);
					int o2 = orientation(p1, q1, q2);
					int o3 = orientation(p2, q2, p1);
					int o4 = orientation(p2, q2, q1);

					// General case
					if (o1 != o2 && o3 != o4)
						return true;

					// Special Cases
					// p1, q1 and p2 are colinear and p2 lies on segment p1q1
					if (o1 == 0 && onSegment(p1, p2, q1))
						return true;

					// p1, q1 and q2 are colinear and q2 lies on segment p1q1
					if (o2 == 0 && onSegment(p1, q2, q1))
						return true;

					// p2, q2 and p1 are colinear and p1 lies on segment p2q2
					if (o3 == 0 && onSegment(p2, p1, q2))
						return true;

					// p2, q2 and q1 are colinear and q1 lies on segment p2q2
					if (o4 == 0 && onSegment(p2, q1, q2))
						return true;

					return false; // Doesn't fall in any of the above cases
				}

				/**
				 * @brief Finds the distance from the point p1 to the line defined by q1,q2.
				 */
				double distPoint2line(Eigen::Vector2d p1, Eigen::Vector2d q1, Eigen::Vector2d q2)
				{
					Eigen::Vector3d a;
					Eigen::Vector3d b;
					a << (q1 - q2), 0;
					b << (p1 - q2), 0;

					Eigen::Vector3d c = a.cross(b);
					double d = c.norm() / a.norm();
					return d;
				}

				/**
				 * @brief Checks if the point p1 is behind the line defined by v1,v2.
				 */
				bool isBehind(Eigen::Vector2d p1, Eigen::Vector2d v1, Eigen::Vector2d v2, double dist2Line)
				{
					Eigen::Vector2d n, n1;
					n = v2 - v1;
					n1 << -n[1], n[0];
					n = n1 / n1.norm() * dist2Line;

					if (onSegment(v1 + n, p1, v2 + n))
						return true;
					return false;
				}
				
				DUNE::Tasks::Task *m_task;

				// Simulation Parameters
				double T_;
				double DT_;
				double T_stat_; /**< Prediction horizon for geographical constraints. */
				int pred_step;
				int n_obst_branches;

				// Tuning Parameters
				double P_;
				double P_G_;
				double Q_;
				double D_CLOSE_;
				double D_SAFE_;
				double D_SAFE_LAND_;
				double K_COLL_;
				double PHI_AH_;
				double PHI_OT_;
				double PHI_HO_;
				double PHI_CR_;
				double KAPPA_;
				double KAPPA_TC_;
				double K_P_;
				double K_CHI_;
				double K_DP_;
				double K_DCHI_SB_;
				double K_DCHI_P_;
				double K_CHI_SB_;
				double K_CHI_P_;
				double D_INIT_;
				double G_;

				int OBST_FILTER_ON_;
				double T_LOST_LIMIT_;
				double T_TRACKED_LIMIT_;

				int GUIDANCE_STRATEGY_;
				double WP_R_;
				double LOS_LA_DIST_;
				double LOS_KI_;

				// State Variables
				double Chi_ca_last_;
				double P_ca_last_;

				double cost_;

				Eigen::VectorXd Chi_ca_;
				Eigen::VectorXd P_ca_;

				// Rudder angle plus/minus range.
				double ang_range_;
				// Granularity of angle change.
				double granularity_;

				Eigen::MatrixXd chi_obst_os_;
				Eigen::MatrixXd u_obst_os_;

				autonaut *asv;
				std::vector<obstacle *> obst_vect;
				std::vector<obstacle *> oldObstacles_;
			};
		}
	}
}

#endif