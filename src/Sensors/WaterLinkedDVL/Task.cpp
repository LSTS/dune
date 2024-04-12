//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// Copyright 2016-2023 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Maria Costa                                                      *
// Author: Luís Venâncio                                                    *
// Author: Renato Campos                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers
#include "Configuration.hpp"
#include "Driver.hpp"

namespace Sensors
{
  namespace WaterLinkedDVL
  {
    using DUNE_NAMESPACES;

    //! Transducer beam offset (the distance between the center of transducers and the device center) for A50 model.
    static const float c_xdcr_offset_a50 = 0.02;
    //! Transducer beam offset (the distance between the center of transducers and the device center) for A125 model.
    static const float c_xdcr_offset_a125 = 0.0398;
    //! Data input timeout.
    static const double c_data_timeout = 8.0;
    //! Turn power off after being out of water for longer than this period
    static const double c_out_of_water_timeout = 15.0;
    //! Sound speed update threshold (m/s)
    static const double c_sspeed_threshold = 5.0;

    //! %Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! Power channel.
      std::string pwr_channel;
      //! Type of acoustics activation/deactivation.
      std::string type_activation;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
      //! Beam angle.
      double beam_angle;
      //! Beam width.
      double beam_width;
      //! DVL Model.
      std::string dvl_model;
    };

