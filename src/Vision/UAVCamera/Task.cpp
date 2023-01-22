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
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace UAVCamera
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Camera
      std::string camera;
      //! Power channel name.
      std::string power;
      //! Horizontal FOV (cross-track) for AXIS
      int axis_hfov;
      //! Vertical FOV (along-track) for AXIS
      int axis_vfov;
      //! Camera mount tilt angle for AXIS
      float axis_tilt;
      //! Horizontal FOV (cross-track) for FLIR
      int flir_hfov;
      //! Vertical FOV (along-track) for FLIR
      int flir_vfov;
      //! Camera mount tilt angle for FLIR
      float flir_tilt;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Camera control status.
      bool m_status;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_status(1)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Onboard Camera", m_args.camera)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .values("AXIS, FLIR")
        .defaultValue("AXIS")
        .description("Onboard camera.");

        param("Power Channel Name", m_args.power)
        .defaultValue("")
        .description("Default power channel name");

        param("(AXIS) Horizontal AOV", m_args.axis_hfov)
        .description("Cross-Track Angle of View, in degrees.");

        param("(AXIS) Vertical AOV", m_args.axis_vfov)
        .description("Along-Track Angle of View, in degrees.");

        param("(AXIS) Tilt Angle", m_args.axis_tilt)
        .description("Camera mount tilt angle, in degrees.");

        param("(FLIR) Horizontal AOV", m_args.flir_hfov)
        .description("Cross-Track Angle of View, in degrees.");

        param("(FLIR) Vertical AOV", m_args.flir_vfov)
       .description("Along-Track Angle of View, in degrees.");

        param("(FLIR) Tilt Angle", m_args.flir_tilt)
        .description("Camera mount tilt angle, in degrees.");
      }

      //! Set camera power channel.
      //! @param[in] power true to enable power control.
      void
      cameraControl(bool power)
      {
        // Camera power actuation
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.power;
        pcc.op = power ? IMC::PowerChannelControl::PCC_OP_TURN_ON : IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(pcc);

        // Update power status
        m_status = power;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            if (!m_status)
              cameraControl(true);

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          else
          {
            if (m_status)
              cameraControl(false);

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
