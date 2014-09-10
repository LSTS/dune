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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: b756b37277f77273f0da757e06bff4be                            *
//***************************************************************************

#ifndef DUNE_IMC_SUPERTYPES_HPP_INCLUDED_
#define DUNE_IMC_SUPERTYPES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/InlineMessage.hpp>
#include <DUNE/IMC/MessageList.hpp>
#include <DUNE/IMC/Enumerations.hpp>
#include <DUNE/IMC/Bitfields.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Maneuver.
    class Maneuver: public Message
    {
    public:
      //! Plan Reference.
      uint32_t plan_ref;
      //! Maneuver ID.
      std::string id;
      //! Memento.
      std::string memento;

      Maneuver(void);

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(id) + IMC::getSerializationSize(memento);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Command.
    class ControlCommand: public Message
    {
    };
  }
}

#endif
