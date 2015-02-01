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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_MONITORS_MEDIUM_HANDLER_HPP_INCLUDED_
#define DUNE_MONITORS_MEDIUM_HANDLER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Monitors
  {
    //! %MediumHandler handles vehicle medium data.
    //!
    //! @author José Braga.
    class MediumHandler
    {
    public:
      //! Constructor.
      MediumHandler(void)
      {
        m_no_medium = true;
        m_new_medium = false;
      }

      //! Update with new info.
      //! @param[in] msg latest vehicle medium message.
      void
      update(const IMC::VehicleMedium* msg)
      {
        if (m_vm.medium != msg->medium)
          m_new_medium = true;
        else
          m_new_medium = false;

        m_vm = *msg;

        if (m_vm.medium == IMC::VehicleMedium::VM_UNKNOWN)
          m_no_medium = true;
        else
          m_no_medium = false;
      }

      //! This functions checks if medium is known.
      //! @return true if medium is known, false otherwise.
      bool
      isKnown(void)
      {
        return !m_no_medium;
      }

      //! This functions checks if medium has changed.
      //! @return true if medium has changed, false otherwise.
      bool
      changed(void)
      {
        return m_new_medium;
      }

      //! This functions checks if medium is water.
      //! @return true if medium is water, false otherwise.
      bool
      inWater(void)
      {
        return (isWaterSurface() || isUnderwater());
      }

      //! This functions checks if system is out of water.
      //! @return true if system is out of water, false otherwise.
      bool
      outWater(void)
      {
        return (m_vm.medium == IMC::VehicleMedium::VM_AIR ||
                m_vm.medium == IMC::VehicleMedium::VM_GROUND);
      }

      //! This functions checks if system is underwater.
      //! @return true if system is underwater, false otherwise.
      bool
      isUnderwater(void)
      {
        return m_vm.medium == IMC::VehicleMedium::VM_UNDERWATER;
      }

      //! This functions checks if system is on water surface.
      //! @return true if system is on water surface, false otherwise.
      bool
      isWaterSurface(void)
      {
        return m_vm.medium == IMC::VehicleMedium::VM_WATER;
      }

    private:
      //! Medium message.
      IMC::VehicleMedium m_vm;
      //! Flag will be true if vehicle medium unavailable.
      bool m_no_medium;
      //! Flag will be true if medium has changed.
      bool m_new_medium;
    };
  }
}

#endif
