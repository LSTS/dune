//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// Local headers
#include "SimulationDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;
    using namespace DUNE::Time;
    using namespace DUNE::IMC;

    SimulationDriver::SimulationDriver(const Configuration& conf, IMC::Bus& bus): AbstractDriver(conf), m_bus(bus)
    { }

    bool
    SimulationDriver::send(const char* data, uint16_t length)
    {
      Delay::wait(constantOverhead());

      m_out.type = IMC::UASimulation::UAS_DATA;
      m_out.data.resize(length);
      m_out.speed = m_conf.acoustic_baud_rate;
      std::memcpy(&m_out.data[0], data, length);
      m_out.setTimeStamp();
      m_bus.dispatch(&m_out);

      Delay::wait(dataOverhead(length));
      return true;
    }

    bool
    SimulationDriver::receive(char* data, uint16_t* length, double timeout)
    {
      uint16_t n = m_in.data.size();

      if (n)
      {
        n = std::min(*length, n);
        *length = n;
        std::memcpy(data, &m_in.data[0], n);
        m_in.data.clear();
        return true;
      }

      Delay::wait(timeout);
      return false;
    }

    bool
    SimulationDriver::range(uint8_t address, float* value)
    {
      // @todo: does this still make sense?
      (void)address;
      (void)value;
      return false;
    }

    void
    SimulationDriver::onNotification(const IMC::UASimulation* msg)
    {
      m_in = *msg;
    }
  }
}
