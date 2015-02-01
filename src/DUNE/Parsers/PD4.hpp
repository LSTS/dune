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

#ifndef DUNE_PARSERS_PD4_HPP_INCLUDED_
#define DUNE_PARSERS_PD4_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PD4;

    class PD4
    {
    public:
      enum ComponentBits
      {
        COMP_X = 0x01,
        COMP_Y = 0x02,
        COMP_Z = 0x04
      };

      struct Data
      {
        //! Validity of bottom velocity measures (one bit per component).
        uint8_t vel_btm_validity;
        //! X or East velocity in relation to the bottom in m/s.
        double x_vel_btm;
        //! Y or North velocity in relation to the bottom in m/s.
        double y_vel_btm;
        //! Z or Up velocity in relation to the bottom in m/s.
        double z_vel_btm;
        //! Unknown in m/s.
        double e_vel_btm;
        //! Validity of water velocity measures (one bit per component).
        uint8_t vel_wtr_validity;
        //! X or East velocity in relation to the water in m/s.
        double x_vel_wtr;
        //! Y or North velocity in relation to the water in m/s.
        double y_vel_wtr;
        //! Z or Up velocity in relation to the water in m/s.
        double z_vel_wtr;
        //! Beam #1 range to the bottom in m.
        double bm1_rng_btm;
        //! Beam #2 range to the bottom in m.
        double bm2_rng_btm;
        //! Beam #3 range to the bottom in m.
        double bm3_rng_btm;
        //! Beam #4 range to the bottom in m.
        double bm4_rng_btm;
      };

      //! Default constructor.
      PD4(bool use_checksum = true, bool use_size = true);

      //! Parse one byte of data.
      //! @param byte byte to parse.
      //! @return true if data is available, false otherwise.
      bool
      parse(uint8_t byte);

      //! Retrieve data. This function should be called when parse()
      //! Parsed datareturns true.
      //! @return data.
      const Data*
      data(void)
      {
        return &m_data;
      }

    private:
      enum States
      {
        ST_NONE,
        ST_STRUCT,
        ST_SIZE0,
        ST_SIZE1,
        ST_DATA,
        ST_CSUM0,
        ST_CSUM1
      };

      //! Raw data (without header and checksum).
      uint8_t m_raw_data[128];
      //! Raw data index.
      unsigned m_idx;
      //! Received checksum.
      uint16_t m_rcsum;
      //! Computed checksum.
      uint16_t m_ccsum;
      //! Number of bytes in the data structure.
      unsigned m_size;
      //! Current parser state.
      States m_state;
      //! Parsed data.
      Data m_data;
      //! Use checksum.
      bool m_use_checksum;
      //! Use size.
      bool m_use_size;

      //! Clear current state.
      void
      clear(void);
    };
  }
}

#endif
