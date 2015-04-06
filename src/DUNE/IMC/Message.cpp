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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Packet.hpp>
#include <DUNE/IMC/JSON.hpp>
#include <DUNE/IMC/Exceptions.hpp>

namespace DUNE
{
  namespace IMC
  {
    static const unsigned c_nindent = 2;

    bool
    Message::operator==(const Message& other) const
    {
      if (getId() != other.getId())
        return false;

      if (getTimeStamp() != other.getTimeStamp())
        return false;

      if (getSource() != other.getSource())
        return false;

      if (getSourceEntity() != other.getSourceEntity())
        return false;

      if (getDestination() != other.getDestination())
        return false;

      if (getDestinationEntity() != other.getDestinationEntity())
        return false;

      return fieldsEqual(other);
    }

    void
    Message::toJSON(std::ostream& os) const
    {
      os << std::setprecision(12);
      IMC::toJSON(os, "abbrev", getName(), c_nindent, '{');
      IMC::toJSON(os, "timestamp", getTimeStamp(), c_nindent);
      IMC::toJSON(os, "src", getSource(), c_nindent);
      IMC::toJSON(os, "src_ent", (unsigned)getSourceEntity(), c_nindent);
      IMC::toJSON(os, "dst", getDestination(), c_nindent);
      IMC::toJSON(os, "dst_ent", (unsigned)getDestinationEntity(), c_nindent);
      fieldsToJSON(os, c_nindent);
      os << "\n}\n";
    }
  }
}
