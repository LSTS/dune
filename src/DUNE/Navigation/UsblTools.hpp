//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Braga                                                       *
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

      enum Codes
      {
        CODE_REQ = 0x00,
        CODE_RPL = c_target_mask,
        CODE_FIX = c_target_mask | 0x01,
        CODE_POS = c_target_mask | 0x02,
        CODE_ANG = c_target_mask | 0x03
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
      };

      //! Position data structure.
      struct Pos
      {
        fp32_t x;
        fp32_t y;
        fp32_t z;
        fp32_t n;
        fp32_t e;
        fp32_t d;
        fp32_t accuracy;
      };

      //! Angles data structure.
      struct Ang
      {
        fp32_t lbearing;
        fp32_t lelevation;
        fp32_t bearing;
        fp32_t elevation;
        fp32_t accuracy;
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
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::GpsFix& gps)
      {
        return toFix(usbl, gps.lat, gps.lon, gps.height, IMC::Z_HEIGHT);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, const IMC::EstimatedState& state)
      {
        double lat, lon;
        Coordinates::toWGS84(state, lat, lon);
        return toFix(usbl, lat, lon, state.depth, IMC::Z_DEPTH);
      }

      static IMC::UsblFixExtended
      toFix(const IMC::UsblPositionExtended& usbl, double lat, double lon, float z, IMC::ZUnits z_units)
      {
        Coordinates::WGS84::displace(usbl.n, usbl.e, &lat, &lon);

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
        };
        
        //! Usbl modem fix structure
        struct ModemFix
        {
          std::string name;
          double lat;
          double lon;
          float z;
          uint8_t z_units;
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
          m_no_range = m_args->no_range;

          // in quick mode, we actively ping the modem
          if (m_no_range)
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
          // Check if Usbl modem is dead.
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
        void
        parse(uint16_t imc_src, const IMC::UamRxFrame* msg)
        {
          switch ((uint8_t)msg->data[c_code])
          {
            // Request reply.
            case CODE_RPL:
              if (msg->data[REQ_START] & c_mask_start)
              {
                std::memcpy(&m_period, &msg->data[REQ_PERIOD], sizeof(uint16_t));
                m_fix = msg->data[REQ_START] & c_mask_fix;
                m_usbl_alive = true;
                m_comm_timeout_timer.setTop(c_max_comm_timeout * m_period);
              }
              else
              {
                m_usbl_alive = false;
              }

              m_usbl_name = msg->sys_src;
              break;

            case CODE_FIX:
            {
              UsblTools::Fix fs;
              std::memcpy(&fs, &msg->data[c_code + 1], sizeof(UsblTools::Fix));

              IMC::UsblFixExtended fix;
              fix.setSource(imc_src);
              fix.target = msg->sys_dst;
              fix.lat = fs.lat;
              fix.lon = fs.lon;
              fix.z = fs.z;
              fix.z_units = fs.z_units;
              fix.accuracy = fs.accuracy;

              m_task->dispatch(fix);
              m_comm_timeout_timer.reset();
              break;
            }

            case CODE_POS:
            {
              UsblTools::Pos ps;
              std::memcpy(&ps, &msg->data[c_code + 1], sizeof(UsblTools::Pos));

              IMC::UsblPositionExtended pos;
              pos.setSource(imc_src);
              pos.target = msg->sys_dst;
              pos.x = ps.x;
              pos.y = ps.y;
              pos.z = ps.z;
              pos.n = ps.n;
              pos.e = ps.e;
              pos.d = ps.d;
              pos.accuracy = ps.accuracy;
              
              if(!getFix(msg->sys_src, pos))
                m_task->dispatch(pos);

              m_comm_timeout_timer.reset();
              break;
            }

            case CODE_ANG:
            {
              UsblTools::Ang as;
              std::memcpy(&as, &msg->data[c_code + 1], sizeof(UsblTools::Ang));

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
          }
        }
        
        //! Sets a modem fix.
        //! The node will use the modem fix to convert its position into a fix.
        //! param[in] msg The UsblModem message where the modem fix is stored.
        void
        setModemFix(const IMC::UsblModem* msg)
        {
          std::vector<ModemFix>::iterator itr = m_modem_fix.begin();
          for (; itr != m_modem_fix.end(); ++itr)
          {
            // Modem Found
            if (itr->name == msg->target)
            {
              itr->lat = msg->lat;
              itr->lon = msg->lon;
              itr->z = msg->z;
              itr->z_units = msg->z_units;
              return;
            }
          }
          //Modem not found; Add it.
          ModemFix fix;
          fix.name = msg->target;
          fix.lat = msg->lat;
          fix.lon = msg->lon;
          fix.z = msg->z;
          fix.z_units = msg->z_units;
          m_modem_fix.push_back(fix);
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

          if (m_args->enabled)
            data[REQ_START - 1] |= c_mask_start;

          std::memcpy(&data[REQ_PERIOD - 1], &period, sizeof(uint16_t));

          return true;
        }
        
        //! Get a fix from a UsblPositionExtended and dispatch it.
        //! param[in] modem  The name of the modem that has sent the position.
        //! param[in] pos    The position stored into a UsblPositionExtended.
        //! True if the fix has been dispatched.
        bool
        getFix(std::string modem, const IMC::UsblPositionExtended &pos)
        {
          std::vector<ModemFix>::iterator itr = m_modem_fix.begin();
          for (; itr != m_modem_fix.end(); ++itr)
          {
            // Modem found
            if (itr->name == modem)
            {
              IMC:: UsblFixExtended fix = toFix(pos, itr->lat, itr->lon,
                                                itr->z, (IMC::ZUnits)itr->z_units);
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
        //! Quick mode, no range.
        bool m_no_range;
        //! Periodicity.
        uint16_t m_period;
        //! The modem fix list.
        std::vector<ModemFix> m_modem_fix;
        //! Quick modem request timer.
        Time::Counter<double> m_node_timer;
        //! Communication timeout timer.
        Time::Counter<double> m_comm_timeout_timer;
        //! Class arguments.
        const Arguments* m_args;
        //! Pointer to task.
        Tasks::Task* m_task;
      };

      //! USBL tools handler ticket.
      class Target
      {
      public:
        //! Constructor.
        //! @param[in] name target's name.
        //! @param[in] fix absolute fix or relative positioning
        //! @param[in] period target's desired periodicity.
        Target(std::string name, bool fix, uint16_t period):
          m_comm_errors(0)
        {
          m_name = name;
          m_fix = fix;
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
        reset(bool fix, uint16_t period)
        {
          m_fix = fix;
          m_period = period;
          m_target_timer.setTop(m_period);
          m_comm_errors = 0;
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
        
        //! Check if the target node has failed.
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

      private:
        //! Target name.
        std::string m_name;
        //! Absolute or relative fix.
        bool m_fix;
        //! Periodicity.
        uint16_t m_period;
        //! Number of communication errors
        uint8_t m_comm_errors;
        //! Target's desired period timer.
        Time::Counter<double> m_target_timer;
      };

      //! USBL tools handler.
      class Modem
      {
      public:
        //! Constructor.
        Modem(void)
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
              handleTargetCommError(m_system);
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

        //! Parse incoming frame.
        //! @param[in] msg received acoustic frame.
        //! @param[out] data frame to be send.
        //! @return true if there's data to be sent, false otherwise.
        bool
        parse(const IMC::UamRxFrame* msg, std::vector<uint8_t>& data)
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
                return false;
              }

              bool fix = msg->data[REQ_START] & c_mask_fix;
              add(msg->sys_src, fix, period);
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

          data.resize(sizeof(UsblTools::Fix) + 2);

          UsblTools::Fix fix;
          fix.lat = msg->lat;
          fix.lon = msg->lon;
          fix.z = msg->z;
          fix.z_units = msg->z_units;
          fix.accuracy = msg->accuracy;

          data[c_code - 1] = CODE_FIX;
          std::memcpy(&data[c_code], &fix, sizeof(UsblTools::Fix));
          handleTargetCommOk(m_system);
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

          data.resize(sizeof(UsblTools::Pos) + 2);

          UsblTools::Pos pos;
          pos.x = msg->x;
          pos.y = msg->y;
          pos.z = msg->z;
          pos.n = msg->n;
          pos.e = msg->e;
          pos.d = msg->d;
          pos.accuracy = msg->accuracy;

          data[c_code - 1] = CODE_POS;
          std::memcpy(&data[c_code], &pos, sizeof(UsblTools::Pos));
          handleTargetCommOk(m_system);
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

          data.resize(sizeof(UsblTools::Ang) + 2);

          UsblTools::Ang ang;
          ang.lbearing = msg->lbearing;
          ang.lelevation = msg->lelevation;
          ang.bearing = msg->bearing;
          ang.elevation = msg->elevation;
          ang.accuracy = msg->accuracy;

          data[c_code - 1] = CODE_ANG;
          std::memcpy(&data[c_code], &ang, sizeof(UsblTools::Ang));
          m_system.clear();

          return true;
        }

      private:
        //! Add target to handler.
        //! @param[in] target target's name.
        //! @param[in] fix absolute fix or relative positioning
        //! @param[in] period target's desired periodicity.
        void
        add(std::string name, bool fix, uint16_t period)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              itr->reset(fix, period);
              return;
            }
          }

          m_list.push_back(Target(name, fix, period));
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
        

        //! Handle a successful communication with a target.
        //! @param[in] target target's name.
        void
        handleTargetCommOk(std::string name)
        {
          // Iterate through list and remove if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              itr->resetErrors();
            }
          }
        }

        //! Handle a communication error with a target.
        //! @param[in] target target's name.
        void
        handleTargetCommError(std::string name)
        {
          // Iterate through list and remove if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              // The target has failed
              if(itr->hasFailed())
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
      };
    };
  }
}

#endif
