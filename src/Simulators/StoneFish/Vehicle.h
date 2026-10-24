//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef SIMULATORS_STONEFISH_VEHICLE_H
#define SIMULATORS_STONEFISH_VEHICLE_H

// C++ headers.
#include <map>
#include <mutex>
#include <string>
#include <vector>

// Stonefish headers.
#include <Stonefish/actuators/Actuator.h>
#include <Stonefish/core/Robot.h>

namespace Simulators
{
  namespace StoneFish
  {
    //! Wrapper around a Stonefish robot.
    //!
    //! Exposes the dynamic state of the robot and a thread-safe interface
    //! to command its actuators. Setpoints arrive from the DUNE task
    //! thread (message consumers) and are queued; applySetpoints() hands
    //! them to the simulation and must be called from the simulation
    //! thread, between physics steps.
    //!
    //! Actuators are grouped in two banks, indexed by order of appearance
    //! in the scenario file:
    //! - thrust bank: thruster, propeller, simple thruster and push;
    //! - servo bank: servo and rudder.
    class Vehicle
    {
    public:
      //! Dynamic state of the robot.
      struct State
      {
        //! Position in the world NED frame [m].
        sf::Vector3 position;
        //! Euler angles: roll, pitch, yaw [rad].
        sf::Vector3 orientation;
        //! Body-fixed linear velocity [m/s].
        sf::Vector3 linearVelocity;
        //! Body-fixed angular velocity [rad/s].
        sf::Vector3 angularVelocity;
      };

      //! Hull body-lift coefficients. Same 8-term formulation and units as
      //! Simulators/VSIM (UUV, "Body Lift Coefficients"), configured under
      //! [StoneFish/Model/<Vehicle Type>] with a StoneFish-specific tuning.
      //! Lift and cross-flow moments a slender lifting body develops at an
      //! angle of attack/sideslip, all proportional to the axial speed u.
      //! Stonefish derives only quadratic drag and added mass from the hull
      //! mesh, so these (including the sideslip-driven yaw moment Nuv) are
      //! absent — without them the hull resists yaw and the vehicle skids
      //! through turns instead of turning.
      struct BodyLift
      {
        union
        {
          //! Raw contiguous storage used when loading from configuration.
          double data[8];
          struct
          {
            //! Sway force from sway velocity, Y = Yuv * v * u [N].
            double Yuv;
            //! Sway force from yaw rate, Y = Yur * r * u [N].
            double Yur;
            //! Heave force from heave velocity, Z = Zuw * w * u [N].
            double Zuw;
            //! Heave force from pitch rate, Z = Zuq * q * u [N].
            double Zuq;
            //! Pitch moment from heave velocity, M = Muw * w * u [N.m].
            double Muw;
            //! Pitch moment from pitch rate, M = Muq * q * u [N.m].
            double Muq;
            //! Yaw moment from sway velocity, N = Nuv * v * u [N.m].
            double Nuv;
            //! Yaw moment from yaw rate, N = Nur * r * u [N.m].
            double Nur;
          };
        };
      };

      //! Dynamics Stonefish computed for one link of the robot.
      struct LinkDynamics
      {
        //! Link name.
        std::string name;
        //! Mass [kg].
        double mass;
        //! Total volume [m^3].
        double volume;
        //! Currently submerged volume [m^3].
        double submergedVolume;
        //! Mass of displaced fluid for the total volume [kg].
        double displaced;
        //! Diagonal inertia [kg.m^2].
        sf::Vector3 inertia;
        //! Hydrodynamic added mass [kg].
        sf::Vector3 addedMass;
        //! Hydrodynamic added inertia [kg.m^2].
        sf::Vector3 addedInertia;
        //! Centre of gravity in the origin frame [m].
        sf::Vector3 cg;
        //! Centre of buoyancy in the CG frame [m].
        sf::Vector3 cb;
      };

      //! Constructor.
      //! @param[in] robot robot created by the simulation, must outlive this object.
      explicit Vehicle(sf::Robot* robot);

