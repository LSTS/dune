//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Costa                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_BOAT_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_BOAT_HPP_INCLUDED_

// VSIM headers.
#include <VSIM/Vehicle.hpp>
#include <VSIM/Fin.hpp>
#include <VSIM/Volume.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Boat class - ASV-like vehicle but with a thruster and a rudder,
    //! instead of differential thrust.
    class Boat: public Vehicle
    {
    public:
      //! Default Constructor.
      Boat(void);

      //! Constructor.
      //! @param[in] dimensions volume dimensions.
      Boat(double dimensions[3]);

      //! Copy Constructor.
      Boat(const Boat*);

      //! Destructor.
      ~Boat(void);

    private:
      //! Vehicle's volume.
      Volume* m_volume;
    };
  }
}

#endif
