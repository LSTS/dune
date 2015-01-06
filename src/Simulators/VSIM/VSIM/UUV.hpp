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

#ifndef SIMULATORS_VSIM_VSIM_UUV_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_UUV_HPP_INCLUDED_

// VSIM headers.
#include <VSIM/Vehicle.hpp>
#include <VSIM/Fin.hpp>
#include <VSIM/Volume.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Unmanned Underwater Vehicle class.
    class UUV: public Vehicle
    {
    public:
      //! Default Constructor.
      UUV(void);

      //! Constructor.
      //! @param[in] position buoyancy position.
      //! @param[in] dimensions volume dimensions.
      UUV(double position[3], double dimensions[3]);

      //! Copy Constructor.
      UUV(const UUV*);

      //! Destructor.
      ~UUV(void);

      //! Add a fin to vehicle's configuration.
      //! @param[in] fin vehicle new fin.
      void
      addFin(Fin* fin);

      //! Updates fin's actuation.
      //! @param[in] id fin id.
      //! @param[in] act fin actuation value.
      void
      updateFin(unsigned int id, double act);

      //! Set the buoyancy position.
      //! @param[in] x buoyancy position in the x-axis.
      //! @param[in] y buoyancy position in the y-axis.
      //! @param[in] z buoyancy position in the z-axis.
      void
      setBuoyancyPosition(double x, double y, double z);

      //! Apply all forces for UUV vehicle.
      void
      applyForces(void);

      //! Set added mass coefficient (useful for Coriolis matrix.
      //! @param[in] coefs added mass matrix coefficients.
      virtual void
      setAddedMassCoef(double coefs[6]);

      //! Set body lift matrix.
      //! @param[in] coefs body lift matrix coefficients.
      virtual void
      setBodyLiftCoef(double coefs[8]);

      //! Apply Coriolis Force (and Body Lift) to the UUV
      //! Coriolis Matrices equations from:
      //! "Modeling and Simulation of the LAUV Autonomous Underwater Vehicle"
      //! Jorge Estrela, Bruno Terra, Ricardo Martins e João Sousa.
      void
      applyCoriolisForce(void);

    private:
      //! Applies vehicle specific force (buoyancy).
      void
      applyRestoringForcesMoments(void);

      //! UUV vehicle's buoyancy position.
      double m_buoyancy_position[3];
      //! UUV added mass coefficient.
      double m_added_mass_coef[6];
      //! UUV body lift coefficient
      double m_body_lift_coef[8];
      //! Vehicle's volume.
      Volume* m_volume;
    };
  }
}

#endif
