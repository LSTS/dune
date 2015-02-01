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

#ifndef DUNE_HARDWARE_BASIC_MODEM_HPP_INCLUDED_
#define DUNE_HARDWARE_BASIC_MODEM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Hardware
  {
    class BasicModem: public Concurrency::Thread
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      BasicModem(Tasks::Task* task, IO::Handle* handle);

      virtual
      ~BasicModem(void)
      { }

      void
      initialize(void);

      //! Set line termination for modem to CPU commands.
      //! @param[in] term line terminator.
      void
      setLineTermIn(const std::string& term);

      const std::string&
      getLineTermIn(void);

      //! Set line termination for CPU to modem commands.
      //! @param[in] str line terminator.
      void
      setLineTermOut(const std::string& str);

      const std::string&
      getLineTermOut(void);

      //! Remove leading and trailing blank characters from lines.
      //! @param[in] enable true to enable trimming, false otherwise.
      void
      setLineTrim(bool enable);

      //! Set maximum transmission rate.
      //! @param[in] rate transmission rate in second. Negative values
      //! will disable transmission rate control.
      void
      setTxRateMax(double rate);

      //! Test if the modem is busy.
      //! @return true if the modem is busy, false otherwise.
      bool
      isBusy(void);

      //! Test if the modem is cooling down.
      //! @return true if the modem is cooling down, false otherwise.
      bool
      isCooling(void);

      void
      setBusy(bool value);

    protected:
      //! Read mode.
      enum ReadMode
      {
        //! Line oriented input.
        READ_MODE_LINE,
        //! Unprocessed sequence of bytes.
        READ_MODE_RAW
      };

      //! Concurrency lock.
      Concurrency::Mutex m_mutex;

      //! Handle unsolicited or asynchronous commands.
      //! @param[in] str command string.
      //! @return true if command was handled, false otherwise.
      virtual bool
      handleUnsolicited(const std::string& str)
      {
        (void)str;
        return false;
      }

      virtual void
      sendInitialization(void)
      { }

      virtual void
      sendReset(void)
      { }

      //! Test if command is not complete (i.e. is a fragment). This
      //! method is useful when the protocol allows mixing ASCII with
      //! binary data.
      //! @param[in] str command string.
      //! @return true if command is a fragment, false otherwise.
      virtual bool
      isFragment(const std::string& str)
      {
        (void)str;
        return false;
      }

      void
      sendRaw(const uint8_t* data, unsigned data_size);

      void
      send(const std::string& str);

      void
      setTimeout(double timeout);

      double
      getTimeout(void);

      void
      expect(const std::string& str);

      void
      readRaw(Time::Counter<double>& timer, uint8_t* data, unsigned data_size);

      ReadMode
      getReadMode(void);

      void
      setReadMode(ReadMode mode);

      void
      flushInput(void);

      std::string
      readLine(void);

      std::string
      readLine(Time::Counter<double>& timer);

      Tasks::Task*
      getTask(void)
      {
        return m_task;
      }

      void
      setSkipLine(const std::string& line);

      //! I/O handle.
      IO::Handle* m_handle;
      //! Last command sent to modem.
      std::string m_last_cmd;

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! Read timeout.
      double m_timeout;
      //! Queue of incoming characters.
      std::queue<char> m_chars;
      //! Current line being parsed.
      std::string m_line;
      //! Queue of input lines.
      Concurrency::TSQueue<std::string> m_lines;
      //! Queue of raw input bytes.
      Concurrency::TSQueue<uint8_t> m_bytes;
      //! Read mode.
      ReadMode m_read_mode;
      //! Contents of line to skip once.
      std::string m_skip_line;
      //! True if ISU is busy.
      bool m_busy;
      //! Maximum transmission rate value.
      double m_tx_rate_max;
      //! Maximum transmission rate timer.
      Time::Counter<double> m_tx_rate_timer;
      //! Input line termination.
      std::string m_line_term_in;
      //! Line termination detector index.
      size_t m_line_term_idx;
      //! Output line termination.
      std::string m_line_term_out;
      //! True to trim white-space.
      bool m_line_trim;

      bool
      processInput(std::string& str);

      void
      run(void);
    };
  }
}

#endif
