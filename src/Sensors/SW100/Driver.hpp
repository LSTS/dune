//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Driver.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef SENSORS_SW100_DRIVER_HPP_INCLUDED_
#define SENSORS_SW100_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Hardware/SerialPort.hpp>

namespace Sensors
{
  namespace SW100
  {
    class Driver
    {
    public:
      //! Constructor.
      Driver(DUNE::Hardware::SerialPort& stream):
        m_id(-1),
        m_stream(stream),
        m_sentence_idx(0)
      { }

      bool
      setup(void);

      bool
      read(void);

      inline const double*
      getData(void)
      {
        return m_data;
      }

      inline int
      getId(void)
      {
        return m_id;
      }

    private:
      int m_id;
      char m_expr[64];
      DUNE::Hardware::SerialPort& m_stream;
      double m_data[4];
      char m_sentence[64];
      int m_sentence_idx;
    };
  }
}

#endif
