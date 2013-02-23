//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_RANDOM_KERNELDEVICE_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_KERNELDEVICE_HPP_INCLUDED_

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
