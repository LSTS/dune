//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef BRIDGES_SENSORS_MANAGER_HPP
#define BRIDGES_SENSORS_MANAGER_HPP

#include <DUNE/DUNE.hpp>

// Local headers.
#include "base.hpp"
#include "factory.hpp"
#include "../log/logger.hpp"
#include "../pmc/sibBus.hpp"

//! Number of (consecutive) attempts to configure sensor.
static const size_t c_max_retries = 3;

//! Sensor Manager class.
class Manager
{
public:
  //! Constructor.
  Manager(SibBus* sib, DUNE::Parsers::Config* cfg, std::string log_path, float per, float sub_per):
    m_sib(sib),
    m_cfg(cfg)
  {
    m_log = new Logger(log_path, per, sub_per);
  }

  //! Destructor.
  ~Manager(void)
  {
    DUNE::Memory::clear(m_log);

    for (size_t i = 0; i < m_sensors.size(); ++i)
      DUNE::Memory::clear(m_sensors[i]);
  }

  //! Add sensor to manager's list.
  //! @param[in] lane sensor interface board lane.
  //! @param[in] type sensor type.
  void
  add(unsigned lane, SensorFactoryString type)
  {
    m_sensors.resize(lane + 1, NULL);
    m_sensors[lane] = SensorFactory::produce(type, lane, *m_sib);
    m_sensors[lane]->setConfig(*m_cfg, SensorFactory::getString(type));

    m_act.resize(lane + 1, DUNE::IMC::EntityActivationState::EAS_INACTIVE);
    m_failed_act.resize(lane + 1, 0);

    // only add to logger *after* setting configuration file.
    m_log->addSensor(m_sensors[lane]);
  }

  //! Listen to all sensors in list.
  //! @return true if listened to sensors, false otherwise.
  bool
  listen(void)
  {
    if (m_sib == NULL)
      return false;

    for (size_t lane = 0; lane < m_sensors.size(); ++lane)
      listen(lane);

    return true;
  }

  //! Set mission information.
  //! @param[in] resource navigation resource.
  //! @param[in] id current mission id.
  //! @param[in] yo current mission yo.
  //! @param[in] lat system's latitude.
  //! @param[in] lon system's longitude.
  //! @param[in] depth system's depth.
  //! @param[in] alt system's altitude.
  //! @param[in] udstate system's up/down/else.
  void
  setState(std::string resource, unsigned id, unsigned yo, std::string lat,
           std::string lon, float depth, float alt, UpDownRule udstate)
  {
    m_log->setState(resource, id, yo, lat, lon, depth, alt);

    for (size_t lane = 0; lane < m_sensors.size(); ++lane)
    {
      if (m_sensors[lane] == NULL)
        continue;

      bool active = m_sensors[lane]->update(depth, yo, udstate, alt);

      // sensor is supposed to be active.
      if (active)
      {
        // activation attempts exceed maximum, stop until next deactivation cycle.
        if (m_failed_act[lane] >= c_max_retries)
          continue;

        // requires setup.
        if (m_act[lane] == DUNE::IMC::EntityActivationState::EAS_INACTIVE ||
            m_act[lane] == DUNE::IMC::EntityActivationState::EAS_ACTIVE &&
            m_sensors[lane]->needsSetup())
          setup(lane);

        // sensor is active, update activation state.
        if (m_sensors[lane]->isActive())
          m_act[lane] = DUNE::IMC::EntityActivationState::EAS_ACTIVE;
      }
      else
      {
        switch (m_act[lane])
        {
          case DUNE::IMC::EntityActivationState::EAS_ACTIVE:
            powerOffSensor(lane, DUNE::IMC::EntityActivationState::EAS_INACTIVE);
            break;
          case  DUNE::IMC::EntityActivationState::EAS_ACT_FAIL:
            m_act[lane] = DUNE::IMC::EntityActivationState::EAS_INACTIVE;
            m_failed_act[lane] = 0;
            std::fprintf(stderr, "Lane %u: reset failed activation attempts\n", lane);
            break;
          default:
            break;
        }
      }
    }
  }

  //! Power off sensors.
  //! @return true if all power off commands were sent, false otherwise.
  bool
  powerOffSensors(void)
  {
    if (m_sib == NULL)
      return false;

    for (size_t i = 0; i < m_sensors.size(); ++i)
    {
      if (!powerOffSensor(i, DUNE::IMC::EntityActivationState::EAS_INACTIVE))
        return false;
    }

    return true;
  }

private:
  //! Call to logger's update cycle.
  void
  log(void)
  {
    m_log->update();
  }

