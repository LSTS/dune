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
// Author: Renato Campos, Timi Okoya                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
//! Insert short task description here.
//!
//! Insert explanation on task behaviour here.
//! @author Timi Okoya
namespace Vision
{
  namespace RpiHqCamera
  {

    using DUNE_NAMESPACES;

    struct Arguments
    {
      int width, height;
    };

    struct Task : public Tasks::Periodic
    {
      Arguments m_args;
      uint m_frame_counter;
      std::string m_current_log;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Periodic(name, ctx),
                                                           m_frame_counter(0),
                                                           m_current_log("")
      {

        bind<IMC::LogBookEntry>(this);
        bind<IMC::LoggingControl>(this);

        param("RpiHqCamera: Image Width ", m_args.width)
            .defaultValue("2592")
            .description("Width of the Camera Resolution");

        param("RpiHqCamera: Image Height ", m_args.height)
            .defaultValue("1944")
            .description("Height of the Camera Resolution");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.width) || paramChanged(m_args.height)) 
        {
          // send new width and height to the python code
          IMC::Event msg;
          msg.data = String::str("%d,%d", m_args.width, m_args.height);
          msg.topic = "Resolution Change";
          dispatch(msg);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        while (m_current_log.empty())
        {
          waitForMessages(1.0);
        }
        inf("current log %s", m_current_log.c_str());
        inf("dir log: %s", m_ctx.dir_log.c_str());
        Path script = m_ctx.dir_scripts / "dune-get-rpi-image.py";
        Path fullpath = m_ctx.dir_log / m_current_log.c_str();
        inf("fullpath: %s", fullpath.c_str());
        std::system(String::str("python3 %s %s %s %s &",
                                script.c_str(),
                                getSystemName(),
                                fullpath.c_str(),
                                m_ctx.dir_log.c_str())
                        .c_str());
      }

      void
      consume(const IMC::LoggingControl *msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        if (msg->op != IMC::LoggingControl::COP_STARTED)
          return;
        m_current_log = msg->name;
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        std::system("killall python3");
      }

      void
      consume(const IMC::LogBookEntry *msg)
      {
        if (msg->getSource() == getSystemId())
          return;
        inf("Image is available at %s", msg->text.c_str());
      }

      //! Main loop.
      void
      task()
      {
        IMC::CompressedImage img_req;
        img_req.frameid = m_frame_counter++;
        dispatch(img_req);
        inf("Sent compressed image request %d", m_frame_counter);
      }
    };
  }
}
DUNE_TASK
