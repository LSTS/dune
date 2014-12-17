//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_YO_YO_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_YO_YO_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    struct YoYoArgs
    {
      //! Saturation level for variation in pitch references.
      double variation;
      //! True if we should check path errors and stabilize pitch
      bool check_errors;
      //! Max course error.
      double u_course;
      //! Max cross. track error.
      double u_ctrack;
    };

    //! Yoyo maneuver
    class YoYo: public MuxedManeuver<IMC::YoYo, YoYoArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args yoyo arguments
      YoYo(Maneuvers::Maneuver* task, YoYoArgs* args):
        MuxedManeuver<IMC::YoYo, YoYoArgs>(task, args),
        m_yoyo(NULL)
      { }

      //! Destructor
      ~YoYo(void)
      {
        Memory::clear(m_yoyo);
      }

      //! Start maneuver function
      //! @param[in] maneuver yoyo maneuver message
      void
      onStart(const IMC::YoYo* maneuver)
      {
        // Enable path, pitch and speed control
        m_task->setControl(IMC::CL_PATH | IMC::CL_PITCH);

        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;

        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;

        // disable depth control within path control
        path.flags = IMC::DesiredPath::FL_NO_Z;
        m_task->dispatch(path);

        m_zunits = static_cast<IMC::ZUnits>(maneuver->z_units);

        m_dispatched = false;

        double zref;

        if (maneuver->z_units == IMC::Z_ALTITUDE)
        {
          zref = - maneuver->z;
        }
        else if (maneuver->z_units == IMC::Z_DEPTH)
        {
          zref = maneuver->z;
        }
        else
        {
          m_task->signalInvalidZ();
          return;
        }

        m_task->debug("altitude/depth :[%0.2f %0.2f] | %s: %0.2f %s | %s: %0.2f %s %d %s",
                      std::fabs(maneuver->z - maneuver->amplitude),
                      std::fabs(maneuver->z + maneuver->amplitude),
                      "pitch", Angles::degrees(maneuver->pitch),
                      "degrees", "speed", path.speed,
                      "in", (int)path.speed_units, "units");

        // basic init.
        m_on_course = false;
        m_course_recovered = false;

        // initialize yoyo motion controller
        Memory::clear(m_yoyo);

        m_yoyo = new YoYoMotion(m_task, maneuver->pitch, zref,
                                maneuver->amplitude, m_args->variation);
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          // done, stabilize pitch at the end
          m_pitch.value = 0;
          m_task->dispatch(m_pitch);
          m_task->signalCompletion();
          return;
        }

        m_task->signalProgress(pcs->eta);

        // Check if off-track (stabilize pitch otherwise)
        if (m_args->check_errors &&
            (std::fabs(pcs->course_error) >= m_args->u_course ||
             std::fabs(pcs->y) >= m_args->u_ctrack))
        {
          m_on_course = false;
          m_course_recovered = false;
        }
        else if (!m_on_course)
        {
          m_on_course = true;
          m_course_recovered = true;
        }
      }

      //! On EstimatedState message
      //! @param[in] msg EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        if (m_zunits == IMC::Z_DEPTH)
        {
          update(msg->depth, msg->theta);
        }
        else if ((msg->alt >= 0) && (m_zunits == IMC::Z_ALTITUDE))
        {
          update(-msg->alt, msg->theta);
        }
        else
        {
          m_task->signalNoAltitude();
          return;
        }
      }

      //! update the maneuver with a depth or altitude value
      //! a negative value will be interpreted as an altitude
      //! @param[in] state_z current z position
      //! @param[in] theta current pitch angle
      void
      update(double state_z, double theta)
      {
        // Pitch value for control
        double v;

        if (!m_on_course)
        {
          // Stabilize pitch at 0 degrees
          v = m_yoyo->stabilize(0.0, theta);
        }
        else if (m_course_recovered)
        {
          // yo-yo again after course is recovered
          v = m_yoyo->update(true, state_z, theta);
          m_course_recovered = false;
        }
        else
        {
          v = m_yoyo->update(false, state_z, theta);
        }

        // dont bother sending message if the value remains the same
        // which will happen frequently
        if ((m_pitch.value == v) && (m_dispatched))
          return;

        // Dispatch pitch message
        m_pitch.value = v;
        m_task->dispatch(m_pitch);

        m_dispatched = true;
      }

    private:
      //! Desired pitch message.
      IMC::DesiredPitch m_pitch;
      //! Z units for this maneuver
      IMC::ZUnits m_zunits;
      //! Yoyo motion controller
      DUNE::Control::YoYoMotion* m_yoyo;
      //! On course flag.
      bool m_on_course;
      //! Course recovered flag.
      bool m_course_recovered;
      //! Some pitch reference has been dispatched already.
      bool m_dispatched;
    };
  }
}

#endif
