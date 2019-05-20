//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef SIMULATORS_CTD_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_CTD_GENERATOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace CTD
  {
    class CTDGenerator
    {
      public:
        //! Constructor.
        //! @param[in] default_temp temperature default value.
        //! @param[in] default_sal salinity default value.
        CTDGenerator(float default_temp, float default_sal);

        //! Destructor.
        ~CTDGenerator() = default;

        //! Get temperature value from model.
        //! @param[in] pos 4-dimensional array with vehicle 
        //! position and time.
        //! @return temperature value from model.
        virtual float
        getTemperature(std::array<double, 4> pos);

        //! Get salinity value from model.
        //! @param[in] pos 4-dimensional array with vehicle
        //! position and time.
        //! @return temperature value from model.
        virtual float
        getSalinity(std::array<double, 4> pos);
        
        //! Set default temperature value.
        //! @param[in] temp new default temperature value.
        void
        setDefaultTemperature(float temp);
        
        //! Set default salinity value.
        //! @param[in] sal new default salinity value.
        void
        setDefaultSalinity(float sal);

      protected:
        //! Default temperature value.
        float m_default_temp;
        //! Default salinity value.
        float m_default_sal;
    };
  }
}

#endif