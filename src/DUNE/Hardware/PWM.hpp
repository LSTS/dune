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

#ifndef USER2_HARDWARE_PWM_HPP_INCLUDED_
#define USER2_HARDWARE_PWM_HPP_INCLUDED_

#include <string>

namespace DUNE
{
  namespace Hardware
  {
    class DUNE_DLL_SYM PWM;

    class PWM
    {
    public:
      PWM();
      PWM(unsigned pwm_number);
      PWM(unsigned pwm_number, const std::string& chip_path);
      ~PWM();

      // You'll only need one of these
      void setFrequency(float frequency_hertz);
      void setPeriod(float period_seconds);

      void setDutyCyclePercentage(float duty_cycle_percentage);
      void setDutyCycleNormalized(float duty_cycle_normalized);
      void setPulseWidth(float pulse_width_seconds);

      void enable();
      void disable();

    private:
      unsigned m_pwm_number;
      std::string m_chip_path;
      unsigned m_period_nanoseconds;

      void setPeriod(unsigned period_nanoseconds);
      void setPulseWidth(unsigned active_time_nanoseconds);

#   if defined(DUNE_OS_LINUX)
      std::string m_file_duty_cycle_path;
      std::string m_file_period_path;
      std::string m_file_enable_path;

      static void writeToFile(const std::string& file, unsigned value);
      static void writeToFile(const std::string& file, const std::string& value);
#   endif
    };
  }
}

#endif
