//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: José Braga                                                       *
// Author: Raúl Sáez                                                        *
//***************************************************************************

#ifndef DUNE_NAVIGATION_USBL_TOOLS_HPP_INCLUDED_
#define DUNE_NAVIGATION_USBL_TOOLS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! %UsblTools provides converter methods for IMC's USBL messages.
    //!
    //! @author José Braga.
    class UsblTools
    {
    public:
      //! Request frame: start/stop mask.
      static const uint8_t c_mask_start = 0x10;
      //! Request frame: absolute fix mask.
      static const uint8_t c_mask_fix = 0x01;
      //! Request frame: inverted mode.
      static const uint8_t c_mask_inverted = 0x02;
      //! Request frame: size of frame.Size of frame: request.
      static const uint8_t c_fsize_req = 5;
      //! Node or modem destination identifier mask.
      static const uint8_t c_target_mask = 0x80;
      //! Code placement in received frame messages.
      static const uint8_t c_code = 2;
      //! Minimum time interval between consecutive requests from node.
      static const uint16_t c_requests_interval = 30;
      //! Number of communication timeouts before considering that a system has failed.
      static const uint8_t c_max_comm_timeout = 5;
      //! Origin validity timeout.
      static const uint8_t c_origin_timeout = 5;

      enum Codes
      {
        CODE_REQ = 0x00,
        CODE_RPL = c_target_mask,
        CODE_FIX = c_target_mask | 0x01,
        CODE_POS = c_target_mask | 0x02,
        CODE_ANG = c_target_mask | 0x03,
        CODE_INV = c_target_mask | 0x04,
        CODE_ORG = 0x05
      };

      enum RequestIndexes
      {
        REQ_START  = 3,
        REQ_PERIOD = 4
      };

      //! Fix data structure.
      struct Fix
      {
        fp64_t lat;
        fp64_t lon;
        fp32_t z;
        uint8_t z_units;
        fp32_t accuracy;

        //! Decode an incoming data frame into a fix message.
        //! @param[out] frame fix structure.
        //! @param[in] data incoming frame.
        static void
        decode(Fix& frame, const std::vector<char>& data)
        {
          uint8_t* ptr = (uint8_t*)&data[c_code + 1];

          uint16_t length = (uint16_t)Fix::size();
          ptr += IMC::deserialize(frame.lat, ptr, length);
          ptr += IMC::deserialize(frame.lon, ptr, length);
          ptr += IMC::deserialize(frame.z, ptr, length);
          ptr += IMC::deserialize(frame.z_units, ptr, length);
          ptr += IMC::deserialize(frame.accuracy, ptr, length);
        }

        //! Encode a fix message into a data frame.
        //! @param[in] frame fix structure.
        //! @param[out] data data frame.
        static void
        encode(Fix& frame, std::vector<uint8_t>& data)
        {
          data.resize(Fix::size() + 2);
          data[c_code - 1] = CODE_FIX;

          uint8_t* ptr = (uint8_t*)&data[c_code];

          ptr += IMC::serialize(frame.lat, ptr);
          ptr += IMC::serialize(frame.lon, ptr);
          ptr += IMC::serialize(frame.z, ptr);
          ptr += IMC::serialize(frame.z_units, ptr);
          ptr += IMC::serialize(frame.accuracy, ptr);
        }

        //! Get size of frame.
        //! @return size of fix structure.
        static size_t
        size(void)
        {
          return 2 * (sizeof(fp64_t) + sizeof(fp32_t)) + sizeof(uint8_t);
        }
      };

      struct Gps
      {
        fp64_t lat;
        fp64_t lon;
        fp32_t z;

        //! Decode an incoming data frame into a gps message.
        //! @param[out] frame gps structure.
        //! @param[in] data incoming frame.
        static void
        decode(Gps& frame, const std::vector<char>& data)
        {
          uint8_t* ptr = (uint8_t*)&data[c_code + 1];

          uint16_t length = (uint16_t)Gps::size();
          ptr += IMC::deserialize(frame.lat, ptr, length);
          ptr += IMC::deserialize(frame.lon, ptr, length);
          ptr += IMC::deserialize(frame.z, ptr, length);
        }

        //! Encode a fix message into a data frame.
        //! @param[in] frame fix structure.
        //! @param[out] data data frame.
        static void
        encode(Gps& frame, std::vector<uint8_t>& data)
        {
          data.resize(Gps::size() + 2);
          data[c_code - 1] = CODE_ORG;

          uint8_t* ptr = (uint8_t*)&data[c_code];

          ptr += IMC::serialize(frame.lat, ptr);
          ptr += IMC::serialize(frame.lon, ptr);
          ptr += IMC::serialize(frame.z, ptr);
        }

        //! Decode an incoming data frame into a gps message.
        //! @param[out] frame gps structure.
        //! @param[in] data incoming frame.
        static void
        decode(IMC::GpsFix& msg, const std::vector<char>& data)
        {
          uint8_t* ptr = (uint8_t*)&data[c_code + 1];

          uint16_t length = (uint16_t)Gps::size();
          ptr += IMC::deserialize(msg.lat, ptr, length);
          ptr += IMC::deserialize(msg.lon, ptr, length);
          ptr += IMC::deserialize(msg.height, ptr, length);
        }

        //! Get size of frame.
        //! @return size of fix structure.
        static size_t
        size(void)
        {
          return 2 * sizeof(fp64_t) + sizeof(fp32_t);
        }
      };

      //! Position data structure.
      struct Position
      {
        fp32_t x;
        fp32_t y;
        fp32_t z;
        fp32_t n;
        fp32_t e;
        fp32_t d;
        uint8_t accuracy;

        //! Decode an incoming data frame into a position message.
        //! @param[out] frame position structure.
        //! @param[in] data incoming frame.
        static void
        decode(Position& frame, const std::vector<char>& data)
        {
          uint8_t* ptr = (uint8_t*)&data[c_code + 1];

          uint16_t length = (uint16_t)Position::size();
          ptr += IMC::deserialize(frame.x, ptr, length);
          ptr += IMC::deserialize(frame.y, ptr, length);
          ptr += IMC::deserialize(frame.z, ptr, length);
          ptr += IMC::deserialize(frame.n, ptr, length);
          ptr += IMC::deserialize(frame.e, ptr, length);
          ptr += IMC::deserialize(frame.d, ptr, length);
          ptr += IMC::deserialize(frame.accuracy, ptr, length);
        }

        //! Encode a position message into a data frame.
        //! @param[in] frame position structure.
        //! @param[out] data data frame.
        static void
        encode(Position& frame, std::vector<uint8_t>& data)
        {
          data.resize(Position::size() + 2);
          data[c_code - 1] = CODE_POS;

          uint8_t* ptr = (uint8_t*)&data[c_code];

          ptr += IMC::serialize(frame.x, ptr);
          ptr += IMC::serialize(frame.y, ptr);
          ptr += IMC::serialize(frame.z, ptr);
          ptr += IMC::serialize(frame.n, ptr);
          ptr += IMC::serialize(frame.e, ptr);
          ptr += IMC::serialize(frame.d, ptr);
          ptr += IMC::serialize(frame.accuracy, ptr);
        }

        //! Get size of frame.
        //! @return size of position structure.
        static size_t
        size(void)
        {
          return (6 * sizeof(fp32_t) + sizeof(uint8_t));
        }
      };

      //! Angles data structure.
      struct Angles
      {
        fp32_t lbearing;
        fp32_t lelevation;
        fp32_t bearing;
        fp32_t elevation;
        fp32_t accuracy;

        //! Decode an incoming data frame into an angles message.
        //! @param[out] frame angles structure.
        //! @param[in] data incoming frame.
        static void
        decode(Angles& frame, const std::vector<char>& data)
        {
          uint8_t* ptr = (uint8_t*)&data[c_code + 1];

          uint16_t length = (uint16_t)Angles::size();
          ptr += IMC::deserialize(frame.lbearing, ptr, length);
          ptr += IMC::deserialize(frame.lelevation, ptr, length);
          ptr += IMC::deserialize(frame.bearing, ptr, length);
          ptr += IMC::deserialize(frame.elevation, ptr, length);
          ptr += IMC::deserialize(frame.accuracy, ptr, length);
        }

        //! Encode an angles message into a data frame.
        //! @param[in] frame angles structure.
        //! @param[out] data data frame.
        static void
        encode(Angles& frame, std::vector<uint8_t>& data)
        {
          data.resize(Angles::size() + 2);
          data[c_code - 1] = CODE_ANG;

          uint8_t* ptr = (uint8_t*)&data[c_code];

          ptr += IMC::serialize(frame.lbearing, ptr);
          ptr += IMC::serialize(frame.lelevation, ptr);
          ptr += IMC::serialize(frame.bearing, ptr);
          ptr += IMC::serialize(frame.elevation, ptr);
          ptr += IMC::serialize(frame.accuracy, ptr);
        }

        //! Get size of frame.
        //! @return size of angles structure.
        static size_t
        size(void)
        {
          return 5 * sizeof(fp32_t);
        }
      };

      //! This method checks if code is intended for nodes or USBL modem.
      //! @param[in] code message code identifier.
      //! @return true if message is for node, false if it's for modem.
      static bool
      toNode(uint8_t code)
      {
        if (code & c_target_mask)
          return true;

        return false;
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::GpsFix& gps, bool inverted = false)
      {
        return toFix(usbl, gps.lat, gps.lon, gps.height, IMC::Z_HEIGHT, inverted);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::EstimatedState& state, bool inverted = false)
      {
        double lat, lon;
        Coordinates::toWGS84(state, lat, lon);
        return toFix(usbl, lat, lon, state.depth, IMC::Z_DEPTH, inverted);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, double lat, double lon, float z, IMC::ZUnits z_units, bool inverted = false)
      {
        if (!inverted)
          Coordinates::WGS84::displace(usbl.n, usbl.e, &lat, &lon);
        else
          Coordinates::WGS84::displace(-usbl.n, -usbl.e, &lat, &lon);

        IMC::UsblFixExtended fix;
        fix.target = usbl.target;
        fix.lat = lat;
        fix.lon = lon;
        fix.z_units = z_units;
        fix.accuracy = usbl.accuracy;

        if (z_units == IMC::Z_ALTITUDE)
          fix.z = z - usbl.d;
        else
          fix.z = z + usbl.d;

        return fix;
      }

      //! USBL tools node (that actively requests fixes from USBL modem).
      class Node
      {
      public:
        //! Target arguments.
        struct Arguments
        {
          //! True to enable target request.
          bool enabled;
          //! Period for USBL requests
          uint16_t period;
          //! Get absolute fix.
          bool fix;
          //! Quick mode, without range.
          bool no_range;
          //! Inverted mode.
          bool inverted;
        };

        //! Constructor.
        Node(Tasks::Task* task, const Arguments* args):
          m_usbl_alive(false),
          m_wait_reply(false),
          m_args(args),
          m_task(task)
        {
          m_period = m_args->period;
          m_fix = m_args->fix;
          m_inverted = m_args->inverted;

          // in quick mode, we actively ping the modem
          if (m_args->no_range)
          {
            m_node_timer.setTop(m_period);
          }
          else
          {
            m_node_timer.setTop(c_requests_interval);
            m_comm_timeout_timer.setTop(c_max_comm_timeout * c_requests_interval);
          }
        }

        //! Check if node has anything to request.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        run(std::vector<uint8_t>& data)
        {
          // Quick reply mode.
          if (m_args->enabled && m_args->no_range)
          {
            bool send = encode(data, 0x0000);
            if (m_args->period != m_period)
            {
              m_period = m_args->period;
              m_node_timer.setTop(m_period);
            }
            return send;
          }

          // Check if USBL modem is dead.
          if(m_usbl_alive && m_comm_timeout_timer.overflow())
          {
            m_usbl_alive = false;
            m_node_timer.setTop(c_requests_interval);
          }

          // Activation or deactivation request.
          if (m_args->enabled != m_usbl_alive)
            return encode(data, m_period);

          // Changed period or reference frame while still alive.
          if (m_args->enabled && m_usbl_alive)
          {
            if (m_args->period != m_period || m_args->fix != m_fix)
              return encode(data, m_args->period);
          }

          return false;
        }

        //! Parse incoming frame.
        //! @param[in] msg received acoustic frame.
        //! @param[in] imc_src IMC id of message source.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        parse(uint16_t imc_src, const IMC::UamRxFrame* msg, std::vector<uint8_t>& data)
        {
          switch ((uint8_t)msg->data[c_code])
          {
            // Request reply.
            case CODE_RPL:
              // this message was addressed to this system.
              if (msg->sys_dst == m_task->getSystemName())
              {
                if (msg->data[REQ_START] & c_mask_start)
                {
                  std::memcpy(&m_period, &msg->data[REQ_PERIOD], sizeof(uint16_t));
                  m_fix = msg->data[REQ_START] & c_mask_fix;
                  m_inverted = msg->data[REQ_START] & c_mask_inverted;
                  m_usbl_alive = true;
                  m_comm_timeout_timer.setTop(c_max_comm_timeout * m_period);
                }
                else
                {
                  m_usbl_alive = false;
                }

                m_usbl_name = msg->sys_src;
              }
              break;

            case CODE_FIX:
            {
              UsblTools::Fix fs;
              Fix::decode(fs, msg->data);

              IMC::UsblFixExtended fix;
              fix.setSource(imc_src);
              fix.target = msg->sys_dst;
              fix.lat = fs.lat;
              fix.lon = fs.lon;
              fix.z = fs.z;
              fix.z_units = fs.z_units;
              fix.accuracy = fs.accuracy;
              m_task->dispatch(fix);

              // this message was addressed to this system.
              if (msg->sys_dst == m_task->getSystemName())
                m_comm_timeout_timer.reset();
              break;
            }

            case CODE_POS:
            {
              UsblTools::Position ps;
              Position::decode(ps, msg->data);

              IMC::UsblPositionExtended pos;
              pos.setSource(imc_src);
              pos.target = msg->sys_dst;
              pos.x = ps.x;
              pos.y = ps.y;
              pos.z = ps.z;
              pos.n = ps.n;
              pos.e = ps.e;
              pos.d = ps.d;
              pos.accuracy = (fp32_t) ps.accuracy;

              if (!getFix(msg->sys_src, pos))
                m_task->dispatch(pos);

              // this message was addressed to this system.
              if (msg->sys_dst == m_task->getSystemName())
                m_comm_timeout_timer.reset();
              break;
            }

            case CODE_ANG:
            {
              UsblTools::Angles as;
              Angles::decode(as, msg->data);

              IMC::UsblAnglesExtended ang;
              ang.setSource(imc_src);
              ang.target = msg->sys_dst;
              ang.lbearing = as.lbearing;
              ang.lelevation = as.lelevation;
              ang.bearing = as.bearing;
              ang.elevation = as.elevation;
              ang.accuracy = as.accuracy;

              m_task->dispatch(ang);
              break;
            }

            case CODE_INV:
            {
              UsblTools::Gps gps;
              gps.lat = m_origin.lat;
              gps.lon = m_origin.lon;
              gps.z = m_origin.height;

              Gps::encode(gps, data);

              return true;
            }
          }

          return false;
        }

        //! Consume a USBL configuration message.
        //! @param[in] msg The UsblConfig message with a list of UsblModem messages.
        void
        consume(const IMC::UsblConfig* msg)
        {
          if (msg->op == IMC::UsblConfig::OP_SET_CFG)
          {
            m_config = *msg;
          }
          else if (msg->op == IMC::UsblConfig::OP_GET_CFG)
          {
            IMC::UsblConfig cfg(m_config);
            cfg.op = IMC::UsblConfig::OP_CUR_CFG;
            cfg.setSource(m_task->getSystemId());
            cfg.setSourceEntity(m_task->getEntityId());
            m_task->dispatchReply(*msg, cfg);
          }
        }

        //! Consume a GpsFix message and save system position.
        //! @param[in] msg GpsFix message.
        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->type == IMC::GpsFix::GFT_MANUAL_INPUT)
            return;

          m_origin = *msg;
        }

      private:
        //! Encode a request to be transmitted by node.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        encode(std::vector<uint8_t>& data, uint16_t period)
        {
          // Do not flood the channel with requests.
          if (!m_node_timer.overflow())
            return false;

          m_node_timer.reset();

          data.resize(c_fsize_req);
          data[c_code - 1] = CODE_REQ;
          data[REQ_START - 1] = 0x00;

          if (m_args->fix)
            data[REQ_START - 1] |= c_mask_fix;

          if (m_args->inverted)
            data[REQ_START - 1] |= c_mask_inverted;

          if (m_args->enabled)
            data[REQ_START - 1] |= c_mask_start;

          std::memcpy(&data[REQ_PERIOD - 1], &period, sizeof(uint16_t));

          return true;
        }

        //! Get a fix from a UsblPositionExtended and dispatch it.
        //! @param[in] modem the name of the modem that has sent the position.
        //! @param[in] pos the position stored into a UsblPositionExtended.
        //! @return true if the fix has been dispatched, false otherwise.
        bool
        getFix(std::string modem, const IMC::UsblPositionExtended& pos)
        {
          IMC::MessageList<IMC::UsblModem>::const_iterator itr = m_config.modems.begin();
          for (; itr < m_config.modems.end(); ++itr)
          {
            if ((*itr) == NULL)
              continue;

            if ((*itr)->name == modem)
            {
              IMC::UsblFixExtended fix = toFix(pos, (*itr)->lat, (*itr)->lon, (*itr)->z,
                                               (IMC::ZUnits)(*itr)->z_units);
              m_task->dispatch(fix);
              return true;
            }
          }

          return false;
        }

        //! True if USBL is on.
        bool m_usbl_alive;
        //! True if waiting reply.
        bool m_wait_reply;
        //! USBL system.
        std::string m_usbl_name;
        //! Absolute fix or request relative position.
        bool m_fix;
        //! Inverted mode flag.
        bool m_inverted;
        //! Periodicity.
        uint16_t m_period;
        //! USBL configuration.
        IMC::UsblConfig m_config;
        //! Quick modem request timer.
        Time::Counter<double> m_node_timer;
        //! Communication timeout timer.
        Time::Counter<double> m_comm_timeout_timer;
        //! Class arguments.
        const Arguments* m_args;
        //! Pointer to task.
        Tasks::Task* m_task;
        //! Local position
        IMC::GpsFix m_origin;
      };

      //! USBL tools handler ticket.
      class Target
      {
      public:
        //! Constructor.
        //! @param[in] name target's name.
        //! @param[in] fix absolute fix or relative positioning
        //! @param[in] period target's desired periodicity.
        Target(std::string name, bool fix, bool inverted, uint16_t period):
          m_comm_errors(0)
        {
          m_name = name;
          m_fix = fix;
          m_inverted = inverted;
          m_period = period;
          m_target_timer.setTop(m_period);
        }

        //! Time to track target.
        //! @return true, if timer has overflown.
        bool
        trigger(void)
        {
          if (m_target_timer.overflow())
          {
            m_target_timer.reset();
            return true;
          }

          return false;
        }

        //! Compare name with target name.
        //! @param[in] name name of target.
        //! @return true if target's name is matched.
        bool
        compare(std::string name)
        {
          if (m_name == name)
            return true;

          return false;
        }

        //! Reset variables of target.
        //! @param[in] return absolute fixes or relative position.
        //! @param[in] period desired periodicity.
        void
        reset(bool fix, bool inverted, uint16_t period)
        {
          m_fix = fix;
          m_inverted = inverted;
          m_period = period;
          m_target_timer.setTop(m_period);
          resetErrors();
        }

        //! Get target's name.
        //! @return target's name.
        std::string
        getName(void)
        {
          return m_name;
        }

        //! Check if target node wants absolute fix.
        //! @return true if target's wants absolute fix,
        //! false otherwise.
        bool
        wantsFix(void)
        {
          return m_fix;
        }

        //! Check if target is for inverted mode.
        //! @return true if target is set as inverted,
        //! false otherwise.
        bool
        isInverted(void)
        {
          return m_inverted;
        }

        //! Check if the target node has failed.
        //! @return true if target has reached threshold, false otherwise.
        bool
        hasFailed(void)
        {
          if (++m_comm_errors >= c_max_comm_timeout)
            return true;

          return false;
        }

        //! Reset count of errors.
        void
        resetErrors(void)
        {
          m_comm_errors = 0;
        }
        
        //! Set target's absolute position.
        //! @param[in] msg GpsFix message of target's position.
        void
        setOrigin(const IMC::GpsFix* msg)
        {
          m_origin = *msg;
          m_origin_timer.setTop(c_origin_timeout);
        }

        //! Get target's absolute position.
        //! @param[out] msg GpsFix message of target's position.
        //! @return true if message is valid and has been filled, false otherwise.
        bool
        getOrigin(IMC::GpsFix& msg)
        {
          if (m_origin_timer.overflow())
            return false;

          msg = m_origin;
          return true;
        }

        //! Set target's relative position.
        //! @param[in] msg UsblPositionExtended message of target's position.
        void
        setRelativePosition(const IMC::UsblPositionExtended* msg)
        {
          m_rpos = *msg;
          m_rpos_timer.setTop(c_origin_timeout);
        }

        //! Get target's relative position.
        //! @param[out] msg UsblPositionExtended message of target's position.
        //! @return true if message is valid and has been filled, false otherwise.
        bool
        getRelativePosition(IMC::UsblPositionExtended& msg)
        {
          if (m_rpos_timer.overflow())
            return false;

          msg = m_rpos;
          return true;
        }

      private:
        //! Target name.
        std::string m_name;
        //! Absolute or relative fix.
        bool m_fix;
        //! Inverted mode.
        bool m_inverted;
        //! Periodicity.
        uint16_t m_period;
        //! Number of communication errors
        uint8_t m_comm_errors;
        //! Target's desired period timer.
        Time::Counter<double> m_target_timer;
        //! Target's absolute position timer.
        Time::Counter<double> m_origin_timer;
        //! Target's absolute position.
        IMC::GpsFix m_origin;
        //! Target's relative position timer.
        Time::Counter<double> m_rpos_timer;
        //! Target's relative position.
        IMC::UsblPositionExtended m_rpos;
      };

      //! USBL tools handler.
      class Modem
      {
      public:
        //! Constructor.
        Modem(Tasks::Task* task):
          m_task(task)
        { }

        //! This function verifies if we are waiting for the target's reply.
        //! @param[in] name name of the target.
        //! @return true if we are waiting, false otherwise.
        bool
        waitingForSystem(std::string name)
        {
          if (m_system.empty())
            return false;

          if (name == m_system)
            return true;

          return false;
        }

        //! Trigger through all targets.
        //! @param[out] name target's name to be tracked.
        //! @param[in] time to wait for target system's reply.
        //! @return true, if we have a system to track now.
        bool
        run(std::string& name, float time)
        {
          // Do not check any more targets if we are
          // still waiting for a target's reply.
          if (!m_system.empty())
          {
            if (m_modem_wdog.overflow())
            {
              targetFailed(m_system);
              m_system.clear();
            }
            return false;
          }

          // Iterate and call triggers.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            if (itr->trigger())
            {
              // we'll track this system
              m_system = itr->getName();
              name = itr->getName();

              // reset timer.
              m_modem_wdog.setTop(time);
              return true;
            }
          }

          return false;
        }

        //! Get if target's wants an absolute fix.
        //! @return true if target wants an absolute fix,
        //! false if it wants a relative position.
        bool
        wantsFix(std::string name)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
              return itr->wantsFix();
          }

          // default is relative positioning to be
          // translated by node.
          return false;
        }

        //! Get if target's is set for inverted mode.
        //! @return true if target wants an absolute fix,
        //! false if it wants a relative position.
        bool
        isInverted(std::string name, std::vector<uint8_t>& data)
        {
          // Iterate through list.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name) && itr->isInverted())
            {
              data.push_back(CODE_INV);
              return true;
            }
          }

          // default is non inverted.
          return false;
        }

        //! Parse incoming frame.
        //! @param[in] imc_src IMC id of message source.
        //! @param[in] msg received acoustic frame.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        parse(uint16_t imc_src, const IMC::UamRxFrame* msg, std::vector<uint8_t>& data)
        {
          if ((uint8_t)msg->data[c_code] == CODE_REQ)
          {
            if (msg->data[REQ_START] & c_mask_start)
            {
              uint16_t period;
              std::memcpy(&period, &msg->data[REQ_PERIOD], sizeof(uint16_t));

              // if period is 0, nothing will be added to scheduler.
              if (!period)
              {
                // remove this system from the target list.
                remove(msg->sys_src);
                // this system is waiting for reply.
                m_system = msg->sys_src;
                m_modem_wdog.setTop(c_requests_interval / 2.0);
                return false;
              }

              bool fix = msg->data[REQ_START] & c_mask_fix;
              bool inverted = msg->data[REQ_START] & c_mask_inverted;
              add(msg->sys_src, fix, inverted, period);
            }
            else
            {
              remove(msg->sys_src);
            }

            // reply.
            data.resize(c_fsize_req);
            // no sync byte yet.
            std::memcpy(&data[0], &msg->data[1], c_fsize_req);
            data[c_code - 1] = CODE_RPL;
            return true;
          }
          else if ((uint8_t)msg->data[c_code] == CODE_ORG)
          {
            // Check if we are targeting this system
            if (msg->sys_src != m_system)
              return false;

            // Get absolute origin of message
            IMC::GpsFix origin;
            origin.setSource(imc_src);
            Gps::decode(origin, msg->data);

            if (!Modem::consume(&origin))
              return false;

            IMC::UsblFixExtended fix;
            if (invertedFix(m_system, fix))
              m_task->dispatch(fix);

            // Target replyed to ping
            targetReplied(m_system);
            m_system.clear();
          }

          return false;
        }

        //! Set target's relative position.
        //! @param[in] msg UsblPositionExtended message of target's position.
        //! @return true if position set, false otherwise.
        bool
        consume(const IMC::UsblPositionExtended* msg)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(msg->target))
            {
              itr->setRelativePosition(msg);
              return true;
            }
          }

          return false;
        }

        //! Set target's absolute position.
        //! @param[in] msg GpsFix message of target's position.
        //! @return true if position set, false otherwise.
        bool
        consume(const IMC::GpsFix* msg)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(m_system))
            {
              itr->setOrigin(msg);
              return true;
            }
          }

          return false;
        }
        
        //! Compute absolute fix of system from absolute and relative positions of target
        //! @param[in] target Target's name.
        //! @param[out] fix self fix message.
        //! @return true if able to compute fix and fill message, false otherwise.
        bool
        invertedFix(std::string target, IMC::UsblFixExtended& fix)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(target))
            {
              IMC::GpsFix gps;
              IMC::UsblPositionExtended rpos;

              //! Check timeout
              if (!itr->getOrigin(gps) || !itr->getRelativePosition(rpos))
                return false;

              fix = UsblTools::toFix(rpos, gps, true);
              fix.target = m_task->getSystemName();
              return true;
            }
          }

          return false;
        }

        //! Encode USBL fix message to be transmitted.
        //! @param[in] msg pointer to message.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        encode(const IMC::UsblFixExtended* msg, std::vector<uint8_t>& data)
        {
          if (m_system.empty())
            return false;

          if (m_system != msg->target)
            return false;

          UsblTools::Fix fix;
          fix.lat = msg->lat;
          fix.lon = msg->lon;
          fix.z = msg->z;
          fix.z_units = msg->z_units;
          fix.accuracy = msg->accuracy;

          Fix::encode(fix, data);
          targetReplied(m_system);
          m_system.clear();

          return true;
        }

        //! Encode USBL position message to be transmitted.
        //! @param[in] msg pointer to message.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        encode(const IMC::UsblPositionExtended* msg, std::vector<uint8_t>& data)
        {
          if (m_system.empty())
            return false;

          if (m_system != msg->target)
            return false;

          UsblTools::Position pos;
          pos.x = msg->x;
          pos.y = msg->y;
          pos.z = msg->z;
          pos.n = msg->n;
          pos.e = msg->e;
          pos.d = msg->d;
         if (msg->accuracy > 255)
            pos.accuracy = 255;
          else
          pos.accuracy = (uint8_t) msg->accuracy;

          Position::encode(pos, data);
          targetReplied(m_system);
          m_system.clear();

          return true;
        }

        //! Encode USBL angles message to be transmitted.
        //! @param[in] msg pointer to message.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        encode(const IMC::UsblAnglesExtended* msg, std::vector<uint8_t>& data)
        {
          // Quick mode
          if (m_system.empty())
            return false;

          if (m_system != msg->target)
            return false;

          UsblTools::Angles ang;
          ang.lbearing = msg->lbearing;
          ang.lelevation = msg->lelevation;
          ang.bearing = msg->bearing;
          ang.elevation = msg->elevation;
          ang.accuracy = msg->accuracy;

          Angles::encode(ang, data);
          m_system.clear();

          return true;
        }

      private:
        //! Add target to handler.
        //! @param[in] target target's name.
        //! @param[in] fix absolute fix or relative positioning
        //! @param[in] period target's desired periodicity.
        void
        add(std::string name, bool fix, bool inverted, uint16_t period)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              itr->reset(fix, inverted, period);
              return;
            }
          }

          m_list.push_back(Target(name, fix, inverted, period));
        }

        //! Remove target.
        //! @param[in] target target's name.
        void
        remove(std::string name)
        {
          // Iterate through list and remove target.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Erase target from list.
            if (itr->compare(name))
            {
              m_list.erase(itr, itr + 1);
              return;
            }
          }
        }

        //! Clear current list of targets.
        void
        clear(void)
        {
          m_list.clear();
        }

        //! Target is alive and replying.
        //! @param[in] name target's name.
        void
        targetReplied(std::string name)
        {
          // Iterate through list and remove if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              itr->resetErrors();
              return;
            }
          }
        }

        //! Target failed to reply.
        //! @param[in] name target's name.
        void
        targetFailed(std::string name)
        {
          // Iterate through list and remove if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              // The target has failed.
              if (itr->hasFailed())
              {
                m_list.erase(itr, itr + 1);
                return;
              }
            }
          }
        }

        //! List of scheduled targets.
        std::vector<Target> m_list;
        //! System waiting for reply.
        std::string m_system;
        //! Maximum amount of time waiting for system's reply.
        Time::Counter<double> m_modem_wdog;
        //! Pointer to task.
        Tasks::Task* m_task;
      };

      //! USBL position filter.
      class Filter
      {
      public:
        //! Constructor.
        Filter(unsigned avg_samples, double k_std):
          m_avg_samples(avg_samples),
          m_k_std(k_std)
        {
          m_avg_range = new Math::MovingAverage<double>(m_avg_samples);
        }

        //! Destructor
        ~Filter()
        {
          Memory::clear(m_avg_range);
        }

        //! Set last received state
        void
        consume(const IMC::EstimatedState* msg)
        {
          m_last_state = *msg;
        }

        //! Set last received USBL fix
        //! @return true if position passes filter, false otherwise.
        bool
        consume(const IMC::UsblFixExtended* msg)
        {
          double lat, lon;
          double range, bearing;
          Coordinates::toWGS84(m_last_state, lat, lon);
          Coordinates::WGS84::getNEBearingAndRange(lat, lon,
                                                  msg->lat, msg->lon,
                                                  &range, &bearing);

          double mean_range = m_avg_range->update(range);
          double std_range = m_avg_range->stdev();

          double diff_to_mean = std::abs(range - mean_range);

          if (diff_to_mean > m_k_std * std_range)
            return false;
          
          return true;
        }

      private:
        //! Moving average of distance between estimated state and USBL Fix
        Math::MovingAverage<double>* m_avg_range;
        //! Number of samples to average ranges
        unsigned m_avg_samples;
        //! Standard deviation multiplication factor to issue error.
        double m_k_std;
        //! Last received estimated state
        IMC::EstimatedState m_last_state;
      };
    };
  }
}

#endif
