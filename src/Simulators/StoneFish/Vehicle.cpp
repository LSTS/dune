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

#include "Vehicle.h"

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>

// Stonefish headers.
#include <Stonefish/actuators/Propeller.h>
#include <Stonefish/actuators/Push.h>
#include <Stonefish/actuators/Rudder.h>
#include <Stonefish/actuators/Servo.h>
#include <Stonefish/actuators/SimpleThruster.h>
#include <Stonefish/actuators/Thruster.h>
#include <Stonefish/entities/SolidEntity.h>

namespace Simulators
{
  namespace StoneFish
  {
    Vehicle::Vehicle(sf::Robot* robot):
      m_robot(robot)
    {
      scanActuators();
    }

    Vehicle::State
    Vehicle::getState(void) const
    {
      State state;

      sf::Transform transform = m_robot->getTransform();
      state.position = transform.getOrigin();

      sf::Scalar roll, pitch, yaw;
      transform.getBasis().getEulerZYX(yaw, pitch, roll);
      state.orientation = sf::Vector3(roll, pitch, yaw);

      sf::SolidEntity* base = m_robot->getBaseLink();
      if (base == nullptr)
      {
        state.linearVelocity = sf::Vector3(0, 0, 0);
        state.angularVelocity = sf::Vector3(0, 0, 0);
        return state;
      }

      // Stonefish reports velocities in the world frame; convert to body frame.
      sf::Matrix3 worldToBody = transform.getBasis().transpose();
      state.linearVelocity = worldToBody * base->getLinearVelocity();
      state.angularVelocity = worldToBody * base->getAngularVelocity();
      return state;
    }

    std::vector<Vehicle::LinkDynamics>
    Vehicle::getDynamics(double water_density) const
    {
      std::vector<LinkDynamics> links;

      sf::SolidEntity* link;
      for (size_t i = 0; (link = m_robot->getLink(i)) != nullptr; ++i)
      {
        LinkDynamics d;
        d.name = link->getName();
        d.mass = link->getMass();
        d.volume = link->getVolume();
        d.submergedVolume = link->getSubmergedVolume();
        d.displaced = d.volume * water_density;
        d.inertia = link->getInertia();
        d.addedMass = link->getAddedMass();
        d.addedInertia = link->getAddedInertia();
        d.cg = link->getCG2OTransform().getOrigin();
        d.cb = link->getCB();
        links.push_back(d);
      }

      return links;
    }

    void
    Vehicle::logDynamics(double water_density) const
    {
      DUNE_MSG("Vehicle", "--- computed link dynamics (water " << water_density << " kg/m^3) ---");

      double total_mass = 0.0;
      double total_disp = 0.0;

      const std::vector<LinkDynamics> links = getDynamics(water_density);
      for (size_t i = 0; i < links.size(); ++i)
      {
        const LinkDynamics& d = links[i];
        total_mass += d.mass;
        total_disp += d.displaced;

        DUNE_MSG("Vehicle", "link " << i << " '" << d.name << "': mass " << d.mass
                                    << " kg, displaced " << d.displaced << " kg (net "
                                    << (d.displaced - d.mass) << "), volume " << d.volume
                                    << " m^3 (submerged " << d.submergedVolume << ")");
        DUNE_MSG("Vehicle", "  inertia [" << d.inertia.x() << ", " << d.inertia.y() << ", "
                                          << d.inertia.z() << "] kg.m^2, added mass ["
                                          << d.addedMass.x() << ", " << d.addedMass.y() << ", "
                                          << d.addedMass.z() << "] kg, added inertia ["
                                          << d.addedInertia.x() << ", " << d.addedInertia.y()
                                          << ", " << d.addedInertia.z() << "]");
        DUNE_MSG("Vehicle", "  CG (origin frame) [" << d.cg.x() << ", " << d.cg.y() << ", "
                                                    << d.cg.z() << "] m, CB (CG frame) ["
                                                    << d.cb.x() << ", " << d.cb.y() << ", "
                                                    << d.cb.z() << "] m");
      }

      DUNE_MSG("Vehicle", "totals: mass " << total_mass << " kg, displaced " << total_disp
                                          << " kg, net buoyancy " << (total_disp - total_mass)
                                          << " kg ("
                                          << (total_disp > total_mass ? "floats" : "sinks") << ")");
    }

    void
    Vehicle::applyBodyLift(const BodyLift& c) const
    {
      sf::SolidEntity* base = m_robot->getBaseLink();
      if (base == nullptr)
        return;

      // Body-frame velocities (Stonefish reports them in the world frame).
      const sf::Matrix3 bodyToWorld = m_robot->getTransform().getBasis();
      const sf::Matrix3 worldToBody = bodyToWorld.transpose();
      const sf::Vector3 vel = worldToBody * base->getLinearVelocity();
      const sf::Vector3 omega = worldToBody * base->getAngularVelocity();

      const double u = vel.x();
      const double v = vel.y();
      const double w = vel.z();
      const double q = omega.y();
      const double r = omega.z();

      // Lifting-body force and moment, proportional to the axial speed u (same model as Simulators/VSIM)
      const sf::Vector3 force(0.0, (c.Yuv * v + c.Yur * r) * u, (c.Zuw * w + c.Zuq * q) * u);
      const sf::Vector3 torque(0.0, (c.Muw * w + c.Muq * q) * u, (c.Nuv * v + c.Nur * r) * u);

      base->ApplyCentralForce(bodyToWorld * force);
      base->ApplyTorque(bodyToWorld * torque);
    }

