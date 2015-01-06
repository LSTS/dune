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

#ifndef DUNE_MATH_RANDOM_GENERATOR_HPP_INCLUDED_
#define DUNE_MATH_RANDOM_GENERATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Math/Constants.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM Generator;

      //! Base abstract class for random number generators.
      class Generator
      {
      public:
        //! Error class for RNG errors.
        class Error: public std::runtime_error
        {
        public:
          Error(const std::string& message):
            std::runtime_error("RNG error: " + message)
          { }
        };

        //! Destructor.
        virtual
        ~Generator()
        { }

        //! Maximum value returned by random()
        static const int32_t c_max_random = 0x7fffffffL;

        //! Generate an arbitrary seed value.
        //! The kernel RNG facility '/dev/urandom' will be used
        //! for that purpose, if available.
        //! @return generated seed value.
        static int32_t
        arbitrarySeed(void);

        //! Re-initialize generator with given seed.
        //! @param value value for seed.
        virtual void
        seed(int32_t value) = 0;

        //! Generate a 32-bit signed integer,
        //! uniformly distributed in [0,c_max_random].
        //! @return generated number.
        virtual
        int32_t
        random(void) = 0;

        //! Generate double-precision floating point number with uniform distribution in [0,1].
        //! Default implementation returns value of random()/c_max_random.
        virtual double
        uniform(void);

        //! Generate number with uniform distribution in a given interval.
        //! @param a value of a.
        //! @param b value of b.
        //! @return number with uniform distribution in [a,b].
        inline double
        uniform(double a, double b)
        {
          return a + (b - a) * uniform();
        }

        //! Generate gaussian number with mean 0 and std. dev 1.
        //! The number is generated using the Box-Muller method.
        //! @return number with gaussian distribution (0,1).
        double
        gaussian(void);

        //! Generate number with a Gaussian distribution,
        //! for a given mean and standard deviation.
        //! @param mu mean of distribution.
        //! @param sigma std. dev. of distribution.
        //! @return number with gaussian distribution (mu,sigma).
        inline double
        gaussian(double mu, double sigma)
        {
          return mu + sigma*
                 gaussian();
        }

        // Generate coordinates (x,y) in relation to (0,0), such
        // that:
        // - Distance to (0,0) is uniformly distributed in [0,radius].
        // - Angle formed by (x,y) vector is uniformly distributed
        // in [0,2 PI].
        // @param radius ball radius.
        // @param x output x coordinate.
        // @param y output y coordinate.
        void
        ballU(double radius, double* x, double* y);

        // Generate coordinates (x,y) in relation to (0,0), such
        // that:
        // - Distance to (0,0) has a Gaussian distribution of (0,\sigma).
        // - Angle formed by (x,y) vector is uniformly distributed
        // in [0,2 PI].
        // @param radius ball radius.
        // @param x output x coordinate.
        // @param y output y coordinate.
        void
        ballG(double sigma, double* x, double* y);
      };
    }
  }
}
#endif
