//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef TRANSPORTS_SUNSET_SSC_TYPES_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SSC_TYPES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstdio>

// DUNE headers.
#include <DUNE/Utils/String.hpp>

// Local headers.
#include "Exceptions.hpp"

namespace Transports
{
  namespace SUNSET
  {
    size_t
    encodeType(std::vector<std::string>& args__, const int& value__, const char* format__ = "%d")
    {
      args__.push_back(DUNE::Utils::String::str(format__, value__));
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, int& value__, const char* format__ = "%d")
    {
      if (std::sscanf(args__[index__].c_str(), format__, &value__) != 1)
      throw InvalidValue();
      return 1;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const unsigned& value__, const char* format__ = "%u")
    {
      args__.push_back(DUNE::Utils::String::str(format__, value__));
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, unsigned& value__, const char* format__ = "%u")
    {
      if (std::sscanf(args__[index__].c_str(), format__, &value__) != 1)
      throw InvalidValue();
      return 1;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const double& value__)
    {
      args__.push_back(DUNE::Utils::String::str("%0.6f", value__));
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, double& value__)
    {
      if (std::sscanf(args__[index__].c_str(), "%lf", &value__) != 1)
      throw InvalidValue();
      return 1;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const std::string& value__)
    {
      args__.push_back(value__);
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, std::string & value__)
    {
      value__.assign(args__[index__]);
      return 1;
    }

    enum ParamName
    {
      NODE_ID,
      BROADCAST_ID,
      TX_POWER
    };

