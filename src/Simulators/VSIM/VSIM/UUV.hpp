//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: UUV.hpp 12303 2013-01-01 02:14:25Z jbraga                        $:*
//***************************************************************************

#ifndef SIMULATORS_VSIM_UUV_HPP_INCLUDED_
#define SIMULATORS_VSIM_UUV_HPP_INCLUDED_

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
