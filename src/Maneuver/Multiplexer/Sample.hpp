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
// Author: Manuel Ribeiro                                                   *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_SAMPLE_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_SAMPLE_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;
    //!Variables
    struct SampleArgs
    {
      // Syringe 0 Id
      int syringe0Id;
      // Syringe 1 Id
      int syringe1Id;
      // Syringe 2 Id
      int syringe2Id;
      // Servo Open Value
      float openValue;
      // Servo Close Value
      float closeValue;
      // Time tolerance to execute maneuver
      double max_time;
    };

    //! Sample maneuver
    class Sample: public MuxedManeuver<IMC::Sample, SampleArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args Sample arguments
      Sample(Maneuvers::Maneuver* task, SampleArgs* args):
        MuxedManeuver<IMC::Sample, SampleArgs>(task, args),
        m_done(false)
      { }

      ~Sample(void)
      { }

      //! Start maneuver function
      //! @param[in] maneuver Sample maneuver message
      void
      onStart(const IMC::Sample* maneuver)
      {
        m_maneuver = *maneuver;
        timer.setTop(m_args->max_time);
        m_done = false;
      }

      void
      onThrottle(const IMC::Throttle* throttle)
      {
        m_task->debug("Trottle: %f\tDone?: %d\n", throttle->value, m_done);

        if (throttle->value < 1 && (m_medium.medium == IMC::VehicleMedium::VM_GROUND) && !m_done)
        {
          if (m_maneuver.syringe0 == IMC::BOOL_TRUE)
            setSyringeState(m_args->syringe0Id, m_args->openValue);

          if (m_maneuver.syringe1 == IMC::BOOL_TRUE)
            setSyringeState(m_args->syringe1Id, m_args->openValue);

          if (m_maneuver.syringe2 == IMC::BOOL_TRUE)
            setSyringeState(m_args->syringe2Id, m_args->openValue);

          m_done = true;
        }

        if (timer.overflow())
        {
          if (m_done)
            m_task->signalCompletion();
          else
            m_task->signalError(DTR("sample failed"));
        }
        else
          m_task->debug("Sampling for %f/%f seconds...", timer.getElapsed(), timer.getTop());
      }

      void
      setSyringeState(int syringe, float value)
      {
        IMC::SetServoPosition updateSyringe;
        updateSyringe.id = syringe;
        updateSyringe.value = value;
        m_task->dispatch(updateSyringe);
      }

      void
      onVehicleMedium(const IMC::VehicleMedium* medium)
      {
        m_medium = *medium;
      }

    private:
      IMC::Sample m_maneuver;
      IMC::VehicleMedium m_medium;
      //! Timer counter for duration
      Time::Counter<float> timer;
      bool m_done;

    };
  }
}

#endif