  //! Set SIB's baud rate. This actually *awakes* and configures device.
  //! @param[in] lane sensor interface board lane.
  void
  setBaudRate(size_t lane)
  {
    if (m_sib == NULL)
      return;

    if (m_sensors[lane] == NULL)
      return;

    // if (lane >= m_sensors.size())
    //   return;

    m_sib->setBaudRate(lane, m_sensors[lane]->getBaudRate());
  }

  //! Setup sensor.
  //! @param[in] lane SIB lane.
  //! @return true if setup was successful, false otherwise.
  bool
  setup(size_t lane)
  {
    if (m_sib == NULL)
      return false;

    if (lane >= m_sensors.size())
      return false;

    // if sensor is inactive, we have to configure baud rate first.
    if (m_act[lane] == DUNE::IMC::EntityActivationState::EAS_INACTIVE)
      setBaudRate(lane);

    m_sib->selectLane(lane);

    bool configured = false;
    if (m_sensors[lane]->setup())
    {
      configured = true;
      m_act[lane] = DUNE::IMC::EntityActivationState::EAS_ACTIVE;
      m_failed_act[lane] = 0;
      std::fprintf(stderr, "Lane %u: sensor configured\n", lane);
    }
    else
    {
      m_failed_act[lane]++;
      std::fprintf(stderr, "Lane %u: failed to configure sensor (%ux)\n",
                   lane, m_failed_act[lane]);

      if (m_failed_act[lane] >= c_max_retries)
        powerOffSensor(lane, DUNE::IMC::EntityActivationState::EAS_ACT_FAIL);
    }

    m_sib->deselectLane(lane);
    return configured;
  }

  //! Listen to specific sensor on given lane.
  //! @param[in] lane sensor interface board lane.
  //! @return true if able to listen, false if inactive.
  bool
  listen(size_t lane)
  {
    if (m_sensors[lane] == NULL)
      return false;

    // sensor is not active.
    if (m_act[lane] == DUNE::IMC::EntityActivationState::EAS_INACTIVE)
      return false;

    try
    {
      m_sib->selectLane(lane);
      m_sensors[lane]->trigger();
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "Lane " << lane << ": access error: " << e.what() << std::endl;
    }

    std::vector<uint8_t> data;
    try
    {
      while (true)
      {
        uint8_t rbfr[128];
        size_t rv = m_sib->readFromSensor(rbfr, sizeof(rbfr));
        if (rv == 0)
          break;
        for (size_t i = 0; i < rv; ++i)
          data.push_back(rbfr[i]);
      }
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "Lane " << lane << ": read error: " << e.what() << std::endl;
    }

    if (data.size() > 0)
    {
      std::string raw((char*)&data[0], data.size());
      std::fprintf(stderr, "Lane %u: read from sensor: %u: %s\n",
                   lane, data.size(), DUNE::Streams::sanitize(raw).c_str());
      for (size_t j = 0; j < data.size(); ++j)
      {
        // parsed data.
        if (m_sensors[lane]->parse(data[j]))
          log();
      }
    }

    m_sib->deselectLane(lane);
    return true;
  }

  //! Power off sensor interface board.
  //! @param[in] lane sensor interface board lane.
  //! @return true if able to power off, false otherwise.
  bool
  powerOffSensor(size_t lane, DUNE::IMC::EntityActivationState::StateEnum act_state)
  {
    if (m_sib == NULL)
      return false;

    if (lane >= m_sensors.size())
      return false;

    m_sib->selectLane(lane);
    m_sib->sendSensorPowerOff();
    m_sib->deselectLane(lane);
    m_act[lane] = act_state;
    return true;
  }

  //! Serial port interface.
  SibBus* m_sib;
  //! Configuration file.
  DUNE::Parsers::Config* m_cfg;
  //! Logger manager.
  Logger* m_log;
  //! Sensor list.
  std::vector<Sensor*> m_sensors;
  //! Sensor activation sheet.
  std::vector<DUNE::IMC::EntityActivationState::StateEnum> m_act;
  //! Sensor consecutive failed activation attempts.
  std::vector<size_t> m_failed_act;
};

#endif
