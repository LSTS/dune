//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef SRC_TRANSPORTS_COMMMANAGER_TRANSMISSION_ID_GENERATOR_HPP_
#define SRC_TRANSPORTS_COMMMANAGER_TRANSMISSION_ID_GENERATOR_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace CommManager
  {
    using DUNE_NAMESPACES;

    //! The class provides dispatch methods for generating unique request identifiers.
    //! All Tasks/Entities must use this class to generate unique request identifiers.
    //! @author Luis Venancio
    class TransmissionIdGenerator
    {
    public:
      //! Do not allow instances.
      TransmissionIdGenerator(void) = delete;
      
      //! Create a unique identifier for TransmissionRequest.
      static uint16_t
      createId(void);
      
    private:
      //! Unique identifier lock.
      static Concurrency::Mutex s_transmission_id_generator_mutex;
      //! Unique identifier.
      static uint16_t s_transmission_id_generator_uid;
    };
  }
}

#endif