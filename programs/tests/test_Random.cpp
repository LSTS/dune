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
// Test program for DUNE::Math::Random namespace.                           *
//***************************************************************************
#include <string>
#include <cstdlib>
#include <cmath>
#include "Test.hpp"
#include <DUNE/Math/Random.hpp>

using namespace DUNE::Math::Random;

void
test_DRand48(void);

void
test_FSR256(void);

void
test_MT19937(void);

void
test_KernelDevice(void);

Test test("DUNE::Math::Random");

int
main(int argc, char** argv)
{
  // ** FOR DRAND48 & FSR256 **
  // NOTE 1: defines do not relate to availability of algorithm
  // in the library (they should all work in any OS at the DUNE library level),
  // but to its counterpart (lrand48(),random(),...) at the C library level
  // NOTE 2: We don't use the OS counterpart impl., they're normally much
  // slower due to some overheads
  // - here we are strictly checking our impl. against the C library one when available.
#if defined(DUNE_OS_LINUX) || defined(DUNE_OS_DARWIN)
  test_DRand48();
#endif
  // @todo: check for Glibc 2 rather than Linux
#ifdef DUNE_OS_LINUX
  test_FSR256();
#endif
  // ** FOR MT19937: we check against Matlab derived results **
  test_MT19937();
  // ** FOR KernelDevice: we merely check for sanity if /dev/urandom is available **
  test_KernelDevice();
}

// Sample seeds obtained from /dev/urandom
const int32_t seeds[] =
{
  1793737238, 657604860,  399904693,  1691395772, 517861510,
  284632928,  1073524579, 1373947238, 218248577,  1832512010
};

const int SEEDS = sizeof(seeds) / sizeof(int32_t);

const int N = 10;

void
test_DRand48(void)
{
#if defined(DUNE_SYS_HAS_LRAND48)
  DRand48 rng;
  int i, j;

  for (i = 0; i < SEEDS; ++i)
  {
    srand48(seeds[i]);
    rng.seed(seeds[i]);

    for (j = 0; j < N; ++j)
      if (rng.random() != lrand48())
        break;

    if (j != N)
      break;
  }

  test.boolean("DRand48", i == SEEDS);
#endif
}

void
test_FSR256(void)
{
#if defined(DUNE_SYS_HAS_RANDOM)
  FSR256 rng;
  int i, j;

  for (i = 0; i < SEEDS; ++i)
  {
    srandom(seeds[i]);
    rng.seed(seeds[i]);

    for (j = 0; j < N; ++j)
      if (rng.random() != random())
        break;

    if (j != N)
      break;
  }
  test.boolean("FSR256", i == SEEDS);
#endif
}

/*
  Results for Mersennne-Twister 199937 algorithm
  obtained using the following Matlab program
  (we use uniform() for test since rand() in Matlab
   returns fp. values in [0-1] and no interface seems to exist for integer PRNG)

s = [ 1793737238, 657604860, 399904693, 1691395772, 517861510, ...
      284632928, 1073524579, 1373947238, 218248577, 1832512010];
SEEDS = size(s,2);
N = 10;
res = zeros(SEEDS,N);
for i=1:SEEDS
    rand('twister',s(i));
    for j=1:N
      res(i,j) = rand();
    end;
end;
res
save x.txt res -ascii
*/

double MatlabMTResults[SEEDS][N] =
{
  {7.6322440e-02, 7.6452034e-01, 5.4898460e-01, 1.6444483e-01, 2.1462258e-01, 5.3972002e-01, 5.5537516e-01, 3.6191133e-01, 4.1564419e-01, 6.1932723e-01},
  {8.1111477e-01, 4.8819852e-01, 2.6037628e-01, 9.1445680e-01, 2.0500877e-01, 7.8424567e-01, 4.3626730e-01, 3.6177875e-01, 6.7552628e-01, 6.9976741e-01},
  {7.0849501e-01, 7.8666589e-01, 8.2445742e-01, 8.1108510e-01, 8.4690285e-01, 8.5264744e-02, 7.8315933e-01, 9.1473298e-01, 5.4209245e-01, 5.3882768e-01},
  {4.6169867e-02, 7.5776194e-01, 9.3914320e-01, 3.7170274e-01, 3.7376576e-01, 8.9138044e-01, 1.5068910e-01, 3.0528602e-01, 6.9898261e-01, 7.3782714e-01},
  {8.4937521e-01, 2.4879858e-01, 6.0901023e-01, 8.6536628e-01, 3.7882548e-01, 7.6294060e-01, 4.7908829e-01, 4.6312684e-01, 8.8647319e-01, 5.6902422e-01},
  {8.1090541e-01, 1.3645578e-01, 2.8386593e-01, 6.7032747e-01, 3.7939345e-01, 8.8627086e-01, 5.4137132e-01, 8.1771001e-02, 5.1366684e-01, 2.7891419e-01},
  {5.1656503e-01, 4.0615162e-01, 2.0429185e-02, 7.8843112e-01, 6.4143113e-01, 9.4131783e-01, 8.7045385e-01, 6.5205745e-01, 5.4475592e-01, 2.2761930e-01},
  {8.2828418e-01, 5.7055143e-01, 6.9961935e-01, 2.2682245e-01, 4.4091329e-01, 1.3052928e-01, 3.5895783e-01, 1.4501379e-01, 4.8350401e-01, 1.9537809e-01},
  {8.4282275e-01, 9.3032626e-01, 1.4380861e-01, 2.4477361e-01, 6.2703686e-01, 9.3947500e-01, 1.8715199e-01, 3.1383526e-01, 1.7988890e-01, 6.4919977e-01},
  {7.9564930e-01, 4.6805870e-01, 9.8286406e-01, 5.7366242e-01, 8.0699266e-01, 5.0096609e-01, 2.4681984e-01, 2.3988532e-01, 1.9872625e-01, 5.6785480e-01}
};

void
test_MT19937(void)
{
  MT19937 rng;
  int i, j;

  for (i = 0; i < SEEDS; ++i)
  {
    rng.seed(seeds[i]);

    for (j = 0; j < N; ++j)
    {
      double v1 = rng.uniform();
      double v2 = MatlabMTResults[i][j];
      if (std::fabs(v1 - v2) > 1e-05)
        break;
    }

    if (j != N)
      break;
  }
  test.boolean("MT19937", i == SEEDS);
}

void
test_KernelDevice(void)
{
  bool b = KernelDevice::available();

  int i;

  if (b)
  {
    KernelDevice rng;
    for (i = 0; i < N; i++)
    {
      try
      {
        (void)rng.random();
      }
      catch (...)
      {
        break;
      }
    }
    b = i == N;
  }
  else
  {
    b = true;
  }

  test.boolean("KernelDevice", b);
}
