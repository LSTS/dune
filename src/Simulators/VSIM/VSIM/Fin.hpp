//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Fin.hpp 12658 2013-01-21 11:43:00Z jbraga                        $:*
//***************************************************************************

#ifndef SIMULATORS_VSIM_FINS_HPP_INCLUDED_
#define SIMULATORS_VSIM_FINS_HPP_INCLUDED_

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
