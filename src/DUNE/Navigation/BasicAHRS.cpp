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

// Local headers.
#include <DUNE/Navigation/BasicAHRS.hpp>

namespace DUNE
{
  namespace Navigation
  {
    BasicAHRS::BasicAHRS(const std::string& name, Tasks::Context& ctx):
      Tasks::Periodic(name, ctx),
      m_acc_eid(IMC::AddressResolver::invalid()),
      m_gyro_eid(IMC::AddressResolver::invalid()),
      m_mag_eid(IMC::AddressResolver::invalid()),
      m_attempted_entity_resolution(false),
      m_entities_resolved(false)
    {
      paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                  Tasks::Parameter::VISIBILITY_USER,
                  false);

      param("Entity Label - Acceleration", m_args.acc_elabel)
      .editable("false")
      .description("Entity id for Acceleration messages.");

      param("Entity Label - Angular Velocity", m_args.gyro_elabel)
      .editable("false")
      .description("Entity id for Angular Velocity messages.");

      param("Entity Label - Magnetic Field", m_args.mag_elabel)
      .editable("false")
      .description("Entity id for Magnetic Field messages.");

      bind<IMC::Acceleration>(this);
      bind<IMC::AngularVelocity>(this);
      bind<IMC::MagneticField>(this);
    }

    BasicAHRS::~BasicAHRS(void)
    { }

    void
    BasicAHRS::onEntityResolution(void)
    {
      m_attempted_entity_resolution = true;

      try
      {
        if (m_args.acc_elabel.empty())
          throw std::runtime_error("Acceleration entity label is empty");
        else
          m_acc_eid = resolveEntity(m_args.acc_elabel);

        if (m_args.gyro_elabel.empty())
          throw std::runtime_error("Angular Velocity entity label is empty");
        else
          m_gyro_eid = resolveEntity(m_args.gyro_elabel);

        if (m_args.mag_elabel.empty())
          throw std::runtime_error("Magnetic Field entity label is empty");
        else
          m_mag_eid = resolveEntity(m_args.mag_elabel);

        spew("Successfully resolved entities for data messages.");
        m_entities_resolved = true;
      }
      catch(const std::exception& e)
      {
        err("Failed to resolve entity for data messages: %s", e.what());
        m_entities_resolved = false;
        requestDeactivation();
      }
    }

    void
    BasicAHRS::consume(const IMC::Acceleration* msg)
    {
      if (!isActive())
        return;

      if (msg->getSource() != getSystemId())
        return;

      if (msg->getSourceEntity() != m_acc_eid)
        return;

      onAcceleration(*msg);
    }

    void
    BasicAHRS::consume(const IMC::AngularVelocity* msg)
    {
      if (!isActive())
        return;

      if (msg->getSource() != getSystemId())
        return;

      if (msg->getSourceEntity() != m_gyro_eid)
        return;

      onAngularVelocity(*msg);
    }

    void
    BasicAHRS::consume(const IMC::MagneticField* msg)
    {
      if (!isActive())
        return;

      if (msg->getSource() != getSystemId())
        return;

      if (msg->getSourceEntity() != m_mag_eid)
        return;

      onMagneticField(*msg);
    }

    void
    BasicAHRS::task(void)
    {
      if (!isActive())
        return;
      
      step();
    }
  }
}
