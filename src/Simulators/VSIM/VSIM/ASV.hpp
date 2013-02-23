//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: ASV.hpp 12658 2013-01-21 11:43:00Z jbraga                        $:*
//***************************************************************************

#ifndef SIMULATORS_VSIM_ASV_HPP_INCLUDED_
#define SIMULATORS_VSIM_ASV_HPP_INCLUDED_

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
