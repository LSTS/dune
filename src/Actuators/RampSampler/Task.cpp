//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Costa                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// ISO C++ 98 headers.
#include <string>
#include <cstring>

//! Sampling duration
#define SAMPLING_DURATION 5

namespace Actuators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Costa
  namespace RampSampler
  {
    using DUNE_NAMESPACES;

    //! Navigation states.
    enum StateMachineStates
    {
      //! Stopped State.
      SM_STOPPED,
      //! Moving to a waypoint.
      SM_MOVING,
      //! Sampling State.
      SM_SAMPLING,
      //! Sampling Done.
      SM_SAMPLING_DONE,
      //! Maneuver Done.
      SM_MANEUVER_DONE
    };

    struct Arguments
    {
      //! Type of sample.
      std::string type_of_sample;
      //! Expected name of the plan to consider sampling plan
      std::string plan_name;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Timer used by the vehicle without the sampler to emulate the sampling process
      Time::Counter<double> m_sampling_timer;

      //! Vehicle is near the go-to flag
      bool m_NEAR_FL;
      //! Start plan flag
      bool m_START_FL;
      //! Stop plan flag
      bool m_STOP_FL;
      //! Is sampling plan started flag
      bool m_SAMPLING_PLAN_FL;
      //! Is another plan started flag
      bool m_ANOTHER_PLAN_FL;
      //! Otter in maneuver flag
      bool m_ON_MANEUVER_FL;
      //! Let maneuver end flag
      bool m_WAIT_END_FL;

      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Estimated state
      IMC::EstimatedState m_estate;
      //! Maneuver done flag to be sent via IMC
      IMC::ManeuverDone m_done;
      //! Message to be sent via Iridium/SMS
      IMC::TransmissionRequest tr;
      //! Message to be sent via Wifi
      IMC::DevDataText ddt;

      //! Type of sample
      std::string m_type_of_sample;
      //! Last path_ref value from PathControlState
      uint32_t last_flag_path_ref;

      //! Current Sampling plan ID
      std::string sampling_plan_id;

      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
                                                           m_NEAR_FL(false),
                                                           m_START_FL(false),
                                                           m_STOP_FL(false),
                                                           m_SAMPLING_PLAN_FL(false),
                                                           m_ANOTHER_PLAN_FL(false),
                                                           m_ON_MANEUVER_FL(false),
                                                           m_WAIT_END_FL(false),
                                                           m_sm_state(SM_STOPPED),
                                                           last_flag_path_ref(9999),
                                                           sampling_plan_id("")
      {
        param("Type of Sample", m_args.type_of_sample)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_MANEUVER)
            .values(DTR_RT("None, Clean, Dirty"))
            .defaultValue("None")
            .description(DTR("Type of the required sample."));

        param("Plan Name Prefix", m_args.plan_name)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("trajectory")
            .description(DTR("Prefix of the sampling plan's name."));

        bind<IMC::PathControlState>(this);
        bind<IMC::PlanControl>(this);
        // bind<IMC::PlanControlState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::Abort>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // spew("onUpdateParameters()");

        // If it is stopped and parameters are updated while its in maneuver
        if (m_sm_state == SM_STOPPED && m_ON_MANEUVER_FL && !m_STOP_FL && (m_SAMPLING_PLAN_FL || m_ANOTHER_PLAN_FL))
        {
          m_START_FL = true;
          trace("[VAR] : m_START_FL = true");
        }

        // update type of sample if changed
        if (paramChanged(m_args.type_of_sample))
        {
          m_type_of_sample = m_args.type_of_sample;
          trace("[PARAM] : type_of_sample = %s", m_type_of_sample.c_str());
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        // spew("onEntityReservation()");
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        // spew("onEntityResolution()");
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // spew("onResourceAcquisition()");
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // spew("onResourceInitialization()");
        m_sampling_timer.setTop(SAMPLING_DURATION);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        // spew("onResourceRelease()");
      }

      void
      consume(const IMC::PathControlState *msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        trace("IMC::PathControlState");
        // spew("source: %s | path_ref: %d | NEAR_FL: %d", resolveSystemId(msg->getSource()), msg->path_ref, msg->flags);

        if ((msg->flags & IMC::PathControlState::FL_NEAR) && (msg->path_ref != last_flag_path_ref))
        {
          m_NEAR_FL = true;
          trace("[VAR] : NEAR_FL = true");
          last_flag_path_ref = msg->path_ref;
        }
      }

      void
      consume(const IMC::PlanControl *msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        trace("IMC::PlanControl");
        // spew("type: %d | operation: %d | plan: %s | source: %s", msg->type, msg->op, msg->plan_id.c_str(), resolveSystemId(msg->getSource()));

        // If request to start plan was successful
        if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_START)
        {
          // Check if plan is completed
          if (msg->info.find("completed") != std::string::npos)
          {
            m_START_FL = false;
            trace("[VAR] : m_START_FL = false");
            m_STOP_FL = true;
            trace("[VAR] : m_STOP_FL = true");
            m_sm_state = SM_STOPPED;
            debug("[STATE] : m_sm_state = SM_STOPPED");
            m_SAMPLING_PLAN_FL = false;
            trace("[VAR] : m_SAMPLING_PLAN_FL = false");
            m_ANOTHER_PLAN_FL = false;
            trace("[VAR] : m_ANOTHER_PLAN_FL = false");
            // m_ON_MANEUVER_FL = false;
            // trace("[VAR] : m_ON_MANEUVER_FL = false");
          }
          // Or if its starting
          else
          {
            m_START_FL = true;
            trace("[VAR] : m_START_FL = true");
            m_STOP_FL = false;
            trace("[VAR] : m_STOP_FL = false");
          }

          // Check if the plan is the one to sample
          if (msg->plan_id.find(m_args.plan_name) != std::string::npos)
          {
            // And the plan started/is running.
            if (m_START_FL)
            {
              size_t pos = 0;
              if ((pos = msg->plan_id.find('-')) != std::string::npos)
              {
                sampling_plan_id = msg->plan_id.substr(pos + 1);
                // trace("[VAR] : sampling_plan_id = %s", sampling_plan_id.c_str());
              }
              else
              {
                err(DTR("Unable to parse plan's ID. Check plan's name!"));
                // TODO: Check what to do here.
              }

              inf("Started Sampling Plan with ID %s", sampling_plan_id.c_str());
              m_SAMPLING_PLAN_FL = true;
              trace("[VAR] : m_SAMPLING_PLAN_FL = true");
              m_ANOTHER_PLAN_FL = false;
              trace("[VAR] : m_ANOTHER_PLAN_FL = false");

              sendTrajectoryMessage("Exec");
            }
            // Or if it just ended.
            else
            {
              inf("Finished Sampling Plan with ID %s", sampling_plan_id.c_str());
              sendTrajectoryMessage("Done");

              m_sm_state = SM_STOPPED;
              debug("[STATE] : m_sm_state = SM_STOPPED");
            }
          }
          // Or if the plan is another one
          else
          {
            if (m_START_FL)
            {
              inf("Started another plan!");
              m_SAMPLING_PLAN_FL = false;
              trace("[VAR] : m_SAMPLING_PLAN_FL = false");
              m_ANOTHER_PLAN_FL = true;
              trace("[VAR] : m_ANOTHER_PLAN_FL = true");
            }
            else
            {
              inf("Finished another plan!");

              m_sm_state = SM_STOPPED;
              debug("[STATE] : m_sm_state = SM_STOPPED");
            }
          }
        }
        else if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_STOP) // If request to stop plan was successful
        {
          if (msg->plan_id.find(m_args.plan_name) != std::string::npos) // And the plan is the one we want
          {
            inf("Stop plan!");
            m_START_FL = false;
            trace("[VAR] : m_START_FL = false");
            sendTrajectoryMessage("Done");
          }

          m_sm_state = SM_STOPPED;
          debug("[STATE] : m_sm_state = SM_STOPPED");
        }
      }

      void
      consume(const IMC::EstimatedState *msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::VehicleState *msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        trace("IMC::VehicleState");
        // spew("mode: %d | source: %s ", msg->op_mode, resolveSystemId(msg->getSource()));

        if ((msg->op_mode == IMC::VehicleState::VS_MANEUVER) && !m_ON_MANEUVER_FL) // If vehicle enters MANEUVER mode
        {
          m_ON_MANEUVER_FL = true;
          trace("[VAR] : m_ON_MANEUVER_FL = true");
        }
        else if ((msg->op_mode != IMC::VehicleState::VS_MANEUVER) && m_ON_MANEUVER_FL) // If vehicle leaves MANEUVER mode
        {
          m_ON_MANEUVER_FL = false;
          trace("[VAR] : m_ON_MANEUVER_FL = false");
        }
      }

      void
      consume(const IMC::Abort *msg)
      {
        trace("IMC::Abort");
        inf("Mission Aborted");

        if (msg->getDestination() != getSystemId())
          return;

        m_sm_state = SM_STOPPED;
        debug("[STATE] : m_sm_state = SM_STOPPED");

        m_NEAR_FL = false;
        trace("[VAR] : m_NEAR_FL = false");
        m_START_FL = false;
        trace("[VAR] : m_START_FL = false");
        m_SAMPLING_PLAN_FL = false;
        trace("[VAR] : m_SMAPLING_PLAN_FL = false");
        m_ANOTHER_PLAN_FL = false;
        trace("[VAR] : m_ANOTHER_PLAN_FL = false");
        m_ON_MANEUVER_FL = false;
        trace("[VAR] : m_ON_MANEUVER_FL = false");
      }

      void
      sendTrajectoryMessage(std::string state_of_plan)
      {
        //! Message to be sent to Ripples
        std::string message;

        //! Timestamp to be sent in message
        double timestamp;
        timestamp = Time::Clock::getSinceEpoch();

        message = "(trajectory) " + std::to_string(timestamp) + " / " + sampling_plan_id + " / " + state_of_plan;

        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        tr.deadline = Time::Clock::getSinceEpoch() + 120;
        tr.txt_data = message;
        dispatch(tr);

        tr.comm_mean = IMC::TransmissionRequest::CMEAN_GSM;
        dispatch(tr);

        ddt.value = message;
        dispatch(ddt);

        inf("IRIDIUM: %s", message.c_str());
      }

      void
      sendSampleMessage(std::string type_of_sample)
      {
        //! Message to be sent to Ripples
        std::string message;

        //! Timestamp to be sent in message
        double timestamp;
        timestamp = Time::Clock::getSinceEpoch();
        // std::string m_timedate;
        // m_timedate = Time::Format::getTimeDate(timestamp);

        double vehicle_lat, vehicle_lon;
        Coordinates::toWGS84(m_estate, vehicle_lat, vehicle_lon);

        //! Latitude to be sent in message
        int vehicle_lat_deg;
        double vehicle_lat_min;
        DUNE::Math::Angles::convertDecimalToDM(DUNE::Math::Angles::degrees(vehicle_lat), vehicle_lat_deg, vehicle_lat_min);
        std::string message_lat = std::to_string(vehicle_lat_deg) + " " + std::to_string(vehicle_lat_min);

        //! Longitude to be sent in message
        int vehicle_lon_deg;
        double vehicle_lon_min;
        DUNE::Math::Angles::convertDecimalToDM(DUNE::Math::Angles::degrees(vehicle_lon), vehicle_lon_deg, vehicle_lon_min);
        std::string message_lon = std::to_string(vehicle_lon_deg) + " " + std::to_string(vehicle_lon_min);

        message = "(sample) " + std::to_string(timestamp) + " / " + message_lat + ", " + message_lon + " / " + type_of_sample;

        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        tr.deadline = Time::Clock::getSinceEpoch() + 120;
        tr.txt_data = message;
        dispatch(tr);

        tr.comm_mean = IMC::TransmissionRequest::CMEAN_GSM;
        dispatch(tr);

        ddt.value = message;
        dispatch(ddt);

        debug("IRIDIUM: %s", message.c_str());
      }

      //! Main State Machine
      void
      updateStateMachine(void)
      {
        switch (m_sm_state)
        {
        // Ready to operate, waiting to start
        case SM_STOPPED:
          if (m_START_FL && m_ON_MANEUVER_FL && (m_SAMPLING_PLAN_FL || m_ANOTHER_PLAN_FL))
          {
            m_sm_state = SM_MOVING;
            inf("The vehicle start moving");
            debug("[STATE] : m_sm_state = SM_MOVING");
            m_START_FL = false;
            trace("[VAR] : m_START_FL = false");
            m_NEAR_FL = false;
            trace("[VAR] : m_NEAR_FL = false");
          }
          break;
        case SM_MOVING:
          if (m_NEAR_FL) // Arrived to the waypoint
          {
            if (m_SAMPLING_PLAN_FL)
            {
              if (std::strcmp(m_type_of_sample.c_str(), "None") != 0)
              {
                inf("Way Point Info: Sample Type: %s.", m_type_of_sample.c_str());

                sendSampleMessage(m_type_of_sample);

                if (std::strcmp(m_type_of_sample.c_str(), "Dirty") == 0)
                {
                  sendTrajectoryMessage("Done");
                }

                m_sampling_timer.reset();
                m_sm_state = SM_SAMPLING;
                debug("[STATE] : m_sm_state = SM_SAMPLING");
              }
              else
              {
                inf("Way Point Info: No sampling here.");
                m_sm_state = SM_MANEUVER_DONE;
                debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
              }
            }
            else if (m_ANOTHER_PLAN_FL)
            {
              m_sm_state = SM_MANEUVER_DONE;
              debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
            }
            m_NEAR_FL = false;
          }
          break;
        case SM_SAMPLING:
          if (m_sampling_timer.overflow())
          {
            m_sm_state = SM_SAMPLING_DONE;
          }
          break;

        case SM_SAMPLING_DONE:
          m_sm_state = SM_MANEUVER_DONE;
          inf("Sampling Done.");
          debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
          break;

        case SM_MANEUVER_DONE:
          dispatch(m_done);
          inf("Maneuver done.");
          if (m_START_FL)
          {
            m_sm_state = SM_MOVING;
            m_START_FL = false;
            debug("[STATE] : m_sm_state = SM_MOVING");
          }
          else
          {
            m_sm_state = SM_STOPPED;
            debug("[STATE] : m_sm_state = SM_STOPPED");
          }
          break;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Update state machines.
          updateStateMachine();

          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
