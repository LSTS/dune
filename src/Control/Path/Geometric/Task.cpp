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
// Author: Claudio Paliotta                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace Geometric
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {

        IMC::DesiredHeading m_heading;
        Time::Counter<float> m_realpos;
        double m_yaw, m_u, m_v, m_svelx, m_svely;
        double V_x, V_y;
        double Ud;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          bind<IMC::GpsFix>(this);
          // for dev purposes only
          bind<IMC::EstimatedStreamVelocity>(this);
          m_realpos.setTop(60);
          V_x = V_y = 0;
        }

        void
        onUpdateParameters(void)
        {
          // parameters were set
          PathController::onUpdateParameters();
        }

        void
        onPathActivation(void)
        {
          // path control activated
          m_realpos.reset();
        }

        void
        onPathDeactivation(void)
        {
          // path control deactivated
          inf("Not updating anymore.");
        }

        void
        onDesiredSpeed(const IMC::DesiredSpeed* msg)
        {
          Ud = msg->value;
        }

        void
        consume(const IMC::GpsFix* msg)
        {

          if ((msg->validity & GpsFix::GFV_VALID_POS) == 0)
            return;

          debug("Processing gpxfix");


        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          V_x = msg->x;
          V_y = msg->y;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          double ref; double k = 0.1; double ey = ts.track_pos.y;
          double Vrx = V_x; double Vry = V_y;

          DUNE::Math::Angles::rotate(ts.track_bearing, true, Vrx , Vry);
          ref = ts.track_bearing - std::atan((k*ey + Vry)/Ud);
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);

        }
      };
    }
  }
}

DUNE_TASK
