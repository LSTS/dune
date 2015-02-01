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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>

#include <DUNE/DUNE.hpp>

// Task headers.
#include <Transports/SUNSET/Scheduler.hpp>

// Local headers.
#include "Test.hpp"

using DUNE_NAMESPACES;

int
main(int argc, char** argv)
{
  using namespace Transports::SUNSET;

  ScheduleKey key0("Temperature", 0, 1);
  ScheduleKey key1("Temperature", 0, 1);

  std::map<ScheduleKey, std::string> map;
  map[key0] = "Lixo1";
  map[key1] = "Lixo2";

  std::cerr << map.size() << std::endl;

  // sched.setSchedule("Temperature", 0, 1, 1.0);
  // sched.setSchedule("Temperature", 0, 2, 0.2);

  // while (true)
  // {
  //   double delay = sched.getRemaining();
  //   std::cerr << "Waiting " << delay << std::endl;

  //   Delay::wait(delay);
  //   sched.update();
  // }

  return 0;
}
