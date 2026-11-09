//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************
// Utility to compute hard-iron calibration parameters from log files       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

//! Heading correction of a calibration result: the x/y an AHRS applies.
static AhrsCrossCheck::Correction
correction(const CalibrationResult& r)
{
  AhrsCrossCheck::Correction c;
  c.b[0] = r.b[0];
  c.b[1] = r.b[1];
  c.horizontal = r.horizontal;
  return c;
}

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log/Data.lsf[.gz]> [AHRS labels]"
              << std::endl
              << "  AHRS labels: comma-separated (default AHRS); with more than one,"
              << " each is compared with the first." << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  std::vector<std::string> labels;
  Utils::String::split(argc > 2 ? argv[2] : "AHRS", ",", labels);
  for (auto& l : labels)
    l = Utils::String::trim(l);

  IMC::Message* msg = NULL;

  // One calibration per AHRS and method, to compare methods on the same samples.
  const std::vector<std::string> methods = {"Gyro-Aided", "Min-Max", "Circle Fit"};
  std::vector<std::vector<DUNE::Navigation::CompassCalibration>> ccals(labels.size());
  for (auto& per_ahrs : ccals)
  {
    per_ahrs.resize(methods.size());
    for (size_t i = 0; i < methods.size(); ++i)
    {
      std::vector<std::string> unknown;
      per_ahrs[i].setMethods({methods[i]}, unknown);
    }
  }

  // Comparison of each other AHRS with the first.
  std::vector<DUNE::Navigation::AhrsCrossCheck> checks(labels.size());

  std::map<unsigned, size_t> ahrs;  // entity id -> label index
  unsigned ccal_eid = DUNE_IMC_CONST_UNK_EID;

  // Feed the comparisons with a sample of AHRS k.
  auto feed = [&](size_t k, std::function<void(DUNE::Navigation::AhrsCrossCheck&, unsigned)> f)
  {
    if (k == 0)
    {
      for (size_t j = 1; j < labels.size(); ++j)
        f(checks[j], 0);
    }
    else
    {
      f(checks[k], 1);
    }
  };

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      auto itr = ahrs.find(msg->getSourceEntity());
      bool from_ahrs = itr != ahrs.end();
      size_t k = from_ahrs ? itr->second : 0;

      if (msg->getId() == DUNE_IMC_EULERANGLES && from_ahrs)
      {
        IMC::EulerAngles* ea = static_cast<IMC::EulerAngles*>(msg);
        for (auto& c : ccals[k])
          c.updateDCM(*ea);
        feed(k, [&](DUNE::Navigation::AhrsCrossCheck& c, unsigned i)
             { c.addAttitude(i, ea->getTimeStamp(), ea->phi, ea->theta, ea->psi); });
      }
      else if (msg->getId() == DUNE_IMC_ANGULARVELOCITY && from_ahrs)
      {
        IMC::AngularVelocity* av = static_cast<IMC::AngularVelocity*>(msg);
        for (auto& c : ccals[k])
          c.updateRates(*av);
        const double w[3] = {av->x, av->y, av->z};
        feed(k, [&](DUNE::Navigation::AhrsCrossCheck& c, unsigned i)
             { c.addRates(i, av->getTimeStamp(), w); });
      }
      else if (msg->getId() == DUNE_IMC_MAGNETICFIELD)
      {
        IMC::MagneticField* mf = static_cast<IMC::MagneticField*>(msg);

        if (mf->getSourceEntity() == ccal_eid)
        {
          std::cout << "Log Parameters (entity " << mf->getDestinationEntity()
                    << "): " << mf->x << ", " << mf->y << ", " << mf->z << std::endl;
        }
        else if (from_ahrs)
        {
          for (auto& c : ccals[k])
            c.updateField(*mf);
        }
      }
      else if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        IMC::EntityInfo* ei = static_cast<IMC::EntityInfo*>(msg);

        for (size_t i = 0; i < labels.size(); ++i)
          if (ei->label == labels[i])
            ahrs[ei->id] = i;

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

  // Compute values; the first method that succeeds gives each AHRS's
  // correction for the comparisons (the maneuver's default order).
  std::vector<DUNE::Navigation::AhrsCrossCheck::Correction> corr(labels.size());
  for (size_t k = 0; k < labels.size(); ++k)
  {
    corr[k] = DUNE::Navigation::AhrsCrossCheck::none();
    bool found = false;
    for (size_t i = 0; i < methods.size(); ++i)
    {
      Math::Matrix params;
      std::cout << labels[k] << ": " << methods[i] << ": ";
      if (ccals[k][i].getCalibrationParams(params))
      {
        std::cout << params(0) << ", " << params(1) << ", ";
        if (ccals[k][i].lastZDetermined())
          std::cout << params(2);
        else
          std::cout << "z not determined";
        std::cout << " (" << ccals[k][i].lastResult().details << ")" << std::endl;
        if (!found)
          corr[k] = correction(ccals[k][i].lastResult());
        found = true;
      }
      else
      {
        std::cout << "no calibration (" << ccals[k][i].failures() << ")" << std::endl;
      }
    }
  }

  for (size_t k = 1; k < labels.size(); ++k)
  {
    std::string why;
    DUNE::Navigation::AhrsCrossCheck::Mounting mount;
    std::printf("%s vs %s: ", labels[k].c_str(), labels[0].c_str());
    if (checks[k].mounting(mount, why))
      std::printf("mounting roll %.2f, pitch %.2f, yaw %.2f deg (sigma %.2f, %.2f, %.2f; "
                  "rate residual %.3f deg/s; %u s); their roll/pitch differ by %+.2f, "
                  "%+.2f deg beyond it\n",
                  Angles::degrees(mount.rpy[0]), Angles::degrees(mount.rpy[1]),
                  Angles::degrees(mount.rpy[2]), Angles::degrees(mount.sigma[0]),
                  Angles::degrees(mount.sigma[1]), Angles::degrees(mount.sigma[2]),
                  Angles::degrees(mount.residual), mount.bins, Angles::degrees(mount.tilt[0]),
                  Angles::degrees(mount.tilt[1]));
    else
      std::printf("mounting not determined (%s)\n", why.c_str());

    DUNE::Navigation::AhrsCrossCheck::Heading given, cal;
    std::printf("%s vs %s: ", labels[k].c_str(), labels[0].c_str());
    if (checks[k].heading(DUNE::Navigation::AhrsCrossCheck::none(),
                          DUNE::Navigation::AhrsCrossCheck::none(), given, why)
        && checks[k].heading(corr[0], corr[k], cal, why))
      std::printf("heading difference %+.2f deg, first harmonic %.2f deg (as received: "
                  "%+.2f, %.2f)\n",
                  Angles::degrees(cal.offset), Angles::degrees(cal.harmonic),
                  Angles::degrees(given.offset), Angles::degrees(given.harmonic));
    else
      std::printf("heading not compared (%s)\n", why.c_str());
  }

  delete is;

  return 0;
}
