//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_LOITER_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_LOITER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    struct LoiterArgs
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    //! Loiter maneuver
    class Loiter: public MuxedManeuver<IMC::Loiter, LoiterArgs>
    {
    public:
      //! Supported loiter types
      enum LoiterTypes
      {
        //! Circular loiter
        LTYPE_CIRCULAR = 0,
        //! Figure eight loiter
        LTYPE_FIGURE_EIGHT
      };

      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args loiter arguments
      Loiter(Maneuvers::Maneuver* task, LoiterArgs* args):
        MuxedManeuver<IMC::Loiter, LoiterArgs>(task, args),
        m_ltr(NULL)
      { }

      //! Destructor
      ~Loiter(void)
      {
        Memory::clear(m_ltr);
      }

      //! Get supported loiter type to perform
      //! @param[in] type loiter type to perform from maneuver message
      //! @return supported type of loiter that will be performed
      LoiterTypes
      getType(IMC::Loiter::LoiterTypeEnum type)
      {
        switch (type)
        {
          case IMC::Loiter::LT_DEFAULT:
          case IMC::Loiter::LT_CIRCULAR:
            return LTYPE_CIRCULAR;
          case IMC::Loiter::LT_EIGHT:
            return LTYPE_FIGURE_EIGHT;
          default:
            m_task->err("Specified loiter type not supported, performing default");
            return getType(IMC::Loiter::LT_DEFAULT);
        }
      }

      //! Start maneuver function
      //! @param[in] maneuver loiter maneuver message
      void
      onStart(const IMC::Loiter* maneuver)
      {
        Memory::clear(m_ltr);

        LoiterTypes type = getType((IMC::Loiter::LoiterTypeEnum)maneuver->type);

        switch (type)
        {
          case LTYPE_FIGURE_EIGHT:
            Maneuvers::FigureEight* fig;
            fig = new Maneuvers::FigureEight(maneuver, m_task, m_args->min_radius);
            m_ltr = static_cast<Maneuvers::AbstractLoiter*>(fig);
            break;
          default:
            Maneuvers::Circular* circ;
            circ = new Maneuvers::Circular(maneuver, m_task, m_args->min_radius);
            m_ltr = static_cast<Maneuvers::AbstractLoiter*>(circ);
            break;
        }

        m_duration = maneuver->duration;
        m_end_time = -1;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_ltr->onPathControlState(pcs);

        if (m_ltr->isLoitering())
        {
          if (m_duration)
          {
            double now = Clock::get();

            if (m_end_time < 0)
            {
              m_task->debug("will now loiter for %d seconds", m_duration);
              m_end_time = now + m_duration;
            }
            else if (now >= m_end_time)
            {
              m_task->signalCompletion();
            }
            else
            {
              m_task->signalProgress((uint16_t)Math::round(m_end_time - now));
            }
          }
        }
        else
        {
          if (m_duration > 0)
            m_task->signalProgress(pcs->eta + m_duration);
          else
            m_task->signalProgress();
        }
      }

      //! On EstimatedState message
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        m_ltr->onEstimatedState(msg);
      }

    private:
      //! Pointers to loiter type behavior
      Maneuvers::AbstractLoiter* m_ltr;
      //! Loiter: End time
      double m_end_time;
      //! Loiter: Duration in seconds
      uint16_t m_duration;
    };
  }
}

#endif
