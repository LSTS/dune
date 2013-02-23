//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  //! Device driver for the Mark & Wedell %SW100 CTD.
  namespace SW100
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Depth calibration parameters.
      std::vector<double> depth_cal;
      //! Input timeout.
      double data_timeout;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Device driver.
      Driver* m_driver;
      //! Serial port.
      SerialPort* m_uart;
      //! Measured depth.
      IMC::Depth m_depth;
      //! Measured salinity.
      IMC::Salinity m_salinity;
      //! Measured conductivity.
      IMC::Conductivity m_conductivity;
      //! Measured temperature.
      IMC::Temperature m_temperature;
      //! Depth Offset.
      IMC::DepthOffset m_depth_offset;
      //! Moving average to compute depth offset.
      MovingAverage<double> m_depth_avg;
      //! Depth offset calibration deadline.
      double m_depth_cal_dline;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_driver(NULL),
        m_uart(NULL),
        m_depth_avg(10),
        m_depth_cal_dline(-1.0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Depth Calibration", m_args.depth_cal)
        .defaultValue("1.0, 0.0")
        .size(2)
        .description("Depth calibration values");

        param("Data Timeout", m_args.data_timeout)
        .defaultValue("2.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        bind<IMC::Calibration>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_driver = new Driver(*m_uart);
      }

      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(m_args.data_timeout);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
        Memory::clear(m_driver);
      }

      void
      consume(const IMC::Calibration* msg)
      {
        m_depth_cal_dline = Clock::get() + msg->duration - 2.0;
        m_depth_avg.clear();
      }

      void
      task(void)
      {
        if (m_wdog.overflow())
        {
          m_wdog.reset();
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
          if (m_driver->setup())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            return;
          }
        }

        if (m_driver->read())
        {
          m_wdog.reset();
          const double* d = m_driver->getData();
          m_depth.value = m_args.depth_cal[0] * d[0] + m_args.depth_cal[1];
          m_temperature.value = d[1];
          m_conductivity.value = d[2] / 10.0;
          m_salinity.value = d[3];

          double now;
          now = m_depth.setTimeStamp();
          m_temperature.setTimeStamp(now);
          m_conductivity.setTimeStamp(now);
          m_salinity.setTimeStamp(now);
          dispatch(m_depth, DF_KEEP_TIME);
          dispatch(m_temperature, DF_KEEP_TIME);
          dispatch(m_salinity, DF_KEEP_TIME);
          dispatch(m_conductivity, DF_KEEP_TIME);

          // Perform depth offset calibration.
          if (m_depth_cal_dline > 0.0)
          {
            if (Clock::get() < m_depth_cal_dline)
            {
              m_depth_offset.value = m_depth_avg.update(m_depth.value);
            }
            else
            {
              m_depth_offset.value = -m_depth_offset.value;
              inf(DTR("depth offset is %0.2f m"), m_depth_offset.value);
              m_depth_cal_dline = -1.0;
              dispatch(m_depth_offset);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
