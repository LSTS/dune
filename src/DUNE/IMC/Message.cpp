//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Message.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
