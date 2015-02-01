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
// Author: José Braga                                                       *
//***************************************************************************
// Utility to compute hard-iron calibration parameters from log files       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  IMC::Message* msg = NULL;

  DUNE::Navigation::CompassCalibration m_ccal;

  unsigned ahrs_eid = 0;
  unsigned ccal_eid = 0;

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_EULERANGLES)
      {
        IMC::EulerAngles* ea = static_cast<IMC::EulerAngles*>(msg);

        if (ea->getSourceEntity() != ahrs_eid)
          continue;

        m_ccal.updateDCM(*ea);
      }
      else if (msg->getId() == DUNE_IMC_MAGNETICFIELD)
      {
        IMC::MagneticField* mf = static_cast<IMC::MagneticField*>(msg);

        if (mf->getSourceEntity() == ccal_eid)
        {
          std::cout << "Log Parameters: " << mf->x << ", " << mf->y << ", " << mf->z << std::endl;
        }

        if (mf->getSourceEntity() != ahrs_eid)
          continue;

        m_ccal.updateField(*mf);
      }
      else if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        IMC::EntityInfo* ei = static_cast<IMC::EntityInfo*>(msg);

        if (!std::strcmp(ei->label.c_str(), "AHRS"))
          ahrs_eid = ei->id;

        if (!std::strcmp(ei->label.c_str(), "Compass Calibration Maneuver"))
          ccal_eid = ei->id;
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  // Compute values.
  Math::Matrix params = m_ccal.getCalibrationParams();

  std::cout << "New Parameters: " << params(0) << ", " << params(1) << ", " << params(2) << std::endl;
  delete is;

  return 0;
}