      //! Robot name as defined in the scenario file.
      std::string
      getName(void) const
      {
        return m_robot->getName();
      }

      //! Current dynamic state of the robot.
      State
      getState(void) const;

      //! Log the dynamics that Stonefish computed for each link of the
      //! robot: mass, inertia, hydrodynamic added mass/inertia, volume and
      //! the resulting buoyancy, plus the CG and centre of buoyancy. These
      //! are otherwise derived silently from the meshes and material
      //! densities, so this dump is the way to catch a mis-set mass, an
      //! over-light link or a CG/CB offset that would destabilise the sim.
      //! @param[in] water_density fluid density [kg/m^3] used to turn the
      //! displaced volume into displaced mass.
      void
      logDynamics(double water_density) const;

      //! Collect the per-link dynamics Stonefish computed for the robot, in
      //! link order. Same data as logDynamics(), exposed for structured output.
      //! @param[in] water_density fluid density [kg/m^3] used to turn the
      //! displaced volume into displaced mass.
      //! @return one entry per link.
      std::vector<LinkDynamics>
      getDynamics(double water_density) const;

      //! Queue a setpoint for an actuator of the thrust bank (any thread).
      //! Thrusters and propellers take values in [-1, 1] (scenario must use
      //! normalized setpoints); simple thrusters and pushers take force [N].
      //! @param[in] index actuator index within the thrust bank.
      //! @param[in] value setpoint.
      void
      setThrust(unsigned index, double value);

      //! Queue a position setpoint for an actuator of the servo bank (any thread).
      //! @param[in] index actuator index within the servo bank.
      //! @param[in] value desired position [rad].
      void
      setServo(unsigned index, double value);

      //! Apply all queued setpoints (simulation thread only).
      void
      applySetpoints(void);

      // TODO: Review this comment
      //! Adds the lifting-body terms the mesh hydrodynamics
      //! miss, so the hull develops a turning moment and lateral lift from
      //! sideslip instead of merely damping them. See BodyLift.

      //! Apply the hull body-lift force and moment for the current state
      //! @param[in] c body-lift coefficients.
      void
      applyBodyLift(const BodyLift& c) const;

      //! Number of actuators in the thrust bank.
      size_t
      getThrusterCount(void) const
      {
        return m_thrusters.size();
      }

      //! Name of a thrust bank actuator.
      std::string
      getThrusterName(size_t index) const
      {
        return m_thrusters[index]->getName();
      }

      //! Name of a servo bank actuator.
      std::string
      getServoName(size_t index) const
      {
        return m_servos[index]->getName();
      }

      //! Rotational speed of a thrust bank actuator.
      //! @param[in] index actuator index within the thrust bank.
      //! @param[out] rpm rotational speed [rpm].
      //! @return true if the actuator measures rotational speed.
      bool
      getThrusterRpm(size_t index, double& rpm) const;

      //! Number of actuators in the servo bank.
      size_t
      getServoCount(void) const
      {
        return m_servos.size();
      }

      //! Current position of a servo bank actuator [rad].
      double
      getServoPosition(size_t index) const;

    private:
      //! Sort robot actuators into the thrust and servo banks.
      void
      scanActuators(void);

      //! Hand a thrust setpoint to the simulation (simulation thread only).
      void
      applyThrust(sf::Actuator* actuator, double value);

      //! Hand a servo setpoint to the simulation (simulation thread only).
      void
      applyServo(sf::Actuator* actuator, double value);

      //! Simulated robot.
      sf::Robot* m_robot;
      //! Thrust bank: thrusters, propellers, simple thrusters and pushers.
      std::vector<sf::Actuator*> m_thrusters;
      //! Servo bank: servos and rudders.
      std::vector<sf::Actuator*> m_servos;
      //! Queued thrust setpoints, by thrust bank index.
      std::map<unsigned, double> m_pending_thrust;
      //! Queued servo setpoints, by servo bank index.
      std::map<unsigned, double> m_pending_servo;
      //! Guards the queued setpoints.
      std::mutex m_mutex;
    };
  }
}

#endif  // SIMULATORS_STONEFISH_VEHICLE_H