    //! Device driver for the Water Linked DVL-A50 and DVL-A125
    //! @author Maria Costa
    struct Task : public Hardware::BasicDeviceDriver
    {
      //! Driver
      std::unique_ptr<Driver> m_driver;
      //! IO Handle
      std::unique_ptr<IO::Handle> m_io;
      //! DVL altitude estimate.
      IMC::Distance m_alt_dvl;
      //! Filtered Altitude.
      IMC::Distance m_alt_flt;
      //! Beam Filter.
      Navigation::BeamFilter* m_filter;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Communication watchdog
      Counter<double> m_wdog;
      //! Out of water watchdog
      Counter<double> m_out_water_wdog;
      //! Last sound speed
      double m_last_sspeed;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) : Hardware::BasicDeviceDriver(name, ctx), m_filter(NULL), m_out_water_wdog(c_out_of_water_timeout), m_last_sspeed(-1)
      {
        param("IO Port - Device", m_args.io_dev)
            .defaultValue("")
            .description("IO device URI in the form \"tcp://ADDRESS:PORT\" "
                         "or \"uart://DEVICE:BAUD\".");

        param("Power Channel", m_args.pwr_channel).defaultValue("").description("Device's power channel");

        param("Acoustics Activation", m_args.type_activation)
            .values("Water, Always")
            .defaultValue("Water")
            .description("Operator is able to control acoustics");

        param("Device Position", m_args.position)
            .defaultValue("0.0, 0.0, 0.0")
            .units(Units::Meter)
            .size(3)
            .description("Device position relative to navigation estimation (relative to GPS sensor).");

        param("Device Orientation", m_args.orientation)
            .defaultValue("0, 0, 0")
            .units(Units::Degree)
            .size(3)
            .description("Device orientation.");

        param("Beam Angle", m_args.beam_angle)
            .defaultValue("22.5")
            .units(Units::Degree)
            .description("The angle between a transducer beam's main axis and the vertical axis of the device.");

        param("Beam Width", m_args.beam_width)
            .defaultValue("4.4")
            .units(Units::Degree)
            .description("The nominal transducer beam width.");

        param("DVL Model", m_args.dvl_model)
            .defaultValue("A50")
            .values("A50, A125")
            .description("Waterlinked DVL model.");

        bind<IMC::VehicleMedium>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.pwr_channel))
        {
          clearPowerChannelNames();
          if (!m_args.pwr_channel.empty())
            addPowerChannelName(m_args.pwr_channel);
        }

        if (!(paramChanged(m_args.beam_width) || paramChanged(m_args.orientation) || paramChanged(m_args.position)))
          return;

        // Filtered altitude.
        IMC::BeamConfig bc;
        bc.beam_width = Angles::radians(m_args.beam_width);
        bc.beam_height = bc.beam_width;

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = Angles::radians(m_args.orientation[0]);
        ds.theta = Angles::radians(m_args.orientation[1]);
        ds.psi = Angles::radians(m_args.orientation[2]);

        m_alt_dvl.location.clear();
        m_alt_dvl.location.push_back(ds);
        m_alt_dvl.beam_config.clear();
        m_alt_dvl.beam_config.push_back(bc);

        m_alt_flt.location.clear();
        m_alt_flt.location.push_back(ds);
        m_alt_flt.beam_config.clear();
        m_alt_flt.beam_config.push_back(bc);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < c_beams; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_alt_flt.setSourceEntity(reserveEntity("DVL Filtered"));
      }

      //! Restart device when idle
      void
      onIdle(void) override
      {
        if (m_hand.inWater()) {
          requestActivation();
        }
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        bool is_serial = false;
        if (!m_driver)
        {
          m_driver = std::make_unique<Driver>(this, m_alt_dvl, m_alt_flt);
        }
        try
        {
          m_io.reset(openSocketTCP(m_args.io_dev));
        }
        catch(const std::exception& e)
        {
          throw RestartNeeded(e.what(), 5, true);
        }
        
        if (!m_io)
        {
          m_io.reset(openUART(m_args.io_dev));
          is_serial = true;
        }
        m_driver->setIOHandle(m_io.get(), is_serial);

        return m_io != nullptr;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        m_io.reset();
        m_driver.reset();
        Memory::clear(m_filter);
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        // Wait for device to be ready
        inf("On initialize device: waiting for device to be ready");
        wait(15.0);
        // Initialize filter
        Memory::clear(m_filter);
        static const float xdcr_offset = (m_args.dvl_model == "A125") ? c_xdcr_offset_a125 : c_xdcr_offset_a50;

        m_filter = new BeamFilter(this, c_beams, m_args.beam_width, xdcr_offset, m_args.beam_angle, m_args.position,
                                  m_args.orientation, BeamFilter::CLOCKWISE);

        m_filter->setSourceEntities(m_entities);
        m_driver->setBeamFilter(m_filter);

        // Initialize device configuration
        m_driver->getConfig();
        m_driver->setRotation(m_args.orientation[2]);
        if (m_args.type_activation == "Always")
          m_driver->setAcoustics(true);
        
        m_wdog.setTop(c_data_timeout);
        inf("Initialization complete");
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        if (m_args.type_activation != "Water")
          return;

        if (!isActive())
          return;

        if (!m_hand.isKnown())
          m_driver->setAcoustics(false);
        else if (m_hand.outWater()) {
          m_driver->setAcoustics(false);
          if (m_hand.changed()) {
            m_out_water_wdog.reset();
          }
          if (m_out_water_wdog.overflow()) {
            inf("Deactivating to prevent damage from excessive heat");
            requestDeactivation(); // Deactivate after being out of water for longer than the maximum period
          }
          
        }
        else
          m_driver->setAcoustics(true);
      }

      //! Check for device faults.
      //! @param[in] status device status (0 -> OK; 1 -> fault).
      void
      checkStatus()
      {
        uint8_t status = m_driver->getLastStatus();
        if (status)
        {
          if (getEntityState() > IMC::EntityState::ESTA_NORMAL)
            return;

          // Disable acoustics until recovery
          m_driver->setAcoustics(false);
          std::stringstream ss;
          ss << Status::getString(CODE_INTERNAL_ERROR) << " - DVL temperature too high"
             << " | Acoustics: Off";

          err("%s", ss.str().c_str());
          setEntityState(IMC::EntityState::ESTA_FAULT, ss.str());
        }
        else
        {
          if (getEntityState() < IMC::EntityState::ESTA_FAULT)
            return;

          // Recovered from fault
          m_driver->setAcoustics(true);
          displayConfig();
        }
      }

      //! Set device sound speed.
      //! @param[in] sound_speed sound speed in m/s.
      void
      onSoundSpeed(const double sound_speed) override
      {
        if (!isActive()) return;
        if (abs(sound_speed - m_last_sspeed) > c_sspeed_threshold) {
          m_last_sspeed = sound_speed;
          m_driver->setSoundSpeed(sound_speed);
        }
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        spew("read data");
        bool recv = m_driver->readData();
        if (recv) {
          m_wdog.reset();
        }
        if (m_wdog.overflow()) {
          war("Timed out waiting for data");
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
        spew("check status");
        checkStatus();
        spew("display config");
        displayConfig();
        return recv;
      }

      //! Set entity state description.
      void
      displayConfig(void)
      {
        Configuration config = m_driver->getLastConfig();
        bool bottom_lock = m_driver->getBottomLock();
        std::string description;
        description = String::str("%s - Acoustics: %s | Sound Speed: %.1f m/s",
                                  Status::getString(bottom_lock ? CODE_ACTIVE : CODE_NO_BOTTOM_LOCK),
                                  config.acoustic_enabled ? "On" : "Off", config.speed_of_sound);
        setEntityState(getEntityState(), description);
      }
    };
  }
}

DUNE_TASK
