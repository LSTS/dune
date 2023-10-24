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
#include <DUNE/Navigation/autonaut.hpp>
#include <DUNE/Navigation/obstacle.hpp>
#include <Eigen/Dense>

namespace DUNE
{
  namespace Navigation
  {
	// Export DLL Symbol.
    class DUNE_DLL_SYM simulationBasedMpc;
    
	class simulationBasedMpc
	{
	public:
	/// Constructor
	simulationBasedMpc();

	/// Destructor
	~simulationBasedMpc();

	/**
	 * @brief Sets the offset pair (u_os_best, psi_os_best) with the lowst cost
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

	void create(double T, double DT, double P, double Q, double D_CLOSE, double D_SAFE, double K_COLL, double PHI_AH, double PHI_OT, 
							double PHI_HO, double PHI_CR, double KAPPA, double K_P, double K_CHI, double K_DP, double K_DCHI_SB, double K_DCHI_P, double K_CHI_SB, double K_CHI_P);
	
	void getBestControlOffset(double &u_os_best, double &psi_os_best, double u_d, double psi_d, const std::vector<double>& asv_state, const Math::Matrix& obst_states);

	/**
	 * @brief  Returns the simulation time (prediction horizon) [sec].
	 */
	double getT();
	/**
	 * @brief Returns the time step for the simulation [sec].
	 */
	double getDt();
	/**
	 * @brief Returns the weight on time to evaluation instant
	 */
	double getP();
	/**
	 * @brief Returns the weight on distance at evaluation instant
	 */
	double getQ();
	/**
	 * @brief Returns the distance where COLREGS are said to apply [m].
	 */
	double getDClose();
	/**
	 * @brief Returns the minimum distance which is considered as safe [m].
	 */
	double getDSafe();
	/**
	 * @brief Returns the collision cost
	 */
	double getKColl();
	/**
	 * @brief Returns the angle within which an obstacle is said to be ahead
	 * [deg].
	 */
	double getPhiAH();
	/**
	 * @brief Returns the angle outside of which an obstacle will be said to
	 * be overtaking, if the speed of the obstacle is larger than the ship's
	 * own speed.
	 */
	double getPhiOT();
	/**
	 * @brief Returns the angle within which an obstacle is said to be head
	 * on [deg].
	 */
	double getPhiHO();
	/**
	 * @brief Returns the angle outside of which an obstacle is said to be
	 * crossing, if it is on the starboard side, heading towards the ship
	 * and not overtaking the ship.
	 */
	double getPhiCR();
	/**
	 * @brief Returns the cost of not complying with the COLREGS.
	 */
	double getKappa();
	/**
	 * @brief Returns the cost of deviating from the nominal speed.
	 */
	double getKP();
	/**
	 * @brief Returns the cost of changing the speed offset.
	 */
	double getKdP();
	/**
	 * @brief Returns the cost of deviating from the nominal heading
	 */
	double getKChi();
	/**
	 * @brief Returns the cost of changing the heading offset to starboard.
	 */
	double getKdChiSB();
	/**
	 * @brief Returns the cost of changing the heading offset to port.
	 */
	double getKdChiP();
	/**
	 * @brief Returns the possible offsets to the nominal heading [deg].
	 */
	Eigen::VectorXd getChiCA();
	/**
	 * @brief Returns the possible offsets to the nominal course, should be
	 * in the range [-1,1].
	 */
	Eigen::VectorXd getPCA();

	 /**
    * @brief Returns the cost weights
    */
	double getKChiSB();
	double getKChiP();


	/**
	 * @brief Sets the prediction horizon [sec].
	 */
	void setT(double T);
	/**
	 * @brief Sets the simulation step time [sec].
	 */
	void setDt(double dt);

	void setP(double p);
	void setP_G(double p_g);
	void setQ(double q);
	void setDClose(double d_close);
	void setDSafe(double d_safe);
	void setKColl(double k_coll);
	void setPhiAH(double phi_AH);
	void setPhiOT(double phi_OT);
	void setPhiHO(double phi_HO);
	void setPhiCR(double phi_CR);
	void setKappa(double kappa);
	void setKP(double K_P);
	void setKdP(double K_dP);
	void setKChi(double K_Chi);
	void setKdChiSB(double K_dChi_SB);
	void setKdChiP(double K_dChi_P);
	void setChiCA(Eigen::VectorXd Chi_ca);
	void setPCA(Eigen::VectorXd P_ca);

	void setKChiSB(double K_Chi_SB);
	void setKChiP(double K_Chi_P);

	private:

	double costFunction(double P_ca, double Chi_ca, int k); 
	double deltaP(double P_ca);
	double deltaChi(double Chi_ca, double k_dchi_p, double k_dchi_sb); 
	double sqrChi(double Chi_ca, double k_chi_p, double k_chi_sb); 						// BUNU KONTROL ET DAHA SONRA
	inline double normalize_angle(double angle); 
	inline double normalize_angle_360(double angle); 
	inline double angle_diff(double a,double b); // Computes angle difference

	void rot2d(double yaw, Eigen::Vector2d &res);

	// Simulation Parameters
	double T_;
	double DT_;

	// Tuning Parameters
	double P_;
	double Q_;
	double D_CLOSE_;
	double D_SAFE_;
	double K_COLL_;
	double PHI_AH_;
	double PHI_OT_;
	double PHI_HO_;
	double PHI_CR_;
	double KAPPA_;
	double K_P_;
	double K_CHI_;
	double K_DP_;
	double K_DCHI_SB_;
	double K_DCHI_P_;
	double K_CHI_SB_;
	double K_CHI_P_;
	
	// State Variables
	double Chi_ca_last_;
	double P_ca_last_;

	double cost_;

	Eigen::VectorXd Chi_ca_;
	Eigen::VectorXd P_ca_;

	autonaut *asv;
	std::vector<obstacle*> obst_vect;

	};
  }
}

#endif
