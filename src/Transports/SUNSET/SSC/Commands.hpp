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

#ifndef TRANSPORTS_SUNSET_COMMANDS_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_COMMANDS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// Local headers.
#include "Command.hpp"
#include "Types.hpp"

namespace Transports
{
  namespace SUNSET
  {
    class CommandOk: public Command
    {
    public:
      std::string name;

      CommandOk(void)
      {
        setName("CommandOk");
        name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        return index_cursor__ - index__;
      }

      private:
    };

    class CommandError: public Command
    {
    public:
      ErrorType error_reason;

      CommandError(void)
      {
        setName("CommandError");
        reset(error_reason);
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, error_reason);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, error_reason);
        return index_cursor__ - index__;
      }

      private:
    };

    class CommandFailure: public Command
    {
    public:
      FailureType failure_reason;
      int sequence_number;

      CommandFailure(void)
      {
        setName("CommandFailure");
        reset(failure_reason);
        sequence_number = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, failure_reason);
        encodeType(args__, sequence_number);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, failure_reason);
        index_cursor__ += decodeType(args__, index_cursor__, sequence_number);
        return index_cursor__ - index__;
      }

      private:
    };

    class PacketTx: public Command
    {
    public:
      int data_length;
      std::string data;

      PacketTx(void)
      {
        setName("PacketTx");
        data_length = 0;
        data.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, data_length);
        encodeType(args__, data);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, data_length);
        index_cursor__ += decodeType(args__, index_cursor__, data);
        return index_cursor__ - index__;
      }

      private:
    };

    class PacketTxStatus: public Command
    {
    public:
      int sequence_number;
      TxStatusType status;
      TxErrorType error;

      PacketTxStatus(void)
      {
        setName("PacketTxStatus");
        sequence_number = 0;
        reset(status);
        reset(error);
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, sequence_number);
        encodeType(args__, status);
        encodeType(args__, error);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, sequence_number);
        index_cursor__ += decodeType(args__, index_cursor__, status);
        index_cursor__ += decodeType(args__, index_cursor__, error);
        return index_cursor__ - index__;
      }

      private:
    };

    class PacketRx: public Command
    {
    public:
      int data_length;
      std::string data;

      PacketRx(void)
      {
        setName("PacketRx");
        data_length = 0;
        data.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, data_length);
        encodeType(args__, data);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, data_length);
        index_cursor__ += decodeType(args__, index_cursor__, data);
        return index_cursor__ - index__;
      }

      private:
    };

    class Param: public Command
    {
    public:
      ParamName name;
      std::string value;

      Param(void)
      {
        setName("Param");
        reset(name);
        value.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, name);
        encodeType(args__, value);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        index_cursor__ += decodeType(args__, index_cursor__, value);
        return index_cursor__ - index__;
      }

      private:
    };

    class ParamGet: public Command
    {
    public:
      ParamName name;

      ParamGet(void)
      {
        setName("ParamGet");
        reset(name);
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        return index_cursor__ - index__;
      }

      private:
    };

    class ParamSet: public Command
    {
    public:
      ParamName name;
      std::string value;

      ParamSet(void)
      {
        setName("ParamSet");
        reset(name);
        value.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, name);
        encodeType(args__, value);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        index_cursor__ += decodeType(args__, index_cursor__, value);
        return index_cursor__ - index__;
      }

      private:
    };

    class Abort: public Command
    {
    public:

      Abort(void)
      {
        setName("Abort");
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        return 0;
      }

      private:
    };

    class Aborted: public Command
    {
    public:

      Aborted(void)
      {
        setName("Aborted");
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        return 0;
      }

      private:
    };

    class PlanListGet: public Command
    {
    public:

      PlanListGet(void)
      {
        setName("PlanListGet");
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        return 0;
      }

      private:
    };

    class PlanList: public Command
    {
    public:
      std::vector<std::string> plan_names;

      PlanList(void)
      {
        setName("PlanList");
        plan_names.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_names);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_names);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanGet: public Command
    {
    public:
      std::string plan_name;

      PlanGet(void)
      {
        setName("PlanGet");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class Plan: public Command
    {
    public:
      std::vector<Maneuver*> maneuver_list;

      Plan(void)
      {
        setName("Plan");
        maneuver_list.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, maneuver_list);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, maneuver_list);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanStart: public Command
    {
    public:
      std::string plan_name;

      PlanStart(void)
      {
        setName("PlanStart");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanStarted: public Command
    {
    public:
      std::string plan_name;

      PlanStarted(void)
      {
        setName("PlanStarted");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanStop: public Command
    {
    public:

      PlanStop(void)
      {
        setName("PlanStop");
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        return 0;
      }

      private:
    };

    class PlanStopped: public Command
    {
    public:
      std::string plan_name;

      PlanStopped(void)
      {
        setName("PlanStopped");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanDelete: public Command
    {
    public:
      std::string plan_name;

      PlanDelete(void)
      {
        setName("PlanDelete");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanDeleted: public Command
    {
    public:
      std::string plan_name;

      PlanDeleted(void)
      {
        setName("PlanDeleted");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanAdd: public Command
    {
    public:
      std::string plan_name;
      std::vector<Maneuver*> maneuver_list;

      PlanAdd(void)
      {
        setName("PlanAdd");
        plan_name.clear();
        maneuver_list.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
        encodeType(args__, maneuver_list);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        index_cursor__ += decodeType(args__, index_cursor__, maneuver_list);
        return index_cursor__ - index__;
      }

      private:
    };

    class PlanAdded: public Command
    {
    public:
      std::string plan_name;

      PlanAdded(void)
      {
        setName("PlanAdded");
        plan_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, plan_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class SensorListGet: public Command
    {
    public:

      SensorListGet(void)
      {
        setName("SensorListGet");
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        return 0;
      }

      private:
    };

    class SensorList: public Command
    {
    public:
      std::vector<std::string> measurement_names;

      SensorList(void)
      {
        setName("SensorList");
        measurement_names.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, measurement_names);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_names);
        return index_cursor__ - index__;
      }

      private:
    };

    class SensorInfoGet: public Command
    {
    public:
      std::string measurement_name;

      SensorInfoGet(void)
      {
        setName("SensorInfoGet");
        measurement_name.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, measurement_name);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        return index_cursor__ - index__;
      }

      private:
    };

    class SensorInfo: public Command
    {
    public:
      std::string measurement_name;
      std::vector<SensorInfoTuple> tuples;

      SensorInfo(void)
      {
        setName("SensorInfo");
        measurement_name.clear();
        tuples.clear();
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, measurement_name);
        encodeType(args__, tuples);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        index_cursor__ += decodeType(args__, index_cursor__, tuples);
        return index_cursor__ - index__;
      }

      private:
    };

    class SensorSampleGet: public Command
    {
    public:
      std::string measurement_name;
      int sensor_identifier;
      double sampling_frequency;

      SensorSampleGet(void)
      {
        setName("SensorSampleGet");
        measurement_name.clear();
        sensor_identifier = 0;
        sampling_frequency = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, measurement_name);
        encodeType(args__, sensor_identifier);
        encodeType(args__, sampling_frequency);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        index_cursor__ += decodeType(args__, index_cursor__, sensor_identifier);
        index_cursor__ += decodeType(args__, index_cursor__, sampling_frequency);
        return index_cursor__ - index__;
      }

      private:
    };

    class SensorSample: public Command
    {
    public:
      PositionType position;
      std::string measurement_name;
      int sensor_identifier;
      double sample;

      SensorSample(void)
      {
        setName("SensorSample");
        reset(position);
        measurement_name.clear();
        sensor_identifier = 0;
        sample = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, position);
        encodeType(args__, measurement_name);
        encodeType(args__, sensor_identifier);
        encodeType(args__, sample);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, position);
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        index_cursor__ += decodeType(args__, index_cursor__, sensor_identifier);
        index_cursor__ += decodeType(args__, index_cursor__, sample);
        return index_cursor__ - index__;
      }

      private:
    };

    class PositionGet: public Command
    {
    public:
      double frequency;

      PositionGet(void)
      {
        setName("PositionGet");
        frequency = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, frequency);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, frequency);
        return index_cursor__ - index__;
      }

      private:
    };

    class Position: public Command
    {
    public:
      PositionType value;
      double heading;

      Position(void)
      {
        setName("Position");
        reset(value);
        heading = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, value);
        encodeType(args__, heading);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, value);
        index_cursor__ += decodeType(args__, index_cursor__, heading);
        return index_cursor__ - index__;
      }

      private:
    };

    class RangeGet: public Command
    {
    public:
      std::vector<int> targets;
      double frequency;

      RangeGet(void)
      {
        setName("RangeGet");
        targets.clear();
        frequency = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, targets);
        encodeType(args__, frequency);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, targets);
        index_cursor__ += decodeType(args__, index_cursor__, frequency);
        return index_cursor__ - index__;
      }

      private:
    };

    class Range: public Command
    {
    public:
      int target;
      double travel_time;
      double bearing;

      Range(void)
      {
        setName("Range");
        target = 0;
        travel_time = 0;
        bearing = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        encodeType(args__, target);
        encodeType(args__, travel_time);
        encodeType(args__, bearing);
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, target);
        index_cursor__ += decodeType(args__, index_cursor__, travel_time);
        index_cursor__ += decodeType(args__, index_cursor__, bearing);
        return index_cursor__ - index__;
      }

      private:
    };
  }
}

#endif
