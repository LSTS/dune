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
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Utility program to replay LSF files with configurable time scale.        *
//***************************************************************************

#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

static
void
usage(void)
{
  std::cerr << "Usage:\n\t replaylsf [options] host port f1 ... fn\n"
            << "Options:\n\t-s speed : replay speed (0 for no time-based replay, default is 1.0)\n"
            << "\t-b time: begin time offset for replay (disabled by default)\n"
            << "\t-e time: end time offset for replay (disabled by default)\n"
            << "\t-m msg1,...,msgn: only replay specified messages\n"
            << "\t-S addr: filter using source address"
            << "\t-D addr: filter using destination adreess\n"
            << "\t-v [0-2]: verbosity level\n\n"
            << "f1 ... fn can be:\n"
            << "\t* Gzipped LSF files (.gz extension)\n"
            << "\t* LLF log dir names (will look for Data.lsf.gz in it)\n"
            << "\t* plain LSF files\n";
}

int
main(int argc, char** argv)
{
  double speed = 1, begin = 0, end = -1;
  std::map<std::string, bool> filter;
  bool filtering = false;
  int verbose = 0;
  uint16_t src = 0xFFFF, dst = 0xFFFF;

  ++argv; --argc;

  if (!argc)
  {
    usage();
    return 1;
  }

  for (; *argv && **argv == '-'; ++argv, --argc)
  {
    char opt = (*argv)[1];
    ++argv; --argc;

    if (!*argv || **argv == '-')
    {
      std::cerr << "Invalid options\n";
      usage();
      return 1;
    }

    // @todo Use DUNE's OptionParser, too lazy now to do it.
    switch (opt)
    {
      case 'b':
      {
        char* aux;
        begin = std::strtod(*argv, &aux);
        if (*aux != 0 || begin < 0)
        {
          std::cerr << "Invalid begin time: " << *argv << '\n';
          usage();
          return 1;
        }
        break;
      }
      case 'e':
      {
        char* aux;
        end = std::strtod(*argv, &aux);
        if (*aux != 0 || end < 0)
        {
          std::cerr << "Invalid end time: " << *argv << '\n';
          usage();
          return 1;
        }
        break;
      }

      case 'S':
      {
        char* aux;
        src = std::strtol(*argv, &aux, 10);
        if (*aux != 0)
        {
          std::cerr << "Invalid source address: " << *argv << '\n';
          usage();
          return 1;
        }
        break;
      }
      case 'D':
      {
        char* aux;
        dst = std::strtol(*argv, &aux, 10);
        if (*aux != 0)
        {
          std::cerr << "Invalid destination adress: " << *argv << '\n';
          usage();
          return 1;
        }
        break;
      }
      case 's':
      {
        char* aux;
        speed = std::strtod(*argv, &aux);
        if (*aux != 0 || speed < 0)
        {
          std::cerr << "Invalid speed setting: " << *argv << '\n';
          usage();
          return 1;
        }
        break;
      }
      case 'v':
        verbose = std::atoi(*argv);
        break;
      case 'm':
      {
        std::vector<std::string> list;
        DUNE::Utils::String::split(*argv, ",", list);
        for (uint16_t i = 0; i < list.size(); ++i)
          filter[list[i]] = true;
        filtering = true;
      }
      break;
      default:
        std::cerr << "Invalid option: '-" << opt << "\'\n";
        usage();
        return 1;
    }
  }

  if (argc < 3)
  {
    std::cerr << "Invalid arguments" << std::endl;
    usage();
    return 1;
  }

  if (begin > 0 && end > 0 && begin > end)
  {
    std::cerr << "Invalid time offsets" << std::endl;
    usage();
    return 1;
  }

  UDPSocket sock;
  Address dest(argv[0]);
  uint16_t port = std::atoi(argv[1]);

  argv += 2;

  std::cout << std::fixed << std::setprecision(4);

  for (; *argv != 0; argv++)
  {
    Path file(*argv);
    std::istream* is;

    if (file.isDirectory())
    {
      file = file / "Data.lsf";
      if (!file.isFile())
        file += ".gz";
    }

    if (!file.isFile())
    {
      std::cerr << file << " does not exist\n";
      return 1;
    }

    Compression::Methods method = Compression::Factory::detect(file.c_str());
    if (method == METHOD_UNKNOWN)
      is = new std::ifstream(file.c_str(), std::ios::binary);
    else
      is = new Compression::FileInput(file.c_str(), method);

    IMC::Message* m;

    m = IMC::Packet::deserialize(*is);
    if (!m)
    {
      std::cerr << file << " contains no messages\n";
      delete is;
      continue;
    }

    DUNE::Utils::ByteBuffer bb;

    double time_origin = m->getTimeStamp();
    if (begin >= 0)
    {
      do
      {
        if (m->getTimeStamp() - time_origin >= begin)
          break;
        delete m;
        m = IMC::Packet::deserialize(*is);
      }
      while (m);

      if (!m)
      {
        std::cerr << "no messages for specified time range" << std::endl;
        return 1;
      }
    }
    else
      begin = 0;

    double start_time = Clock::getSinceEpoch();
    double now = start_time;

    do
    {
      double msg_ts = m->getTimeStamp();
      double vtime = msg_ts - time_origin;

      m->setTimeStamp(start_time + vtime);

      double future = 0;

      if (speed > 0 && vtime >= begin)
      {
        // Delay time to mimic behavior at specified speed
        future = start_time + vtime / speed - begin;
        double delay_time = (future - now);
        if (delay_time > 0)
          Delay::wait(delay_time);
      }
      now = Clock::getSinceEpoch();

      if (vtime >= begin
          && (src == 0xFFFF || src == m->getSource())
          && (dst == 0xFFFF || dst == m->getDestination())
          && (!filtering || filter[m->getName()]))
      {
        // Send message
        IMC::Packet::serialize(m, bb);
        sock.write(bb.getBuffer(), m->getSerializationSize(), dest, port);
        if (verbose >= 1)
          std::cout << (begin + now - start_time) << ' ' << vtime << ' ' << now - future << " : " << m->getName() << '\n';
        if (verbose >= 2)
          m->toText(std::cout);
      }

      delete m;

      if (end >= 0 && vtime >= end)
        break;
    }
    while ((m = IMC::Packet::deserialize(*is)) != 0);
    delete is;
  }
  return 0;
}
