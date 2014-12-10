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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_FORCE_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_FORCE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

namespace Simulators
{
  namespace VSIM
  {
    //! %Force properties.
    //! This is the base class for engine and fin subclasses.
    class Force
    {
    public:
      //! Constructor.
      Force(void);

      //! Destructor.
      virtual
      ~Force(void)
      { }

      //! Defines force vector.
      //! @param[in] x force along x-axis.
      //! @param[in] y force along y-axis.
      //! @param[in] z force along z-axis.
      //! @param[in] is_inertial if force is in inertial referencial.
      //! @param[in] is_torque if force is a torque force.
      void
      setForce(double, double, double, bool, bool);

      //! Sets position vector.
      //! @param[in] x position of the force in the x-axis.
      //! @param[in] y position of the force in the y-axis.
      //! @param[in] z position of the force in the z-axis.
      //! @param[in] is_inertial if position is in inertial referencial.
      void
      setPosition(double, double, double, bool);

      //! Is force in inertial referencial.
      //! @return true if it is, false otherwise.
      bool
      isInertial(void);

      //! Is a torque.
      //! @return true if it is, false otherwise.
      bool
      isTorque(void);

      //! Is position in inertial referencial.
      //! @return true if it is, false otherwise.
      bool
      isPosInertial(void);

      //! Apply this force to body with id ident.
      //! @param[in] speed speed reference.
      //! @param[out] forces forces to be applied to body.
      virtual void
      applyForce(double speed, double forces[6]);

      //! Check force's id.
      //! @param[in] testid force id.
      //! @return true if id matches, false otherwise.
      virtual bool
      checkId(unsigned int testid);

      //! Update force's actuation.
      //! @param[in] value force actuation value.
      virtual void
      updateAct(double value);

      //! Retrieve current force actuation value.
      //! @return force actuation value.
      virtual double
      getActuation(void);

    protected:
      //! Max force.
      double m_max_force[3];
      //! Force application position.
      double m_act_position[3];

    private:
      //! Is force in inertial referential?
      bool m_fIsInertial;
      //! Is position in inertial referential?
      bool m_pIsInertial;
      //! Is a torque force?
      bool m_fIsTorque;
    };
  }
}

#endif