    void
    Vehicle::applyMunk(void) const
    {
      sf::SolidEntity* base = m_robot->getBaseLink();
      if (base == nullptr)
        return;

      const sf::Matrix3 bodyToWorld = m_robot->getTransform().getBasis();
      const sf::Matrix3 worldToBody = bodyToWorld.transpose();
      const sf::Vector3 vel = worldToBody * base->getLinearVelocity();
      const sf::Vector3 omega = worldToBody * base->getAngularVelocity();

      // Per-axis added mass, assumed aligned with the body axes (slender
      // hull of revolution). The engine already integrates its mean as
      // isotropic mass (SolidEntity::getAugmentedMass, submerged only).
      const sf::Vector3 a = base->getAddedMass();
      const double iso = (base->getPhysicsMode() == sf::PhysicsMode::SUBMERGED)
                           ? (a.x() + a.y() + a.z()) / 3.0
                           : 0.0;
      const sf::Vector3 d(a.x() - iso, a.y() - iso, a.z() - iso);

      // Kirchhoff: F = -w x (A v), M = -v x (A v). The isotropic part of A
      // adds no moment, so the moment uses A and the force only A - iso.
      const sf::Vector3 force = -omega.cross(d * vel);
      const sf::Vector3 torque = -vel.cross(a * vel);

      base->ApplyCentralForce(bodyToWorld * force);
      base->ApplyTorque(bodyToWorld * torque);
    }

    void
    Vehicle::setThrust(unsigned index, double value)
    {
      if (index >= m_thrusters.size())
      {
        DUNE_WRN("Vehicle", "no thruster with id " << index);
        return;
      }

      std::lock_guard<std::mutex> lock(m_mutex);
      m_pending_thrust[index] = value;
    }

    void
    Vehicle::setServo(unsigned index, double value)
    {
      if (index >= m_servos.size())
      {
        DUNE_WRN("Vehicle", "no servo with id " << index);
        return;
      }

      std::lock_guard<std::mutex> lock(m_mutex);
      m_pending_servo[index] = value;
    }

    void
    Vehicle::applySetpoints(void)
    {
      std::map<unsigned, double> thrust;
      std::map<unsigned, double> servo;

      {
        std::lock_guard<std::mutex> lock(m_mutex);
        thrust.swap(m_pending_thrust);
        servo.swap(m_pending_servo);
      }

      for (const auto& setpoint : thrust)
        applyThrust(m_thrusters[setpoint.first], setpoint.second);

      for (const auto& setpoint : servo)
        applyServo(m_servos[setpoint.first], setpoint.second);
    }

    bool
    Vehicle::getThrusterRpm(size_t index, double& rpm) const
    {
      sf::Actuator* actuator = m_thrusters[index];
      sf::Scalar omega;

      switch (actuator->getType())
      {
        case sf::ActuatorType::THRUSTER:
          omega = static_cast<sf::Thruster*>(actuator)->getOmega();
          break;
        case sf::ActuatorType::PROPELLER:
          omega = static_cast<sf::Propeller*>(actuator)->getOmega();
          break;
        default:
          // Simple thrusters and pushers have no rotor model.
          return false;
      }

      rpm = omega * 60.0 / (2.0 * M_PI);
      return true;
    }

    double
    Vehicle::getServoPosition(size_t index) const
    {
      sf::Actuator* actuator = m_servos[index];
      if (actuator->getType() == sf::ActuatorType::RUDDER)
        return static_cast<sf::Rudder*>(actuator)->getAngle();

      return static_cast<sf::Servo*>(actuator)->getPosition();
    }

    void
    Vehicle::scanActuators(void)
    {
      sf::Actuator* actuator;
      for (size_t i = 0; (actuator = m_robot->getActuator(i)) != nullptr; i++)
      {
        switch (actuator->getType())
        {
          case sf::ActuatorType::THRUSTER:
          case sf::ActuatorType::PROPELLER:
          case sf::ActuatorType::SIMPLE_THRUSTER:
          case sf::ActuatorType::PUSH:
            DUNE_MSG("Vehicle", "thruster " << m_thrusters.size() << ": " << actuator->getName());
            m_thrusters.push_back(actuator);
            break;

          case sf::ActuatorType::SERVO:
          case sf::ActuatorType::RUDDER:
            DUNE_MSG("Vehicle", "servo " << m_servos.size() << ": " << actuator->getName());
            m_servos.push_back(actuator);
            break;

          default:
            DUNE_WRN("Vehicle", "unsupported actuator: " << actuator->getName());
            break;
        }
      }
    }

    void
    Vehicle::applyThrust(sf::Actuator* actuator, double value)
    {
      switch (actuator->getType())
      {
        case sf::ActuatorType::THRUSTER:
          static_cast<sf::Thruster*>(actuator)->setSetpoint(value);
          break;
        case sf::ActuatorType::PROPELLER:
          static_cast<sf::Propeller*>(actuator)->setSetpoint(value);
          break;
        case sf::ActuatorType::SIMPLE_THRUSTER:
          static_cast<sf::SimpleThruster*>(actuator)->setSetpoint(value, 0);
          break;
        case sf::ActuatorType::PUSH:
          static_cast<sf::Push*>(actuator)->setForce(value);
          break;
        default:
          break;
      }
    }

    void
    Vehicle::applyServo(sf::Actuator* actuator, double value)
    {
      if (actuator->getType() == sf::ActuatorType::RUDDER)
      {
        static_cast<sf::Rudder*>(actuator)->setSetpoint(value);
        return;
      }

      static_cast<sf::Servo*>(actuator)->setDesiredPosition(value);
    }
  }
}
