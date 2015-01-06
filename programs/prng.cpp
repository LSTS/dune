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
// Utility program to test PRNGs in DUNE::Math::Random                      *
//***************************************************************************

#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <DUNE/Math/Random/Factory.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Utils/String.hpp>

using namespace DUNE::Math::Random;
using namespace DUNE::Time;
using namespace DUNE::Utils;

int
main(int argc, char** argv)
{
  --argc; ++argv;

  if (argc < 2)
  {
    std::cerr << "Usage: prng <random|gaussian|uniform> <PRNG id> [<initial seed> [sample size]" << std::endl;
    return 1;
  }

  double mu;
  double sigma;

  std::string cmd(argv[0]);
  const char* id = argv[1];
  int32_t s = argc >= 3 ? atoi(argv[2]) : Generator::arbitrarySeed();
  int32_t n = argc >= 4 ? atoi(argv[3]) : 10;

  Generator* g = 0;

  try
  {
    g = Factory::create(id, s);
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
    return 1;
  }

  std::cout << "Generator: " << id << std::endl
            << "Seed: " << s << std::endl
            << "Sample size: " << n << std::endl;

  if (cmd == "random")
  {
    for (int i = 0; i < n; ++i)
      std::cout << String::str("%6d %12d", i, g->random()) << std::endl;
  }
  else if (cmd == "uniform")
  {
    for (int i = 0; i < n; ++i)
      std::cout << String::str("%6d %.7f", i, g->uniform()) << std::endl;
  }
  else if (cmd == "gaussian")
  {
    for (int i = 0; i < n; i++)
      std::cout << String::str("%6d %.7f", i, g->gaussian()) << std::endl;
  }
  else if (cmd == "gquality")
  {
    double sum = 0, sumsq = 0;
    n *= 1000000L;
    for (int i = 0; i < n; i++)
    {
      double v = g->gaussian();

      sum += v;
      sumsq += v * v;
    }
    mu = sum / (double)n;
    sigma = sqrt(sumsq / (double)n);
    std::cerr << String::str("mu: %.4e sigma: %.4e", mu, sigma) << std::endl;
  }
  else if (cmd == "uquality")
  {
    double sum = 0;
    double sumsq = 0;
    n *= 1000000L;
    for (int i = 0; i < n; i++)
    {
      double v = g->uniform();
      double d = v - 0.5;
      sum += v;
      sumsq += d * d;
    }
    mu = sum / (double)n;
    sigma = sqrt(sumsq / (double)n);
    std::cerr << String::str("mu: %.4e sigma: %.4e", mu, sigma) << std::endl;
  }
  else if (cmd == "rspeed")
  {
    double t = Clock::get();
    n *= 1000000L;
    for (int i = 0; i < n; i++)
      g->random();
    t = Clock::get() - t;
    std::cout << String::str("%.2f Mnumbers / s", ((double)n) / (1e+06 * t)) << std::endl;
  }
#if defined(DUNE_OS_LINUX)
  else if (cmd == "random-speed")
  {
    double t = Clock::get();
    n *= 1000000L;
    for (int i = 0; i < n; i++)
      random();
    t = Clock::get() - t;
    std::cout << String::str("%.2f Mnumbers / s", ((double)n) / (1e+06 * t)) << std::endl;
  }
  else if (cmd == "lrand48-speed")
  {
    double t = Clock::get();
    n *= 1000000L;
    for (int i = 0; i < n; i++)
      lrand48();
    t = Clock::get() - t;
    std::cout << String::str("%.2f Mnumbers / s", ((double)n) / (1e+06 * t)) << std::endl;
  }
  else if (cmd == "lrand48-check")
  {
    int i;
    srand48(s);
    for (i = 0; i < n; i++)
    {
      if (lrand48() != g->random())
      {
        std::cout << "test failed" << std::endl;
        break;
      }
    }
    if (i == n)
      std::cout << id << " mimics srand48 + lrand48" << std::endl;
  }
  else if (cmd == "random-check")
  {
    int i;
    srandom(s);
    for (i = 0; i < n; i++)
    {
      if (random() != g->random())
      {
        std::cout << "test failed" << std::endl;
        break;
      }
    }
    if (i == n)
      std::cout << id << " mimics srandom() + random()" << std::endl;
  }
#endif
  else
  {
    std::cerr << "invalid command '" << cmd << "'" << std::endl;
    return 1;
  }
  return 0;
}
