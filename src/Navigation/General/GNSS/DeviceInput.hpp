//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Counter.hpp>

namespace Navigation
{
  namespace General
  {
    //! Navigation based on GNSS with Euler Angles,
    //! Angular Velocity and Altitude integration.
    //!
    //! @author Bernardo Gabriel
    namespace GNSS
    {
      using DUNE::Time::Counter;

      struct DeviceInput
      {
        DeviceInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          input_timeout(tout),
          has_data(false),
          priority(_priority),
          entity_id(_entity_id)
        { }

        inline bool
        valid(void)
        {
          return has_data && !(input_timeout.getTop() > 0.0f && input_timeout.overflow());
        }

        inline uint8_t
        getPriority(void) const
        {
          return priority;
        }

        inline uint8_t
        getEntityId(void) const
        {
          return entity_id;
        }

      protected:
        Counter<float> input_timeout;
        bool has_data;

      private:
        uint8_t priority;
        uint8_t entity_id;
      };

      struct GNSSInput : public DeviceInput
      {
        GNSSInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          lat(0.0),
          lon(0.0),
          height(0.0f),
          cog(0.0f),
          sog(0.0f)
        { }

        bool
        get(fp64_t& _lat, fp64_t& _lon, fp32_t& _height, fp32_t& _cog, fp32_t& _sog)
        {
          if (!valid())
          {
            _lat = 0.0;
            _lon = 0.0;
            _height = 0.0;
            _cog = 0.0f;
            _sog = 0.0f;
            return false;
          }

          _lat = lat;
          _lon = lon;
          _height = height;
          _cog = cog;
          _sog = sog;
          return true;
        }

        void
        set(fp64_t _lat, fp64_t _lon, fp32_t _height, fp32_t _cog = 0.0f, fp32_t _sog = 0.0f)
        {
          lat = _lat;
          lon = _lon;
          height = _height;
          cog = _cog;
          sog = _sog;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp64_t lat;
        fp64_t lon;
        fp32_t height;
        fp32_t cog;
        fp32_t sog;
      };

      struct EulerAnglesInput : public DeviceInput
      {
        EulerAnglesInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          phi(0.0),
          theta(0.0),
          psi(0.0)
        { }

        bool
        get(fp32_t& _phi, fp32_t& _theta, fp32_t& _psi)
        {
          if (!valid())
          {
            _phi = 0.0f;
            _theta = 0.0f;
            _psi = 0.0f;
            return false;
          }

          _phi = static_cast<fp32_t>(phi);
          _theta = static_cast<fp32_t>(theta);
          _psi = static_cast<fp32_t>(psi);
          return true;
        }

        void
        set(fp64_t _phi, fp64_t _theta, fp64_t _psi)
        {
          phi = _phi;
          theta = _theta;
          psi = _psi;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp64_t phi;
        fp64_t theta;
        fp64_t psi;
      };

      struct AngularVelocityInput : public DeviceInput
      {
        AngularVelocityInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          x(0.0),
          y(0.0),
          z(0.0)
        { }

        bool
        get(fp32_t& _x, fp32_t& _y, fp32_t& _z)
        {
          if (!valid())
          {
            _x = 0.0f;
            _y = 0.0f;
            _z = 0.0f;
            return false;
          }

          _x = static_cast<fp32_t>(x);
          _y = static_cast<fp32_t>(y);
          _z = static_cast<fp32_t>(z);
          return true;
        }

        void
        set(fp64_t _x, fp64_t _y, fp64_t _z)
        {
          x = _x;
          y = _y;
          z = _z;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp64_t x;
        fp64_t y;
        fp64_t z;
      };

      struct GroundVelocityInput : public DeviceInput
      {
        GroundVelocityInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          x(0.0),
          y(0.0),
          z(0.0)
        { }

        bool
        get(fp32_t& _x, fp32_t& _y, fp32_t& _z)
        {
          if (!valid())
          {
            _x = 0.0f;
            _y = 0.0f;
            _z = 0.0f;
            return false;
          }

          _x = static_cast<fp32_t>(x);
          _y = static_cast<fp32_t>(y);
          _z = static_cast<fp32_t>(z);
          return true;
        }

        void
        set(fp64_t _x, fp64_t _y, fp64_t _z)
        {
          x = _x;
          y = _y;
          z = _z;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp64_t x;
        fp64_t y;
        fp64_t z;
      };

      struct DepthInput : public DeviceInput
      {
        DepthInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          value(-1.0f)
        { }

        bool
        get(fp32_t& _value)
        {
          if (!valid())
          {
            _value = -1.0f;
            return false;
          }

          _value = value;
          return true;
        }

        void
        set(fp32_t _value)
        {
          value = _value;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp32_t value;
      };

      struct AltitudeInput : public DeviceInput
      {
        AltitudeInput(uint8_t _priority, uint8_t _entity_id, float tout = -1.0f):
          DeviceInput(_priority, _entity_id, tout),
          value(-1.0f)
        { }

        bool
        get(fp32_t& _value)
        {
          if (!valid())
          {
            _value = -1.0f;
            return false;
          }

          _value = value;
          return true;
        }

        void
        set(fp32_t _value)
        {
          value = _value;
          has_data = true;
          input_timeout.reset();
        }

      private:
        fp32_t value;
      };
    }
  }
}
