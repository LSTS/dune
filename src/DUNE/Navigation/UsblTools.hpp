//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
      //! Start mask.
      static const uint8_t c_mask_start = 0x10;
      //! Frame mask.
      static const uint8_t c_mask_frame = 0x03;

      enum Codes
      {
        CODE_REQ = 0x00,
        CODE_FIX = 0x01,
        CODE_POS = 0x02,
        CODE_ANG = 0x03
      };

      enum ReqIndexes
      {
        ST_START  = 3,
        ST_PERIOD = 4
      };

      enum FixIndexes
      {
        FIX_LAT = 3,
        FIX_LON = 11,
        FIX_Z   = 19,
        FIX_ZU  = 23,
        FIX_ACC = 24
      };

      enum PosIndexes
      {
        POS_X   = 3,
        POS_Y   = 7,
        POS_Z   = 11,
        POS_N   = 15,
        POS_E   = 19,
        POS_D   = 23,
        POS_ACC = 27
      };

      enum AngIndexes
      {
        ANG_LBEAR = 3,
        ANG_LELEV = 7,
        ANG_BEAR  = 11,
        ANG_ELEV  = 15,
        ANG_ACC   = 19
      };

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

      //! USBL tools handler ticket.
      class Target
      {
      public:
        //! Reference frame.
        enum Frame
        {
          ST_BODY = 0x01,
          ST_NAVIGATION = 0x02
        };

        //! Constructor.
        //! @param[in] name target's name.
        //! @param[in] frame current reference frame.
        //! @param[in] period target's desired periodicity.
        Target(std::string name, Target::Frame frame, uint16_t period)
        {
          m_name = name;
          m_frame = frame;
          m_period = period;
          m_timer.setTop(m_period);
        }

        //! Time to track target.
        //! @return true, if timer has overflown.
        bool
        trigger(void)
        {
          if (m_timer.overflow())
          {
            m_timer.reset();
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
        //! @param[in] frame current reference frame.
        //! @param[in] period desired periodicity.
        void
        reset(Target::Frame frame, uint16_t period)
        {
          m_frame = frame;
          m_period = period;
          m_timer.setTop(m_period);
        }

        //! Get target's name.
        //! @return target's name.
        std::string
        getName(void)
        {
          return m_name;
        }

        //! Get target's reference frame.
        //! @return target's reference frame.
        Target::Frame
        getFrame(void)
        {
          return m_frame;
        }

      private:
        //! Target name.
        std::string m_name;
        //! Frame reference;
        Target::Frame m_frame;
        //! Periodicity.
        uint16_t m_period;
        //! Target timer.
        Time::Counter<double> m_timer;
      };

      //! USBL tools handler.
      class Handler
      {
      public:
        //! State Machine.
        enum State
        {
          ST_OFF,
          ST_ON,
          ST_RANGE,
          ST_SEND
        };

        //! Constructor.
        Handler(Tasks::Task* task, bool usbl):
          m_usbl(usbl),
          m_task(task)
        { }

        //! Add target to handler.
        //! @param[in] target target's name.
        //! @param[in] frame current reference frame.
        //! @param[in] period target's desired periodicity.
        void
        add(std::string name, Target::Frame frame, uint16_t period)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              itr->reset(frame, period);
              return;
            }
          }

          m_list.push_back(Target(name, frame, period));
        }

        //! Remove target.
        //! @param[in] target target's name.
        void
        remove(std::string name)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
            {
              // Erase from list.
              m_list.erase(itr, itr + 1);
              break;
            }
          }
        }

        //! Trigger through all targets.
        //! @param[out] name target's name to be tracked.
        //! @return true, if we have a system to track now.
        bool
        run(std::string& name)
        {
          // Iterate and call triggers.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            if (itr->trigger())
            {
              name = itr->getName();
              return true;
            }
          }

          return false;
        }

        //! Clear current list of targets.
        void
        clear(void)
        {
          m_list.clear();
        }

        //! Get target's frame.
        //! @return target's reference frame.
        Target::Frame
        check(std::string name)
        {
          // Iterate through list and add if necessary.
          std::vector<Target>::iterator itr = m_list.begin();
          for (; itr != m_list.end(); ++itr)
          {
            // Same target
            if (itr->compare(name))
              return itr->getFrame();
          }

          // default frame.
          return Target::ST_NAVIGATION;
        }

        //! Parse incoming frame.
        //! @param[in] imc_src IMC source address.
        //! @param[in] msg received acoustic frame.
        void
        parse(uint16_t imc_src, const IMC::UamRxFrame* msg)
        {
          switch (msg->data[2])
          {
            case CODE_REQ:
            {
              // Do not process request if not capable.
              if (!m_usbl)
                return;

              if (msg->data[ST_START] & c_mask_start)
              {
                uint16_t period;
                std::memcpy(&period, &msg->data[ST_PERIOD], sizeof(uint16_t));
                Target::Frame frame = (Target::Frame)(msg->data[ST_START] & c_mask_frame);
                add(msg->sys_src, frame, period);
              }
              else
              {
                // stop.
                remove(msg->sys_src);
              }
              break;
            }
            case CODE_FIX:
            {
              IMC::UsblFixExtended fix;
              fix.setSource(imc_src);
              fix.target = msg->sys_dst;
              std::memcpy(&fix.lat, &msg->data[FIX_LAT], sizeof(fp64_t));
              std::memcpy(&fix.lon, &msg->data[FIX_LON], sizeof(fp64_t));
              std::memcpy(&fix.z, &msg->data[FIX_Z], sizeof(fp32_t));
              std::memcpy(&fix.z_units, &msg->data[FIX_ZU], sizeof(uint8_t));
              std::memcpy(&fix.accuracy, &msg->data[FIX_ACC], sizeof(fp32_t));
              m_task->dispatch(fix);
              break;
            }
            case CODE_POS:
            {
              IMC::UsblPositionExtended pos;
              pos.setSource(imc_src);
              pos.target = msg->sys_dst;
              std::memcpy(&pos.x, &msg->data[POS_X], sizeof(fp32_t));
              std::memcpy(&pos.y, &msg->data[POS_Y], sizeof(fp32_t));
              std::memcpy(&pos.z, &msg->data[POS_Z], sizeof(fp32_t));
              std::memcpy(&pos.n, &msg->data[POS_N], sizeof(fp32_t));
              std::memcpy(&pos.e, &msg->data[POS_E], sizeof(fp32_t));
              std::memcpy(&pos.d, &msg->data[POS_D], sizeof(fp32_t));
              std::memcpy(&pos.accuracy, &msg->data[POS_ACC], sizeof(fp32_t));
              m_task->dispatch(pos);
              break;
            }
            case CODE_ANG:
            {
              IMC::UsblAnglesExtended ang;
              ang.setSource(imc_src);
              ang.target = msg->sys_dst;
              std::memcpy(&ang.lbearing, &msg->data[ANG_LBEAR], sizeof(fp32_t));
              std::memcpy(&ang.lelevation, &msg->data[ANG_LELEV], sizeof(fp32_t));
              std::memcpy(&ang.bearing, &msg->data[ANG_BEAR], sizeof(fp32_t));
              std::memcpy(&ang.elevation, &msg->data[ANG_ELEV], sizeof(fp32_t));
              std::memcpy(&ang.accuracy, &msg->data[ANG_ACC], sizeof(fp32_t));
              m_task->dispatch(ang);
              break;
            }
          }
        }

        void
        parsePos(const IMC::UsblPositionExtended* msg)
        {
          (void)msg;
        }

        void
        parseAng(const IMC::UsblAnglesExtended* msg)
        {
          (void)msg;
        }

      private:
        //! True if handler is local modem is USBL.
        bool m_usbl;
        //! List of targets.
        std::vector<Target> m_list;
        //! Task pointer
        Tasks::Task* m_task;
      };
    };
  }
}

#endif
