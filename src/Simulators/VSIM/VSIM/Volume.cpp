//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Volume.cpp 12658 2013-01-21 11:43:00Z jbraga                     $:*
//***************************************************************************

// VSIM headers.
#include <VSIM/Volume.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Volume::Volume(double length, double width, double height):
      m_height(height),
      m_width(width),
      m_length(length)
    { }

    double
    Volume::zunderwater(double depth)
    {
      double z;

      if (depth < (-m_height / 2))
        z = (depth - (m_height / 2));
      else
        z = (depth + (m_height / 2));

      if (z <= 0)
        return 0;
      else if (z <= m_height)
        return z;
      else
        return m_height;
    }

    double
    Volume::sub_volume(double depth)
    {
      return (m_width * m_length * zunderwater(depth));
    }
  }
}
