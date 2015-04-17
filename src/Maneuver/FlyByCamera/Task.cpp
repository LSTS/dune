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
// Author: Goncalo Cruz                                                     *
// Author: Joao Fortuna                                                     *
// Author: Christian Fuchs                                                  *
//***************************************************************************

// Preliminary version of Fly By Camera
// Flies vehicle based on camera orientation

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FlyByCamera
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::DesiredHeading m_heading_msg;
      double m_heading_v_desired;
      double m_heading_c_current;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Desired Vehicle Heading", m_heading_v_desired)
        .description("Desired Heading for the vehicle to follow")
        .defaultValue("0");

        param("Current Camera Heading", m_heading_c_current)
        .description("Current Camera heading in respect to the vehicle")
        .defaultValue("0");

        bind<IMC::EstimatedState>(this);
      }

      void
      onResourceAcquisition(void)
      {
        setControl(IMC::CL_YAW);
        inf("yaw controller activated");
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_heading_c_current=msg->psi+(3.14/20);
        m_heading_v_desired=m_heading_c_current;
        m_heading_msg.value=m_heading_v_desired;
        dispatch(m_heading_msg);
        inf("The desired heading is %f", m_heading_msg.value);
      }
    };
  }
}

DUNE_TASK
