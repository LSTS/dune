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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_FIN_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_FIN_HPP_INCLUDED_

//! VSIM headers.
#include <VSIM/Force.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! AUV maximum actuation.
    static const double c_max_act = 0.4363;

    //! %Fin control surfaces class.
    class Fin: public Force
    {
    public:
      //! Constructor.
      //! @param[in] finid fin id.
      //! @param[in] coef fin coeficients.
      //! @param[in] pos fin position.
      Fin(unsigned int finid, double[3] = 0, double[3] = 0);

      //! Update fin's actuation.
      //! @param[in] value fin actuation.
      void
      updateAct(double value);

      //! Apply fin's force
      //! @param[in] speed speed reference.
      //! @param[out] forces forces to be applied by the fin.
      void
      applyForce(double speed, double forces[6]);

      //! Check fin's id.
      //! @return true if id matches, false otherwise.
      bool
      checkId(unsigned int testid);

      //! Fin id encoding.
      inline static int
      encodeId(int id)
      {
        return id + 2000;
      }

    private:
      //! Define fin properties.
      //! @param[in] id fin id.
      //! @param[in] coefficient fin coeficients.
      //! @param[in] position fin position.
      void
      setFin(unsigned int id = 0, double coefficient[3] = 0, double position[3] = 0);

      //! Gets fin produced force.
      //! @param[out] f fin produced force.
      void
      getFinProducedForce(double f[3]);

      //! Gets fin produced torque.
      //! @param[out] f fin produced torque.
      void
      getFinProducedTorque(double f[3]);

      //! Vehicle fin id.
      unsigned int m_id;
      //! Vehicle fin actuation.
      double m_act;
    };
  }
}

#endif