    void
    reset(ParamName& value__)
    {
      value__ = NODE_ID;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const ParamName& value__)
    {
      switch (value__)
      {
        case NODE_ID: args__.push_back("NODE_ID"); break;
        case BROADCAST_ID: args__.push_back("BROADCAST_ID"); break;
        case TX_POWER: args__.push_back("TX_POWER"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, ParamName& value__)
    {
      if (args__[index__] == "NODE_ID") value__ = NODE_ID;
      else if (args__[index__] == "BROADCAST_ID") value__ = BROADCAST_ID;
      else if (args__[index__] == "TX_POWER") value__ = TX_POWER;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const ParamName& value__)
    {
      switch (value__)
      {
        case NODE_ID: os__ << "NODE_ID"; break;
        case BROADCAST_ID: os__ << "BROADCAST_ID"; break;
        case TX_POWER: os__ << "TX_POWER"; break;
      }
    }

    enum ErrorType
    {
      ERR_INVALID_CRC,
      ERR_INVALID_FORMAT,
      ERR_INVALID_VERSION,
      ERR_INVALID_REQUEST,
      ERR_INVALID_VALUE,
      ERR_BUSY
    };

    void
    reset(ErrorType& value__)
    {
      value__ = ERR_INVALID_CRC;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const ErrorType& value__)
    {
      switch (value__)
      {
        case ERR_INVALID_CRC: args__.push_back("INVALID_CRC"); break;
        case ERR_INVALID_FORMAT: args__.push_back("INVALID_FORMAT"); break;
        case ERR_INVALID_VERSION: args__.push_back("INVALID_VERSION"); break;
        case ERR_INVALID_REQUEST: args__.push_back("INVALID_REQUEST"); break;
        case ERR_INVALID_VALUE: args__.push_back("INVALID_VALUE"); break;
        case ERR_BUSY: args__.push_back("BUSY"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, ErrorType& value__)
    {
      if (args__[index__] == "INVALID_CRC") value__ = ERR_INVALID_CRC;
      else if (args__[index__] == "INVALID_FORMAT") value__ = ERR_INVALID_FORMAT;
      else if (args__[index__] == "INVALID_VERSION") value__ = ERR_INVALID_VERSION;
      else if (args__[index__] == "INVALID_REQUEST") value__ = ERR_INVALID_REQUEST;
      else if (args__[index__] == "INVALID_VALUE") value__ = ERR_INVALID_VALUE;
      else if (args__[index__] == "BUSY") value__ = ERR_BUSY;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const ErrorType& value__)
    {
      switch (value__)
      {
        case ERR_INVALID_CRC: os__ << "INVALID_CRC"; break;
        case ERR_INVALID_FORMAT: os__ << "INVALID_FORMAT"; break;
        case ERR_INVALID_VERSION: os__ << "INVALID_VERSION"; break;
        case ERR_INVALID_REQUEST: os__ << "INVALID_REQUEST"; break;
        case ERR_INVALID_VALUE: os__ << "INVALID_VALUE"; break;
        case ERR_BUSY: os__ << "BUSY"; break;
      }
    }

    enum FailureType
    {
      FAIL_INVALID_VERSION,
      FAIL_INVALID_REQUEST,
      FAIL_EXPIRED,
      FAIL_INTERNAL_ERROR,
      FAIL_BUSY
    };

    void
    reset(FailureType& value__)
    {
      value__ = FAIL_INVALID_VERSION;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const FailureType& value__)
    {
      switch (value__)
      {
        case FAIL_INVALID_VERSION: args__.push_back("INVALID_VERSION"); break;
        case FAIL_INVALID_REQUEST: args__.push_back("INVALID_REQUEST"); break;
        case FAIL_EXPIRED: args__.push_back("EXPIRED"); break;
        case FAIL_INTERNAL_ERROR: args__.push_back("INTERNAL_ERROR"); break;
        case FAIL_BUSY: args__.push_back("BUSY"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, FailureType& value__)
    {
      if (args__[index__] == "INVALID_VERSION") value__ = FAIL_INVALID_VERSION;
      else if (args__[index__] == "INVALID_REQUEST") value__ = FAIL_INVALID_REQUEST;
      else if (args__[index__] == "EXPIRED") value__ = FAIL_EXPIRED;
      else if (args__[index__] == "INTERNAL_ERROR") value__ = FAIL_INTERNAL_ERROR;
      else if (args__[index__] == "BUSY") value__ = FAIL_BUSY;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const FailureType& value__)
    {
      switch (value__)
      {
        case FAIL_INVALID_VERSION: os__ << "INVALID_VERSION"; break;
        case FAIL_INVALID_REQUEST: os__ << "INVALID_REQUEST"; break;
        case FAIL_EXPIRED: os__ << "EXPIRED"; break;
        case FAIL_INTERNAL_ERROR: os__ << "INTERNAL_ERROR"; break;
        case FAIL_BUSY: os__ << "BUSY"; break;
      }
    }

    enum TxErrorType
    {
      TX_ERR_SUCCESS,
      TX_ERR_TX_RETRY_LIMIT
    };

    void
    reset(TxErrorType& value__)
    {
      value__ = TX_ERR_SUCCESS;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const TxErrorType& value__)
    {
      switch (value__)
      {
        case TX_ERR_SUCCESS: args__.push_back("SUCCESS"); break;
        case TX_ERR_TX_RETRY_LIMIT: args__.push_back("TX_RETRY_LIMIT"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, TxErrorType& value__)
    {
      if (args__[index__] == "SUCCESS") value__ = TX_ERR_SUCCESS;
      else if (args__[index__] == "TX_RETRY_LIMIT") value__ = TX_ERR_TX_RETRY_LIMIT;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const TxErrorType& value__)
    {
      switch (value__)
      {
        case TX_ERR_SUCCESS: os__ << "SUCCESS"; break;
        case TX_ERR_TX_RETRY_LIMIT: os__ << "TX_RETRY_LIMIT"; break;
      }
    }

    enum TxStatusType
    {
      TX_STA_RECEIVED,
      TX_STA_ERROR,
      TX_STA_QUEUED,
      TX_STA_TX_START,
      TX_STA_TX_END,
      TX_STA_TRANSMITTED,
      TX_STA_DELIVERED,
      TX_STA_EXPIRED,
      TX_STA_CANCELED
    };

    void
    reset(TxStatusType& value__)
    {
      value__ = TX_STA_RECEIVED;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const TxStatusType& value__)
    {
      switch (value__)
      {
        case TX_STA_RECEIVED: args__.push_back("RECEIVED"); break;
        case TX_STA_ERROR: args__.push_back("ERROR"); break;
        case TX_STA_QUEUED: args__.push_back("QUEUED"); break;
        case TX_STA_TX_START: args__.push_back("TX_START"); break;
        case TX_STA_TX_END: args__.push_back("TX_END"); break;
        case TX_STA_TRANSMITTED: args__.push_back("TRANSMITTED"); break;
        case TX_STA_DELIVERED: args__.push_back("DELIVERED"); break;
        case TX_STA_EXPIRED: args__.push_back("EXPIRED"); break;
        case TX_STA_CANCELED: args__.push_back("CANCELED"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, TxStatusType& value__)
    {
      if (args__[index__] == "RECEIVED") value__ = TX_STA_RECEIVED;
      else if (args__[index__] == "ERROR") value__ = TX_STA_ERROR;
      else if (args__[index__] == "QUEUED") value__ = TX_STA_QUEUED;
      else if (args__[index__] == "TX_START") value__ = TX_STA_TX_START;
      else if (args__[index__] == "TX_END") value__ = TX_STA_TX_END;
      else if (args__[index__] == "TRANSMITTED") value__ = TX_STA_TRANSMITTED;
      else if (args__[index__] == "DELIVERED") value__ = TX_STA_DELIVERED;
      else if (args__[index__] == "EXPIRED") value__ = TX_STA_EXPIRED;
      else if (args__[index__] == "CANCELED") value__ = TX_STA_CANCELED;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const TxStatusType& value__)
    {
      switch (value__)
      {
        case TX_STA_RECEIVED: os__ << "RECEIVED"; break;
        case TX_STA_ERROR: os__ << "ERROR"; break;
        case TX_STA_QUEUED: os__ << "QUEUED"; break;
        case TX_STA_TX_START: os__ << "TX_START"; break;
        case TX_STA_TX_END: os__ << "TX_END"; break;
        case TX_STA_TRANSMITTED: os__ << "TRANSMITTED"; break;
        case TX_STA_DELIVERED: os__ << "DELIVERED"; break;
        case TX_STA_EXPIRED: os__ << "EXPIRED"; break;
        case TX_STA_CANCELED: os__ << "CANCELED"; break;
      }
    }

    enum ZUnits
    {
      DEPTH,
      ALTITUDE
    };

    void
    reset(ZUnits& value__)
    {
      value__ = DEPTH;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const ZUnits& value__)
    {
      switch (value__)
      {
        case DEPTH: args__.push_back("DEPTH"); break;
        case ALTITUDE: args__.push_back("ALTITUDE"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, ZUnits& value__)
    {
      if (args__[index__] == "DEPTH") value__ = DEPTH;
      else if (args__[index__] == "ALTITUDE") value__ = ALTITUDE;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const ZUnits& value__)
    {
      switch (value__)
      {
        case DEPTH: os__ << "DEPTH"; break;
        case ALTITUDE: os__ << "ALTITUDE"; break;
      }
    }

    enum SpeedUnits
    {
      METER_PS,
      RPM,
      PERCENTAGE
    };

    void
    reset(SpeedUnits& value__)
    {
      value__ = METER_PS;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const SpeedUnits& value__)
    {
      switch (value__)
      {
        case METER_PS: args__.push_back("METER_PS"); break;
        case RPM: args__.push_back("RPM"); break;
        case PERCENTAGE: args__.push_back("PERCENTAGE"); break;
      }
      return 1;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, SpeedUnits& value__)
    {
      if (args__[index__] == "METER_PS") value__ = METER_PS;
      else if (args__[index__] == "RPM") value__ = RPM;
      else if (args__[index__] == "PERCENTAGE") value__ = PERCENTAGE;
      else throw InvalidValue();
      return 1;
    }

    void
    toText(std::ostream& os__, const SpeedUnits& value__)
    {
      switch (value__)
      {
        case METER_PS: os__ << "METER_PS"; break;
        case RPM: os__ << "RPM"; break;
        case PERCENTAGE: os__ << "PERCENTAGE"; break;
      }
    }

    struct PositionType
    {
      double latitude;
      double longitude;
      double depth;
      double altitude;
    };

    void
    reset(PositionType& value__)
    {
      value__.latitude = 0;
      value__.longitude = 0;
      value__.depth = 0;
      value__.altitude = 0;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const PositionType& value__)
    {
      size_t arg_count__ = 0;
      arg_count__ += encodeType(args__, value__.latitude);
      arg_count__ += encodeType(args__, value__.longitude);
      arg_count__ += encodeType(args__, value__.depth);
      arg_count__ += encodeType(args__, value__.altitude);
      return arg_count__;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, PositionType& value__)
    {
      size_t index_cursor__ = index__;
      index_cursor__ += decodeType(args__, index_cursor__, value__.latitude);
      index_cursor__ += decodeType(args__, index_cursor__, value__.longitude);
      index_cursor__ += decodeType(args__, index_cursor__, value__.depth);
      index_cursor__ += decodeType(args__, index_cursor__, value__.altitude);
      return index_cursor__ - index__;
    }

    struct ZReference
    {
      ZUnits z_units;
      double z_reference;
    };

    void
    reset(ZReference& value__)
    {
      reset(value__.z_units);
      value__.z_reference = 0;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const ZReference& value__)
    {
      size_t arg_count__ = 0;
      arg_count__ += encodeType(args__, value__.z_units);
      arg_count__ += encodeType(args__, value__.z_reference);
      return arg_count__;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, ZReference& value__)
    {
      size_t index_cursor__ = index__;
      index_cursor__ += decodeType(args__, index_cursor__, value__.z_units);
      index_cursor__ += decodeType(args__, index_cursor__, value__.z_reference);
      return index_cursor__ - index__;
    }

    struct SpeedReference
    {
      SpeedUnits speed_units;
      double speed_reference;
    };

    void
    reset(SpeedReference& value__)
    {
      reset(value__.speed_units);
      value__.speed_reference = 0;
    }

    size_t
    encodeType(std::vector<std::string>& args__, const SpeedReference& value__)
    {
      size_t arg_count__ = 0;
      arg_count__ += encodeType(args__, value__.speed_units);
      arg_count__ += encodeType(args__, value__.speed_reference);
      return arg_count__;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, SpeedReference& value__)
    {
      size_t index_cursor__ = index__;
      index_cursor__ += decodeType(args__, index_cursor__, value__.speed_units);
      index_cursor__ += decodeType(args__, index_cursor__, value__.speed_reference);
      return index_cursor__ - index__;
    }

    struct SensorInfoTuple
    {
      int sensor_id;
      std::string sensor_vendor;
      std::string sensor_model;
    };

    void
    reset(SensorInfoTuple& value__)
    {
      value__.sensor_id = 0;
      value__.sensor_vendor.clear();
      value__.sensor_model.clear();
    }

    size_t
    encodeType(std::vector<std::string>& args__, const SensorInfoTuple& value__)
    {
      size_t arg_count__ = 0;
      arg_count__ += encodeType(args__, value__.sensor_id);
      arg_count__ += encodeType(args__, value__.sensor_vendor);
      arg_count__ += encodeType(args__, value__.sensor_model);
      return arg_count__;
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, SensorInfoTuple& value__)
    {
      size_t index_cursor__ = index__;
      index_cursor__ += decodeType(args__, index_cursor__, value__.sensor_id);
      index_cursor__ += decodeType(args__, index_cursor__, value__.sensor_vendor);
      index_cursor__ += decodeType(args__, index_cursor__, value__.sensor_model);
      return index_cursor__ - index__;
    }

    class Maneuver
    {
    public:
      virtual size_t
      encodeArgs(std::vector<std::string>& args__) const = 0;

      virtual size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__) = 0;

      virtual const char*
      getTypeName(void) const = 0;
    };

    class Goto: public Maneuver
    {
    public:
      double latitude;
      double longitude;
      int timeout;
      ZReference z_reference;
      SpeedReference speed_reference;

      Goto(void)
      {
        latitude = 0;
        longitude = 0;
        timeout = 0;
        reset(z_reference);
        reset(speed_reference);
      }

      const char*
      getTypeName(void) const
      {
        return "Goto";
      }

      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, "Goto");
        arg_count__ += encodeType(args__, latitude);
        arg_count__ += encodeType(args__, longitude);
        arg_count__ += encodeType(args__, timeout);
        arg_count__ += encodeType(args__, z_reference);
        arg_count__ += encodeType(args__, speed_reference);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, latitude);
        index_cursor__ += decodeType(args__, index_cursor__, longitude);
        index_cursor__ += decodeType(args__, index_cursor__, timeout);
        index_cursor__ += decodeType(args__, index_cursor__, z_reference);
        index_cursor__ += decodeType(args__, index_cursor__, speed_reference);
        return index_cursor__ - index__;
      }
    };

    class StationKeeping: public Maneuver
    {
    public:
      double latitude;
      double longitude;
      ZReference z_reference;
      SpeedReference speed_reference;
      double radius;
      int duration;

      StationKeeping(void)
      {
        latitude = 0;
        longitude = 0;
        reset(z_reference);
        reset(speed_reference);
        radius = 0;
        duration = 0;
      }

      const char*
      getTypeName(void) const
      {
        return "StationKeeping";
      }

      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, "StationKeeping");
        arg_count__ += encodeType(args__, latitude);
        arg_count__ += encodeType(args__, longitude);
        arg_count__ += encodeType(args__, z_reference);
        arg_count__ += encodeType(args__, speed_reference);
        arg_count__ += encodeType(args__, radius);
        arg_count__ += encodeType(args__, duration);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, latitude);
        index_cursor__ += decodeType(args__, index_cursor__, longitude);
        index_cursor__ += decodeType(args__, index_cursor__, z_reference);
        index_cursor__ += decodeType(args__, index_cursor__, speed_reference);
        index_cursor__ += decodeType(args__, index_cursor__, radius);
        index_cursor__ += decodeType(args__, index_cursor__, duration);
        return index_cursor__ - index__;
      }
    };

    size_t
    encodeType(std::vector<std::string>& args__, const Maneuver* value__)
    {
      return value__->encodeArgs(args__);
    }

    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, Maneuver*& value__)
    {
      size_t index_cursor__ = index__;
      std::string name__;
      index_cursor__ += decodeType(args__, index_cursor__, name__);
      if (name__ == "Goto") value__ = new Goto();
      else if (name__ == "StationKeeping") value__ = new StationKeeping();
      else throw InvalidValue();
      index_cursor__ += value__->decodeArgs(args__, index_cursor__);
      return index_cursor__ - index__;
    }

    template <typename Type>
    size_t
    encodeType(std::vector<std::string>& args__, const std::vector<Type>& value__)
    {
      size_t arg_count__ = 0;
      arg_count__ += encodeType(args__, (unsigned)value__.size());
      for (size_t i = 0; i < value__.size(); ++i)
      {
        arg_count__ += encodeType(args__, value__[i]);
      }
      return arg_count__;
    }

    template <typename Type>
    size_t
    decodeType(const std::vector<std::string>& args__, size_t index__, std::vector<Type>& value__)
    {
      size_t index_cursor__ = index__;
      unsigned size__ = 0;
      index_cursor__ += decodeType(args__, index_cursor__, size__);
      value__.resize(size__);
      for (unsigned i = 0; i < size__; ++i)
      {
        index_cursor__ += decodeType(args__, index_cursor__, value__[i]);
      }
      return index_cursor__ - index__;
    }
  }
}

#endif
