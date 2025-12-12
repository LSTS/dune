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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_NAVIGATION_BASIC_AHRS_HPP_INCLUDED_
#define DUNE_NAVIGATION_BASIC_AHRS_HPP_INCLUDED_

// ISO C++ 98 headers.

// DUNE headers.
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/IMC/AddressResolver.hpp>

namespace DUNE
{
  namespace Navigation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicAHRS;

    struct BasicAHRSArguments
    {
      //! Acceleration entity label.
      std::string acc_elabel;
      //! Angular Velocity entity label.
      std::string gyro_elabel;
      //! Magnetic Field entity label.
      std::string mag_elabel;
    };

    class BasicAHRS: public Tasks::Periodic
    {
    public:
      //! Constructor.
      //! @param[in] name name.
      //! @param[in] ctx context.
      BasicAHRS(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      ~BasicAHRS(void);

      void
      onEntityResolution(void) override;

      void
      onActivation(void) override
      {
        if (m_attempted_entity_resolution && !m_entities_resolved)
          requestDeactivation();
      }

      void
      consume(const IMC::Acceleration* msg);

      void
      consume(const IMC::AngularVelocity* msg);

      void
      consume(const IMC::MagneticField* msg);

      void
      task(void) override;

    private:
      virtual void
      onAcceleration(const DUNE::IMC::Acceleration& msg) = 0;

      virtual void
      onAngularVelocity(const DUNE::IMC::AngularVelocity& msg) = 0;

      virtual void
      onMagneticField(const DUNE::IMC::MagneticField& msg) = 0;

      virtual void
      step(void) = 0;

      //! Basic AHRS arguments.
      BasicAHRSArguments m_args;
      //! Entity id for acceleration messages.
      unsigned m_acc_eid;
      //! Entity id for angular velocity messages.
      unsigned m_gyro_eid;
      //! Entity id for magnetic field messages.
      unsigned m_mag_eid;
      //! Attempted to resolve entities.
      bool m_attempted_entity_resolution;
      //! Entities resolved flag.
      bool m_entities_resolved;
    };
  }
}

#endif
