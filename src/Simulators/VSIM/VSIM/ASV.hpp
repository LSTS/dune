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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_ASV_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_ASV_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <numeric>

// VSIM headers.
#include <VSIM/Vehicle.hpp>
#include <VSIM/Volume.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Maximum Torque Force
    static const unsigned c_asv_base_id = 1000;

    //! %ASV Autonomous Surface Vehicle simulator.
    class ASV: public Vehicle
    {
    public:
      //! Default Constructor.
      ASV(void);

      //! Constructor.
      //! @param[in] dimensions of the vehicle.
      ASV(double[3]);

      //! Copy Constructor.
      ASV(const ASV*);

      //! Destructor.
      ~ASV(void);

      //! Apply forces to ASV.
      void
      applyForces(void);

      //! Apply ASV specific actuation.
      void
      applyAsvActuation(void);

      //! Update ASV actiation.
      //! @param[in] id vehicle id.
      void
      updateActuation(int id);

    private:
      //! %ASV auxiliary memory. Stores past actuation computations.
      class ASVMemory
      {
      public:
        double turnRight_k_2, turnRight_k_1;
        double turnLeft_k_2, turnLeft_k_1;
        ASVMemory()
        {
          turnRight_k_2 = 0.0;
          turnRight_k_1 = 0.0;
          turnLeft_k_2 = 0.0;
          turnLeft_k_1 = 0.0;
        }
      };

      //! ASV auxiliary memory object.
      ASVMemory m_asvm;
      //! ASV actuation.
      double m_actuation[2];
      //! Vehicle's volume.
      Volume* m_volume;
    };
  }
}

#endif
