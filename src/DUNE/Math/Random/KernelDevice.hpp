//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_KERNEL_DEVICE_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_KERNEL_DEVICE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/Math/Random/Generator.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM KernelDevice;

      //! A RNG based on the use of special character device '/dev/urandom'
      //! ('/dev/random' is not considered due to possible blocking behavior).
      //!
      //! Usually it provide true RNG or high performance pseudo-RNG e.g.
      //! for chryptographic applications.
      //!
      //! IMPORTANT NOTES:
      //! * Use other generator instances in this namespace for portable, repeatable and lightweight RNG
      //!  with sufficient quality for run-of-the-mill applications since:
      //!   - Speed can be one or more orders of magnitude slower than other RNGs in this namespace.
      //!   - Behavior is OS-dependent.
      //!   - You cannot seed the RNG, and it should be (truly or highly) non-deterministic
      //!      - use it for unrepeatable behavior :)
      class KernelDevice: public Generator
      {
      public:
        //! Indicates if facility is available.
        //! It will return 'true' is the operating system device file '/dev/urandom' exists.
        static bool
        available(void);

        //! Constructor.
        KernelDevice();

        //! Destructor.
        ~KernelDevice();

        //! Generate random integer number, as per the general contract of the base class.
        int32_t
        random(void);

        //! Generate random floating point number, as per the general contract of the base class.
        double
        uniform(void);

        //! Seed method, with no effect for this class.
        //! It is only provided to comply with general contract of base class.
        void
        seed(int32_t value);

      private:
        std::FILE* m_fp; //!< File handle associated to '/dev/urandom'.
      };
    }
  }
}
#endif
