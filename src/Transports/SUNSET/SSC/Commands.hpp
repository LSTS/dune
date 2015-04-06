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
// Automatically generated.                                                 *
//***************************************************************************

#ifndef TRANSPORTS_SUNSET_SSC_COMMANDS_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SSC_COMMANDS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// Local headers.
#include "AbstractCommand.hpp"
#include "Types.hpp"

namespace Transports
{
  namespace SUNSET
  {
    class CommandOk: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class CommandError: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, error_reason);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, error_reason);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class CommandFailure: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, failure_reason);
        arg_count__ += encodeType(args__, sequence_number);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, failure_reason);
        index_cursor__ += decodeType(args__, index_cursor__, sequence_number);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PacketTx: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, data_length);
        arg_count__ += encodeType(args__, data);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, data_length);
        index_cursor__ += decodeType(args__, index_cursor__, data);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PacketTxStatus: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, sequence_number);
        arg_count__ += encodeType(args__, status);
        arg_count__ += encodeType(args__, error);
        return arg_count__;
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

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PacketRx: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, data_length);
        arg_count__ += encodeType(args__, data);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, data_length);
        index_cursor__ += decodeType(args__, index_cursor__, data);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Param: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, name);
        arg_count__ += encodeType(args__, value);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        index_cursor__ += decodeType(args__, index_cursor__, value);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class ParamGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class ParamSet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, name);
        arg_count__ += encodeType(args__, value);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, name);
        index_cursor__ += decodeType(args__, index_cursor__, value);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Abort: public AbstractCommand
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
        (void)args__;
        return 0;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        (void)args__;
        (void)index__;
        return 0;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Aborted: public AbstractCommand
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
        (void)args__;
        return 0;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        (void)args__;
        (void)index__;
        return 0;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanListGet: public AbstractCommand
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
        (void)args__;
        return 0;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        (void)args__;
        (void)index__;
        return 0;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanList: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_names);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_names);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Plan: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, maneuver_list);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, maneuver_list);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanStart: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanStarted: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanStop: public AbstractCommand
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
        (void)args__;
        return 0;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        (void)args__;
        (void)index__;
        return 0;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanStopped: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanDelete: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanDeleted: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanAdd: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        arg_count__ += encodeType(args__, maneuver_list);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        index_cursor__ += decodeType(args__, index_cursor__, maneuver_list);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PlanAdded: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, plan_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, plan_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorListGet: public AbstractCommand
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
        (void)args__;
        return 0;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        (void)args__;
        (void)index__;
        return 0;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorList: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, measurement_names);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_names);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorInfoGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, measurement_name);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorInfo: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, measurement_name);
        arg_count__ += encodeType(args__, tuples);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, measurement_name);
        index_cursor__ += decodeType(args__, index_cursor__, tuples);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorSampleGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, measurement_name);
        arg_count__ += encodeType(args__, sensor_identifier);
        arg_count__ += encodeType(args__, sampling_frequency);
        return arg_count__;
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

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class SensorSample: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, position);
        arg_count__ += encodeType(args__, measurement_name);
        arg_count__ += encodeType(args__, sensor_identifier);
        arg_count__ += encodeType(args__, sample);
        return arg_count__;
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

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class PositionGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, frequency);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, frequency);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Position: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, value);
        arg_count__ += encodeType(args__, heading);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, value);
        index_cursor__ += decodeType(args__, index_cursor__, heading);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class RangeGet: public AbstractCommand
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
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, targets);
        arg_count__ += encodeType(args__, frequency);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, targets);
        index_cursor__ += decodeType(args__, index_cursor__, frequency);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };

    class Range: public AbstractCommand
    {
    public:
      int target;
      double travel_time;
      double bearing;
      double elevation;

      Range(void)
      {
        setName("Range");
        target = 0;
        travel_time = 0;
        bearing = 0;
        elevation = 0;
      }

    protected:
      size_t
      encodeArgs(std::vector<std::string>& args__) const
      {
        size_t arg_count__ = 0;
        arg_count__ += encodeType(args__, target);
        arg_count__ += encodeType(args__, travel_time);
        arg_count__ += encodeType(args__, bearing);
        arg_count__ += encodeType(args__, elevation);
        return arg_count__;
      }

      size_t
      decodeArgs(const std::vector<std::string>& args__, size_t index__)
      {
        size_t index_cursor__ = index__;
        index_cursor__ += decodeType(args__, index_cursor__, target);
        index_cursor__ += decodeType(args__, index_cursor__, travel_time);
        index_cursor__ += decodeType(args__, index_cursor__, bearing);
        index_cursor__ += decodeType(args__, index_cursor__, elevation);
        return index_cursor__ - index__;
      }

      void
      toTextArgs(std::ostream& os__) const
      {
        (void)os__;
      }

      private:
    };
  }
}

#endif
