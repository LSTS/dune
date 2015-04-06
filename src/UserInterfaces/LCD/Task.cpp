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

// ISO C++ 98 headers.
#include <memory>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
  namespace LCD
  {
    using DUNE_NAMESPACES;

    // HD44780 (or compatible) instructions.
    enum
    {
      // Set DDRAM address.
      INST_DDRAM = 1 << 7,
      // Function set.
      INST_FNSET = 1 << 5,
      // Entry mode set.
      INST_EMSET = 1 << 2,
      // Clear display.
      INST_CLEAR = 1 << 0,
      // Display on/off control.
      INST_DISPC = 1 << 3
    };

    enum
    {
      BIT_DISPC_DISP = 1 << 2,
      BIT_DISPC_CURSOR = 1 << 1,
      BIT_DISPC_BLINK = 1 << 0,
      BIT_FNSET_IDATLEN = 1 << 3,
      BIT_EMSET_INC = 1 << 1,
      // Data length: 8.
      BIT_FNSET_DATL8 = 1 << 4,
      // Data length: 4.
      BIT_FNSET_DATL4 = 0,
      // Display lines: 2.
      BIT_FNSET_DLIN2 = 1 << 3,
      // Display lines: 1.
      BIT_FNSET_DLIN1 = 0,
      // Character font: 5x10.
      BIT_FNSET_CF5X10 = 1 << 2,
      // Character font: 5x8.
      BIT_FNSET_CF5X8 = 0
    };

    enum
    {
      REG_GPIO = 0x09,
      REG_IODIR = 0x00
    };

    enum
    {
      PIN_RS = 1 << 0,
      PIN_RW = 1 << 1,
      PIN_EN = 1 << 2
    };

    struct Arguments
    {
      // I2C Device.
      std::string i2c_dev;
      // Idle Time (before turning off the display).
      double idle_time;
      // Backlight GPIO.
      int blight_gpio;
      // Backlight power channel.
      std::string blight_pchan;
      // Backlight timeout.
      double blight_tout;
    };

    struct Task: public Tasks::Task
    {
      // MCP23008 address.
      static const uint8_t c_addr = 0x20;
      // Row size in characters.
      static const unsigned c_row_size = 16;
      // Task arguments.
      Arguments m_args;
      // I2C handle.
      std::auto_ptr<I2C> m_i2c;
      // LCD Lines.
      std::string m_lines[2];
      // Last LCD Lines.
      std::string m_last_lines[2];
      // Time of last refresh.
      double m_last_refresh;
      // Backlight GPIO (if any).
      Hardware::GPIO* m_blight;
      // Time of backlight on.
      double m_blight_time;
      // Backlight state.
      bool m_blight_state;
      // Display state.
      bool m_display_state;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_blight(0),
        m_blight_time(0),
        m_blight_state(false),
        m_display_state(false)
      {
        param("I2C - Device", m_args.i2c_dev)
        .defaultValue("")
        .description("Platform dependent I2C device");

        param("Backlight - GPIO", m_args.blight_gpio)
        .defaultValue("-1.0");

        param("Backlight - Power Channel", m_args.blight_pchan)
        .defaultValue("");

        param("Backlight - Timeout", m_args.blight_tout)
        .units(Units::Second)
        .defaultValue("-1")
        .description("Number of seconds of inactivity in order to power-off the back light");

        // Register listeners.
        bind<IMC::LcdControl>(this);
      }

      ~Task(void)
      {
        setDisplay(false);

        // Turn off backlight.
        if (m_blight)
          delete m_blight;
      }

      void
      onResourceAcquisition(void)
      {
        m_i2c = std::auto_ptr<I2C>(new I2C(m_args.i2c_dev));
        m_i2c->connect(c_addr);

        if (m_args.blight_gpio > 0)
        {
          m_blight = new Hardware::GPIO(m_args.blight_gpio);
          m_blight->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        }
      }

      void
      onResourceInitialization(void)
      {
        // Initialize GPIOS
        sendByte(REG_IODIR, 0x00);
        sendByte(REG_GPIO, 0x00);

        // LCD: Set to 8-bit operation, 1 line (just to be sure).
        writeNibble(INST_FNSET | BIT_FNSET_DATL8, 0x00);
        writeNibble(INST_FNSET | BIT_FNSET_DATL8, 0x00);
        writeNibble(INST_FNSET | BIT_FNSET_DATL8, 0x00);

        // LCD: Set to 4-bit operation, 2 lines.
        writeNibble(INST_FNSET, 0x00);
        writeByte(INST_FNSET | BIT_FNSET_DLIN2 | BIT_FNSET_DATL4 | BIT_FNSET_CF5X8, 0x00);

        // LCD: Entry mode set (cursor moves to the right).
        writeByte(INST_EMSET | BIT_EMSET_INC, 0x00);

        // LCD: Turn on display.
        writeByte(INST_DISPC | BIT_DISPC_DISP, 0x00);

        setCursor(0, 0);
        setBackLight(true);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      setBackLight(bool state)
      {
        if (m_blight_state == state)
          return;

        if (m_args.blight_gpio > 0)
        {
          if (m_blight)
            m_blight->setValue(state);
        }

        if (!m_args.blight_pchan.empty())
        {
          IMC::PowerChannelControl pc;
          pc.name = m_args.blight_pchan;
          pc.op = state ? IMC::PowerChannelControl::PCC_OP_TURN_ON : IMC::PowerChannelControl::PCC_OP_TURN_OFF;
          dispatch(pc);
        }

        m_blight_state = state;
      }

      void
      setDisplay(bool state)
      {
        if (state == m_display_state)
          return;

        if (state)
          writeByte(INST_DISPC | BIT_DISPC_DISP, 0x00);
        else
          writeByte(INST_DISPC, 0x00);

        m_display_state = state;
      }

      void
      checkBacklight(void)
      {
        if ((Clock::get() - m_blight_time) > m_args.blight_tout)
          setBackLight(false);
      }

      void
      enableBacklight(void)
      {
        setBackLight(true);
        m_blight_time = Clock::get();
      }

      void
      setCursor(unsigned col, unsigned row)
      {
        if (row == 0)
          writeByte(INST_DDRAM | (0x00 + col), 0x00);
        else
          writeByte(INST_DDRAM | (0x40 + col), 0x00);
      }

      void
      clear(void)
      {
        writeByte(INST_CLEAR, 0x00);
      }

      void
      sendByte(uint8_t reg, uint8_t byte)
      {
        uint8_t bfr[2] = {reg, byte};
        m_i2c->write(bfr, sizeof(bfr));

        // Since we can't read the busy flag...
        Delay::wait(0.001);
      }

      void
      writeNibble(uint8_t value, uint8_t pin = 0x00)
      {
        uint8_t data = (value & 0xf0) | pin;
        sendByte(REG_GPIO, data | PIN_EN);
        sendByte(REG_GPIO, data);
        Delay::waitMsec(5);
      }

      void
      writeByte(uint8_t value, uint8_t pin = 0x00)
      {
        writeNibble(value, pin);
        writeNibble(value << 4, pin);
      }

      void
      writeChar(char value)
      {
        writeByte((uint8_t)value, PIN_RS);
      }

      void
      write(const char* str)
      {
        const char* ptr = str;

        while (*ptr != 0)
        {
          writeChar(*ptr);
          ++ptr;
        }
      }

      void
      writeLine(const char* str, unsigned nr = 0)
      {
        enableBacklight();
        m_lines[nr].assign(str);
        refresh();
      }

      void
      refresh(void)
      {
        if (m_lines[0] != m_last_lines[0])
        {
          writeByte(0x01);
          write(m_lines[0].c_str());
          m_last_lines[0] = m_lines[0];
        }

        if (m_lines[1] != m_last_lines[1])
        {
          writeByte(0xC0);
          write(m_lines[1].c_str());
          m_last_lines[1] = m_lines[1];
        }

        m_last_refresh = Clock::get();
      }

      void
      consume(const IMC::LcdControl* msg)
      {
        switch (msg->op)
        {
          case IMC::LcdControl::OP_WRITE0:
            writeLine(msg->text.c_str());
            break;
          case IMC::LcdControl::OP_WRITE1:
            writeLine(msg->text.c_str(), 1);
            break;
          case IMC::LcdControl::OP_CLEAR:
            clear();
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          checkBacklight();

          if ((Clock::get() > (m_last_refresh + m_args.idle_time)) && (m_args.idle_time > 0.0))
            setDisplay(false);
          else
            setDisplay(true);

          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
