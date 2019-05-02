//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef SIMULATORS_ACOUSTICMODEM_SIMULATEDDRIVER_HPP_INCLUDED_
#define SIMULATORS_ACOUSTICMODEM_SIMULATEDDRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace AcousticModem
  {
    using DUNE_NAMESPACES;

    //! Sound speed
    static const double c_sound_speed = 1500;
    //! Absolute maximum transmission range
    static const double c_max_range = 3000;

    struct MOArguments
    {      
      //! Multicast Address
      Address udp_maddr;
      //! UDP port
      uint16_t udp_port;
      //! Modem type.
      std::string mtype;
      //! Trasmission speed.
      double tx_speed;
      //! Standard deviation for distance probability.
      float dst_peak_width;
      //! Standard deviation for data size probability.
      float dsize_peak_width;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    struct Operation
    {
      //! Transmission flag
      bool isTx;
      //! Absolute time to start receiving
      double start_time;
      //! Message to handle
      IMC::SAMessage msg;
    };

    class SimulatedDriver
    {
    public:
      //! Constructor.
      SimulatedDriver(MOArguments* moargs, Tasks::Task* task):
      m_args(moargs),
      m_task(task),
      m_current_op(NULL)
      {
        //Initialize UDP socket in multicast
        m_sock = new DUNE::Network::UDPSocket();
        m_sock->setMulticastTTL(1);
        m_sock->setMulticastLoop(true);
        m_sock->joinMulticastGroup(m_args->udp_maddr);
        m_sock->bind(m_args->udp_port);

        //Initialize random number generator
        m_prng = Random::Factory::create(m_args->prng_type, m_args->prng_seed);
      }

      //! Destructor.
      ~SimulatedDriver(void)
      {
        if (m_sock)
          Memory::clear(m_sock);

        Memory::clear(m_prng);

        OpQueue::iterator it=m_queue.begin();
        for (; it != m_queue.end(); ++it)
          delete *it;

        Memory::clear(m_current_op);
      }

      void
      transmit(const IMC::UamTxFrame* msg)
      {
        if (m_current_op)
          return;
        
        Operation op;
        op.isTx = true;
        UTF2SAM(op.msg, msg);

        m_current_op = new Operation(op);
        setBusy(m_current_op->msg.txtime);
      }

      void
      runModem()
      {
        checkIncomingData();
        checkQueue();
        exeOperation();
      }

      void
      setSimState(IMC::SimulatedState msg)
      {
        m_lstate = msg;
      }

      //! Distance to source vehicle
      double
      distance(const IMC::SAMessage* src_state)
      {
        double llat, llon;
        Coordinates::toWGS84(m_lstate, llat, llon);

        return WGS84::distance(llat, llon, m_lstate.z,
                              src_state->lat, src_state->lon, src_state->depth);
      }
      
      //! Check if modem is busy
      bool
      isBusy()
      {
        return !m_busy_counter.overflow();
      }
    
    private:
      //! Arguments
      MOArguments* m_args;
      //! Parent task. 
      Tasks::Task* m_task;
      //! UDP socket.
      UDPSocket* m_sock;
      //! UDP message buffer.
      uint8_t m_buf[1024];
      //! Operation queue.
      typedef std::vector<Operation*> OpQueue;
      OpQueue m_queue;
      //! Current operation being handled.
      Operation* m_current_op;
      //! Local simulated state.
      IMC::SimulatedState m_lstate;
      //! PRNG handle.
      Random::Generator* m_prng;      
      //! Timeout counter.
      Time::Counter<double> m_busy_counter;

      //! Transmit message over TCP
      void
      share(const IMC::Message* msg)
      {
        int n = msg->getSerializationSize();
        IMC::Packet::serialize(msg, m_buf, n);
        m_sock->write(m_buf, n, m_args->udp_maddr, m_args->udp_port);
      }

      void
      checkIncomingData(void)
      {
        Address dummy;

        try
        {
          if (Poll::poll(*m_sock, 0.01))
          {
            size_t n = m_sock->read(m_buf, sizeof(m_buf), &dummy);
            IMC::Message* msg = IMC::Packet::deserialize(m_buf, n);

            if (msg->getId() == DUNE_IMC_SAMESSAGE)
            {
              IMC::SAMessage* amsg = static_cast<IMC::SAMessage*>(msg);
              if (toParse(amsg))
                toQueue(amsg);
            }
            else
            {
              m_task->err(DTR("Unexpected simulation message: %s"), msg->getName());
            }
            delete msg;
          }
        }
        catch(std::runtime_error& e)
        {
          m_task->err(DTR("Read error: %s"), e.what());
        }
      }

      void
      toQueue(const IMC::SAMessage* amsg)
      {
        double d = distance(amsg);
        if (deliverySucceeds(d, amsg->data.size()))
        {
          Operation* op = new Operation;

          op->isTx 				= false;
          op->start_time 	= amsg->getTimeStamp()
                            + d/c_sound_speed;
          op->msg 				= *amsg;

          m_queue.push_back(op);
        }
      }

      void
      checkQueue()
      {
        if (m_queue.empty())
          return;

        OpQueue::iterator it = m_queue.begin();
        while(it != m_queue.end())
        {
          Operation* op = (*it);
          if (op->start_time <= Clock::getSinceEpoch())
          {
            receive(op);

            //Remove from queue
            delete op;
            m_queue.erase(it);
          }
          else
          {            
            ++it;
          }
        }
      }

      void
      receive(Operation* op)
      {
        if (isBusy())
        {
          //Collision detected, annul current op
          delete m_current_op;
          m_current_op = NULL;
        }
        else if (!m_current_op)
        {
          m_current_op = new Operation(*op);
          setBusy(op->msg.txtime);
        }
      }

      void
      exeOperation()
      {
        if (isBusy())
          return;

        if (!m_current_op)
          return;

        Operation op = *m_current_op;
        delete m_current_op;
        m_current_op = NULL;

        if (op.isTx)
        {
          std::string str;
          try
          {
            share(&op.msg);
            str = "STATUS,DONE";
          }
          catch (std::runtime_error& e)
          {
            str = "STATUS,FAILED,";
            str += e.what();
          }
          dispatch(str);
        }
        else
        {
          m_task->dispatch(&op.msg, DF_LOOP_BACK);

          if (op.msg.flags == IMC::SAMessage::SAM_ACK)
            sendRangeReply(&op.msg);		
        }
      }

      //! Build range request reply and send 
      void
      sendRangeReply(const IMC::SAMessage* range_request)
      {
        IMC::UamTxFrame msg;
        msg.seq = range_request->seq;
        msg.sys_dst = range_request->sys_src;

        std::string str = "REPLY";
        msg.data.assign(str.begin(), str.end());

        if (!isBusy())
          transmit(&msg);
      }

      //! Check destination and modem compatibility
      bool
      toParse(const IMC::SAMessage* amsg)
      {
        bool check;

        // Specific destination
        check = amsg->sys_dst == m_task->getSystemName();
        // or Broadcast 
        check |= ((amsg->sys_dst == "broadcast") & (amsg->sys_src != m_task->getSystemName()));

        // and modem type
        check &= amsg->mtype == m_args->mtype;

        return check;
      }

      //! Simulate random successful delivery
      bool
      deliverySucceeds(double distance, uint16_t data_size)
      {
        // Out of range
        if (distance > c_max_range)
          return 0;

        // Gaussian profiles for distance and msg size
        float dist_prob = exp(-1 * (distance*distance)/(2 * m_args->dst_peak_width * m_args->dst_peak_width));
        float size_prob = exp(-1 * (float)(data_size*data_size)/
                                (2 * m_args->dsize_peak_width * m_args->dsize_peak_width));

        return m_prng->uniform() <= dist_prob*size_prob;
      }

      //! Set busy counter for the transmission time
      void
      setBusy(double busy_time)
      {
        m_busy_counter.setTop(busy_time);
      }

      void
      UTF2SAM(IMC::SAMessage& amsg, const IMC::UamTxFrame* msg)
      {
        // Construct simulated acoustic message metadata
        Coordinates::toWGS84(m_lstate, amsg.lat, amsg.lon);
        amsg.depth    = m_lstate.z;
        amsg.mtype    = m_args->mtype;
        amsg.txtime   = (double)msg->data.size()*8 / m_args->tx_speed;
        amsg.sys_src  = m_task->getSystemName();

        // Copy UamTxFrame data
        amsg.seq      = msg->seq;
        amsg.sys_dst  = msg->sys_dst;
        amsg.flags    = msg->flags;
        amsg.data     = msg->data;

        // Set header
        amsg.setSource(msg->getSource());
        amsg.setDestination(msg->getDestination());
        amsg.setTimeStamp();
      }

      void
      dispatch(const std::string& str)
      {
        IMC::DevDataText msg;
        msg.setDestination(m_task->getSystemId());
        msg.setDestinationEntity(m_task->getEntityId());
        msg.value.assign(str);
        m_task->dispatch(msg, DF_LOOP_BACK);
      }
    };
  }
}

#endif