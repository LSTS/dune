//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "AcousticProtocol.hpp"
#include "WifiProtocol.hpp"

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      using DUNE_NAMESPACES;

      constexpr unsigned c_sync_max_retries = 5;
      static const std::string c_fallback_maneuvers[] = {
        "Auto",
        "Goto",
        "Stationkeeping"
      };
      static const std::string c_fallback_plan_name = "fallback_plan";
      static const std::string c_fallback_maneuver_name = "fallback_maneuver";
      
      //! Finite state machine states.
      enum FallbackOptions
      {
        //! Fallback maneuver is auto.
        FO_AUTO,
        //! Fallback maneuver is goto.
        FO_GOTO,
        //! Fallback maneuver is stationkeeping.
        FO_STATIONKEEPING,
        //! Number of fallback maneuvers
        FO_NUM
      };

      //! Finite state machine states.
      enum StateMachineStates
      {
        //! Waiting for activation.
        SM_IDLE,
        //! Synchronization state.
        SM_SYNC,
        //! Approaching state.
        SM_APPROACHING,
        //! Start setup state.
        SM_START,
        //! Moving state.
        SM_MOVING
      };

      //! Finite state machine states.
      enum SyncSetupStates
      {
        //! Send code SYNC to participant.
        SYNCS_SEND,
        //! Wait acknowledgement from participant.
        SYNCS_ACK
      };

      struct Arguments
      {
        //! Acknowledgement timeout.
        double ack_timeout;
        //! Ignore Acknowledgement.
        bool ignore_ack;
        //! Leader setup timeout.
        double sync_setup_timeout;
        //! Start setup timeout.
        double start_setup_timeout;
        //! Send ready interval.
        double send_ready_interval;
        //! Position dissemination periodicity.
        double pos_dissemination_periodicity;
        //! Leader reference timeout.
        double leader_reference_timeout;
        //! Maximum delta for speed adjustment.
        double speed_max_delta;
        //! Minimum speed to maintain vehicle submerged
        double submerged_speed_min;
        //! Multicast Address.
        Address udp_maddr;
        //! UDP port.
        uint16_t udp_port;
        //! Use only Wi-Fi communications.
        bool use_wifi_only;
        //! TDMA time per slot.
        double tdma_time_per_slot;
        //! Fallback maneuver type.
        std::string fallback_maneuver;
        //! Position for fallback maneuver.
        std::vector<double> fallback_position;
        //! Name of the section with participant addresses.
        std::string addr_section;
      };

      struct Task: public DUNE::Maneuvers::BasicSwarm
      {
        //! Last state update.
        IMC::EstimatedState m_estate;
        //! Number of current waypoint number.
        uint8_t m_curr;
        //! Task arguments.
        Arguments m_args;
        //! Acoustic protocol.
        AcousticProtocol m_acomms;
        //! Acoustic protocol.
        WifiProtocol* m_wcomms;
        //! Received ack from this id.
        uint16_t m_ack_id_rcv;
        //! Waiting acknowledgement from this id.
        uint16_t m_ack_id_expected;
        //! Acknowledgement timer.
        Time::Counter<double> m_ack_timeout;
        //! Leader id.
        unsigned int m_leader_id;
        //! Ready state of participants.
        std::map<int, bool> m_ready_state;
        //! Current state machine state.
        StateMachineStates m_state;
        //! Leader Setup state.
        SyncSetupStates m_sync_state;
        //! Participant index.
        int m_sync_idx;
        //! Leader Setup retries.
        size_t m_sync_retries;
        //! Leader Setup timer.
        Time::Counter<double> m_sync_timeout;
        //! Start Setup timeout.
        Time::Counter<double> m_start_timeout;
        //! Send ready interval.
        Time::Counter<double> m_start_send_ready;
        //! Start flag received from leader.
        bool m_flag_start;
        //! Send position timer.
        Time::Counter<double> m_send_pos_timer;
        //! Leader reference timeout timer.
        Time::Counter<double> m_leader_ref_timer;
        //! Leader position.
        CommsProtocol::PositionPackage m_leader_pos;
        //! Speed reference.
        double m_speed_ref;
        //! Vehicle max speed;
        double m_max_speed;

        Task(const std::string& name, DUNE::Tasks::Context& ctx):
          BasicSwarm(name, ctx),
          m_curr(0),
          m_acomms(this),
          m_ack_id_rcv(IMC::AddressResolver::invalid()),
          m_ack_id_expected(IMC::AddressResolver::invalid()),
          m_leader_id(IMC::AddressResolver::invalid()),
          m_state(SM_IDLE),
          m_sync_state(SYNCS_SEND),
          m_sync_idx(0),
          m_sync_retries(c_sync_max_retries),
          m_flag_start(false),
          m_send_pos_timer(0.0f),
          m_leader_ref_timer(0.0f),
          m_speed_ref(0.0f)
        {
          param("Acknowledgement Timeout", m_args.ack_timeout)
          .units(Units::Second)
          .defaultValue("5.0")
          .description("Acknowledgement timeout");

          param("Ignore Acknowledgement", m_args.ignore_ack)
          .defaultValue("false")
          .description("Leader ignores acknowledgement in synchonization phase");

          param("Sync Setup Timeout", m_args.sync_setup_timeout)
          .units(Units::Second)
          .defaultValue("40.0")
          .description("Sync setup timeout");

          param("Start Setup Timeout", m_args.start_setup_timeout)
          .units(Units::Second)
          .defaultValue("40.0")
          .description("Start setup timeout");

          param("Send Ready Interval", m_args.send_ready_interval)
          .units(Units::Second)
          .defaultValue("2.0")
          .description("Send code READY interval");

          param("Position Dissemination Periodicity", m_args.pos_dissemination_periodicity)
          .units(Units::Second)
          .minimumValue("1.0")
          .defaultValue("5.0")
          .description("Periodicity of position dissemination.");

          param("Leader Reference Timeout", m_args.leader_reference_timeout)
          .units(Units::Second)
          .minimumValue("5.0")
          .defaultValue("20.0")
          .description("Leader reference timeout");

          param("Speed Maximum Delta", m_args.speed_max_delta)
          .units(Units::MeterPerSecond)
          .minimumValue("0.1")
          .defaultValue("0.5")
          .maximumValue("1.0")
          .description("Maximum delta for speed adjustment");

          param("Minimum Speed To Maintain Submerged", m_args.submerged_speed_min)
          .units(Units::MeterPerSecond)
          .minimumValue("0.7")
          .defaultValue("0.7")
          .maximumValue("1.0")
          .description("Minimum speed to maintain vehicle submerged");

          param("Wifi Communications -- Multicast Address", m_args.udp_maddr)
          .defaultValue("225.0.2.1")
          .description("UDP multicast address for wifi communications");
  
          param("Wifi Communications -- Port", m_args.udp_port)
          .defaultValue("8022")
          .description("UDP port for wifi communications");

          param("Use Wifi Only", m_args.use_wifi_only)
          .defaultValue("false")
          .description("Disable acoustic data exchange and use Wi-Fi for all swarm communications");

          param("Acoustic Communications -- TDMA Time Per Slot", m_args.tdma_time_per_slot)
          .units(Units::Second)
          .defaultValue("15.0")
          .description("Period while acoustic channel is reserved for each participant");

          m_ctx.config.get("General", "Maximum Speed", "2.0", m_max_speed);

          std::string fallback_values;
          for (uint8_t i = 0; i < FO_NUM; ++i)
          {
            if (i > 0)
              fallback_values += ", ";
            fallback_values += c_fallback_maneuvers[i];
          }

          param("Fallback Maneuver Type", m_args.fallback_maneuver)
          .defaultValue("Auto")
          .values(fallback_values)
          .description("Fallback maneuver type. "
                       "If the leader is lost, the vehicle will execute this maneuver. "
                       "In Auto mode, the vehicle will try to execute the original plan.");

          param("Fallback Position", m_args.fallback_position)
          .units(Units::Degree)
          .size(2)
          .description("Position for fallback maneuver.");

          param("Address Section", m_args.addr_section)
          .defaultValue("Swarm Addresses")
          .description("Name of the configuration section with participant addresses");


          bind<IMC::UamRxFrame>(this);
        }

        void
        onUpdateParameters(void)
        {
          BasicSwarm::onUpdateParameters();

          m_acomms.setTimePerSlot(m_args.tdma_time_per_slot);

          if (paramChanged(m_args.pos_dissemination_periodicity))
            m_send_pos_timer.setTop(m_args.pos_dissemination_periodicity);
        }

        //! On resource initialization
        void
        onResourceInitialization(void)
        {
          Maneuver::onResourceInitialization();


          // Process modem addresses.
          std::vector<Address> addresses;
          std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
          for (unsigned i = 0; i < addrs.size(); ++i)
          {
            Address addr;
            m_ctx.config.get(m_args.addr_section, addrs[i], "0.0.0.0", addr);
            addresses.push_back(addr);
          }
          m_wcomms = new WifiProtocol(this, m_args.udp_maddr, m_args.udp_port, addresses);
        }

        void
        onResourceRelease(void)
        {
          Maneuver::onResourceRelease();
          DUNE::Memory::clear(m_wcomms);
        }

        void
        parseWifiPacket(const std::vector<uint8_t>& data)
        {
          if (!m_wcomms->validate(data))
            return;

          std::vector<uint8_t> packet = m_wcomms->getData(data);
          if (packet.empty())
          {
            debug("Invalid wifi packet size");
            return;
          }

          switch (packet[0])
          {
            case CommsProtocol::Codes::CODE_ACK:
              recvAck(data);
              break;
            case CommsProtocol::Codes::CODE_SYNC:
              recvSync(data);
              break;
            case CommsProtocol::Codes::CODE_READY:
              recvReady(data);
              break;
            case CommsProtocol::Codes::CODE_START:
              recvStart(data);
              break;
            case CommsProtocol::Codes::CODE_POS:
              if (m_args.use_wifi_only)
                recvPos(data);
              break;
            case CommsProtocol::Codes::CODE_PARTICIPANT:
              if (m_args.use_wifi_only)
                recvParticipant(data);
              break;
            default:
              debug("Invalid wifi code: %u", packet[0]);
              break;
          }
        }

        void
        consume(const IMC::UamRxFrame* msg)
        {
          if (m_args.use_wifi_only)
            return;

          if (!m_acomms.validate(msg))
            return;

          switch (msg->data[1])
          {
            case CommsProtocol::Codes::CODE_POS:
              recvPos(msg);
              break;
            case CommsProtocol::Codes::CODE_PARTICIPANT:
              recvParticipant(msg);
              break;
            default:
              debug("Invalid acoustic code: %u", msg->data[1]);
              break;
          }
        }

        void
        recvAck(const std::vector<uint8_t>& data)
        {
          m_ack_id_rcv = m_wcomms->getSource(data);
          trace("Received code ACK from: %s", resolveSystemId(m_ack_id_rcv));
        }

        void
        recvSync(const std::vector<uint8_t>& data)
        {
          if (isLeader())
            return;

          if (m_state != SM_SYNC)
            return;

          m_leader_id = m_wcomms->getSource(data);
          std::vector<uint8_t> packet = m_wcomms->getData(data);
          double sync_time;
          if (packet.size() < sizeof(double) + 1)
          {
            war("Received code SYNC from %s with invalid data size", resolveSystemId(m_leader_id));
            return;
          }
          std::memcpy(&sync_time, &packet[1], sizeof(double));

          trace("Received code SYNC from: %s. Sync time: %f", resolveSystemId(m_leader_id), sync_time);
          m_acomms.setSyncTime(sync_time);
          m_wcomms->sendAck(resolveSystemId(m_leader_id));
        }

        void
        recvReady(const std::vector<uint8_t>& data)
        {
          if (!isLeader())
            return;

          if (m_state != SM_START)
            return;

          uint16_t sys_id = m_wcomms->getSource(data);
          std::string sys_name = resolveSystemId(sys_id);
          std::map<int, bool>::iterator itr = m_ready_state.find(sys_id);
          if (itr == m_ready_state.end())
          {
            war("Received code READY from non-participant: %s", sys_name.c_str());
            return;
          }

          trace("Received code READY from: %s", sys_name.c_str());
          itr->second = true;
        }

        void
        recvStart(const std::vector<uint8_t>& data)
        {
          if (m_leader_id != m_wcomms->getSource(data))
            return;

          trace("Received code START from: %s.", resolveSystemId(m_leader_id));
          m_flag_start = true;
        }

        void
        recvPos(const std::vector<uint8_t>& data)
        {
          uint16_t src_id = m_wcomms->getSource(data);
          if (m_leader_id != src_id)
            return;

          std::vector<uint8_t> packet = m_wcomms->getData(data);
          if (packet.size() < sizeof(m_leader_pos) + 1)
          {
            war("Received code POS from %u with invalid data size", src_id);
            return;
          }

          //! Leader only broadcasts position after Start,
          //! thus if Pos has been received, but Start has not been received, Start
          if (!m_flag_start)
            m_flag_start = true;

          m_leader_ref_timer.setTop(m_args.leader_reference_timeout);
          std::memcpy(&m_leader_pos, &packet[1], sizeof(m_leader_pos));

          trace("Received code POS from: %s | waypoint index: %u lat : %f lon: %f speed %f",
                resolveSystemId(src_id),
                m_leader_pos.waypoint_idx,
                m_leader_pos.lat,
                m_leader_pos.lon,
                m_leader_pos.speed);

          updateSpeed();
        }

        void
        recvParticipant(const std::vector<uint8_t>& data)
        {
          uint16_t src_id = m_wcomms->getSource(data);
          if (m_leader_id != src_id)
            return;

          //! Only update participant if moving
          if (m_state != SM_MOVING)
            return;

          std::vector<uint8_t> packet = m_wcomms->getData(data);
          if (packet.size() < sizeof(CommsProtocol::ParticipantPackage) + 1)
          {
            war("Received code PARTICIPANT from %u with invalid data size", src_id);
            return;
          }

          CommsProtocol::ParticipantPackage part;
          std::memcpy(&part, &packet[1], sizeof(part));
          trace("Received code PARTICIPANT from: %s | vid: %u off_x : %f off_y: %f off_z %f",
                resolveSystemId(src_id),
                part.vid,
                part.off_x,
                part.off_y,
                part.off_z);

          updateParticipant(part.vid, part.off_x, part.off_y, part.off_z);
        }

        void
        recvPos(const IMC::UamRxFrame* msg)
        {
          trace("Received code POS from: %s | waypoint index: %u lat : %f lon: %f speed %f", msg->sys_src.c_str(),
                                                                                             m_leader_pos.waypoint_idx,
                                                                                             m_leader_pos.lat,
                                                                                             m_leader_pos.lon,
                                                                                             m_leader_pos.speed);
          
          //! Only process position if it is from the leader
          if (m_leader_id != resolveSystemName(msg->sys_src))
            return;
          
          //! Leader only broadcasts position after Start,
          //! thus if Pos has been received, but Start has not been received, Start
          if (!m_flag_start)
            m_flag_start = true;
          
          m_leader_ref_timer.setTop(m_args.leader_reference_timeout);
          std::memcpy(&m_leader_pos, &msg->data[2], sizeof(m_leader_pos));
          
          updateSpeed();
        }

        void
        recvParticipant(const IMC::UamRxFrame* msg)
        {
          if (m_leader_id != resolveSystemName(msg->sys_src))
            return;
          
          //! Only update participant if moving
          if (m_state != SM_MOVING)
            return;
          
          AcousticProtocol::ParticipantPackage part;
          std::memcpy(&part, &msg->data[2], sizeof(part));
          trace("Received code PARTICIPANT from: %s | vid: %u off_x : %f off_y: %f off_z %f", msg->sys_src.c_str(),
                                                                                              part.vid,
                                                                                              part.off_x,
                                                                                              part.off_y,
                                                                                              part.off_z);
          updateParticipant(part.vid, part.off_x, part.off_y, part.off_z);
        }

        void
        expectAck(uint16_t sys_id)
        {
          m_ack_id_expected = sys_id;
          m_ack_id_rcv = IMC::AddressResolver::invalid();
          m_ack_timeout.setTop(m_args.ack_timeout);
        }

        bool
        gotAck(void)
        {
          if (m_ack_id_expected == IMC::AddressResolver::invalid())
            return false;

          if (m_ack_id_rcv == IMC::AddressResolver::invalid())
            return false;

          return m_ack_id_rcv == m_ack_id_expected;
        }

        //! Close matlab logged vectors
        void
        onReset(void)
        {
          m_state = SM_IDLE;
          m_acomms.resetSyncTime();
          m_acomms.resetMaxSlots();
          m_acomms.resetSlot();
          m_curr = 0;
        }

        void
        onInit(const IMC::VehicleFormation* maneuver)
        {
          (void) maneuver;

          // Set time slot configuration
          m_acomms.setMaxSlots(participants());
          m_acomms.setSlot(formation_index());

          // Change state to LeaderSetup
          debug("Starting sync...");
          setSyncState();
        }

        void
        setSyncState(void)
        {
          setControl(IMC::CL_NONE);
          m_sync_state = SYNCS_SEND;
          m_sync_idx = 0;
          m_sync_retries = c_sync_max_retries;
          m_sync_timeout.setTop(m_args.sync_setup_timeout);
          m_state = SM_SYNC;

          if (isLeader())
          {
            m_leader_id = getSystemId();
            m_acomms.setSyncTime(Time::Clock::getSinceEpoch());
          }
          else
          {
            m_leader_id = IMC::AddressResolver::invalid();
          }

          debug("Changing state to SYNC");
        }

        void
        syncState(void)
        {
          try
          {
            if (isLeader())
              sendSync();
            else
              waitForSync();
          }
          catch(const std::exception& e)
          {
            err(DTR("error sending leader: %s"), e.what());
          }
        }

        void
        sendSync(void)
        {
          if (m_args.ignore_ack)
          {
            // If ignoring ack, just send SYNC to all participants once
            while ((size_t)m_sync_idx < participants())
            {
              if (m_sync_idx == formation_index())
                m_sync_idx++;

              const Participant& part = participant(m_sync_idx);
              std::string part_name = resolveSystemId(part.vid);
              trace("Sending code SYNC to %s...", part_name.c_str());

              m_wcomms->sendSync(part_name, m_acomms.getSyncTime());
              m_sync_idx++;
            }

            debug("Sync setup done. No Ack. Leader is %s", resolveSystemId(m_leader_id));
            sendToFirstPoint();
            return;
          }

          switch (m_sync_state)
          {
            case SYNCS_SEND:
            {
              if (m_sync_retries == 0)
              {
                signalError(String::str("Timedout synching with %s", resolveSystemId(participant(m_sync_idx).vid)));
                return;
              }

              if (m_sync_idx == formation_index())
                m_sync_idx++;

              if ((size_t)m_sync_idx < participants())
              {
                const Participant& part = participant(m_sync_idx);
                std::string part_name = resolveSystemId(part.vid);
                trace("Sending code SYNC to %s...", part_name.c_str());

                m_wcomms->sendSync(part_name, m_acomms.getSyncTime());
                expectAck(part.vid);
              }
              
              m_sync_state = SYNCS_ACK;
            }
            break;
            
            case SYNCS_ACK:
            {
              if (m_ack_timeout.overflow())
              {
                m_sync_retries--;
                m_sync_state = SYNCS_SEND;
                return;
              }

              if (gotAck())
              {
                m_sync_idx++;
                if ((size_t)m_sync_idx >= participants() ||
                    (m_sync_idx == formation_index() && (size_t)m_sync_idx == participants() - 1))
                {
                  debug("Sync setup done. Leader is %s", resolveSystemId(m_leader_id));
                  sendToFirstPoint();
                  return;
                }

                m_sync_retries = c_sync_max_retries;
                m_sync_state = SYNCS_SEND;
              }
            }
            break;
            
            default:
              break;
          }
        }

        void
        waitForSync(void)
        {
          if (m_sync_timeout.overflow())
          {
            signalError(DTR("Timedout waiting for sync"));
            return;
          }

          if (m_leader_id != IMC::AddressResolver::invalid())
          {
            debug("Leader setup done. Leader is %s", resolveSystemId(m_leader_id));
            sendToFirstPoint();
            return;
          }
        }

        void
        sendToFirstPoint(void)
        {
          // Send to first point
          setControl(IMC::CL_PATH);

          TPoint start;
          start.x = m_estate.x;
          start.y = m_estate.y;
          start.z = m_estate.depth;

          // Force surface on APPROACH
          TPoint first = point(0, formation_index());
          first.z = 0.0;

          desiredPath(start, first, getSpeed(), getSpeedUnits());

          // Change state to approaching
          m_state = SM_APPROACHING;
          debug("Changing state to APPROACHING");
        }

        void
        setStartState(void)
        {
          setControl(IMC::CL_NONE);
          m_start_timeout.setTop(m_args.start_setup_timeout);
          m_start_send_ready.setTop(m_args.send_ready_interval);
          m_flag_start = false;
          
          m_ready_state.clear();
          for(size_t idx = 0; idx < participants(); idx++)
          {
            if ((int)idx == formation_index())
              continue;

            m_ready_state[participant(idx).vid] = false;
          }

          m_state = SM_START;
          debug("Changing state to START_SETUP");
        }

        void
        startState(void)
        {
          if (m_start_timeout.overflow())
          {
            signalError("Timedout waiting for start");
            return;
          }

          if (isLeader())
          {
            // Leader waits to receive code READY from all participants
            if (isFormationReady())
            {
              trace("Sending code START in broadcast");
              m_wcomms->sendStart("broadcast");
              m_send_pos_timer.reset();
              m_leader_ref_timer.setTop(m_args.leader_reference_timeout);
              setControl(IMC::CL_PATH);
              sendToNextPoint();
              debug("Start setup done");
              return;
            }
          }
          else
          {
            // Followers send code READY to leader
            if (m_start_send_ready.overflow())
            {
              std::string leader_name = resolveSystemId(m_leader_id);
              trace("Sending code READY to %s", leader_name.c_str());
              m_wcomms->sendReady(leader_name);
              m_start_send_ready.reset();
            }

            // Followers wait for code START from leader
            if (m_flag_start)
            {
              setControl(IMC::CL_PATH);
              m_leader_ref_timer.setTop(m_args.leader_reference_timeout);
              sendToNextPoint();
              debug("Start setup done");
              return;
            }
          }
        }

        bool
        isFormationReady(void)
        {
          for (const auto& entry : m_ready_state)
          {
            if (!entry.second)
              return false;
          }

          return true;
        }

        void
        sendToNextPoint(void)
        {
          if (m_curr < 1)
            return;
          
          TPoint prev = point(m_curr - 1, formation_index());
          TPoint prev_virtual = point(m_curr - 1);
          TPoint next = point(m_curr, formation_index());
          TPoint next_virtual = point(m_curr);

          double distance = norm(prev, next);
          double distance_virtual = norm(prev_virtual, next_virtual);

          setSpeedReference(distance / distance_virtual);

          // throw a leg of TPoints to be followed by the vehicle
          desiredPath(prev, next, m_speed_ref, getSpeedUnits());

          m_state = SM_MOVING;
          debug("Changing state to MOVING");
        }

        void
        onUpdate(int f_index, const IMC::RemoteState& rstate)
        {
          (void) f_index;
          (void) rstate;
        }

        void
        step(const IMC::EstimatedState& estate)
        {
          m_estate = estate;
        }

        void
        onPathCompletion(void)
        {
          ++m_curr;

          // if the current waypoint is the last, then all is done
          if ((size_t)m_curr == trajectory_points())
          {
            signalCompletion();
            return;
          }

          if (m_curr == 1)
          {
            debug("Setting up start...");
            setStartState();
            return;
          }
          
          sendToNextPoint();
        }

        inline void
        orthogonalProjection(const TPoint& origin, const TPoint& destination, double* point, double* result)
        {
          double direction[2] = {destination.x - origin.x, destination.y - origin.y};
          double origin2point[2] = {point[0] - origin.x, point[1] - origin.y};
          double d1 = dot(origin2point, direction);
          double d2 = dot(direction, direction);
          double origin2proj[2] = {direction[0] * d1 / d2, direction[1] * d1 / d2};
          result[0] = origin.x + origin2proj[0];
          result[1] = origin.y + origin2proj[1];
        }

        inline double
        dot(const double* a, const double* b)
        {
          return a[0] * b[0] + a[1] * b[1];
        }

        inline double
        norm(const double* vector)
        {
          return std::sqrt(std::pow(vector[0], 2) + std::pow(vector[1], 2));
        }

        inline double
        norm(const double* a, const double* b)
        {
          return std::sqrt(std::pow(a[0] - b[0], 2) + std::pow(a[1] - b[1], 2));
        }

        inline double
        norm(const double* position, const TPoint& waypoint)
        {
          return std::sqrt(std::pow(position[0] - waypoint.x, 2) + std::pow(position[1] - waypoint.y, 2));
        }

        inline double
        norm(const TPoint& a, const TPoint& b)
        {
          return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
        }

        void
        setSpeedReference(double coeff)
        {
          double speed_reference = 0;
          if (isLeader())
            speed_reference = getSpeed();
          else if (m_leader_ref_timer.overflow())
            speed_reference = getSpeed();
          else if (m_leader_pos.speed == 0)
            speed_reference = getSpeed();
          else
            speed_reference = m_leader_pos.speed;

          // double speed_reference = (isLeader() || m_leader_ref_timer.overflow()) ? getSpeed() : m_leader_pos.speed;

          m_speed_ref = speed_reference * coeff;
          if (m_speed_ref > speed_reference + m_args.speed_max_delta)
            m_speed_ref = speed_reference + m_args.speed_max_delta;

          if (m_speed_ref < 0.0f)
            m_speed_ref = 0.0f;
          else if (m_speed_ref > m_max_speed)
            m_speed_ref = m_max_speed;

          // While moving vehicle needs a minimum speed to stay submeged
          if (m_state == SM_MOVING && m_speed_ref < m_args.submerged_speed_min)
            m_speed_ref = m_args.submerged_speed_min;
        }

        double
        adjustSpeedReference(void)
        {
          if (m_curr < 1 || m_curr >= trajectory_points())
            return 1.0f;
          
          try
          {
            TPoint origin = point(m_curr - 1, formation_index());
            TPoint origin_virtual = point(m_curr - 1);

            TPoint destination = point(m_curr, formation_index());
            TPoint destination_virtual = point(m_curr);

            double leader_pos[2];
            toLocalCoordinates(m_leader_pos.lat, m_leader_pos.lon, &leader_pos[0], &leader_pos[1]);
            double leader_proj[2];
            orthogonalProjection(origin_virtual, destination_virtual, leader_pos, leader_proj);
            double self_pos[2] = {m_estate.x, m_estate.y};
            double self_proj[2];
            orthogonalProjection(origin, destination, self_pos, self_proj);

            double distance_leader2dest = norm(leader_proj, destination_virtual);
            double distance_self2dest = norm(self_proj, destination);

            return distance_self2dest / distance_leader2dest;
          }
          catch(const std::exception& e)
          {
            err(DTR("error adjusting speed reference: %s"), e.what());
          }

          return 1.0f;
        }

        double
        returnToOriginalSpeed(double original_speed)
        {
          double elapsed = m_leader_ref_timer.getElapsed() / m_args.leader_reference_timeout;
          if (elapsed > 1.0f)
            elapsed = 1.0f;
          // return 1 + (1 - m_speed_ref / original_speed) * elapsed;
          (void) original_speed;
          return 1;
        }

        void
        updateSpeed(void)
        {
          if (!isActive())
            return;
          
          if (m_curr < 1)
            return;

          double coeff;
          double original_speed = getSpeed();

          if (m_leader_ref_timer.getTop() == 0.0f)
          {
            coeff = returnToOriginalSpeed(original_speed);
            trace("Coeff \"original speed\": %f", coeff);
          }
          else if (m_curr == m_leader_pos.waypoint_idx)
          {
            coeff = adjustSpeedReference();
            trace("Coeff \"same waypoint\": %f", coeff);
          }
          else if (m_curr > m_leader_pos.waypoint_idx)
          {
            // coeff = 0;
            coeff = 1 - m_args.speed_max_delta / original_speed;
            trace("Coeff \"ahead of leader\": %f", coeff);
          }
          else
          {
            coeff = 1 + m_args.speed_max_delta / original_speed;
            trace("Coeff \"behind leader\": %f", coeff);
          }
          
          setSpeedReference(coeff);
          desiredSpeed(m_speed_ref, getSpeedUnits());
        }

        void
        dissiminatePosition(void)
        {
          if(!isLeader())
            return;
            
          if (m_curr < 1)
            return;
          
          if (m_send_pos_timer.overflow())
          {
            double lat, lon;
            fromLocalCoordinates(m_estate.x, m_estate.y, &lat, &lon);
            if (m_args.use_wifi_only)
              m_wcomms->sendPos("broadcast", m_curr, lat, lon, m_estate.u);
            else
              m_acomms.sendPos("broadcast", m_curr, lat, lon, m_estate.u);
            m_send_pos_timer.reset();
          }
        }
        
        void
        checkLeaderReference(void)
        {
          if (isLeader())
            return;
          
          // If leader timesout, then fallback maneuver is executed
          if (m_leader_ref_timer.overflow())
          {
            // AUTO fallback maneuver
            // If leader reference timer overflows, then the vehicle will try to execute the original plan
            if (m_args.fallback_maneuver == c_fallback_maneuvers[FO_AUTO])
            {
              if (m_leader_ref_timer.getTop() != 0.0f)
              {
                m_leader_ref_timer.setTop(0.0f);
                war("AUTO Mode Engaged");
              }
              else
                updateSpeed();
            }
            else
            {
              sendFallbackManeuver();
            }
          }
        }

        void
        onUpdateParticipants(const IMC::VehicleFormation* msg) override
        {
          if (!isLeader())
            return;

          if (m_state != SM_MOVING)
          {
            war("Not in MOVING state, ignoring update participants");
            return;
          }

          war("New participant list received, reforming swarm");
          // Update participants
          const IMC::MessageList<IMC::VehicleFormationParticipant>* list = &msg->participants;
          IMC::MessageList<IMC::VehicleFormationParticipant>::const_iterator itr;
          for(itr = list->begin(); itr != list->end(); itr++)
          {
            // Update leader participants
            updateParticipant((*itr)->vid, (*itr)->off_x, (*itr)->off_y, (*itr)->off_z);
            // Broadcast new offsets to participants
            if (m_args.use_wifi_only)
              m_wcomms->sendParticipant("broadcast", (*itr)->vid, (*itr)->off_x, (*itr)->off_y, (*itr)->off_z);
            else
              m_acomms.sendParticipant("broadcast", (*itr)->vid, (*itr)->off_x, (*itr)->off_y, (*itr)->off_z);
            // Wait until sending next update
            // This is blocking!!
            waitWithConsume(1.0f);
          }
        }

        void
        sendFallbackManeuver(void)
        {
          if (m_args.fallback_maneuver == c_fallback_maneuvers[FO_AUTO])
           return;

          IMC::PlanControl fallback_plan;
          fallback_plan.type = IMC::PlanControl::PC_REQUEST;
          fallback_plan.op = IMC::PlanControl::PC_START;
          fallback_plan.plan_id = c_fallback_plan_name + "_" + m_args.fallback_maneuver;

          IMC::PlanManeuver pm;
          pm.maneuver_id = c_fallback_maneuver_name;

          // TODO: 
          //  - Adjustable speed
          //  - Adjustable depth
          //  - Adjustable radius
          if (m_args.fallback_maneuver == c_fallback_maneuvers[FO_GOTO])
          {
            IMC::Goto man;
            man.lat = Angles::radians(m_args.fallback_position[0]);
            man.lon = Angles::radians(m_args.fallback_position[1]);
            man.speed = 1.0f;
            man.z = 0.0f;
            man.z_units = IMC::ZUnits::Z_DEPTH;

            pm.data.set(man);
          }
          else if (m_args.fallback_maneuver == c_fallback_maneuvers[FO_STATIONKEEPING])
          {
            IMC::StationKeeping man;
            man.lat = Angles::radians(m_args.fallback_position[0]);
            man.lon = Angles::radians(m_args.fallback_position[1]);
            man.speed = 1.0f;
            man.radius = 10.0f;
            man.z = 0.0f;
            man.z_units = IMC::ZUnits::Z_DEPTH;

            pm.data.set(man);
          }
          else
          {
            // What to do here??
            war("Unsupported fallback maneuver type: %s", m_args.fallback_maneuver.c_str());
            return;
          }
  
          IMC::PlanSpecification spec;
          spec.plan_id = fallback_plan.plan_id;
          spec.start_man_id = pm.maneuver_id;
          spec.maneuvers.push_back(pm);
   
          fallback_plan.arg.set(spec);
          fallback_plan.request_id = 0;
          fallback_plan.flags = 0;
          fallback_plan.setDestination(getSystemId());

          signalError("Leader lost, fallback maneuver launched");
          dispatch(fallback_plan);
        }

        void
        onStateReport(void)
        {
          switch (m_state)
          {
            case SM_IDLE:
              break;
            case SM_SYNC:
              syncState();
              break;
            case SM_APPROACHING:
              break;
            case SM_START:
              startState();
              break;
            case SM_MOVING:
              dissiminatePosition();
              checkLeaderReference();
              break;
            default:
              break;
          }

          // Acoustic communications
          if (!m_args.use_wifi_only)
            m_acomms.run();

          // Wifi communications
          if (m_wcomms)
          {
            std::vector<uint8_t> data;
            if (m_wcomms->checkIncomingData(data))
              parseWifiPacket(data);
          }
          
        }

        void
        waitWithConsume(const double timeout)
        {
          Time::Counter<double> wait_timer(timeout);
          while (!wait_timer.overflow())
            waitForMessages(wait_timer.getRemaining());
        }
      };
    }
  }
}

DUNE_TASK
