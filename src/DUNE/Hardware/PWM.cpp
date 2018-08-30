//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Kristoffer Gryte                                                 *
//***************************************************************************

#include <cstdio>
#include <cerrno>

#include <DUNE/System/Error.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Utils/String.hpp>

#include <USER/Hardware/PWM.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using DUNE::System::Error;
    using DUNE::Utils::String;

    PWM::PWM()
    {
      PWM(0);
    }

    PWM::PWM(const unsigned pwm_number)
    {
      PWM(pwm_number, "/sys/class/pwm/pwmchip0/");
    }

    PWM::PWM(const unsigned pwm_number, const std::string& chip_path):
      m_pwm_number(pwm_number),
      m_chip_path(chip_path)
    {
#   if defined(DUNE_OS_LINUX)
      writeToFile(m_chip_path + "export", m_pwm_number);

      const std::string prefix = m_chip_path + "pwm" + String::str(m_pwm_number);
      m_file_duty_cycle_path = prefix + "/duty_cycle";
      m_file_period_path = prefix + "/period";
      m_file_enable_path = prefix + "/enable";

      enable();
#   else
      throw Error("unimplemented feature", "DUNE::Hardware::PWM");
#   endif
    }

    PWM::~PWM()
    {
#   if defined(DUNE_OS_LINUX)
      try
      {
        writeToFile(m_chip_path + "unexport", m_pwm_number);
      }
      catch (std::exception& e)
      {
        DUNE_ERR("DUNE::Hardware::PWM", e.what());
      }
#   endif
    }

    void
    PWM::setFrequency(const float frequency_hertz)
    {
      const float period_seconds = 1 / frequency_hertz;
      setPeriod(period_seconds);
    }

    void
    PWM::setPeriod(const float period_seconds)
    {
      const unsigned period_nanoseconds = period_seconds * 1e9;
      setPeriod(period_nanoseconds);
    }

    void
    PWM::setPeriod(const unsigned period_nanoseconds)
    {
#   if defined(DUNE_OS_LINUX)
      writeToFile(m_file_period_path, period_nanoseconds);
#   endif
      m_period_nanoseconds = period_nanoseconds;
    }

    void
    PWM::setDutyCyclePercentage(const float duty_cycle_percentage)
    {
      const float duty_cycle_normalized = duty_cycle_percentage * 0.01;
      setDutyCycleNormalized(duty_cycle_normalized);
    }

    void
    PWM::setDutyCycleNormalized(const float duty_cycle_normalized)
    {
      const unsigned pulse_width_nanoseconds = m_period_nanoseconds * duty_cycle_normalized;
      setPulseWidth(pulse_width_nanoseconds);
    }

    void
    PWM::setPulseWidth(const float pulse_width_seconds)
    {
      const unsigned pulse_width_nanoseconds = pulse_width_seconds * 1e9;
      setPulseWidth(pulse_width_nanoseconds);
    }

    void
    PWM::setPulseWidth(unsigned pulse_width_nanoseconds)
    {
      if (pulse_width_nanoseconds > m_period_nanoseconds)
        pulse_width_nanoseconds = m_period_nanoseconds;

#   if defined(DUNE_OS_LINUX)
      writeToFile(m_file_duty_cycle_path, pulse_width_nanoseconds);
#   else
      throw Error("unimplemented feature", "DUNE::Hardware::PWM");
#   endif
    }

    void
    PWM::enable()
    {
#   if defined(DUNE_OS_LINUX)
      writeToFile(m_file_enable_path, 1);
#   else
      throw Error("unimplemented feature", "DUNE::Hardware::PWM");
#   endif
    }

    void
    PWM::disable()
    {
#   if defined(DUNE_OS_LINUX)
      writeToFile(m_file_enable_path, 0);
#   else
      throw Error("unimplemented feature", "DUNE::Hardware::PWM");
#   endif
    }

# if defined(DUNE_OS_LINUX)
    void
    PWM::writeToFile(const std::string& file, unsigned value)
    {
      writeToFile(file, String::str(value));
    }

    void
    PWM::writeToFile(const std::string& file, const std::string& value)
    {
      std::FILE* fd = std::fopen(file.c_str(), "w");
      if (fd == 0)
        throw Error(errno, "unable to export PWM " + file, value);
      std::fputs(value.c_str(), fd);
      std::fclose(fd);
    }
# endif
  }
}
