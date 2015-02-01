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

#ifndef POWER_PCTLV2_POWER_CHANNELS_HPP_INCLUDED_
#define POWER_PCTLV2_POWER_CHANNELS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace PCTLv2
  {
    using DUNE_NAMESPACES;

    struct PowerChannel
    {
      unsigned id;
      IMC::PowerChannelState state;
    };

    class PowerChannels
    {
    public:
      PowerChannels(void)
      { }

      ~PowerChannels(void)
      {
        clear();
      }

      void
      clear(void)
      {
        std::map<unsigned, PowerChannel*>::iterator itr = m_by_id.begin();
        for (; itr != m_by_id.end(); ++itr)
          delete itr->second;

        m_by_id.clear();
        m_by_name.clear();
      }

      void
      add(unsigned id, PowerChannel* channel)
      {
        channel->id = id;
        m_by_name[channel->state.name] = channel;
        m_by_id[id] = channel;
      }

      std::map<unsigned, PowerChannel*>::const_iterator
      find(const unsigned& id) const
      {
        return m_by_id.find(id);
      }

      std::map<std::string, PowerChannel*>::const_iterator
      find_by_name(const std::string& name) const
      {
        return m_by_name.find(name);
      }

      std::map<std::string, PowerChannel*>::const_iterator
      begin_by_name(void) const
      {
        return m_by_name.begin();
      }

      std::map<std::string, PowerChannel*>::const_iterator
      end_by_name(void) const
      {
        return m_by_name.end();
      }

      std::map<unsigned, PowerChannel*>::const_iterator
      begin(void) const
      {
        return m_by_id.begin();
      }

      std::map<unsigned, PowerChannel*>::const_iterator
      end(void) const
      {
        return m_by_id.end();
      }

      std::map<unsigned, PowerChannel*>::iterator
      begin(void)
      {
        return m_by_id.begin();
      }

      std::map<unsigned, PowerChannel*>::iterator
      end(void)
      {
        return m_by_id.end();
      }

    private:
      std::map<std::string, PowerChannel*> m_by_name;
      std::map<unsigned, PowerChannel*> m_by_id;
    };
  }
}

#endif
