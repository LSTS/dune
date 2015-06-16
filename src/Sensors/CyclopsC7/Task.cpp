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
// Author: José Braga                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace CyclopsC7
  {
    using DUNE_NAMESPACES;

    // Number of Channels
    static const uint8_t c_channels = 4;

    //! Channel Names
    enum Channels
    {
      C_RHODAMINE = 0 ,
      C_TURBIDITY = 1,
      C_FINE_OIL = 2,
      C_CRUDE_OIL = 3
    };

    struct Arguments
    {
      // Conversion factors.
      std::vector<double> conversions[c_channels];
      // Entity labels.
      std::string elabels[c_channels];
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task Arguments.
      Arguments m_args;
      // Rhodamine Entity Id.
      unsigned m_rhodamine_eid;
      // Fine Oil Entity Id.
      unsigned m_fine_oil_eid;
      // Crude Oil Entity Id.
      unsigned m_crude_oil_eid;
      // Turbidity Entity Id.
      unsigned m_turbidity_eid;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Rhodamine Conversion Factors", m_args.conversions[C_RHODAMINE])
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Rhodamine Label", m_args.elabels[C_RHODAMINE])
        .defaultValue("Rhodamine");

        param("Turbidity Conversion Factors", m_args.conversions[C_TURBIDITY])
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Turbidity Label", m_args.elabels[C_TURBIDITY])
        .defaultValue("Turbidity");

        param("Fine Oil Conversion Factors", m_args.conversions[C_FINE_OIL])
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Fine Oil Label", m_args.elabels[C_FINE_OIL])
        .defaultValue("Fine Oil");

        param("Crude Oil Conversion Factors", m_args.conversions[C_CRUDE_OIL])
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Crude Oil Label", m_args.elabels[C_CRUDE_OIL])
        .defaultValue("Crude Oil");

        bind<IMC::Voltage>(this);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_rhodamine_eid = resolveEntity(m_args.elabels[C_RHODAMINE]);
        }
        catch (...)
        {
          m_rhodamine_eid = UINT_MAX;
        }

        try
        {
          m_fine_oil_eid = resolveEntity(m_args.elabels[C_FINE_OIL]);
        }
        catch (...)
        {
          m_fine_oil_eid = UINT_MAX;
        }
        try
        {
          m_crude_oil_eid = resolveEntity(m_args.elabels[C_CRUDE_OIL]);
        }
        catch (...)
        {
          m_crude_oil_eid = UINT_MAX;
        }
        try
        {
          m_turbidity_eid = resolveEntity(m_args.elabels[C_TURBIDITY]);
        }
        catch (...)
        {
          m_turbidity_eid = UINT_MAX;
        }
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if (msg->value < 0)
          msg->value = 0.0;

        if (msg->getSourceEntity() == m_rhodamine_eid)
        {
          IMC::RhodamineDye dye;
          dye.value = msg->value * m_args.conversions[C_RHODAMINE][0] + m_args.conversions[C_RHODAMINE][1];
          dispatch(dye);
        }

        if (msg->getSourceEntity() == m_fine_oil_eid)
        {
          IMC::FineOil oil;
          oil.value = msg->value * m_args.conversions[C_FINE_OIL][0] + m_args.conversions[C_FINE_OIL][1];
          dispatch(oil);
        }

        if (msg->getSourceEntity() == m_crude_oil_eid)
        {
          IMC::CrudeOil oil;
          oil.value = msg->value * m_args.conversions[C_CRUDE_OIL][0] + m_args.conversions[C_CRUDE_OIL][1];
          dispatch(oil);
        }

        if (msg->getSourceEntity() == m_turbidity_eid)
        {
          IMC::Turbidity turb;
          turb.value = msg->value * m_args.conversions[C_TURBIDITY][0] + m_args.conversions[C_TURBIDITY][1];
          dispatch(turb);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
