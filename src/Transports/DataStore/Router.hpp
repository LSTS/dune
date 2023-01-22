//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

#ifndef SRC_TRANSPORTS_DATASTORE_ROUTER_HPP_
#define SRC_TRANSPORTS_DATASTORE_ROUTER_HPP_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace DataStore
  {
    const int c_max_size_wifi = 32 * 1024;
    const int c_max_size_acoustic = 1000;
    const int c_max_size_iridium = 220;

    const int c_wifi_timeout = 15;
    const int c_acoustic_timeout = 300;

    using DUNE_NAMESPACES;

    class Router
    {
    public:
      uint16_t m_reqid;

      Router(Task* parent)
      {
        m_reqid=0,
        m_parent = parent;
      }

      void
      process(const IMC::EstimatedState* msg)
      {
        Concurrency::ScopedRWLock l(m_lock, true);
        std::string name = String::str(m_parent->resolveSystemId(msg->getSource()));
        m_states[name] = *msg;
        Memory::clear(msg);
      }

      void
      process(const IMC::UamRxFrame* msg)
      {
        Concurrency::ScopedRWLock l(m_lock, true);
        m_acousticVisibility[msg->sys_src] = msg->getTimeStamp();
        Memory::clear(msg);
      }

      void
      process(const IMC::Announce* msg)
      {
        Concurrency::ScopedRWLock l(m_lock, true);
        m_wifiVisibility[msg->sys_name] = *msg;
        Memory::clear(msg);
      }


      bool
      visibleOverWiFi(std::string system)
      {
        std::map<std::string, IMC::Announce>::iterator it;
        double curTime = Clock::getSinceEpoch();
        Concurrency::ScopedRWLock l(m_lock, false);

        it = m_wifiVisibility.find(system);
        return (it !=  m_wifiVisibility.end() && curTime - it->second.getTimeStamp() < c_wifi_timeout);
      }

      bool
      visibleOverAcoustic(std::string system)
      {
        std::map<std::string, double>::iterator it;
        double curTime = Clock::getSinceEpoch();
        Concurrency::ScopedRWLock l(m_lock, false);

        it = m_acousticVisibility.find(system);
        return (it !=  m_acousticVisibility.end() && curTime - it->second < c_acoustic_timeout);
      }

      bool
      routeOverAcoustic(std::string destination, HistoricData* data)
      {
        if (!visibleOverAcoustic(destination))
          return false;

        TransmissionRequest tr = makeAcousticRequest(destination,data);
        tr.setDestination(m_parent->getSystemId());
        m_parent->dispatch(tr);
        return true;
      }

      bool
      routeOverWifi(std::string destination, HistoricData* data)
      {
        if (!visibleOverWiFi(destination))
          return false;

        data->setDestination(m_parent->resolveSystemName(destination));
        m_parent->dispatch(data);

        return true;
      }

      void
      forwardCommandsWifi(DataStore* store)
      {
        std::map<std::string, IMC::Announce>::iterator it;
        Concurrency::ScopedRWLock l(m_lock, false);
        double curTime = Clock::getSinceEpoch();

        for (it = m_wifiVisibility.begin(); it != m_wifiVisibility.end(); it++)
        {
          if (curTime - it->second.getTimeStamp() < c_wifi_timeout)
          {
            IMC::HistoricData* cmds = store->pollCommands(it->second.getSource(), c_max_size_wifi);
            if (cmds != NULL)
            {
              m_parent->inf("Forwarding commands over Wifi to %s.", it->first.c_str());
              cmds->setDestination(it->second.getSource());
              m_parent->dispatch(cmds);
            }
          }
        }
      }

      void
      forwardCommandsAnyMean(DataStore* store)
      {
        std::map<std::string, double>::iterator it;
        Concurrency::ScopedRWLock l(m_lock, false);
        double curTime = Clock::getSinceEpoch();

        for (it = m_acousticVisibility.begin(); it != m_acousticVisibility.end(); it++)
        {
          if (curTime - it->second < c_acoustic_timeout)
          {
            int id = m_parent->resolveSystemName(it->first);

            IMC::HistoricData* cmds = store->pollCommands(id, c_max_size_acoustic);
            if (cmds != NULL)
            {
              cmds->setDestination(id);

              TransmissionRequest tr = makeAcousticRequest(it->first,cmds);

              m_parent->inf("Forwarding commands over Acoustic Modem to %s.", it->first.c_str());
              m_parent->dispatch(tr);
            }
          }
        }
      }

      void
      forwardCommandsAcoustic(DataStore* store)
      {
        std::map<std::string, double>::iterator it;
        Concurrency::ScopedRWLock l(m_lock, false);
        double curTime = Clock::getSinceEpoch();

        for (it = m_acousticVisibility.begin(); it != m_acousticVisibility.end(); it++)
        {
          if (curTime - it->second < c_acoustic_timeout)
          {
            int id = m_parent->resolveSystemName(it->first);

            IMC::HistoricData* cmds = store->pollCommands(id, c_max_size_acoustic);
            if (cmds != NULL)
            {
              cmds->setDestination(id);

              TransmissionRequest tr = makeAcousticRequest(it->first,cmds);

              m_parent->inf("Forwarding commands over Acoustic Modem to %s.", it->first.c_str());
              m_parent->dispatch(tr);
            }
          }
        }
      }

      TransmissionRequest
      makeAcousticRequest(std::string destination,IMC::HistoricData* hist){

        IMC::TransmissionRequest msg;
        msg.comm_mean         = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
        msg.data_mode         = IMC::TransmissionRequest::DMODE_INLINEMSG;
        msg.destination       = destination;
        msg.req_id            = createInternalId();
        msg.msg_data.set(hist);

        return msg;

      }

      uint16_t
      createInternalId(){
        if(m_reqid==0xFFFF){
          m_reqid=0;
        }
        else{
          m_reqid++;
        }
        return m_reqid;
      }

      void iridiumUpload(DataStore* store)
      {
        IMC::HistoricData* data = store->pollSamples(c_max_size_iridium);
        if (data == NULL)
          return;

        IMC::TransmissionRequest tr;
        tr.comm_mean            = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode            = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.msg_data.set(data->clone());
        tr.deadline             = Time::Clock::getSinceEpoch() + 120;
        tr.req_id               = createInternalId();
        m_parent->inf("Requesting upload of %u samples via Iridium.", (uint32_t) data->data.size());
        m_parent->dispatch(tr);
        Memory::clear(data);        
      }

      ~Router()
      { }
    private:
      Task* m_parent;
      std::map<std::string, double> m_acousticVisibility;
      std::map<std::string, IMC::Announce> m_wifiVisibility;
      std::map<std::string, IMC::EstimatedState> m_states;
      Concurrency::RWLock m_lock;
    };
  }
}

#endif /* SRC_TRANSPORTS_DATASTORE_ROUTER_HPP_ */
