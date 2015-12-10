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
// Author: Joao_teixeira                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <stdio.h>
#include <sys/select.h>
#include <termios.h>
#include <stropts.h>
#include <sys/ioctl.h>

namespace Transports
{
  namespace testcode
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {

      // Parameters.
      double flag;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
         inf("Starting: %s", resolveEntity(getEntityId()).c_str());
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
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      int _kbhit() {
          static struct termios oldt, newt;
           tcgetattr( STDIN_FILENO, &oldt);           // save old settings
           newt = oldt;
           newt.c_lflag &= ~(ICANON);                 // disable buffering      
           tcsetattr( STDIN_FILENO, TCSANOW, &newt);  // apply new settings

           int c = getchar();  // read character (non-blocking)

           tcsetattr( STDIN_FILENO, TCSANOW, &oldt);  // restore old settings
           return c;
        }


      //! Main loop.
      void
      onMain(void)
      {
         flag=0;
         fflush(stdout);
         char val;
        while (!stopping())
        {   val=_kbhit();
            if(val=='p')
            {
               flag=1;
               IMC::Temperature flagIMC;
               flagIMC.setSourceEntity(getEntityId());
               flagIMC.value = flag;
               dispatch(flagIMC);
               flag=0;
             }
            else if(val=='d')
            {
               flag=2;
               IMC::Temperature flagIMC;
               flagIMC.setSourceEntity(getEntityId());
               flagIMC.value = flag;
               dispatch(flagIMC);
               flag=0;
             }
             else if(val=='f')
            {
               flag=3;
               IMC::Temperature flagIMC;
               flagIMC.setSourceEntity(getEntityId());
               flagIMC.value = flag;
               dispatch(flagIMC);
               flag=0;
             }
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
