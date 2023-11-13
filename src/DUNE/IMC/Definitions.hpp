//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 86c7ceace2a6f6239ea89a0e5bc64a3f                            *
//***************************************************************************

#ifndef DUNE_IMC_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_DEFINITIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/InlineMessage.hpp>
#include <DUNE/IMC/MessageList.hpp>
#include <DUNE/IMC/Enumerations.hpp>
#include <DUNE/IMC/Bitfields.hpp>
#include <DUNE/IMC/SuperTypes.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Entity State.
    class EntityState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Bootstrapping.
        ESTA_BOOT = 0,
        //! Normal Operation.
        ESTA_NORMAL = 1,
        //! Fault.
        ESTA_FAULT = 2,
        //! Error.
        ESTA_ERROR = 3,
        //! Failure.
        ESTA_FAILURE = 4
      };

      //! Flags.
      enum FlagsBits
      {
        //! Human Intervention Required.
        EFLA_HUMAN_INTERVENTION = 0x01
      };

      //! State.
      uint8_t state;
      //! Flags.
      uint8_t flags;
      //! Complementary description.
      std::string description;

      static uint16_t
      getIdStatic(void)
      {
        return 1;
      }

      EntityState(void);

      EntityState*
      clone(void) const
      {
        return new EntityState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(description);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity State.
    class QueryEntityState: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 2;
      }

      QueryEntityState(void);

      QueryEntityState*
      clone(void) const
      {
        return new QueryEntityState(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryEntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Entity Information.
    class EntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;
      //! Label.
      std::string label;
      //! Component name.
      std::string component;
      //! Activation Time.
      uint16_t act_time;
      //! Deactivation Time.
      uint16_t deact_time;

      static uint16_t
      getIdStatic(void)
      {
        return 3;
      }

      EntityInfo(void);

      EntityInfo*
      clone(void) const
      {
        return new EntityInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityInfo";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(label) + IMC::getSerializationSize(component);
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity Information.
    class QueryEntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;

      static uint16_t
      getIdStatic(void)
      {
        return 4;
      }

      QueryEntityInfo(void);

      QueryEntityInfo*
      clone(void) const
      {
        return new QueryEntityInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryEntityInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityInfo";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity List.
    class EntityList: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! list.
      std::string list;

      static uint16_t
      getIdStatic(void)
      {
        return 5;
      }

      EntityList(void);

      EntityList*
      clone(void) const
      {
        return new EntityList(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityList::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityList";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! CPU Usage.
    class CpuUsage: public Message
    {
    public:
      //! Usage percentage.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 7;
      }

      CpuUsage(void);

      CpuUsage*
      clone(void) const
      {
        return new CpuUsage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CpuUsage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CpuUsage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Transport Bindings.
    class TransportBindings: public Message
    {
    public:
      //! Consumer name.
      std::string consumer;
      //! Message Identifier.
      uint16_t message_id;

      static uint16_t
      getIdStatic(void)
      {
        return 8;
      }

      TransportBindings(void);

      TransportBindings*
      clone(void) const
      {
        return new TransportBindings(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TransportBindings::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TransportBindings";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(consumer);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Restart System.
    class RestartSystem: public Message
    {
    public:
      //! Restart Type.
      enum RestartTypeEnum
      {
        //! Dune.
        RSTYPE_DUNE = 1,
        //! System.
        RSTYPE_SYSTEM = 2
      };

      //! Restart Type.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 9;
      }

      RestartSystem(void);

      RestartSystem*
      clone(void) const
      {
        return new RestartSystem(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RestartSystem::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RestartSystem";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Calibration Control.
    class DevCalibrationControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        DCAL_START = 0,
        //! Stop.
        DCAL_STOP = 1,
        //! Perform Next Calibration Step.
        DCAL_STEP_NEXT = 2,
        //! Perform Previous Calibration Step.
        DCAL_STEP_PREVIOUS = 3
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 12;
      }

      DevCalibrationControl(void);

      DevCalibrationControl*
      clone(void) const
      {
        return new DevCalibrationControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DevCalibrationControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevCalibrationControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Calibration State.
    class DevCalibrationState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Previous Step Not Supported.
        DCS_PREVIOUS_NOT_SUPPORTED = 0x01,
        //! Next Step Not Supported.
        DCS_NEXT_NOT_SUPPORTED = 0x02,
        //! Waiting Device Calibration Control.
        DCS_WAITING_CONTROL = 0x04,
        //! Calibration Error.
        DCS_ERROR = 0x08,
        //! Calibration Procedure Completed.
        DCS_COMPLETED = 0x10
      };

      //! Total Steps.
      uint8_t total_steps;
      //! Current Step Number.
      uint8_t step_number;
      //! Description.
      std::string step;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 13;
      }

      DevCalibrationState(void);

      DevCalibrationState*
      clone(void) const
      {
        return new DevCalibrationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DevCalibrationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevCalibrationState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(step);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity Activation State.
    class EntityActivationState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Entity is Inactive.
        EAS_INACTIVE = 0,
        //! Entity is Active.
        EAS_ACTIVE = 1,
        //! Activation in Progress.
        EAS_ACT_IP = 2,
        //! Activation Completed.
        EAS_ACT_DONE = 3,
        //! Activation Failed.
        EAS_ACT_FAIL = 4,
        //! Deactivation In Progress.
        EAS_DEACT_IP = 5,
        //! Deactivation Completed.
        EAS_DEACT_DONE = 6,
        //! Deactivation Failed.
        EAS_DEACT_FAIL = 7
      };

      //! State.
      uint8_t state;
      //! Error.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 14;
      }

      EntityActivationState(void);

      EntityActivationState*
      clone(void) const
      {
        return new EntityActivationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityActivationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityActivationState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity Activation State.
    class QueryEntityActivationState: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 15;
      }

      QueryEntityActivationState(void);

      QueryEntityActivationState*
      clone(void) const
      {
        return new QueryEntityActivationState(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryEntityActivationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityActivationState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Vehicle Operational Limits.
    class VehicleOperationalLimits: public Message
    {
    public:
      //! Action on the vehicle operational limits.
      enum ActiononthevehicleoperationallimitsEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the vehicle operational limits.
      uint8_t op;
      //! Minimum speed.
      fp32_t speed_min;
      //! Maximum speed.
      fp32_t speed_max;
      //! Longitudinal maximum acceleration.
      fp32_t long_accel;
      //! Maximum MSL altitude.
      fp32_t alt_max_msl;
      //! Maximum Dive Rate Speed Fraction.
      fp32_t dive_fraction_max;
      //! Maximum Climb Rate Speed Fraction.
      fp32_t climb_fraction_max;
      //! Bank limit.
      fp32_t bank_max;
      //! Bank rate limit.
      fp32_t p_max;
      //! Minimum pitch angle.
      fp32_t pitch_min;
      //! Maximum pitch angle.
      fp32_t pitch_max;
      //! Maximum pitch rate.
      fp32_t q_max;
      //! Minimum load factor.
      fp32_t g_min;
      //! Maximum load factor.
      fp32_t g_max;
      //! Maximum lateral load factor.
      fp32_t g_lat_max;
      //! Minimum RPMs.
      fp32_t rpm_min;
      //! Maximum RPMs.
      fp32_t rpm_max;
      //! Maximum RPM rate.
      fp32_t rpm_rate_max;

      static uint16_t
      getIdStatic(void)
      {
        return 16;
      }

      VehicleOperationalLimits(void);

      VehicleOperationalLimits*
      clone(void) const
      {
        return new VehicleOperationalLimits(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleOperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleOperationalLimits";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 69;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Message List.
    class MsgList: public Message
    {
    public:
      //! Messages.
      MessageList<Message> msgs;

      static uint16_t
      getIdStatic(void)
      {
        return 20;
      }

      MsgList(void);

      MsgList*
      clone(void) const
      {
        return new MsgList(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MsgList::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MsgList";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return msgs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Simulated State.
    class SimulatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north (m).
      fp32_t x;
      //! Offset east (m).
      fp32_t y;
      //! Offset down (m).
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Linear Velocity.
      fp32_t u;
      //! Body-Fixed yy Linear Velocity.
      fp32_t v;
      //! Body-Fixed zz Linear Velocity.
      fp32_t w;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic(void)
      {
        return 50;
      }

      SimulatedState(void);

      SimulatedState*
      clone(void) const
      {
        return new SimulatedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SimulatedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SimulatedState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 80;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Leak Simulation.
    class LeakSimulation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Leaks Off.
        LSIM_OFF = 0,
        //! Leaks On.
        LSIM_ON = 1
      };

      //! Operation.
      uint8_t op;
      //! Leak Entities.
      std::string entities;

      static uint16_t
      getIdStatic(void)
      {
        return 51;
      }

      LeakSimulation(void);

      LeakSimulation*
      clone(void) const
      {
        return new LeakSimulation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LeakSimulation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LeakSimulation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Underwater Acoustics Simulation.
    class UASimulation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Data Transmission.
        UAS_DATA = 0,
        //! Ping.
        UAS_PING = 1,
        //! Ping Reply.
        UAS_PING_REPLY = 2
      };

      //! Type.
      uint8_t type;
      //! Transmission Speed.
      uint16_t speed;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 52;
      }

      UASimulation(void);

      UASimulation*
      clone(void) const
      {
        return new UASimulation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UASimulation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UASimulation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Dynamics Simulation Parameters.
    class DynamicsSimParam: public Message
    {
    public:
      //! Action on the Vehicle Simulation Parameters.
      enum ActionontheVehicleSimulationParametersEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the Vehicle Simulation Parameters.
      uint8_t op;
      //! TAS to Longitudinal Acceleration Gain.
      fp32_t tas2acc_pgain;
      //! Bank to Bank Rate Gain.
      fp32_t bank2p_pgain;

      static uint16_t
      getIdStatic(void)
      {
        return 53;
      }

      DynamicsSimParam(void);

      DynamicsSimParam*
      clone(void) const
      {
        return new DynamicsSimParam(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DynamicsSimParam::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DynamicsSimParam";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Storage Usage.
    class StorageUsage: public Message
    {
    public:
      //! Available.
      uint32_t available;
      //! Usage.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 100;
      }

      StorageUsage(void);

      StorageUsage*
      clone(void) const
      {
        return new StorageUsage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return StorageUsage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StorageUsage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Cache Control.
    class CacheControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Store.
        COP_STORE = 0,
        //! Load.
        COP_LOAD = 1,
        //! Clear.
        COP_CLEAR = 2,
        //! Copy Snapshot.
        COP_COPY = 3,
        //! Snapshot Copy Complete.
        COP_COPY_COMPLETE = 4
      };

      //! Control Operation.
      uint8_t op;
      //! Snapshot destination.
      std::string snapshot;
      //! Message.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic(void)
      {
        return 101;
      }

      CacheControl(void);

      CacheControl*
      clone(void) const
      {
        return new CacheControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CacheControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CacheControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(snapshot) + message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Logging Control.
    class LoggingControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Request Start of Logging.
        COP_REQUEST_START = 0,
        //! Logging Started.
        COP_STARTED = 1,
        //! Request Logging Stop.
        COP_REQUEST_STOP = 2,
        //! Logging Stopped.
        COP_STOPPED = 3,
        //! Request Current Log Name.
        COP_REQUEST_CURRENT_NAME = 4,
        //! Current Log Name.
        COP_CURRENT_NAME = 5
      };

      //! Control Operation.
      uint8_t op;
      //! Log Label / Path.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 102;
      }

      LoggingControl(void);

      LoggingControl*
      clone(void) const
      {
        return new LoggingControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LoggingControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LoggingControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Log Book Entry.
    class LogBookEntry: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Information.
        LBET_INFO = 0,
        //! Warning.
        LBET_WARNING = 1,
        //! Error.
        LBET_ERROR = 2,
        //! Critical.
        LBET_CRITICAL = 3,
        //! Debug.
        LBET_DEBUG = 4
      };

      //! Type.
      uint8_t type;
      //! Timestamp.
      fp64_t htime;
      //! Context.
      std::string context;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 103;
      }

      LogBookEntry(void);

      LogBookEntry*
      clone(void) const
      {
        return new LogBookEntry(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LogBookEntry::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LogBookEntry";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(context) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Log Book Control.
    class LogBookControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Get.
        LBC_GET = 0,
        //! Clear.
        LBC_CLEAR = 1,
        //! Get Errors.
        LBC_GET_ERR = 2,
        //! Reply.
        LBC_REPLY = 3
      };

      //! Command.
      uint8_t command;
      //! Timestamp.
      fp64_t htime;
      //! Messages.
      MessageList<LogBookEntry> msg;

      static uint16_t
      getIdStatic(void)
      {
        return 104;
      }

      LogBookControl(void);

      LogBookControl*
      clone(void) const
      {
        return new LogBookControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LogBookControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LogBookControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Replay Control.
    class ReplayControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        ROP_START = 0,
        //! Stop.
        ROP_STOP = 1,
        //! Pause.
        ROP_PAUSE = 2,
        //! Resume.
        ROP_RESUME = 3
      };

      //! Operation.
      uint8_t op;
      //! File To Replay.
      std::string file;

      static uint16_t
      getIdStatic(void)
      {
        return 105;
      }

      ReplayControl(void);

      ReplayControl*
      clone(void) const
      {
        return new ReplayControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ReplayControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ReplayControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(file);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Clock Control.
    class ClockControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Execute Sync..
        COP_SYNC_EXEC = 0,
        //! Request Sync..
        COP_SYNC_REQUEST = 1,
        //! Sync. Started.
        COP_SYNC_STARTED = 2,
        //! Sync. done.
        COP_SYNC_DONE = 3,
        //! Set Timezone .
        COP_SET_TZ = 4,
        //! Timezone Setup.
        COP_SET_TZ_DONE = 5
      };

      //! Operation.
      uint8_t op;
      //! Clock.
      fp64_t clock;
      //! Timezone.
      int8_t tz;

      static uint16_t
      getIdStatic(void)
      {
        return 106;
      }

      ClockControl(void);

      ClockControl*
      clone(void) const
      {
        return new ClockControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ClockControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ClockControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic CTD.
    class HistoricCTD: public Message
    {
    public:
      //! Conductivity.
      fp32_t conductivity;
      //! Temperature.
      fp32_t temperature;
      //! Depth.
      fp32_t depth;

      static uint16_t
      getIdStatic(void)
      {
        return 107;
      }

      HistoricCTD(void);

      HistoricCTD*
      clone(void) const
      {
        return new HistoricCTD(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricCTD::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricCTD";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic Telemetry.
    class HistoricTelemetry: public Message
    {
    public:
      //! Altitude.
      fp32_t altitude;
      //! Roll.
      uint16_t roll;
      //! Pitch.
      uint16_t pitch;
      //! Yaw.
      uint16_t yaw;
      //! Speed.
      int16_t speed;

      static uint16_t
      getIdStatic(void)
      {
        return 108;
      }

      HistoricTelemetry(void);

      HistoricTelemetry*
      clone(void) const
      {
        return new HistoricTelemetry(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricTelemetry::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricTelemetry";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic Sonar Data.
    class HistoricSonarData: public Message
    {
    public:
      //! Encoding.
      enum EncodingEnum
      {
        //! One Byte Per Pixel.
        ENC_ONE_BYTE_PER_PIXEL = 0,
        //! PNG compressed image.
        ENC_PNG = 1,
        //! JPEG compressed image.
        ENC_JPEG = 2
      };

      //! Altitude.
      fp32_t altitude;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Bearing.
      fp32_t bearing;
      //! Pixels Per Line.
      int16_t pxl;
      //! Encoding.
      uint8_t encoding;
      //! SonarData.
      std::vector<char> sonar_data;

      static uint16_t
      getIdStatic(void)
      {
        return 109;
      }

      HistoricSonarData(void);

      HistoricSonarData*
      clone(void) const
      {
        return new HistoricSonarData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricSonarData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricSonarData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 19;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sonar_data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic Event.
    class HistoricEvent: public Message
    {
    public:
      //! Event Type.
      enum EventTypeEnum
      {
        //! Information.
        EVTYPE_INFO = 0,
        //! Error.
        EVTYPE_ERROR = 1
      };

      //! Event.
      std::string text;
      //! Event Type.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 110;
      }

      HistoricEvent(void);

      HistoricEvent*
      clone(void) const
      {
        return new HistoricEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricEvent";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Profile Sample.
    class ProfileSample: public Message
    {
    public:
      //! Depth.
      uint16_t depth;
      //! Average.
      fp32_t avg;

      static uint16_t
      getIdStatic(void)
      {
        return 112;
      }

      ProfileSample(void);

      ProfileSample*
      clone(void) const
      {
        return new ProfileSample(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ProfileSample::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ProfileSample";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vertical Profile.
    class VerticalProfile: public Message
    {
    public:
      //! Parameter.
      enum ParameterEnum
      {
        //! Temperature.
        PROF_TEMPERATURE = 0,
        //! Salinity.
        PROF_SALINITY = 1,
        //! Conductivity.
        PROF_CONDUCTIVITY = 2,
        //! pH.
        PROF_PH = 3,
        //! Redox.
        PROF_REDOX = 4,
        //! Chlorophyll.
        PROF_CHLOROPHYLL = 5,
        //! Turbidity.
        PROF_TURBIDITY = 6
      };

      //! Parameter.
      uint8_t parameter;
      //! Number of Samples.
      uint8_t numsamples;
      //! Samples.
      MessageList<ProfileSample> samples;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;

      static uint16_t
      getIdStatic(void)
      {
        return 111;
      }

      VerticalProfile(void);

      VerticalProfile*
      clone(void) const
      {
        return new VerticalProfile(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VerticalProfile::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VerticalProfile";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 18;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return samples.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Heartbeat.
    class Heartbeat: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 150;
      }

      Heartbeat(void);

      Heartbeat*
      clone(void) const
      {
        return new Heartbeat(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Heartbeat::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Heartbeat";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Announce.
    class Announce: public Message
    {
    public:
      //! System Name.
      std::string sys_name;
      //! System Type.
      uint8_t sys_type;
      //! Control Owner.
      uint16_t owner;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height WGS-84.
      fp32_t height;
      //! Services.
      std::string services;

      static uint16_t
      getIdStatic(void)
      {
        return 151;
      }

      Announce(void);

      Announce*
      clone(void) const
      {
        return new Announce(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Announce::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Announce";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys_name) + IMC::getSerializationSize(services);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Announce Service.
    class AnnounceService: public Message
    {
    public:
      //! ServiceType.
      enum ServiceTypeBits
      {
        //! External.
        SRV_TYPE_EXTERNAL = 0x01,
        //! Local.
        SRV_TYPE_LOCAL = 0x02
      };

      //! Service.
      std::string service;
      //! ServiceType.
      uint8_t service_type;

      static uint16_t
      getIdStatic(void)
      {
        return 152;
      }

      AnnounceService(void);

      AnnounceService*
      clone(void) const
      {
        return new AnnounceService(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AnnounceService::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AnnounceService";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(service);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Receive Signal Strength Information.
    class RSSI: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 153;
      }

      RSSI(void);

      RSSI*
      clone(void) const
      {
        return new RSSI(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RSSI::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RSSI";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Voltage Standing Wave Ratio.
    class VSWR: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 154;
      }

      VSWR(void);

      VSWR*
      clone(void) const
      {
        return new VSWR(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VSWR::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VSWR";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Link Level.
    class LinkLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 155;
      }

      LinkLevel(void);

      LinkLevel*
      clone(void) const
      {
        return new LinkLevel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LinkLevel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LinkLevel";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS.
    class Sms: public Message
    {
    public:
      //! Number.
      std::string number;
      //! Timeout.
      uint16_t timeout;
      //! Contents.
      std::string contents;

      static uint16_t
      getIdStatic(void)
      {
        return 156;
      }

      Sms(void);

      Sms*
      clone(void) const
      {
        return new Sms(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Sms::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Sms";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(number) + IMC::getSerializationSize(contents);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Transmit.
    class SmsTx: public Message
    {
    public:
      //! Sequence Number.
      uint32_t seq;
      //! Destination.
      std::string destination;
      //! Timeout.
      uint16_t timeout;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 157;
      }

      SmsTx(void);

      SmsTx*
      clone(void) const
      {
        return new SmsTx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SmsTx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsTx";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Receive.
    class SmsRx: public Message
    {
    public:
      //! Source.
      std::string source;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 158;
      }

      SmsRx(void);

      SmsRx*
      clone(void) const
      {
        return new SmsRx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SmsRx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsRx";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(source) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS State.
    class SmsState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Accepted.
        SMS_ACCEPTED = 0,
        //! Rejected.
        SMS_REJECTED = 1,
        //! Interrupted.
        SMS_INTERRUPTED = 2,
        //! Completed.
        SMS_COMPLETED = 3,
        //! Idle.
        SMS_IDLE = 4,
        //! Transmitting.
        SMS_TRANSMITTING = 5,
        //! Receiving.
        SMS_RECEIVING = 6
      };

      //! Sequence Number.
      uint32_t seq;
      //! State.
      uint8_t state;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 159;
      }

      SmsState(void);

      SmsState*
      clone(void) const
      {
        return new SmsState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SmsState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Text Message.
    class TextMessage: public Message
    {
    public:
      //! Origin.
      std::string origin;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 160;
      }

      TextMessage(void);

      TextMessage*
      clone(void) const
      {
        return new TextMessage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TextMessage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TextMessage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(origin) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Received Iridium Message.
    class IridiumMsgRx: public Message
    {
    public:
      //! Origin Identifier.
      std::string origin;
      //! Timestamp.
      fp64_t htime;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 170;
      }

      IridiumMsgRx(void);

      IridiumMsgRx*
      clone(void) const
      {
        return new IridiumMsgRx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IridiumMsgRx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumMsgRx";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(origin) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Transmit Iridium Message.
    class IridiumMsgTx: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Time to live.
      uint16_t ttl;
      //! Destination Identifier.
      std::string destination;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 171;
      }

      IridiumMsgTx(void);

      IridiumMsgTx*
      clone(void) const
      {
        return new IridiumMsgTx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IridiumMsgTx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumMsgTx";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Iridium Transmission Status.
    class IridiumTxStatus: public Message
    {
    public:
      //! Status Code.
      enum StatusCodeEnum
      {
        //! Successfull transmission.
        TXSTATUS_OK = 1,
        //! Error while trying to transmit message.
        TXSTATUS_ERROR = 2,
        //! Message has been queued for transmission.
        TXSTATUS_QUEUED = 3,
        //! Message is currently being transmitted.
        TXSTATUS_TRANSMIT = 4,
        //! Message's TTL has expired. Transmition cancelled..
        TXSTATUS_EXPIRED = 5,
        //! No more messages to be transmitted or received..
        TXSTATUS_EMPTY = 6
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status Code.
      uint8_t status;
      //! Status Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 172;
      }

      IridiumTxStatus(void);

      IridiumTxStatus*
      clone(void) const
      {
        return new IridiumTxStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IridiumTxStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumTxStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Group Membership State.
    class GroupMembershipState: public Message
    {
    public:
      //! Group Name.
      std::string group_name;
      //! Communication Links Assertion.
      uint32_t links;

      static uint16_t
      getIdStatic(void)
      {
        return 180;
      }

      GroupMembershipState(void);

      GroupMembershipState*
      clone(void) const
      {
        return new GroupMembershipState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GroupMembershipState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroupMembershipState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! System Group.
    class SystemGroup: public Message
    {
    public:
      //! Group List Action.
      enum GroupListActionEnum
      {
        //! Disband.
        OP_Dis = 0,
        //! Set.
        OP_Set = 1,
        //! Request.
        OP_Req = 2,
        //! Change.
        OP_Chg = 3,
        //! Report.
        OP_Rep = 4,
        //! Force.
        OP_Frc = 5
      };

      //! Group Name.
      std::string groupname;
      //! Group List Action.
      uint8_t action;
      //! Systems Name List.
      std::string grouplist;

      static uint16_t
      getIdStatic(void)
      {
        return 181;
      }

      SystemGroup(void);

      SystemGroup*
      clone(void) const
      {
        return new SystemGroup(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SystemGroup::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SystemGroup";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(groupname) + IMC::getSerializationSize(grouplist);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Link Latency.
    class LinkLatency: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! Communications Source System ID.
      uint16_t sys_src;

      static uint16_t
      getIdStatic(void)
      {
        return 182;
      }

      LinkLatency(void);

      LinkLatency*
      clone(void) const
      {
        return new LinkLatency(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LinkLatency::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LinkLatency";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Extended Receive Signal Strength Information.
    class ExtendedRSSI: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! RSSI Units.
      uint8_t units;

      static uint16_t
      getIdStatic(void)
      {
        return 183;
      }

      ExtendedRSSI(void);

      ExtendedRSSI*
      clone(void) const
      {
        return new ExtendedRSSI(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ExtendedRSSI::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ExtendedRSSI";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic Data Series.
    class HistoricData: public Message
    {
    public:
      //! Base Latitude.
      fp32_t base_lat;
      //! Base Longitude.
      fp32_t base_lon;
      //! Base Timestamp.
      fp32_t base_time;
      //! Data.
      MessageList<RemoteData> data;

      static uint16_t
      getIdStatic(void)
      {
        return 184;
      }

      HistoricData(void);

      HistoricData*
      clone(void) const
      {
        return new HistoricData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Compressed Historic Data Series.
    class CompressedHistory: public Message
    {
    public:
      //! Base Latitude.
      fp32_t base_lat;
      //! Base Longitude.
      fp32_t base_lon;
      //! Base Timestamp.
      fp32_t base_time;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 185;
      }

      CompressedHistory(void);

      CompressedHistory*
      clone(void) const
      {
        return new CompressedHistory(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CompressedHistory::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CompressedHistory";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Historic Data Sample.
    class HistoricSample: public RemoteData
    {
    public:
      //! Original System Id.
      uint16_t sys_id;
      //! Priority.
      int8_t priority;
      //! X offset.
      int16_t x;
      //! Y offset.
      int16_t y;
      //! Z offset.
      int16_t z;
      //! Time offset.
      int16_t t;
      //! Data Sample.
      InlineMessage<Message> sample;

      static uint16_t
      getIdStatic(void)
      {
        return 186;
      }

      HistoricSample(void);

      HistoricSample*
      clone(void) const
      {
        return new HistoricSample(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricSample::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricSample";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 11;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return sample.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Historic Data Query.
    class HistoricDataQuery: public Message
    {
    public:
      //! Request Type.
      enum RequestTypeEnum
      {
        //! Query.
        HRTYPE_QUERY = 1,
        //! Reply.
        HRTYPE_REPLY = 2,
        //! Clear.
        HRTYPE_CLEAR = 3
      };

      //! Request Id.
      uint16_t req_id;
      //! Request Type.
      uint8_t type;
      //! Maximum Size.
      uint16_t max_size;
      //! Data.
      InlineMessage<HistoricData> data;

      static uint16_t
      getIdStatic(void)
      {
        return 187;
      }

      HistoricDataQuery(void);

      HistoricDataQuery*
      clone(void) const
      {
        return new HistoricDataQuery(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HistoricDataQuery::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HistoricDataQuery";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Remote Command.
    class RemoteCommand: public RemoteData
    {
    public:
      //! Original Source.
      uint16_t original_source;
      //! Destination.
      uint16_t destination;
      //! Timeout.
      fp64_t timeout;
      //! Command.
      InlineMessage<Message> cmd;

      static uint16_t
      getIdStatic(void)
      {
        return 188;
      }

      RemoteCommand(void);

      RemoteCommand*
      clone(void) const
      {
        return new RemoteCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RemoteCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteCommand";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return cmd.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Communication Systems Query.
    class CommSystemsQuery: public Message
    {
    public:
      //! Model.
      enum ModelEnum
      {
        //! unknown.
        CIQ_UNKNOWN = 0x00,
        //! 3DR.
        CIQ_M3DR = 0x01,
        //! RDFXXXxPtP.
        CIQ_RDFXXXXPTP = 0x02
      };

      //! Type.
      enum TypeBits
      {
        //! Query Systems.
        CIQ_QUERY = 0x01,
        //! Reply.
        CIQ_REPLY = 0x02
      };

      //! Communication Interface.
      enum CommunicationInterfaceBits
      {
        //! Acoustic.
        CIQ_ACOUSTIC = 0x01,
        //! Satellite.
        CIQ_SATELLITE = 0x02,
        //! GSM.
        CIQ_GSM = 0x04,
        //! Mobile.
        CIQ_MOBILE = 0x08,
        //! Radio.
        CIQ_RADIO = 0x10
      };

      //! Type.
      uint8_t type;
      //! Communication Interface.
      uint16_t comm_interface;
      //! Model.
      uint16_t model;
      //! System List.
      std::string list;

      static uint16_t
      getIdStatic(void)
      {
        return 189;
      }

      CommSystemsQuery(void);

      CommSystemsQuery*
      clone(void) const
      {
        return new CommSystemsQuery(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CommSystemsQuery::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CommSystemsQuery";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Telemetry Message.
    class TelemetryMsg: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Tx.
        TM_TX = 0x01,
        //! Rx.
        TM_RX = 0x02,
        //! TxStatus.
        TM_TXSTATUS = 0x03
      };

      //! Code.
      enum CodeEnum
      {
        //! Code unknown.
        TM_CODE_UNK = 0x00,
        //! Code Report.
        TM_CODE_REPORT = 0x01,
        //! Code IMC.
        TM_CODE_IMC = 0x02,
        //! Code raw.
        TM_CODE_RAW = 0x03
      };

      //! Status.
      enum StatusEnum
      {
        //! Does not apply.
        TM_NONE = 0x00,
        //! Successfull transmission.
        TM_DONE = 1,
        //! Error while trying to transmit message.
        TM_FAILED = 2,
        //! Message has been queued for transmission.
        TM_QUEUED = 3,
        //! Message is currently being transmitted.
        TM_TRANSMIT = 4,
        //! Message's TTL has expired. Transmition cancelled.
        TM_EXPIRED = 5,
        //! No more messages to be transmitted or received.
        TM_EMPTY = 6,
        //! Invalid address.
        TM_INV_ADDR = 7,
        //! Invalid transmission size.
        TM_INV_SIZE = 8
      };

      //! Acknowledge.
      enum AcknowledgeBits
      {
        //! Not acknowledge.
        TM_NAK = 0x00,
        //! acknowledge.
        TM_AK = 0x01
      };

      //! Type.
      uint8_t type;
      //! Request Identifier.
      uint32_t req_id;
      //! Time to live.
      uint16_t ttl;
      //! Code.
      uint8_t code;
      //! Destination Identifier.
      std::string destination;
      //! Source Identifier.
      std::string source;
      //! Acknowledge.
      uint8_t acknowledge;
      //! Status.
      uint8_t status;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 190;
      }

      TelemetryMsg(void);

      TelemetryMsg*
      clone(void) const
      {
        return new TelemetryMsg(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TelemetryMsg::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TelemetryMsg";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(source) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Range.
    class LblRange: public Message
    {
    public:
      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;

      static uint16_t
      getIdStatic(void)
      {
        return 200;
      }

      LblRange(void);

      LblRange*
      clone(void) const
      {
        return new LblRange(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LblRange::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblRange";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Beacon Configuration.
    class LblBeacon: public Message
    {
    public:
      //! Beacon Name.
      std::string beacon;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Interrogation channel.
      uint8_t query_channel;
      //! Reply channel.
      uint8_t reply_channel;
      //! Transponder delay.
      uint8_t transponder_delay;

      static uint16_t
      getIdStatic(void)
      {
        return 202;
      }

      LblBeacon(void);

      LblBeacon*
      clone(void) const
      {
        return new LblBeacon(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LblBeacon::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblBeacon";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(beacon);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Configuration.
    class LblConfig: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Set LBL Configuration.
        OP_SET_CFG = 0,
        //! Retrieve LBL Configuration.
        OP_GET_CFG = 1,
        //! Reply to a GET command.
        OP_CUR_CFG = 2
      };

      //! Operation.
      uint8_t op;
      //! Beacons.
      MessageList<LblBeacon> beacons;

      static uint16_t
      getIdStatic(void)
      {
        return 203;
      }

      LblConfig(void);

      LblConfig*
      clone(void) const
      {
        return new LblConfig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LblConfig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblConfig";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return beacons.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Message.
    class AcousticMessage: public Message
    {
    public:
      //! Message to send.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic(void)
      {
        return 206;
      }

      AcousticMessage(void);

      AcousticMessage*
      clone(void) const
      {
        return new AcousticMessage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticMessage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticMessage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Simulated Acoustic Message.
    class SimAcousticMessage: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Acknowledgement.
        SAM_ACK = 0x01,
        //! Delayed.
        SAM_DELAYED = 0x02,
        //! Reply.
        SAM_REPLY = 0x03
      };

      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Sentence.
      std::string sentence;
      //! Transmission Time.
      fp64_t txtime;
      //! Modem Type.
      std::string modem_type;
      //! Source system.
      std::string sys_src;
      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 207;
      }

      SimAcousticMessage(void);

      SimAcousticMessage*
      clone(void) const
      {
        return new SimAcousticMessage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SimAcousticMessage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SimAcousticMessage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 31;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sentence) + IMC::getSerializationSize(modem_type) + IMC::getSerializationSize(sys_src) + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Operation.
    class AcousticOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Abort.
        AOP_ABORT = 0,
        //! Abort in Progress.
        AOP_ABORT_IP = 1,
        //! Abort Timeout.
        AOP_ABORT_TIMEOUT = 2,
        //! Abort Acknowledged.
        AOP_ABORT_ACKED = 3,
        //! Range Request.
        AOP_RANGE = 4,
        //! Range in Progress.
        AOP_RANGE_IP = 5,
        //! Range Timeout.
        AOP_RANGE_TIMEOUT = 6,
        //! Range Received.
        AOP_RANGE_RECVED = 7,
        //! Modem is Busy.
        AOP_BUSY = 8,
        //! Unsupported operation.
        AOP_UNSUPPORTED = 9,
        //! Transducer Not Detected.
        AOP_NO_TXD = 10,
        //! Send Message.
        AOP_MSG = 11,
        //! Message Send -- Queued.
        AOP_MSG_QUEUED = 12,
        //! Message Send -- In progress.
        AOP_MSG_IP = 13,
        //! Message Send -- Done.
        AOP_MSG_DONE = 14,
        //! Message Send -- Failure.
        AOP_MSG_FAILURE = 15,
        //! Send Short Message.
        AOP_MSG_SHORT = 16,
        //! Initiate Reverse Range.
        AOP_REVERSE_RANGE = 17,
        //! Forced Abort.
        AOP_FORCED_ABORT = 18
      };

      //! Operation.
      uint8_t op;
      //! System.
      std::string system;
      //! Range.
      fp32_t range;
      //! Message To Send.
      InlineMessage<Message> msg;

      static uint16_t
      getIdStatic(void)
      {
        return 211;
      }

      AcousticOperation(void);

      AcousticOperation*
      clone(void) const
      {
        return new AcousticOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticOperation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(system) + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Systems Query.
    class AcousticSystemsQuery: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 212;
      }

      AcousticSystemsQuery(void);

      AcousticSystemsQuery*
      clone(void) const
      {
        return new AcousticSystemsQuery(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticSystemsQuery::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticSystemsQuery";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Acoustic Systems.
    class AcousticSystems: public Message
    {
    public:
      //! System List.
      std::string list;

      static uint16_t
      getIdStatic(void)
      {
        return 213;
      }

      AcousticSystems(void);

      AcousticSystems*
      clone(void) const
      {
        return new AcousticSystems(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticSystems::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticSystems";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Link Quality.
    class AcousticLink: public Message
    {
    public:
      //! Peer Name.
      std::string peer;
      //! Received Signal Strength Indicator.
      fp32_t rssi;
      //! Signal Integrity Level.
      uint16_t integrity;

      static uint16_t
      getIdStatic(void)
      {
        return 214;
      }

      AcousticLink(void);

      AcousticLink*
      clone(void) const
      {
        return new AcousticLink(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticLink::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticLink";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(peer);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Transmission Request.
    class AcousticRequest: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Abort.
        TYPE_ABORT = 0,
        //! Range.
        TYPE_RANGE = 1,
        //! Reverse Range.
        TYPE_REVERSE_RANGE = 2,
        //! Message.
        TYPE_MSG = 3,
        //! Raw.
        TYPE_RAW = 4
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Destination System.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! Range.
      fp32_t range;
      //! Type.
      uint8_t type;
      //! Message To Send.
      InlineMessage<Message> msg;

      static uint16_t
      getIdStatic(void)
      {
        return 215;
      }

      AcousticRequest(void);

      AcousticRequest*
      clone(void) const
      {
        return new AcousticRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticRequest";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 15;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Transmission Status.
    class AcousticStatus: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Abort.
        TYPE_ABORT = 0,
        //! Range.
        TYPE_RANGE = 1,
        //! Reverse Range.
        TYPE_REVERSE_RANGE = 2,
        //! Message.
        TYPE_MSG = 3,
        //! Raw.
        TYPE_RAW = 4
      };

      //! Status.
      enum StatusEnum
      {
        //! Queued.
        STATUS_QUEUED = 0,
        //! In Progress.
        STATUS_IN_PROGRESS = 1,
        //! Sent.
        STATUS_SENT = 2,
        //! Range Received.
        STATUS_RANGE_RECEIVED = 3,
        //! Delivered.
        STATUS_DELIVERED = 4,
        //! Busy.
        STATUS_BUSY = 100,
        //! Input Error.
        STATUS_INPUT_FAILURE = 101,
        //! Error trying to send acoustic text.
        STATUS_ERROR = 102,
        //! Message Type is not defined or is unsupported.
        STATUS_UNSUPPORTED = 666
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Type.
      uint8_t type;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;
      //! Range.
      fp32_t range;

      static uint16_t
      getIdStatic(void)
      {
        return 216;
      }

      AcousticStatus(void);

      AcousticStatus*
      clone(void) const
      {
        return new AcousticStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Release Request.
    class AcousticRelease: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Open.
        AROP_OPEN = 0,
        //! Close.
        AROP_CLOSE = 1
      };

      //! System.
      std::string system;
      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 217;
      }

      AcousticRelease(void);

      AcousticRelease*
      clone(void) const
      {
        return new AcousticRelease(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticRelease::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticRelease";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(system);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Revolutions Per Minute.
    class Rpm: public Message
    {
    public:
      //! Value.
      int16_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 250;
      }

      Rpm(void);

      Rpm*
      clone(void) const
      {
        return new Rpm(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Rpm::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Rpm";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Voltage.
    class Voltage: public Message
    {
    public:
      //! Measured Voltage Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 251;
      }

      Voltage(void);

      Voltage*
      clone(void) const
      {
        return new Voltage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Voltage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Voltage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Current.
    class Current: public Message
    {
    public:
      //! Measured Current Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 252;
      }

      Current(void);

      Current*
      clone(void) const
      {
        return new Current(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Current::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Current";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Fix.
    class GpsFix: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Stand Alone.
        GFT_STANDALONE = 0x00,
        //! Differential.
        GFT_DIFFERENTIAL = 0x01,
        //! Dead Reckoning.
        GFT_DEAD_RECKONING = 0x02,
        //! Manual Input.
        GFT_MANUAL_INPUT = 0x03,
        //! Simulation.
        GFT_SIMULATION = 0x04
      };

      //! Validity.
      enum ValidityBits
      {
        //! Valid Date.
        GFV_VALID_DATE = 0x0001,
        //! Valid Time.
        GFV_VALID_TIME = 0x0002,
        //! Valid Position.
        GFV_VALID_POS = 0x0004,
        //! Valid Course Over Ground.
        GFV_VALID_COG = 0x0008,
        //! Valid Speed Over Ground.
        GFV_VALID_SOG = 0x0010,
        //! Valid Horizontal Accuracy Estimate.
        GFV_VALID_HACC = 0x0020,
        //! Valid Vertical Accuracy Estimate.
        GFV_VALID_VACC = 0x0040,
        //! Valid Horizontal Dilution of Precision.
        GFV_VALID_HDOP = 0x0080,
        //! Valid Vertical Dilution of Precision.
        GFV_VALID_VDOP = 0x0100
      };

      //! Validity.
      uint16_t validity;
      //! Type.
      uint8_t type;
      //! UTC Year.
      uint16_t utc_year;
      //! UTC Month.
      uint8_t utc_month;
      //! UTC Day.
      uint8_t utc_day;
      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height above WGS-84 ellipsoid.
      fp32_t height;
      //! Number of Satellites.
      uint8_t satellites;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;
      //! Horizontal Dilution of Precision.
      fp32_t hdop;
      //! Vertical Dilution of Precision.
      fp32_t vdop;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;

      static uint16_t
      getIdStatic(void)
      {
        return 253;
      }

      GpsFix(void);

      GpsFix*
      clone(void) const
      {
        return new GpsFix(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpsFix::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsFix";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Euler Angles.
    class EulerAngles: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! Roll Angle.
      fp64_t phi;
      //! Pitch Angle.
      fp64_t theta;
      //! Yaw Angle (True).
      fp64_t psi;
      //! Yaw Angle (Magnetic).
      fp64_t psi_magnetic;

      static uint16_t
      getIdStatic(void)
      {
        return 254;
      }

      EulerAngles(void);

      EulerAngles*
      clone(void) const
      {
        return new EulerAngles(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EulerAngles::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EulerAngles";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 40;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Euler Angles Delta.
    class EulerAnglesDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic(void)
      {
        return 255;
      }

      EulerAnglesDelta(void);

      EulerAnglesDelta*
      clone(void) const
      {
        return new EulerAnglesDelta(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EulerAnglesDelta::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EulerAnglesDelta";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Angular Velocity.
    class AngularVelocity: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 256;
      }

      AngularVelocity(void);

      AngularVelocity*
      clone(void) const
      {
        return new AngularVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AngularVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AngularVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acceleration.
    class Acceleration: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 257;
      }

      Acceleration(void);

      Acceleration*
      clone(void) const
      {
        return new Acceleration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Acceleration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Acceleration";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Magnetic Field.
    class MagneticField: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 258;
      }

      MagneticField(void);

      MagneticField*
      clone(void) const
      {
        return new MagneticField(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MagneticField::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MagneticField";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Ground Velocity.
    class GroundVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 259;
      }

      GroundVelocity(void);

      GroundVelocity*
      clone(void) const
      {
        return new GroundVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GroundVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroundVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 25;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Water Velocity.
    class WaterVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 260;
      }

      WaterVelocity(void);

      WaterVelocity*
      clone(void) const
      {
        return new WaterVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return WaterVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WaterVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 25;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Velocity Delta.
    class VelocityDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 261;
      }

      VelocityDelta(void);

      VelocityDelta*
      clone(void) const
      {
        return new VelocityDelta(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VelocityDelta::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VelocityDelta";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device State.
    class DeviceState: public Message
    {
    public:
      //! Device Position - X.
      fp32_t x;
      //! Device Position - Y.
      fp32_t y;
      //! Device Position - Z.
      fp32_t z;
      //! Device Rotation - X.
      fp32_t phi;
      //! Device Rotation - Y.
      fp32_t theta;
      //! Device Rotation - Z.
      fp32_t psi;

      static uint16_t
      getIdStatic(void)
      {
        return 282;
      }

      DeviceState(void);

      DeviceState*
      clone(void) const
      {
        return new DeviceState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DeviceState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DeviceState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Beam Configuration.
    class BeamConfig: public Message
    {
    public:
      //! Beam Width.
      fp32_t beam_width;
      //! Beam Height.
      fp32_t beam_height;

      static uint16_t
      getIdStatic(void)
      {
        return 283;
      }

      BeamConfig(void);

      BeamConfig*
      clone(void) const
      {
        return new BeamConfig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return BeamConfig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "BeamConfig";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Distance.
    class Distance: public Message
    {
    public:
      //! Validity.
      enum ValidityEnum
      {
        //! Invalid.
        DV_INVALID = 0,
        //! Valid.
        DV_VALID = 1
      };

      //! Validity.
      uint8_t validity;
      //! Location.
      MessageList<DeviceState> location;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Measured Distance.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 262;
      }

      Distance(void);

      Distance*
      clone(void) const
      {
        return new Distance(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Distance::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Distance";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return location.getSerializationSize() + beam_config.getSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Temperature.
    class Temperature: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! Measured Temperature.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 263;
      }

      Temperature(void);

      Temperature*
      clone(void) const
      {
        return new Temperature(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Temperature::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Temperature";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Pressure.
    class Pressure: public Message
    {
    public:
      //! Measured Pressure.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 264;
      }

      Pressure(void);

      Pressure*
      clone(void) const
      {
        return new Pressure(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Pressure::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Pressure";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Depth.
    class Depth: public Message
    {
    public:
      //! Measured Depth.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 265;
      }

      Depth(void);

      Depth*
      clone(void) const
      {
        return new Depth(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Depth::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Depth";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Depth Offset.
    class DepthOffset: public Message
    {
    public:
      //! Measured Offset.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 266;
      }

      DepthOffset(void);

      DepthOffset*
      clone(void) const
      {
        return new DepthOffset(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DepthOffset::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DepthOffset";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Sound Speed.
    class SoundSpeed: public Message
    {
    public:
      //! Computed Sound Speed.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 267;
      }

      SoundSpeed(void);

      SoundSpeed*
      clone(void) const
      {
        return new SoundSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SoundSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoundSpeed";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Water Density.
    class WaterDensity: public Message
    {
    public:
      //! Computed Water Density.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 268;
      }

      WaterDensity(void);

      WaterDensity*
      clone(void) const
      {
        return new WaterDensity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return WaterDensity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WaterDensity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Conductivity.
    class Conductivity: public Message
    {
    public:
      //! Measured Conductivity.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 269;
      }

      Conductivity(void);

      Conductivity*
      clone(void) const
      {
        return new Conductivity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Conductivity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Conductivity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Salinity.
    class Salinity: public Message
    {
    public:
      //! Measured Salinity.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 270;
      }

      Salinity(void);

      Salinity*
      clone(void) const
      {
        return new Salinity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Salinity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Salinity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Wind Speed.
    class WindSpeed: public Message
    {
    public:
      //! Direction.
      fp32_t direction;
      //! Speed.
      fp32_t speed;
      //! Turbulence.
      fp32_t turbulence;

      static uint16_t
      getIdStatic(void)
      {
        return 271;
      }

      WindSpeed(void);

      WindSpeed*
      clone(void) const
      {
        return new WindSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return WindSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WindSpeed";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Relative Humidity.
    class RelativeHumidity: public Message
    {
    public:
      //! Relative Humidity Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 272;
      }

      RelativeHumidity(void);

      RelativeHumidity*
      clone(void) const
      {
        return new RelativeHumidity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RelativeHumidity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelativeHumidity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Data (Text).
    class DevDataText: public Message
    {
    public:
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic(void)
      {
        return 273;
      }

      DevDataText(void);

      DevDataText*
      clone(void) const
      {
        return new DevDataText(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DevDataText::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevDataText";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Data (Binary).
    class DevDataBinary: public Message
    {
    public:
      //! Value.
      std::vector<char> value;

      static uint16_t
      getIdStatic(void)
      {
        return 274;
      }

      DevDataBinary(void);

      DevDataBinary*
      clone(void) const
      {
        return new DevDataBinary(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DevDataBinary::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevDataBinary";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Force.
    class Force: public Message
    {
    public:
      //! Measured Force.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 275;
      }

      Force(void);

      Force*
      clone(void) const
      {
        return new Force(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Force::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Force";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Sonar Data.
    class SonarData: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Sidescan.
        ST_SIDESCAN = 0,
        //! Echo Sounder.
        ST_ECHOSOUNDER = 1,
        //! Multibeam.
        ST_MULTIBEAM = 2
      };

      //! Type.
      uint8_t type;
      //! Frequency.
      uint32_t frequency;
      //! Minimum Range.
      uint16_t min_range;
      //! Maximum Range.
      uint16_t max_range;
      //! Bits Per Data Point.
      uint8_t bits_per_point;
      //! Scaling Factor.
      fp32_t scale_factor;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 276;
      }

      SonarData(void);

      SonarData*
      clone(void) const
      {
        return new SonarData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SonarData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SonarData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return beam_config.getSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Pulse.
    class Pulse: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 277;
      }

      Pulse(void);

      Pulse*
      clone(void) const
      {
        return new Pulse(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Pulse::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Pulse";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Pulse Detection Control.
    class PulseDetectionControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Pulse Detection OFF.
        POP_OFF = 0,
        //! Pulse Detection ON.
        POP_ON = 1
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 278;
      }

      PulseDetectionControl(void);

      PulseDetectionControl*
      clone(void) const
      {
        return new PulseDetectionControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PulseDetectionControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PulseDetectionControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fuel Level.
    class FuelLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! Confidence Level.
      fp32_t confidence;
      //! Operation Modes.
      std::string opmodes;

      static uint16_t
      getIdStatic(void)
      {
        return 279;
      }

      FuelLevel(void);

      FuelLevel*
      clone(void) const
      {
        return new FuelLevel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FuelLevel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FuelLevel";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(opmodes);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Navigation Data.
    class GpsNavData: public Message
    {
    public:
      //! GPS Millisecond Time of Week.
      uint32_t itow;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Height above ellipsoid.
      fp32_t height_ell;
      //! Height above sea level.
      fp32_t height_sea;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;
      //! NED North Velocity.
      fp32_t vel_n;
      //! NED East Velocity.
      fp32_t vel_e;
      //! NED Down Velocity.
      fp32_t vel_d;
      //! Speed (3D).
      fp32_t speed;
      //! Ground Speed (2D).
      fp32_t gspeed;
      //! Heading (2D).
      fp32_t heading;
      //! Speed Accuracy Estimate.
      fp32_t sacc;
      //! Course / Heading Accuracy Estimate.
      fp32_t cacc;

      static uint16_t
      getIdStatic(void)
      {
        return 280;
      }

      GpsNavData(void);

      GpsNavData*
      clone(void) const
      {
        return new GpsNavData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpsNavData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsNavData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 68;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Servo Position.
    class ServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 281;
      }

      ServoPosition(void);

      ServoPosition*
      clone(void) const
      {
        return new ServoPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ServoPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ServoPosition";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Data Sanity.
    class DataSanity: public Message
    {
    public:
      //! Sanity.
      enum SanityEnum
      {
        //! Sane.
        DS_SANE = 0,
        //! Not Sane.
        DS_NOT_SANE = 1
      };

      //! Sanity.
      uint8_t sane;

      static uint16_t
      getIdStatic(void)
      {
        return 284;
      }

      DataSanity(void);

      DataSanity*
      clone(void) const
      {
        return new DataSanity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DataSanity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DataSanity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Rhodamine Dye.
    class RhodamineDye: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 285;
      }

      RhodamineDye(void);

      RhodamineDye*
      clone(void) const
      {
        return new RhodamineDye(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RhodamineDye::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RhodamineDye";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Crude Oil.
    class CrudeOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 286;
      }

      CrudeOil(void);

      CrudeOil*
      clone(void) const
      {
        return new CrudeOil(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CrudeOil::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CrudeOil";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fine Oil.
    class FineOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 287;
      }

      FineOil(void);

      FineOil*
      clone(void) const
      {
        return new FineOil(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FineOil::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FineOil";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Turbidity.
    class Turbidity: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 288;
      }

      Turbidity(void);

      Turbidity*
      clone(void) const
      {
        return new Turbidity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Turbidity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Turbidity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Chlorophyll.
    class Chlorophyll: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 289;
      }

      Chlorophyll(void);

      Chlorophyll*
      clone(void) const
      {
        return new Chlorophyll(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Chlorophyll::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Chlorophyll";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fluorescein.
    class Fluorescein: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 290;
      }

      Fluorescein(void);

      Fluorescein*
      clone(void) const
      {
        return new Fluorescein(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Fluorescein::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Fluorescein";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Phycocyanin.
    class Phycocyanin: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 291;
      }

      Phycocyanin(void);

      Phycocyanin*
      clone(void) const
      {
        return new Phycocyanin(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Phycocyanin::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Phycocyanin";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Phycoerythrin.
    class Phycoerythrin: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 292;
      }

      Phycoerythrin(void);

      Phycoerythrin*
      clone(void) const
      {
        return new Phycoerythrin(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Phycoerythrin::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Phycoerythrin";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Fix RTK.
    class GpsFixRtk: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! None.
        RTK_NONE = 0x00,
        //! Obs.
        RTK_OBS = 0x01,
        //! Float.
        RTK_FLOAT = 0x02,
        //! Fixed.
        RTK_FIXED = 0x03
      };

      //! Validity.
      enum ValidityBits
      {
        //! Valid Time.
        RFV_VALID_TIME = 0x0001,
        //! Valid Base LLH.
        RFV_VALID_BASE = 0x0002,
        //! Valid Position.
        RFV_VALID_POS = 0x0004,
        //! Valid Velocity.
        RFV_VALID_VEL = 0x0008
      };

      //! Validity.
      uint16_t validity;
      //! Type.
      uint8_t type;
      //! GPS Time of Week.
      uint32_t tow;
      //! Base Latitude WGS-84.
      fp64_t base_lat;
      //! Base Longitude WGS-84.
      fp64_t base_lon;
      //! Base Height above WGS-84 ellipsoid.
      fp32_t base_height;
      //! Position North.
      fp32_t n;
      //! Position East.
      fp32_t e;
      //! Position Down.
      fp32_t d;
      //! Velocity North.
      fp32_t v_n;
      //! Velocity East.
      fp32_t v_e;
      //! Velocity Down.
      fp32_t v_d;
      //! Number of Satellites.
      uint8_t satellites;
      //! IAR Hypotheses.
      uint16_t iar_hyp;
      //! IAR Ratio.
      fp32_t iar_ratio;

      static uint16_t
      getIdStatic(void)
      {
        return 293;
      }

      GpsFixRtk(void);

      GpsFixRtk*
      clone(void) const
      {
        return new GpsFixRtk(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpsFixRtk::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsFixRtk";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 58;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Estimated State.
    class EstimatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Velocity.
      fp32_t u;
      //! Body-Fixed yy Velocity.
      fp32_t v;
      //! Body-Fixed zz Velocity.
      fp32_t w;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic(void)
      {
        return 350;
      }

      EstimatedState(void);

      EstimatedState*
      clone(void) const
      {
        return new EstimatedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EstimatedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EstimatedState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 88;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! External Navigation Data.
    class ExternalNavData: public Message
    {
    public:
      //! Nav Data Type.
      enum NavDataTypeEnum
      {
        //! Full State.
        EXTNAV_FULL = 0,
        //! Attitude Heading Reference System Only.
        EXTNAV_AHRS = 1,
        //! Position Reference System only.
        EXTNAV_POSREF = 2
      };

      //! Estimated State.
      InlineMessage<EstimatedState> state;
      //! Nav Data Type.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 294;
      }

      ExternalNavData(void);

      ExternalNavData*
      clone(void) const
      {
        return new ExternalNavData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ExternalNavData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ExternalNavData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return state.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Dissolved Oxygen.
    class DissolvedOxygen: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 295;
      }

      DissolvedOxygen(void);

      DissolvedOxygen*
      clone(void) const
      {
        return new DissolvedOxygen(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DissolvedOxygen::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DissolvedOxygen";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Air Saturation.
    class AirSaturation: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 296;
      }

      AirSaturation(void);

      AirSaturation*
      clone(void) const
      {
        return new AirSaturation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AirSaturation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AirSaturation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Throttle.
    class Throttle: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 297;
      }

      Throttle(void);

      Throttle*
      clone(void) const
      {
        return new Throttle(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Throttle::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Throttle";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! pH.
    class PH: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 298;
      }

      PH(void);

      PH*
      clone(void) const
      {
        return new PH(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PH::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PH";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Redox Potential.
    class Redox: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 299;
      }

      Redox(void);

      Redox*
      clone(void) const
      {
        return new Redox(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Redox::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Redox";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Camera Zoom.
    class CameraZoom: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Reset Zoom.
        ACTION_ZOOM_RESET = 0,
        //! Zoom In.
        ACTION_ZOOM_IN = 1,
        //! Zoom Out.
        ACTION_ZOOM_OUT = 2,
        //! Stop Zooming.
        ACTION_ZOOM_STOP = 3
      };

      //! Camera Number.
      uint8_t id;
      //! Absolute Zoom Level.
      uint8_t zoom;
      //! Action.
      uint8_t action;

      static uint16_t
      getIdStatic(void)
      {
        return 300;
      }

      CameraZoom(void);

      CameraZoom*
      clone(void) const
      {
        return new CameraZoom(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CameraZoom::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CameraZoom";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Thruster Actuation.
    class SetThrusterActuation: public Message
    {
    public:
      //! Thruster Number.
      uint8_t id;
      //! Actuation Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 301;
      }

      SetThrusterActuation(void);

      SetThrusterActuation*
      clone(void) const
      {
        return new SetThrusterActuation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetThrusterActuation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetThrusterActuation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Servo Position.
    class SetServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 302;
      }

      SetServoPosition(void);

      SetServoPosition*
      clone(void) const
      {
        return new SetServoPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetServoPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetServoPosition";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Control Surface Deflection.
    class SetControlSurfaceDeflection: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Angle.
      fp32_t angle;

      static uint16_t
      getIdStatic(void)
      {
        return 303;
      }

      SetControlSurfaceDeflection(void);

      SetControlSurfaceDeflection*
      clone(void) const
      {
        return new SetControlSurfaceDeflection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetControlSurfaceDeflection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetControlSurfaceDeflection";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Actions Request.
    class RemoteActionsRequest: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic(void)
      {
        return 304;
      }

      RemoteActionsRequest(void);

      RemoteActionsRequest*
      clone(void) const
      {
        return new RemoteActionsRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RemoteActionsRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteActionsRequest";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Actions.
    class RemoteActions: public Message
    {
    public:
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic(void)
      {
        return 305;
      }

      RemoteActions(void);

      RemoteActions*
      clone(void) const
      {
        return new RemoteActions(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RemoteActions::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteActions";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Button Event.
    class ButtonEvent: public Message
    {
    public:
      //! Button.
      uint8_t button;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 306;
      }

      ButtonEvent(void);

      ButtonEvent*
      clone(void) const
      {
        return new ButtonEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ButtonEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ButtonEvent";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LCD Control.
    class LcdControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn off display.
        OP_TURN_OFF = 0,
        //! Turn on display.
        OP_TURN_ON = 1,
        //! Clear display.
        OP_CLEAR = 2,
        //! Write Line #0.
        OP_WRITE0 = 3,
        //! Write Line #1.
        OP_WRITE1 = 4
      };

      //! Operation.
      uint8_t op;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 307;
      }

      LcdControl(void);

      LcdControl*
      clone(void) const
      {
        return new LcdControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LcdControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LcdControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power Operation.
    class PowerOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Power Down.
        POP_PWR_DOWN = 0,
        //! Power Down in Progress.
        POP_PWR_DOWN_IP = 1,
        //! Power Down Aborted.
        POP_PWR_DOWN_ABORTED = 2,
        //! Schedule Power Down.
        POP_SCHED_PWR_DOWN = 3,
        //! Power Up.
        POP_PWR_UP = 4,
        //! Power Up in Progress.
        POP_PWR_UP_IP = 5,
        //! Schedule Power Up.
        POP_SCHED_PWR_UP = 6
      };

      //! Operation.
      uint8_t op;
      //! Time Remaining.
      fp32_t time_remain;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic(void)
      {
        return 308;
      }

      PowerOperation(void);

      PowerOperation*
      clone(void) const
      {
        return new PowerOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PowerOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerOperation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 13;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power Channel Control.
    class PowerChannelControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn Off.
        PCC_OP_TURN_OFF = 0,
        //! Turn On.
        PCC_OP_TURN_ON = 1,
        //! Toggle.
        PCC_OP_TOGGLE = 2,
        //! Schedule Turn On.
        PCC_OP_SCHED_ON = 3,
        //! Schedule Turn Off.
        PCC_OP_SCHED_OFF = 4,
        //! Reset Schedules.
        PCC_OP_SCHED_RESET = 5,
        //! Save Current State.
        PCC_OP_SAVE = 6,
        //! Restart.
        PCC_OP_RESTART = 7
      };

      //! Channel Name.
      std::string name;
      //! Operation.
      uint8_t op;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic(void)
      {
        return 309;
      }

      PowerChannelControl(void);

      PowerChannelControl*
      clone(void) const
      {
        return new PowerChannelControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PowerChannelControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerChannelControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Power Channel State.
    class QueryPowerChannelState: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 310;
      }

      QueryPowerChannelState(void);

      QueryPowerChannelState*
      clone(void) const
      {
        return new QueryPowerChannelState(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryPowerChannelState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryPowerChannelState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Power Channel State.
    class PowerChannelState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Off.
        PCS_OFF = 0,
        //! On.
        PCS_ON = 1
      };

      //! Name.
      std::string name;
      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 311;
      }

      PowerChannelState(void);

      PowerChannelState*
      clone(void) const
      {
        return new PowerChannelState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PowerChannelState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerChannelState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LED Brightness.
    class LedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 312;
      }

      LedBrightness(void);

      LedBrightness*
      clone(void) const
      {
        return new LedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LedBrightness";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query LED Brightness.
    class QueryLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 313;
      }

      QueryLedBrightness(void);

      QueryLedBrightness*
      clone(void) const
      {
        return new QueryLedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryLedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryLedBrightness";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set LED Brightness.
    class SetLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 314;
      }

      SetLedBrightness(void);

      SetLedBrightness*
      clone(void) const
      {
        return new SetLedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetLedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetLedBrightness";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set PWM.
    class SetPWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic(void)
      {
        return 315;
      }

      SetPWM(void);

      SetPWM*
      clone(void) const
      {
        return new SetPWM(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetPWM::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetPWM";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! PWM.
    class PWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic(void)
      {
        return 316;
      }

      PWM(void);

      PWM*
      clone(void) const
      {
        return new PWM(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PWM::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PWM";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Estimated Stream Velocity.
    class EstimatedStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 351;
      }

      EstimatedStreamVelocity(void);

      EstimatedStreamVelocity*
      clone(void) const
      {
        return new EstimatedStreamVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EstimatedStreamVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EstimatedStreamVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Indicated Speed.
    class IndicatedSpeed: public Message
    {
    public:
      //! Measured speed.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 352;
      }

      IndicatedSpeed(void);

      IndicatedSpeed*
      clone(void) const
      {
        return new IndicatedSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IndicatedSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IndicatedSpeed";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! True Speed.
    class TrueSpeed: public Message
    {
    public:
      //! Estimated value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 353;
      }

      TrueSpeed(void);

      TrueSpeed*
      clone(void) const
      {
        return new TrueSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrueSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrueSpeed";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Navigation Uncertainty.
    class NavigationUncertainty: public Message
    {
    public:
      //! Variance - x Position.
      fp32_t x;
      //! Variance - y Position.
      fp32_t y;
      //! Variance - z Position.
      fp32_t z;
      //! Variance - Roll.
      fp32_t phi;
      //! Variance - Pitch.
      fp32_t theta;
      //! Variance - Yaw.
      fp32_t psi;
      //! Variance - Gyro. Roll Rate.
      fp32_t p;
      //! Variance - Gyro. Pitch Rate.
      fp32_t q;
      //! Variance - Gyro. Yaw Rate.
      fp32_t r;
      //! Variance - Body-Fixed xx Velocity.
      fp32_t u;
      //! Variance - Body-Fixed yy Velocity.
      fp32_t v;
      //! Variance - Body-Fixed ww Velocity.
      fp32_t w;
      //! Variance - Yaw Bias.
      fp32_t bias_psi;
      //! Variance - Gyro. Yaw Rate Bias.
      fp32_t bias_r;

      static uint16_t
      getIdStatic(void)
      {
        return 354;
      }

      NavigationUncertainty(void);

      NavigationUncertainty*
      clone(void) const
      {
        return new NavigationUncertainty(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return NavigationUncertainty::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NavigationUncertainty";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Navigation Data.
    class NavigationData: public Message
    {
    public:
      //! Yaw Bias.
      fp32_t bias_psi;
      //! Gyro. Yaw Rate Bias.
      fp32_t bias_r;
      //! Course Over Ground.
      fp32_t cog;
      //! Continuous Yaw.
      fp32_t cyaw;
      //! GPS Rejection Filter Level.
      fp32_t lbl_rej_level;
      //! LBL Rejection Filter Level.
      fp32_t gps_rej_level;
      //! Variance - Custom Variable X.
      fp32_t custom_x;
      //! Variance - Custom Variable Y.
      fp32_t custom_y;
      //! Variance - Custom Variable Z.
      fp32_t custom_z;

      static uint16_t
      getIdStatic(void)
      {
        return 355;
      }

      NavigationData(void);

      NavigationData*
      clone(void) const
      {
        return new NavigationData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return NavigationData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NavigationData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Fix Rejection.
    class GpsFixRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Above Threshold.
        RR_ABOVE_THRESHOLD = 0,
        //! Invalid Fix.
        RR_INVALID = 1,
        //! Above Maximum HDOP.
        RR_ABOVE_MAX_HDOP = 2,
        //! Above Maximum HACC.
        RR_ABOVE_MAX_HACC = 3,
        //! Lost Validity Bit.
        RR_LOST_VAL_BIT = 4
      };

      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Reason.
      uint8_t reason;

      static uint16_t
      getIdStatic(void)
      {
        return 356;
      }

      GpsFixRejection(void);

      GpsFixRejection*
      clone(void) const
      {
        return new GpsFixRejection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpsFixRejection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsFixRejection";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Range Acceptance.
    class LblRangeAcceptance: public Message
    {
    public:
      //! Acceptance.
      enum AcceptanceEnum
      {
        //! Accepted.
        RR_ACCEPTED = 0,
        //! Rejected - Above Threshold.
        RR_ABOVE_THRESHOLD = 1,
        //! Rejected - Singular Point.
        RR_SINGULAR = 2,
        //! Rejected - Not Enough Information.
        RR_NO_INFO = 3,
        //! Rejected - Vehicle At Surface.
        RR_AT_SURFACE = 4
      };

      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;
      //! Acceptance.
      uint8_t acceptance;

      static uint16_t
      getIdStatic(void)
      {
        return 357;
      }

      LblRangeAcceptance(void);

      LblRangeAcceptance*
      clone(void) const
      {
        return new LblRangeAcceptance(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LblRangeAcceptance::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblRangeAcceptance";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! DVL Rejection.
    class DvlRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Innovation Threshold - X.
        RR_INNOV_THRESHOLD_X = 0,
        //! Innovation Threshold - Y.
        RR_INNOV_THRESHOLD_Y = 1,
        //! Absolute Threshold - X.
        RR_ABS_THRESHOLD_X = 2,
        //! Absolute Threshold - Y.
        RR_ABS_THRESHOLD_Y = 3
      };

      //! Type of velocity.
      enum TypeofvelocityBits
      {
        //! Ground velocity.
        TYPE_GV = 0x01,
        //! Water velocity.
        TYPE_WV = 0x02
      };

      //! Type of velocity.
      uint8_t type;
      //! Reason.
      uint8_t reason;
      //! Value.
      fp32_t value;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic(void)
      {
        return 358;
      }

      DvlRejection(void);

      DvlRejection*
      clone(void) const
      {
        return new DvlRejection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DvlRejection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DvlRejection";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Beacon Position Estimate.
    class LblEstimate: public Message
    {
    public:
      //! LBL Beacon Configuration.
      InlineMessage<LblBeacon> beacon;
      //! North position.
      fp32_t x;
      //! East position.
      fp32_t y;
      //! North position variance.
      fp32_t var_x;
      //! East position variance.
      fp32_t var_y;
      //! Distance.
      fp32_t distance;

      static uint16_t
      getIdStatic(void)
      {
        return 360;
      }

      LblEstimate(void);

      LblEstimate*
      clone(void) const
      {
        return new LblEstimate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LblEstimate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblEstimate";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 20;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return beacon.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Alignment State.
    class AlignmentState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Aligned.
        AS_NOT_ALIGNED = 0,
        //! Aligned.
        AS_ALIGNED = 1,
        //! Not Supported.
        AS_NOT_SUPPORTED = 2,
        //! Aligning.
        AS_ALIGNING = 3,
        //! Wrong Medium.
        AS_WRONG_MEDIUM = 4,
        //! Coarse Alignment.
        AS_COARSE_ALIGNMENT = 5,
        //! Fine Alignment.
        AS_FINE_ALIGNMENT = 6,
        //! System Ready.
        AS_SYSTEM_READY = 7
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 361;
      }

      AlignmentState(void);

      AlignmentState*
      clone(void) const
      {
        return new AlignmentState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AlignmentState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AlignmentState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GroupStreamVelocity.
    class GroupStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 362;
      }

      GroupStreamVelocity(void);

      GroupStreamVelocity*
      clone(void) const
      {
        return new GroupStreamVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GroupStreamVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroupStreamVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Airflow.
    class Airflow: public Message
    {
    public:
      //! Airspeed.
      fp32_t va;
      //! Angle of attack.
      fp32_t aoa;
      //! Sideslip angle.
      fp32_t ssa;

      static uint16_t
      getIdStatic(void)
      {
        return 363;
      }

      Airflow(void);

      Airflow*
      clone(void) const
      {
        return new Airflow(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Airflow::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Airflow";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Heading.
    class DesiredHeading: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;
      //! Offset.
      fp32_t off;

      static uint16_t
      getIdStatic(void)
      {
        return 400;
      }

      DesiredHeading(void);

      DesiredHeading*
      clone(void) const
      {
        return new DesiredHeading(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredHeading::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredHeading";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Z.
    class DesiredZ: public ControlCommand
    {
    public:
      //! Value.
      fp32_t value;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic(void)
      {
        return 401;
      }

      DesiredZ(void);

      DesiredZ*
      clone(void) const
      {
        return new DesiredZ(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredZ::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredZ";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Speed.
    class DesiredSpeed: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;
      //! Speed Units.
      uint8_t speed_units;

      static uint16_t
      getIdStatic(void)
      {
        return 402;
      }

      DesiredSpeed(void);

      DesiredSpeed*
      clone(void) const
      {
        return new DesiredSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredSpeed";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Roll.
    class DesiredRoll: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 403;
      }

      DesiredRoll(void);

      DesiredRoll*
      clone(void) const
      {
        return new DesiredRoll(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredRoll::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredRoll";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Pitch.
    class DesiredPitch: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 404;
      }

      DesiredPitch(void);

      DesiredPitch*
      clone(void) const
      {
        return new DesiredPitch(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredPitch::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredPitch";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Vertical Rate.
    class DesiredVerticalRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 405;
      }

      DesiredVerticalRate(void);

      DesiredVerticalRate*
      clone(void) const
      {
        return new DesiredVerticalRate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredVerticalRate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredVerticalRate";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Path.
    class DesiredPath: public ControlCommand
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start Point.
        FL_START = 0x01,
        //! Direct.
        FL_DIRECT = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10,
        //! Loiter from current position.
        FL_LOITER_CURR = 0x20,
        //! Takeoff.
        FL_TAKEOFF = 0x40,
        //! Land.
        FL_LAND = 0x80
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- WGS84 Latitude.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 406;
      }

      DesiredPath(void);

      DesiredPath*
      clone(void) const
      {
        return new DesiredPath(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredPath::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredPath";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Control.
    class DesiredControl: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of X is meaningful.
        FL_X = 0x01,
        //! Value of Y is meaningful.
        FL_Y = 0x02,
        //! Value of Z is meaningful.
        FL_Z = 0x04,
        //! Value of K is meaningful.
        FL_K = 0x08,
        //! Value of M is meaningful.
        FL_M = 0x10,
        //! Value of N is meaningful.
        FL_N = 0x20
      };

      //! Force along the x axis.
      fp64_t x;
      //! Force along the y axis.
      fp64_t y;
      //! Force along the z axis.
      fp64_t z;
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the z axis.
      fp64_t n;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 407;
      }

      DesiredControl(void);

      DesiredControl*
      clone(void) const
      {
        return new DesiredControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 49;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Heading Rate.
    class DesiredHeadingRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 408;
      }

      DesiredHeadingRate(void);

      DesiredHeadingRate*
      clone(void) const
      {
        return new DesiredHeadingRate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredHeadingRate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredHeadingRate";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Velocity.
    class DesiredVelocity: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of u is meaningful.
        FL_SURGE = 0x01,
        //! Value of v is meaningful.
        FL_SWAY = 0x02,
        //! Value of w is meaningful.
        FL_HEAVE = 0x04,
        //! Value of p is meaningful.
        FL_ROLL = 0x08,
        //! Value of q is meaningful.
        FL_PITCH = 0x10,
        //! Value of r is meaningful.
        FL_YAW = 0x20
      };

      //! Desired Linear Speed in xx.
      fp64_t u;
      //! Desired Linear Speed in yy.
      fp64_t v;
      //! Desired Linear Speed in zz.
      fp64_t w;
      //! Desired Angular Speed in xx.
      fp64_t p;
      //! Desired Angular Speed in yy.
      fp64_t q;
      //! Desired Angular Speed in zz.
      fp64_t r;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 409;
      }

      DesiredVelocity(void);

      DesiredVelocity*
      clone(void) const
      {
        return new DesiredVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 49;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Path Control State.
    class PathControlState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Near Endpoint.
        FL_NEAR = 0x01,
        //! Loitering.
        FL_LOITERING = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Latitude WGS-84.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;
      //! Along Track Position.
      fp32_t x;
      //! Cross Track Position.
      fp32_t y;
      //! Vertical Track Position.
      fp32_t z;
      //! Along Track Velocity.
      fp32_t vx;
      //! Cross Track Velocity.
      fp32_t vy;
      //! Vertical Track Velocity.
      fp32_t vz;
      //! Course Error.
      fp32_t course_error;
      //! Estimated Time to Arrival (ETA).
      uint16_t eta;

      static uint16_t
      getIdStatic(void)
      {
        return 410;
      }

      PathControlState(void);

      PathControlState*
      clone(void) const
      {
        return new PathControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PathControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PathControlState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 81;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Allocated Control Torques.
    class AllocatedControlTorques: public Message
    {
    public:
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the x axis.
      fp64_t n;

      static uint16_t
      getIdStatic(void)
      {
        return 411;
      }

      AllocatedControlTorques(void);

      AllocatedControlTorques*
      clone(void) const
      {
        return new AllocatedControlTorques(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AllocatedControlTorques::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AllocatedControlTorques";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Parcel.
    class ControlParcel: public Message
    {
    public:
      //! Proportional Parcel.
      fp32_t p;
      //! Integrative Parcel.
      fp32_t i;
      //! Derivative Parcel.
      fp32_t d;
      //! Anti-Windup Parcel.
      fp32_t a;

      static uint16_t
      getIdStatic(void)
      {
        return 412;
      }

      ControlParcel(void);

      ControlParcel*
      clone(void) const
      {
        return new ControlParcel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ControlParcel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ControlParcel";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Brake.
    class Brake: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Stop Braking.
        OP_STOP = 0,
        //! Start Braking.
        OP_START = 1,
        //! Revert Actuation.
        OP_REVERT = 2
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 413;
      }

      Brake(void);

      Brake*
      clone(void) const
      {
        return new Brake(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Brake::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Brake";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Linear State.
    class DesiredLinearState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of x is meaningful.
        FL_X = 0x0001,
        //! Value of y is meaningful.
        FL_Y = 0x0002,
        //! Value of z is meaningful.
        FL_Z = 0x0004,
        //! Value of vx is meaningful.
        FL_VX = 0x0008,
        //! Value of vy is meaningful.
        FL_VY = 0x0010,
        //! Value of vz is meaningful.
        FL_VZ = 0x0020,
        //! Value of ax is meaningful.
        FL_AX = 0x0040,
        //! Value of ay is meaningful.
        FL_AY = 0x0080,
        //! Value of az is meaningful.
        FL_AZ = 0x0100
      };

      //! Desired pos in xx.
      fp64_t x;
      //! Desired pos in yy.
      fp64_t y;
      //! Desired pos in zz.
      fp64_t z;
      //! Desired Linear Speed in xx.
      fp64_t vx;
      //! Desired Linear Speed in yy.
      fp64_t vy;
      //! Desired Linear Speed in zz.
      fp64_t vz;
      //! Desired Linear Acceleration in xx.
      fp64_t ax;
      //! Desired Linear Acceleration in yy.
      fp64_t ay;
      //! Desired Linear Acceleration in zz.
      fp64_t az;
      //! Flags.
      uint16_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 414;
      }

      DesiredLinearState(void);

      DesiredLinearState*
      clone(void) const
      {
        return new DesiredLinearState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredLinearState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredLinearState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 74;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Throttle.
    class DesiredThrottle: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 415;
      }

      DesiredThrottle(void);

      DesiredThrottle*
      clone(void) const
      {
        return new DesiredThrottle(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DesiredThrottle::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredThrottle";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Peeked DesiredPath.
    class PeekDesiredPath: public Message
    {
    public:
      //! DesiredPath.
      InlineMessage<DesiredPath> dpath;

      static uint16_t
      getIdStatic(void)
      {
        return 420;
      }

      PeekDesiredPath(void);

      PeekDesiredPath*
      clone(void) const
      {
        return new PeekDesiredPath(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PeekDesiredPath::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PeekDesiredPath";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return dpath.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Goto Maneuver.
    class Goto: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 450;
      }

      Goto(void);

      Goto*
      clone(void) const
      {
        return new Goto(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Goto::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Goto";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 52;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! PopUp Maneuver.
    class PopUp: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01,
        //! Wait at surface.
        FLG_WAIT_AT_SURFACE = 0x02,
        //! Station keeping.
        FLG_STATION_KEEP = 0x04
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! Radius.
      fp32_t radius;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 451;
      }

      PopUp(void);

      PopUp*
      clone(void) const
      {
        return new PopUp(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PopUp::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PopUp";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 35;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Teleoperation Maneuver.
    class Teleoperation: public Maneuver
    {
    public:
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 452;
      }

      Teleoperation(void);

      Teleoperation*
      clone(void) const
      {
        return new Teleoperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Teleoperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Teleoperation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Loiter Maneuver.
    class Loiter: public Maneuver
    {
    public:
      //! Loiter Type.
      enum LoiterTypeEnum
      {
        //! Default.
        LT_DEFAULT = 0,
        //! Circular.
        LT_CIRCULAR = 1,
        //! Race track.
        LT_RACETRACK = 2,
        //! Figure 8.
        LT_EIGHT = 3,
        //! Hover.
        LT_HOVER = 4
      };

      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter Type.
      uint8_t type;
      //! Radius.
      fp32_t radius;
      //! Length.
      fp32_t length;
      //! Bearing.
      fp64_t bearing;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 453;
      }

      Loiter(void);

      Loiter*
      clone(void) const
      {
        return new Loiter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Loiter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Loiter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 48;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Idle Maneuver.
    class IdleManeuver: public Maneuver
    {
    public:
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 454;
      }

      IdleManeuver(void);

      IdleManeuver*
      clone(void) const
      {
        return new IdleManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IdleManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IdleManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Low Level Control Maneuver.
    class LowLevelControl: public Maneuver
    {
    public:
      //! Control.
      InlineMessage<ControlCommand> control;
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 455;
      }

      LowLevelControl(void);

      LowLevelControl*
      clone(void) const
      {
        return new LowLevelControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LowLevelControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LowLevelControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return control.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Rows Maneuver.
    class Rows: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Square Curve.
        FLG_SQUARE_CURVE = 0x0001,
        //! First Curve Right.
        FLG_CURVE_RIGHT = 0x0002
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Cross Angle.
      fp64_t cross_angle;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Horizontal Step.
      fp32_t hstep;
      //! Curve Offset.
      uint8_t coff;
      //! Alternation Parameter.
      uint8_t alternation;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 456;
      }

      Rows(void);

      Rows*
      clone(void) const
      {
        return new Rows(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Rows::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Rows";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 59;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Path Point.
    class PathPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 458;
      }

      PathPoint(void);

      PathPoint*
      clone(void) const
      {
        return new PathPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PathPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PathPoint";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Path Maneuver.
    class FollowPath: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Path Points.
      MessageList<PathPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 457;
      }

      FollowPath(void);

      FollowPath*
      clone(void) const
      {
        return new FollowPath(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowPath::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowPath";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Yo-Yo Maneuver.
    class YoYo: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Amplitude.
      fp32_t amplitude;
      //! Pitch Angle.
      fp32_t pitch;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 459;
      }

      YoYo(void);

      YoYo*
      clone(void) const
      {
        return new YoYo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return YoYo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "YoYo";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Teleoperation Done.
    class TeleoperationDone: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 460;
      }

      TeleoperationDone(void);

      TeleoperationDone*
      clone(void) const
      {
        return new TeleoperationDone(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TeleoperationDone::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TeleoperationDone";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Station Keeping.
    class StationKeeping: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Radius.
      fp32_t radius;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 461;
      }

      StationKeeping(void);

      StationKeeping*
      clone(void) const
      {
        return new StationKeeping(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return StationKeeping::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StationKeeping";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Elevator Maneuver.
    class Elevator: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01
      };

      //! Timeout.
      uint16_t timeout;
      //! Flags.
      uint8_t flags;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Radius.
      fp32_t radius;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 462;
      }

      Elevator(void);

      Elevator*
      clone(void) const
      {
        return new Elevator(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Elevator::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Elevator";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 38;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Trajectory Point.
    class TrajectoryPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;
      //! Time Offset (s).
      fp32_t t;

      static uint16_t
      getIdStatic(void)
      {
        return 464;
      }

      TrajectoryPoint(void);

      TrajectoryPoint*
      clone(void) const
      {
        return new TrajectoryPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrajectoryPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrajectoryPoint";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Trajectory.
    class FollowTrajectory: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 463;
      }

      FollowTrajectory(void);

      FollowTrajectory*
      clone(void) const
      {
        return new FollowTrajectory(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowTrajectory::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowTrajectory";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Custom Maneuver.
    class CustomManeuver: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Maneuver Name.
      std::string name;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 465;
      }

      CustomManeuver(void);

      CustomManeuver*
      clone(void) const
      {
        return new CustomManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CustomManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CustomManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Formation Participant.
    class VehicleFormationParticipant: public Message
    {
    public:
      //! ID (IMC address).
      uint16_t vid;
      //! Formation offset -- Along-track.
      fp32_t off_x;
      //! Formation offset -- Cross-track.
      fp32_t off_y;
      //! Formation offset -- Depth/Altitude.
      fp32_t off_z;

      static uint16_t
      getIdStatic(void)
      {
        return 467;
      }

      VehicleFormationParticipant(void);

      VehicleFormationParticipant*
      clone(void) const
      {
        return new VehicleFormationParticipant(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleFormationParticipant::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleFormationParticipant";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Formation.
    class VehicleFormation: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Start Time.
      fp64_t start_time;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 466;
      }

      VehicleFormation(void);

      VehicleFormation*
      clone(void) const
      {
        return new VehicleFormation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleFormation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleFormation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 34;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return points.getSerializationSize() + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Stop Maneuver.
    class StopManeuver: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 468;
      }

      StopManeuver(void);

      StopManeuver*
      clone(void) const
      {
        return new StopManeuver(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return StopManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StopManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Register Maneuver.
    class RegisterManeuver: public Message
    {
    public:
      //! Maneuver ID.
      uint16_t mid;

      static uint16_t
      getIdStatic(void)
      {
        return 469;
      }

      RegisterManeuver(void);

      RegisterManeuver*
      clone(void) const
      {
        return new RegisterManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RegisterManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RegisterManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Maneuver Control State.
    class ManeuverControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Maneuver in progress.
        MCS_EXECUTING = 0,
        //! Maneuver completed.
        MCS_DONE = 1,
        //! Maneuver error.
        MCS_ERROR = 2,
        //! Maneuver stopped.
        MCS_STOPPED = 3
      };

      //! State.
      uint8_t state;
      //! Completion Time.
      uint16_t eta;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 470;
      }

      ManeuverControlState(void);

      ManeuverControlState*
      clone(void) const
      {
        return new ManeuverControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ManeuverControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ManeuverControlState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow System.
    class FollowSystem: public Message
    {
    public:
      //! System To Follow.
      uint16_t system;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Offset -- X.
      fp32_t x;
      //! Offset -- Y.
      fp32_t y;
      //! Coordinate -- Z.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic(void)
      {
        return 471;
      }

      FollowSystem(void);

      FollowSystem*
      clone(void) const
      {
        return new FollowSystem(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowSystem::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowSystem";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 22;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Communications Relay.
    class CommsRelay: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! System A.
      uint16_t sys_a;
      //! System B.
      uint16_t sys_b;
      //! Move threshold.
      fp32_t move_threshold;

      static uint16_t
      getIdStatic(void)
      {
        return 472;
      }

      CommsRelay(void);

      CommsRelay*
      clone(void) const
      {
        return new CommsRelay(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CommsRelay::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CommsRelay";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 31;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Polygon Vertex.
    class PolygonVertex: public Message
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;

      static uint16_t
      getIdStatic(void)
      {
        return 474;
      }

      PolygonVertex(void);

      PolygonVertex*
      clone(void) const
      {
        return new PolygonVertex(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PolygonVertex::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PolygonVertex";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Cover Area.
    class CoverArea: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Polygon.
      MessageList<PolygonVertex> polygon;
      //! CustomParameters.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 473;
      }

      CoverArea(void);

      CoverArea*
      clone(void) const
      {
        return new CoverArea(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CoverArea::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CoverArea";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 26;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return polygon.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Compass Calibration Maneuver.
    class CompassCalibration: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Pitch.
      fp32_t pitch;
      //! Amplitude.
      fp32_t amplitude;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Radius.
      fp32_t radius;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 475;
      }

      CompassCalibration(void);

      CompassCalibration*
      clone(void) const
      {
        return new CompassCalibration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CompassCalibration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CompassCalibration";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 43;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Parameters.
    class FormationParameters: public Message
    {
    public:
      //! Formation Reference Frame.
      enum FormationReferenceFrameEnum
      {
        //! Earth Fixed.
        OP_EARTH_FIXED = 0,
        //! Path Fixed.
        OP_PATH_FIXED = 1,
        //! Path Curved.
        OP_PATH_CURVED = 2
      };

      //! Formation Name.
      std::string formation_name;
      //! Formation Reference Frame.
      uint8_t reference_frame;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Custom settings for formation.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 476;
      }

      FormationParameters(void);

      FormationParameters*
      clone(void) const
      {
        return new FormationParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(formation_name) + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Formation Plan Execution.
    class FormationPlanExecution: public Maneuver
    {
    public:
      //! Target Group Name.
      std::string group_name;
      //! Formation Name.
      std::string formation_name;
      //! Formation Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Formation Leader Flight Airspeed.
      fp32_t leader_speed;
      //! Formation leader flight bank limit.
      fp32_t leader_bank_lim;
      //! Position mismatch limit.
      fp32_t pos_sim_err_lim;
      //! Position mismatch threshold.
      fp32_t pos_sim_err_wrn;
      //! Position mismatch time-out.
      uint16_t pos_sim_err_timeout;
      //! Convergence threshold.
      fp32_t converg_max;
      //! Convergence time-out.
      uint16_t converg_timeout;
      //! Communications time-out.
      uint16_t comms_timeout;
      //! Turbulence limit.
      fp32_t turb_lim;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 477;
      }

      FormationPlanExecution(void);

      FormationPlanExecution*
      clone(void) const
      {
        return new FormationPlanExecution(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationPlanExecution::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationPlanExecution";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 30;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(group_name) + IMC::getSerializationSize(formation_name) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Reference Maneuver.
    class FollowReference: public Maneuver
    {
    public:
      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference Update Timeout.
      fp32_t timeout;
      //! Loiter Radius.
      fp32_t loiter_radius;
      //! Altitude Interval.
      fp32_t altitude_interval;

      static uint16_t
      getIdStatic(void)
      {
        return 478;
      }

      FollowReference(void);

      FollowReference*
      clone(void) const
      {
        return new FollowReference(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowReference::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowReference";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 15;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Reference To Follow.
    class Reference: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Use Location Reference.
        FLAG_LOCATION = 0x01,
        //! Use Speed Reference.
        FLAG_SPEED = 0x02,
        //! Use Z Reference.
        FLAG_Z = 0x04,
        //! Use Radius Reference.
        FLAG_RADIUS = 0x08,
        //! Use this Reference as Start Position for PathControler.
        FLAG_START_POINT = 0x10,
        //! Use Current Position as Start Position for PathControler.
        FLAG_DIRECT = 0x20,
        //! Flag Maneuver Completion.
        FLAG_MANDONE = 0x80
      };

      //! Flags.
      uint8_t flags;
      //! Speed Reference.
      InlineMessage<DesiredSpeed> speed;
      //! Z Reference.
      InlineMessage<DesiredZ> z;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Radius.
      fp32_t radius;

      static uint16_t
      getIdStatic(void)
      {
        return 479;
      }

      Reference(void);

      Reference*
      clone(void) const
      {
        return new Reference(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Reference::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Reference";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 21;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return speed.getSerializationSize() + z.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Follow Reference State.
    class FollowRefState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Waiting for first reference.
        FR_WAIT = 1,
        //! Going towards received reference.
        FR_GOTO = 2,
        //! Loitering after arriving at the reference.
        FR_LOITER = 3,
        //! Hovering after arriving at the reference.
        FR_HOVER = 4,
        //! Moving in z after arriving at the target cylinder.
        FR_ELEVATOR = 5,
        //! Controlling system timed out.
        FR_TIMEOUT = 6
      };

      //! Proximity.
      enum ProximityBits
      {
        //! Far from the destination.
        PROX_FAR = 0x01,
        //! Near in the horizontal plane.
        PROX_XY_NEAR = 0x02,
        //! Near in the vertical plane.
        PROX_Z_NEAR = 0x04,
        //! Unreachable in the horizontal plane.
        PROX_XY_UNREACHABLE = 0x08,
        //! Unreachable in the vertical plane.
        PROX_Z_UNREACHABLE = 0x10
      };

      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference.
      InlineMessage<Reference> reference;
      //! State.
      uint8_t state;
      //! Proximity.
      uint8_t proximity;

      static uint16_t
      getIdStatic(void)
      {
        return 480;
      }

      FollowRefState(void);

      FollowRefState*
      clone(void) const
      {
        return new FollowRefState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowRefState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowRefState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return reference.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Relative State.
    class RelativeState: public Message
    {
    public:
      //! System Identifier.
      std::string s_id;
      //! Distance.
      fp32_t dist;
      //! Position Error.
      fp32_t err;
      //! Control Importance.
      fp32_t ctrl_imp;
      //! Relative Direction X (North).
      fp32_t rel_dir_x;
      //! Relative Direction Y (East).
      fp32_t rel_dir_y;
      //! Relative Direction Z (Down).
      fp32_t rel_dir_z;
      //! X Position Error (North).
      fp32_t err_x;
      //! Y Position Error (East).
      fp32_t err_y;
      //! Z Position Error (Down).
      fp32_t err_z;
      //! X Position Error In Relative Frame (North).
      fp32_t rf_err_x;
      //! Y Position Error In Relative Frame (East).
      fp32_t rf_err_y;
      //! Z Position Error In Relative Frame (Down).
      fp32_t rf_err_z;
      //! X Velocity Error In Relative Frame (North).
      fp32_t rf_err_vx;
      //! Y Velocity Error In Relative Frame (East).
      fp32_t rf_err_vy;
      //! Z Velocity Error In Relative Frame (Down).
      fp32_t rf_err_vz;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;

      static uint16_t
      getIdStatic(void)
      {
        return 482;
      }

      RelativeState(void);

      RelativeState*
      clone(void) const
      {
        return new RelativeState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RelativeState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelativeState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 84;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(s_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Monitoring Data.
    class FormationMonitor: public Message
    {
    public:
      //! Commanded X Acceleration (North).
      fp32_t ax_cmd;
      //! Commanded Y Acceleration (East).
      fp32_t ay_cmd;
      //! Commanded Z Acceleration (Down).
      fp32_t az_cmd;
      //! Desired X Acceleration (North).
      fp32_t ax_des;
      //! Desired Y Acceleration (East).
      fp32_t ay_des;
      //! Desired Z Acceleration (Down).
      fp32_t az_des;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;
      //! X Sliding Surface Feedback (North).
      fp32_t surf_fdbk_x;
      //! Y Sliding Surface Feedback (East).
      fp32_t surf_fdbk_y;
      //! Z Sliding Surface Feedback (Down).
      fp32_t surf_fdbk_z;
      //! X Uncertainty Compensation (North).
      fp32_t surf_unkn_x;
      //! Y Uncertainty Compensation (East).
      fp32_t surf_unkn_y;
      //! Z Uncertainty Compensation (Down).
      fp32_t surf_unkn_z;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! Relative State.
      MessageList<RelativeState> rel_state;

      static uint16_t
      getIdStatic(void)
      {
        return 481;
      }

      FormationMonitor(void);

      FormationMonitor*
      clone(void) const
      {
        return new FormationMonitor(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationMonitor::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationMonitor";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 72;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return rel_state.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Dislodge Maneuver.
    class Dislodge: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Let the vehicle decide.
        DIR_AUTO = 0,
        //! Attempt to move forward.
        DIR_FORWARD = 1,
        //! Attempt to move backward.
        DIR_BACKWARD = 2
      };

      //! Timeout.
      uint16_t timeout;
      //! RPM.
      fp32_t rpm;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 483;
      }

      Dislodge(void);

      Dislodge*
      clone(void) const
      {
        return new Dislodge(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Dislodge::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Dislodge";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 7;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation.
    class Formation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1,
        //! Ready.
        OP_READY = 2,
        //! Executing.
        OP_EXECUTING = 3,
        //! Failure.
        OP_FAILURE = 4
      };

      //! Formation Reference Frame.
      enum FormationReferenceFrameEnum
      {
        //! Earth Fixed.
        OP_EARTH_FIXED = 0,
        //! Path Fixed.
        OP_PATH_FIXED = 1,
        //! Path Curved.
        OP_PATH_CURVED = 2
      };

      //! Formation Name.
      std::string formation_name;
      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Target Group Name.
      std::string group_name;
      //! Formation Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Formation Reference Frame.
      uint8_t reference_frame;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Formation Leader Bank Limit.
      fp32_t leader_bank_lim;
      //! Formation Leader Minimum Speed.
      fp32_t leader_speed_min;
      //! Formation Leader Maximum Speed.
      fp32_t leader_speed_max;
      //! Formation Leader Minimum Altitude.
      fp32_t leader_alt_min;
      //! Formation Leader Maximum Altitude.
      fp32_t leader_alt_max;
      //! Position mismatch limit.
      fp32_t pos_sim_err_lim;
      //! Position mismatch threshold.
      fp32_t pos_sim_err_wrn;
      //! Position mismatch time-out.
      uint16_t pos_sim_err_timeout;
      //! Convergence threshold.
      fp32_t converg_max;
      //! Convergence time-out.
      uint16_t converg_timeout;
      //! Communications time-out.
      uint16_t comms_timeout;
      //! Turbulence limit.
      fp32_t turb_lim;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 484;
      }

      Formation(void);

      Formation*
      clone(void) const
      {
        return new Formation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Formation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Formation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 45;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(formation_name) + IMC::getSerializationSize(group_name) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Launch Maneuver.
    class Launch: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 485;
      }

      Launch(void);

      Launch*
      clone(void) const
      {
        return new Launch(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Launch::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Launch";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Drop Maneuver.
    class Drop: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 486;
      }

      Drop(void);

      Drop*
      clone(void) const
      {
        return new Drop(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Drop::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Drop";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Scheduled Goto.
    class ScheduledGoto: public Maneuver
    {
    public:
      //! Delayed Behavior.
      enum DelayedBehaviorEnum
      {
        //! Resume.
        DBEH_RESUME = 0,
        //! Skip.
        DBEH_SKIP = 1,
        //! Fail.
        DBEH_FAIL = 2
      };

      //! Time of arrival.
      fp64_t arrival_time;
      //! Destination Latitude WGS-84.
      fp64_t lat;
      //! Destination Longitude WGS-84.
      fp64_t lon;
      //! Destination Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Travel Z Reference.
      fp32_t travel_z;
      //! Travel Z Units.
      uint8_t travel_z_units;
      //! Delayed Behavior.
      uint8_t delayed;

      static uint16_t
      getIdStatic(void)
      {
        return 487;
      }

      ScheduledGoto(void);

      ScheduledGoto*
      clone(void) const
      {
        return new ScheduledGoto(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ScheduledGoto::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ScheduledGoto";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 35;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Rows Coverage.
    class RowsCoverage: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Square Curve.
        FLG_SQUARE_CURVE = 0x01,
        //! First Curve Right.
        FLG_CURVE_RIGHT = 0x02
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Cross Angle.
      fp64_t cross_angle;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Curve Offset.
      uint8_t coff;
      //! Angular Aperture.
      fp32_t angaperture;
      //! Range.
      uint16_t range;
      //! Overlap.
      uint8_t overlap;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 488;
      }

      RowsCoverage(void);

      RowsCoverage*
      clone(void) const
      {
        return new RowsCoverage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RowsCoverage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RowsCoverage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 59;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Sample Maneuver.
    class Sample: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Syringe0.
      uint8_t syringe0;
      //! Syringe1.
      uint8_t syringe1;
      //! Syringe2.
      uint8_t syringe2;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 489;
      }

      Sample(void);

      Sample*
      clone(void) const
      {
        return new Sample(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Sample::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Sample";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 31;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Image Tracking.
    class ImageTracking: public Maneuver
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 490;
      }

      ImageTracking(void);

      ImageTracking*
      clone(void) const
      {
        return new ImageTracking(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ImageTracking::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ImageTracking";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Takeoff Maneuver.
    class Takeoff: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Pitch Angle.
      fp32_t takeoff_pitch;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 491;
      }

      Takeoff(void);

      Takeoff*
      clone(void) const
      {
        return new Takeoff(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Takeoff::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Takeoff";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 30;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Land Maneuver.
    class Land: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Abort Z Reference.
      fp32_t abort_z;
      //! Bearing.
      fp64_t bearing;
      //! Glide Slope.
      uint8_t glide_slope;
      //! Glide Slope Altitude.
      fp32_t glide_slope_alt;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 492;
      }

      Land(void);

      Land*
      clone(void) const
      {
        return new Land(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Land::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Land";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 43;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Autonomous Section.
    class AutonomousSection: public Maneuver
    {
    public:
      //! Enforced Limits.
      enum EnforcedLimitsBits
      {
        //! Maximum Depth Limit.
        ENFORCE_DEPTH = 0x01,
        //! Minimum Altitude Limit.
        ENFORCE_ALTITUDE = 0x02,
        //! Time Limit.
        ENFORCE_TIMEOUT = 0x04,
        //! Polygonal Area Limits.
        ENFORCE_AREA2D = 0x08
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Enforced Limits.
      uint8_t limits;
      //! Maximum depth.
      fp64_t max_depth;
      //! Minimum altitude.
      fp64_t min_alt;
      //! Time Limit.
      fp64_t time_limit;
      //! Area Limits.
      MessageList<PolygonVertex> area_limits;
      //! Controller.
      std::string controller;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 493;
      }

      AutonomousSection(void);

      AutonomousSection*
      clone(void) const
      {
        return new AutonomousSection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AutonomousSection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AutonomousSection";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 46;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return area_limits.getSerializationSize() + IMC::getSerializationSize(controller) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Follow Point Maneuver.
    class FollowPoint: public Maneuver
    {
    public:
      //! Source To Follow.
      std::string target;
      //! Maximum Speed.
      fp32_t max_speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 494;
      }

      FollowPoint(void);

      FollowPoint*
      clone(void) const
      {
        return new FollowPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FollowPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowPoint";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 26;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(target) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Alignment Maneuver.
    class Alignment: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 495;
      }

      Alignment(void);

      Alignment*
      clone(void) const
      {
        return new Alignment(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Alignment::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Alignment";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Station Keeping Extended.
    class StationKeepingExtended: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Keep safe behaviour.
        FLG_KEEP_SAFE = 0x01
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Radius.
      fp32_t radius;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! PopUp Period.
      uint16_t popup_period;
      //! PopUp Duration.
      uint16_t popup_duration;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 496;
      }

      StationKeepingExtended(void);

      StationKeepingExtended*
      clone(void) const
      {
        return new StationKeepingExtended(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return StationKeepingExtended::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StationKeepingExtended";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 37;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Maneuver Done.
    class ManeuverDone: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 497;
      }

      ManeuverDone(void);

      ManeuverDone*
      clone(void) const
      {
        return new ManeuverDone(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ManeuverDone::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ManeuverDone";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Plan Maneuver.
    class PlanManeuver: public Message
    {
    public:
      //! Maneuver ID.
      std::string maneuver_id;
      //! Maneuver Specification.
      InlineMessage<Maneuver> data;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic(void)
      {
        return 552;
      }

      PlanManeuver(void);

      PlanManeuver*
      clone(void) const
      {
        return new PlanManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(maneuver_id) + data.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Peeked Maneuver.
    class PeekManeuver: public Message
    {
    public:
      //! Maneuver.
      InlineMessage<PlanManeuver> man;

      static uint16_t
      getIdStatic(void)
      {
        return 498;
      }

      PeekManeuver(void);

      PeekManeuver*
      clone(void) const
      {
        return new PeekManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PeekManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PeekManeuver";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return man.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Magnetometer Maneuver.
    class Magnetometer: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Clockwise First.
        MD_CLOCKW_FIRST = 0,
        //! Counter Clockwise First.
        MD_CCLOCKW_FIRST = 1
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Width.
      fp32_t width;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 499;
      }

      Magnetometer(void);

      Magnetometer*
      clone(void) const
      {
        return new Magnetometer(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Magnetometer::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Magnetometer";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 41;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle State.
    class VehicleState: public Message
    {
    public:
      //! Operation Mode.
      enum OperationModeEnum
      {
        //! Service.
        VS_SERVICE = 0,
        //! Calibration.
        VS_CALIBRATION = 1,
        //! Error.
        VS_ERROR = 2,
        //! Maneuver.
        VS_MANEUVER = 3,
        //! External Control.
        VS_EXTERNAL = 4,
        //! Boot.
        VS_BOOT = 5
      };

      //! Flags.
      enum FlagsBits
      {
        //! Maneuver Done.
        VFLG_MANEUVER_DONE = 0x01
      };

      //! Operation Mode.
      uint8_t op_mode;
      //! Errors -- Count.
      uint8_t error_count;
      //! Errors -- Entities.
      std::string error_ents;
      //! Maneuver -- Type.
      uint16_t maneuver_type;
      //! Maneuver -- Start Time.
      fp64_t maneuver_stime;
      //! Maneuver -- ETA.
      uint16_t maneuver_eta;
      //! Control Loops.
      uint32_t control_loops;
      //! Flags.
      uint8_t flags;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic(void)
      {
        return 500;
      }

      VehicleState(void);

      VehicleState*
      clone(void) const
      {
        return new VehicleState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 27;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(error_ents) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Command.
    class VehicleCommand: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        VC_REQUEST = 0,
        //! Reply -- Success.
        VC_SUCCESS = 1,
        //! Reply -- In Progress.
        VC_IN_PROGRESS = 2,
        //! Reply -- Failure.
        VC_FAILURE = 3
      };

      //! Command.
      enum CommandEnum
      {
        //! Execute Maneuver.
        VC_EXEC_MANEUVER = 0,
        //! Stop Maneuver.
        VC_STOP_MANEUVER = 1,
        //! Start Calibration.
        VC_START_CALIBRATION = 2,
        //! Stop Calibration.
        VC_STOP_CALIBRATION = 3
      };

      //! Type.
      uint8_t type;
      //! Request ID.
      uint16_t request_id;
      //! Command.
      uint8_t command;
      //! Maneuver.
      InlineMessage<Maneuver> maneuver;
      //! Calibration Time.
      uint16_t calib_time;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 501;
      }

      VehicleCommand(void);

      VehicleCommand*
      clone(void) const
      {
        return new VehicleCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleCommand";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return maneuver.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Monitor Entity State.
    class MonitorEntityState: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Reset to defaults.
        MES_RESET = 0,
        //! Enable Monitoring.
        MES_ENABLE = 1,
        //! Disable Monitoring.
        MES_DISABLE = 2,
        //! Enable Monitoring (exclusive - disables all others).
        MES_ENABLE_EXCLUSIVE = 3,
        //! Status Report.
        MES_STATUS = 4
      };

      //! Command.
      uint8_t command;
      //! Entity Names.
      std::string entities;

      static uint16_t
      getIdStatic(void)
      {
        return 502;
      }

      MonitorEntityState(void);

      MonitorEntityState*
      clone(void) const
      {
        return new MonitorEntityState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MonitorEntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MonitorEntityState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity Monitoring State.
    class EntityMonitoringState: public Message
    {
    public:
      //! Entities monitored - Count.
      uint8_t mcount;
      //! Entities monitored - Names.
      std::string mnames;
      //! Entities with errors - Count.
      uint8_t ecount;
      //! Entities with errors - Names.
      std::string enames;
      //! Entities with critical errors - Count.
      uint8_t ccount;
      //! Entities with critical errors - Names.
      std::string cnames;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic(void)
      {
        return 503;
      }

      EntityMonitoringState(void);

      EntityMonitoringState*
      clone(void) const
      {
        return new EntityMonitoringState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityMonitoringState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityMonitoringState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 11;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(mnames) + IMC::getSerializationSize(enames) + IMC::getSerializationSize(cnames) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Operational Limits.
    class OperationalLimits: public Message
    {
    public:
      //! Field Indicator Mask.
      uint8_t mask;
      //! Maximum Depth.
      fp32_t max_depth;
      //! Minimum Altitude.
      fp32_t min_altitude;
      //! Maximum Altitude.
      fp32_t max_altitude;
      //! Minimum Speed.
      fp32_t min_speed;
      //! Maximum Speed.
      fp32_t max_speed;
      //! Maximum Vertical Rate.
      fp32_t max_vrate;
      //! Area -- WGS-84 Latitude.
      fp64_t lat;
      //! Area -- WGS-84 Longitude.
      fp64_t lon;
      //! Area -- Orientation.
      fp32_t orientation;
      //! Area -- Width.
      fp32_t width;
      //! Area -- Length.
      fp32_t length;
      //! Polygon vertices.
      MessageList<PolygonVertex> vertices;

      static uint16_t
      getIdStatic(void)
      {
        return 504;
      }

      OperationalLimits(void);

      OperationalLimits*
      clone(void) const
      {
        return new OperationalLimits(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return OperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "OperationalLimits";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 53;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return vertices.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Get Operational Limits.
    class GetOperationalLimits: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 505;
      }

      GetOperationalLimits(void);

      GetOperationalLimits*
      clone(void) const
      {
        return new GetOperationalLimits(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GetOperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GetOperationalLimits";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Calibration.
    class Calibration: public Message
    {
    public:
      //! Duration.
      uint16_t duration;

      static uint16_t
      getIdStatic(void)
      {
        return 506;
      }

      Calibration(void);

      Calibration*
      clone(void) const
      {
        return new Calibration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Calibration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Calibration";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Loops.
    class ControlLoops: public Message
    {
    public:
      //! Enable.
      enum EnableEnum
      {
        //! Disable.
        CL_DISABLE = 0,
        //! Enable.
        CL_ENABLE = 1
      };

      //! Enable.
      uint8_t enable;
      //! Control Loop Mask.
      uint32_t mask;
      //! Scope Time Reference.
      uint32_t scope_ref;

      static uint16_t
      getIdStatic(void)
      {
        return 507;
      }

      ControlLoops(void);

      ControlLoops*
      clone(void) const
      {
        return new ControlLoops(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ControlLoops::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ControlLoops";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Medium.
    class VehicleMedium: public Message
    {
    public:
      //! Medium.
      enum MediumEnum
      {
        //! Ground.
        VM_GROUND = 0,
        //! Air.
        VM_AIR = 1,
        //! Water.
        VM_WATER = 2,
        //! Underwater.
        VM_UNDERWATER = 3,
        //! Unknown.
        VM_UNKNOWN = 4
      };

      //! Medium.
      uint8_t medium;

      static uint16_t
      getIdStatic(void)
      {
        return 508;
      }

      VehicleMedium(void);

      VehicleMedium*
      clone(void) const
      {
        return new VehicleMedium(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleMedium::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleMedium";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Collision.
    class Collision: public Message
    {
    public:
      //! Type.
      enum TypeBits
      {
        //! X-axis.
        CD_X = 0x01,
        //! Y-axis.
        CD_Y = 0x02,
        //! Z-axis.
        CD_Z = 0x04,
        //! Impact.
        CD_IMPACT = 0x08
      };

      //! Collision value.
      fp32_t value;
      //! Type.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 509;
      }

      Collision(void);

      Collision*
      clone(void) const
      {
        return new Collision(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Collision::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Collision";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Tracking State.
    class FormState: public Message
    {
    public:
      //! Position Mismatch Monitor.
      enum PositionMismatchMonitorEnum
      {
        //! Ok.
        POS_OK = 0,
        //! Warning threshold.
        POS_WRN = 1,
        //! Limit threshold.
        POS_LIM = 2
      };

      //! Communications Monitor.
      enum CommunicationsMonitorEnum
      {
        //! Ok.
        COMMS_OK = 0,
        //! Timeout.
        COMMS_TIMEOUT = 1
      };

      //! Convergence.
      enum ConvergenceEnum
      {
        //! Ok.
        CONV_OK = 0,
        //! Timeout.
        CONV_TIMEOUT = 1
      };

      //! Position Mismatch.
      fp32_t possimerr;
      //! Convergence.
      fp32_t converg;
      //! Stream Turbulence.
      fp32_t turbulence;
      //! Position Mismatch Monitor.
      uint8_t possimmon;
      //! Communications Monitor.
      uint8_t commmon;
      //! Convergence.
      uint8_t convergmon;

      static uint16_t
      getIdStatic(void)
      {
        return 510;
      }

      FormState(void);

      FormState*
      clone(void) const
      {
        return new FormState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 15;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Autopilot Mode.
    class AutopilotMode: public Message
    {
    public:
      //! Autonomy Level.
      enum AutonomyLevelEnum
      {
        //! Manual.
        AL_MANUAL = 0,
        //! Assisted.
        AL_ASSISTED = 1,
        //! Auto.
        AL_AUTO = 2
      };

      //! Autonomy Level.
      uint8_t autonomy;
      //! Mode.
      std::string mode;

      static uint16_t
      getIdStatic(void)
      {
        return 511;
      }

      AutopilotMode(void);

      AutopilotMode*
      clone(void) const
      {
        return new AutopilotMode(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AutopilotMode::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AutopilotMode";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(mode);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Tracking State.
    class FormationState: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1
      };

      //! Position Mismatch Monitor.
      enum PositionMismatchMonitorEnum
      {
        //! Ok.
        POS_OK = 0,
        //! Warning threshold.
        POS_WRN = 1,
        //! Limit threshold.
        POS_LIM = 2
      };

      //! Communications Monitor.
      enum CommunicationsMonitorEnum
      {
        //! Ok.
        COMMS_OK = 0,
        //! Timeout.
        COMMS_TIMEOUT = 1
      };

      //! Convergence.
      enum ConvergenceEnum
      {
        //! Ok.
        CONV_OK = 0,
        //! Timeout.
        CONV_TIMEOUT = 1
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Position Mismatch.
      fp32_t possimerr;
      //! Convergence.
      fp32_t converg;
      //! Stream Turbulence.
      fp32_t turbulence;
      //! Position Mismatch Monitor.
      uint8_t possimmon;
      //! Communications Monitor.
      uint8_t commmon;
      //! Convergence.
      uint8_t convergmon;

      static uint16_t
      getIdStatic(void)
      {
        return 512;
      }

      FormationState(void);

      FormationState*
      clone(void) const
      {
        return new FormationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 17;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Report Control.
    class ReportControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Request Start of Reports.
        OP_REQUEST_START = 0,
        //! Report Started.
        OP_STARTED = 1,
        //! Request Stop of Reports.
        OP_REQUEST_STOP = 2,
        //! Report Stopped.
        OP_STOPPED = 3,
        //! Request Single Reports.
        OP_REQUEST_REPORT = 4,
        //! Single Report Sent.
        OP_REPORT_SENT = 5
      };

      //! Communication Interface.
      enum CommunicationInterfaceBits
      {
        //! Acoustic.
        CI_ACOUSTIC = 0x01,
        //! Satellite.
        CI_SATELLITE = 0x02,
        //! GSM.
        CI_GSM = 0x04,
        //! Mobile.
        CI_MOBILE = 0x08,
        //! Radio.
        CI_RADIO = 0x10
      };

      //! Operation.
      uint8_t op;
      //! Communication Interface.
      uint8_t comm_interface;
      //! Period.
      uint16_t period;
      //! Destination System.
      std::string sys_dst;

      static uint16_t
      getIdStatic(void)
      {
        return 513;
      }

      ReportControl(void);

      ReportControl*
      clone(void) const
      {
        return new ReportControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ReportControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ReportControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys_dst);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! State Report.
    class StateReport: public Message
    {
    public:
      //! Time Stamp.
      uint32_t stime;
      //! Latitude.
      fp32_t latitude;
      //! Longitude.
      fp32_t longitude;
      //! Altitude.
      uint16_t altitude;
      //! Depth.
      uint16_t depth;
      //! Heading.
      uint16_t heading;
      //! Speed.
      int16_t speed;
      //! Fuel.
      int8_t fuel;
      //! Execution State.
      int8_t exec_state;
      //! Plan Checksum.
      uint16_t plan_checksum;

      static uint16_t
      getIdStatic(void)
      {
        return 514;
      }

      StateReport(void);

      StateReport*
      clone(void) const
      {
        return new StateReport(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return StateReport::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StateReport";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Transmission Request.
    class TransmissionRequest: public Message
    {
    public:
      //! Communication Mean.
      enum CommunicationMeanEnum
      {
        //! WiFi.
        CMEAN_WIFI = 0,
        //! Acoustic.
        CMEAN_ACOUSTIC = 1,
        //! Satellite.
        CMEAN_SATELLITE = 2,
        //! GSM.
        CMEAN_GSM = 3,
        //! Any.
        CMEAN_ANY = 4,
        //! All.
        CMEAN_ALL = 5
      };

      //! Data Mode.
      enum DataModeEnum
      {
        //! Inline Message.
        DMODE_INLINEMSG = 0,
        //! Text.
        DMODE_TEXT = 1,
        //! Raw Data.
        DMODE_RAW = 2,
        //! Abort.
        DMODE_ABORT = 3,
        //! Range.
        DMODE_RANGE = 4,
        //! Reverse Range.
        DMODE_REVERSE_RANGE = 5
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Communication Mean.
      uint8_t comm_mean;
      //! Destination System.
      std::string destination;
      //! Deadline.
      fp64_t deadline;
      //! Range.
      fp32_t range;
      //! Data Mode.
      uint8_t data_mode;
      //! Message Data.
      InlineMessage<Message> msg_data;
      //! Text Data.
      std::string txt_data;
      //! Raw Data.
      std::vector<char> raw_data;

      static uint16_t
      getIdStatic(void)
      {
        return 515;
      }

      TransmissionRequest(void);

      TransmissionRequest*
      clone(void) const
      {
        return new TransmissionRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TransmissionRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TransmissionRequest";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + msg_data.getSerializationSize() + IMC::getSerializationSize(txt_data) + IMC::getSerializationSize(raw_data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Transmission Status.
    class TransmissionStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! In progress.
        TSTAT_IN_PROGRESS = 0,
        //! Sent.
        TSTAT_SENT = 1,
        //! Delivered.
        TSTAT_DELIVERED = 51,
        //! Delivery is unknown.
        TSTAT_MAYBE_DELIVERED = 52,
        //! Range received.
        TSTAT_RANGE_RECEIVED = 60,
        //! Input Error.
        TSTAT_INPUT_FAILURE = 101,
        //! Temporary Error.
        TSTAT_TEMPORARY_FAILURE = 102,
        //! Permanent Failure.
        TSTAT_PERMANENT_FAILURE = 103
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Range.
      fp32_t range;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 516;
      }

      TransmissionStatus(void);

      TransmissionStatus*
      clone(void) const
      {
        return new TransmissionStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TransmissionStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TransmissionStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 7;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Transmission Request.
    class SmsRequest: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Destination.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! SMS Text.
      std::string sms_text;

      static uint16_t
      getIdStatic(void)
      {
        return 517;
      }

      SmsRequest(void);

      SmsRequest*
      clone(void) const
      {
        return new SmsRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SmsRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsRequest";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(sms_text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Transmission Status.
    class SmsStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Queued.
        SMSSTAT_QUEUED = 0,
        //! Sent.
        SMSSTAT_SENT = 1,
        //! Input Error.
        SMSSTAT_INPUT_FAILURE = 101,
        //! Error trying to send sms.
        SMSSTAT_ERROR = 102
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 518;
      }

      SmsStatus(void);

      SmsStatus*
      clone(void) const
      {
        return new SmsStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SmsStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! VTOL State.
    class VtolState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Undefined.
        VTOL_STATE_UNDEFINED = 0,
        //! Transition to Fixed-Wing.
        VTOL_STATE_TRANSITION_TO_FW = 1,
        //! Transition to MultiCopter.
        VTOL_STATE_TRANSITION_TO_MC = 2,
        //! MutiCopter.
        VTOL_STATE_MC = 3,
        //! Fixed-Wing.
        VTOL_STATE_FW = 4
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 519;
      }

      VtolState(void);

      VtolState*
      clone(void) const
      {
        return new VtolState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VtolState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VtolState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Arming State.
    class ArmingState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Armed.
        MOTORS_ARMED = 0,
        //! Disarmed.
        MOTORS_DISARMED = 1
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 520;
      }

      ArmingState(void);

      ArmingState*
      clone(void) const
      {
        return new ArmingState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ArmingState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ArmingState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TCP Transmission Request.
    class TCPRequest: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Destination.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! Message Data.
      InlineMessage<Message> msg_data;

      static uint16_t
      getIdStatic(void)
      {
        return 521;
      }

      TCPRequest(void);

      TCPRequest*
      clone(void) const
      {
        return new TCPRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TCPRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TCPRequest";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(destination) + msg_data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TCP Transmission Status.
    class TCPStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Queued.
        TCPSTAT_QUEUED = 0,
        //! Sent.
        TCPSTAT_SENT = 1,
        //! Input Error.
        TCPSTAT_INPUT_FAILURE = 100,
        //! Host Unknown.
        TCPSTAT_HOST_UNKNOWN = 101,
        //! Can't Connect.
        TCPSTAT_CANT_CONNECT = 102,
        //! Error trying to send sms.
        TCPSTAT_ERROR = 103
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 522;
      }

      TCPStatus(void);

      TCPStatus*
      clone(void) const
      {
        return new TCPStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TCPStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TCPStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Asset Report .
    class AssetReport: public Message
    {
    public:
      //! Medium.
      enum MediumEnum
      {
        //! WiFi.
        RM_WIFI = 1,
        //! Satellite.
        RM_SATELLITE = 2,
        //! Acoustic.
        RM_ACOUSTIC = 3,
        //! SMS.
        RM_SMS = 4
      };

      //! Asset Name.
      std::string name;
      //! Report Timestamp.
      fp64_t report_time;
      //! Medium.
      uint8_t medium;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;
      //! Speed Over Ground.
      fp32_t sog;
      //! Course Over Ground.
      fp32_t cog;
      //! Additional Info.
      MessageList<Message> msgs;

      static uint16_t
      getIdStatic(void)
      {
        return 525;
      }

      AssetReport(void);

      AssetReport*
      clone(void) const
      {
        return new AssetReport(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AssetReport::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AssetReport";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 41;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + msgs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Abort.
    class Abort: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 550;
      }

      Abort(void);

      Abort*
      clone(void) const
      {
        return new Abort(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Abort::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Abort";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Plan Variable.
    class PlanVariable: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Boolean.
        PVT_BOOLEAN = 0,
        //! Number.
        PVT_NUMBER = 1,
        //! Text.
        PVT_TEXT = 2,
        //! Message.
        PVT_MESSAGE = 3
      };

      //! Access Type.
      enum AccessTypeEnum
      {
        //! Input.
        PVA_INPUT = 0,
        //! Output.
        PVA_OUTPUT = 1,
        //! Local.
        PVA_LOCAL = 2
      };

      //! Name.
      std::string name;
      //! Value.
      std::string value;
      //! Type.
      uint8_t type;
      //! Access Type.
      uint8_t access;

      static uint16_t
      getIdStatic(void)
      {
        return 561;
      }

      PlanVariable(void);

      PlanVariable*
      clone(void) const
      {
        return new PlanVariable(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanVariable::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanVariable";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Transition.
    class PlanTransition: public Message
    {
    public:
      //! Source.
      std::string source_man;
      //! Destination Maneuver Name.
      std::string dest_man;
      //! Transition conditions.
      std::string conditions;
      //! Transition actions.
      MessageList<Message> actions;

      static uint16_t
      getIdStatic(void)
      {
        return 553;
      }

      PlanTransition(void);

      PlanTransition*
      clone(void) const
      {
        return new PlanTransition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanTransition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanTransition";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(source_man) + IMC::getSerializationSize(dest_man) + IMC::getSerializationSize(conditions) + actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Specification.
    class PlanSpecification: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Namespace.
      std::string vnamespace;
      //! Plan Variables.
      MessageList<PlanVariable> variables;
      //! Starting maneuver.
      std::string start_man_id;
      //! Maneuvers.
      MessageList<PlanManeuver> maneuvers;
      //! Transitions.
      MessageList<PlanTransition> transitions;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic(void)
      {
        return 551;
      }

      PlanSpecification(void);

      PlanSpecification*
      clone(void) const
      {
        return new PlanSpecification(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanSpecification::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanSpecification";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(vnamespace) + variables.getSerializationSize() + IMC::getSerializationSize(start_man_id) + maneuvers.getSerializationSize() + transitions.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Emergency Control.
    class EmergencyControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Enable.
        ECTL_ENABLE = 0,
        //! Disable.
        ECTL_DISABLE = 1,
        //! Start.
        ECTL_START = 2,
        //! Stop.
        ECTL_STOP = 3,
        //! Query.
        ECTL_QUERY = 4,
        //! Set Plan.
        ECTL_SET_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Plan Specification.
      InlineMessage<PlanSpecification> plan;

      static uint16_t
      getIdStatic(void)
      {
        return 554;
      }

      EmergencyControl(void);

      EmergencyControl*
      clone(void) const
      {
        return new EmergencyControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EmergencyControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EmergencyControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return plan.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Emergency Control State.
    class EmergencyControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Configured.
        ECS_NOT_CONFIGURED = 0,
        //! Disabled.
        ECS_DISABLED = 1,
        //! Enabled.
        ECS_ENABLED = 2,
        //! Armed.
        ECS_ARMED = 3,
        //! Active.
        ECS_ACTIVE = 4,
        //! Stopping.
        ECS_STOPPING = 5
      };

      //! State.
      uint8_t state;
      //! Plan Id.
      std::string plan_id;
      //! Communications Level.
      uint8_t comm_level;

      static uint16_t
      getIdStatic(void)
      {
        return 555;
      }

      EmergencyControlState(void);

      EmergencyControlState*
      clone(void) const
      {
        return new EmergencyControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EmergencyControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EmergencyControlState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan DB.
    class PlanDB: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        DBT_REQUEST = 0,
        //! Reply -- Success.
        DBT_SUCCESS = 1,
        //! Reply -- Failure.
        DBT_FAILURE = 2,
        //! Reply -- In Progress.
        DBT_IN_PROGRESS = 3
      };

      //! Operation.
      enum OperationEnum
      {
        //! Set Plan.
        DBOP_SET = 0,
        //! Delete Plan.
        DBOP_DEL = 1,
        //! Get Plan.
        DBOP_GET = 2,
        //! Get Plan Info.
        DBOP_GET_INFO = 3,
        //! Clear Database.
        DBOP_CLEAR = 4,
        //! Get Database State (Simple).
        DBOP_GET_STATE = 5,
        //! Get Database State (Detailed).
        DBOP_GET_DSTATE = 6,
        //! Boot Notification.
        DBOP_BOOT = 7
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan ID.
      std::string plan_id;
      //! Argument.
      InlineMessage<Message> arg;
      //! Complementary Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 556;
      }

      PlanDB(void);

      PlanDB*
      clone(void) const
      {
        return new PlanDB(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanDB::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDB";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan DB Information.
    class PlanDBInformation: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Size.
      uint16_t plan_size;
      //! Last Changed -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;

      static uint16_t
      getIdStatic(void)
      {
        return 558;
      }

      PlanDBInformation(void);

      PlanDBInformation*
      clone(void) const
      {
        return new PlanDBInformation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanDBInformation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDBInformation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan DB State.
    class PlanDBState: public Message
    {
    public:
      //! Plan -- Count.
      uint16_t plan_count;
      //! Plan -- Size of all plans.
      uint32_t plan_size;
      //! Last Change -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;
      //! Plan info.
      MessageList<PlanDBInformation> plans_info;

      static uint16_t
      getIdStatic(void)
      {
        return 557;
      }

      PlanDBState(void);

      PlanDBState*
      clone(void) const
      {
        return new PlanDBState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanDBState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDBState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5) + plans_info.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Control.
    class PlanControl: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        PC_REQUEST = 0,
        //! Reply -- Success.
        PC_SUCCESS = 1,
        //! Reply -- Failure.
        PC_FAILURE = 2,
        //! Reply -- In Progress.
        PC_IN_PROGRESS = 3
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start Plan.
        PC_START = 0,
        //! Stop Plan.
        PC_STOP = 1,
        //! Load Plan.
        PC_LOAD = 2,
        //! Get Plan.
        PC_GET = 3
      };

      //! Flags.
      enum FlagsBits
      {
        //! Calibrate Vehicle.
        FLG_CALIBRATE = 0x0001,
        //! Ignore Errors.
        FLG_IGNORE_ERRORS = 0x0002
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan Identifier.
      std::string plan_id;
      //! Flags.
      uint16_t flags;
      //! Request/Reply Argument.
      InlineMessage<Message> arg;
      //! Complementary Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 559;
      }

      PlanControl(void);

      PlanControl*
      clone(void) const
      {
        return new PlanControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanControl";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Control State.
    class PlanControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Blocked.
        PCS_BLOCKED = 0,
        //! Ready.
        PCS_READY = 1,
        //! Initializing.
        PCS_INITIALIZING = 2,
        //! Executing.
        PCS_EXECUTING = 3
      };

      //! Last Plan Outcome.
      enum LastPlanOutcomeEnum
      {
        //! None.
        LPO_NONE = 0,
        //! Success.
        LPO_SUCCESS = 1,
        //! Failure.
        LPO_FAILURE = 2
      };

      //! State.
      uint8_t state;
      //! Plan -- ID.
      std::string plan_id;
      //! Plan -- ETA.
      int32_t plan_eta;
      //! Plan -- Progress.
      fp32_t plan_progress;
      //! Maneuver -- ID.
      std::string man_id;
      //! Maneuver -- Type.
      uint16_t man_type;
      //! Maneuver -- ETA.
      int32_t man_eta;
      //! Last Plan Outcome.
      uint8_t last_outcome;

      static uint16_t
      getIdStatic(void)
      {
        return 560;
      }

      PlanControlState(void);

      PlanControlState*
      clone(void) const
      {
        return new PlanControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanControlState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(man_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Generation.
    class PlanGeneration: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Generate.
        CMD_GENERATE = 0,
        //! Execute.
        CMD_EXECUTE = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Error.
        OP_ERROR = 1,
        //! Success.
        OP_SUCCESS = 2
      };

      //! Command.
      uint8_t cmd;
      //! Operation.
      uint8_t op;
      //! Plan Identifier.
      std::string plan_id;
      //! Parameters.
      std::string params;

      static uint16_t
      getIdStatic(void)
      {
        return 562;
      }

      PlanGeneration(void);

      PlanGeneration*
      clone(void) const
      {
        return new PlanGeneration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanGeneration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanGeneration";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(params);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Leader State.
    class LeaderState: public Message
    {
    public:
      //! Action on the leader state.
      enum ActionontheleaderstateEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Group Name.
      std::string group_name;
      //! Action on the leader state.
      uint8_t op;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic(void)
      {
        return 563;
      }

      LeaderState(void);

      LeaderState*
      clone(void) const
      {
        return new LeaderState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return LeaderState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LeaderState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 81;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Statistics.
    class PlanStatistics: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Before Plan.
        TP_PREPLAN = 0,
        //! During Plan.
        TP_INPLAN = 1,
        //! After Plan.
        TP_POSTPLAN = 2
      };

      //! Properties.
      enum PropertiesBits
      {
        //! Basic Plan.
        PRP_BASIC = 0x00,
        //! Nonlinear.
        PRP_NONLINEAR = 0x01,
        //! Infinite.
        PRP_INFINITE = 0x02,
        //! Cyclical.
        PRP_CYCLICAL = 0x04,
        //! All.
        PRP_ALL = 0x07
      };

      //! Plan Identifier.
      std::string plan_id;
      //! Type.
      uint8_t type;
      //! Properties.
      uint8_t properties;
      //! Durations.
      std::string durations;
      //! Distances.
      std::string distances;
      //! Actions.
      std::string actions;
      //! Fuel.
      std::string fuel;

      static uint16_t
      getIdStatic(void)
      {
        return 564;
      }

      PlanStatistics(void);

      PlanStatistics*
      clone(void) const
      {
        return new PlanStatistics(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PlanStatistics::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanStatistics";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(durations) + IMC::getSerializationSize(distances) + IMC::getSerializationSize(actions) + IMC::getSerializationSize(fuel);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Reported State.
    class ReportedState: public Message
    {
    public:
      //! Source Type.
      enum SourceTypeEnum
      {
        //! Wi-Fi.
        STYPE_WI_FI = 0,
        //! Tracker.
        STYPE_TRACKER = 1,
        //! SMS.
        STYPE_SMS = 2,
        //! Acoustic Modem.
        STYPE_ACOUSTIC_MODEM = 3,
        //! Unknown source.
        STYPE_UNKNOWN = 254
      };

      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp64_t depth;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Reception Time.
      fp64_t rcp_time;
      //! System Identifier.
      std::string sid;
      //! Source Type.
      uint8_t s_type;

      static uint16_t
      getIdStatic(void)
      {
        return 600;
      }

      ReportedState(void);

      ReportedState*
      clone(void) const
      {
        return new ReportedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ReportedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ReportedState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 57;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sid);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Sensor Info.
    class RemoteSensorInfo: public Message
    {
    public:
      //! Id.
      std::string id;
      //! Class.
      std::string sensor_class;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;
      //! Heading.
      fp32_t heading;
      //! Custom Data.
      std::string data;

      static uint16_t
      getIdStatic(void)
      {
        return 601;
      }

      RemoteSensorInfo(void);

      RemoteSensorInfo*
      clone(void) const
      {
        return new RemoteSensorInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RemoteSensorInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteSensorInfo";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(id) + IMC::getSerializationSize(sensor_class) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! AIS Info.
    class AisInfo: public Message
    {
    public:
      //! Message Type.
      std::string msg_type;
      //! Class.
      std::string sensor_class;
      //! MMSI.
      std::string mmsi;
      //! Callsign.
      std::string callsign;
      //! Name.
      std::string name;
      //! Navigation Status.
      uint8_t nav_status;
      //! Type and Cargo.
      uint8_t type_and_cargo;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Course.
      fp32_t course;
      //! Speed.
      fp32_t speed;
      //! Distance.
      fp32_t dist;
      //! Size A Length.
      fp32_t a;
      //! Size B Length.
      fp32_t b;
      //! Size C Width.
      fp32_t c;
      //! Size D Width.
      fp32_t d;
      //! Draught.
      fp32_t draught;

      static uint16_t
      getIdStatic(void)
      {
        return 607;
      }

      AisInfo(void);

      AisInfo*
      clone(void) const
      {
        return new AisInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AisInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AisInfo";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 50;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(msg_type) + IMC::getSerializationSize(sensor_class) + IMC::getSerializationSize(mmsi) + IMC::getSerializationSize(callsign) + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! MapPoint.
    class MapPoint: public Message
    {
    public:
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic(void)
      {
        return 604;
      }

      MapPoint(void);

      MapPoint*
      clone(void) const
      {
        return new MapPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MapPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MapPoint";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 20;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Map Feature.
    class MapFeature: public Message
    {
    public:
      //! FeatureType.
      enum FeatureTypeEnum
      {
        //! Point of Interest.
        FTYPE_POI = 0,
        //! Filled Polygon.
        FTYPE_FILLEDPOLY = 1,
        //! Countoured Polygon.
        FTYPE_CONTOUREDPOLY = 2,
        //! Line.
        FTYPE_LINE = 3,
        //! Transponder.
        FTYPE_TRANSPONDER = 4,
        //! Start Location.
        FTYPE_STARTLOC = 5,
        //! Home Reference.
        FTYPE_HOMEREF = 6
      };

      //! Identifier.
      std::string id;
      //! FeatureType.
      uint8_t feature_type;
      //! RedComponent.
      uint8_t rgb_red;
      //! GreenComponent.
      uint8_t rgb_green;
      //! BlueComponent.
      uint8_t rgb_blue;
      //! Feature.
      MessageList<MapPoint> feature;

      static uint16_t
      getIdStatic(void)
      {
        return 603;
      }

      MapFeature(void);

      MapFeature*
      clone(void) const
      {
        return new MapFeature(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MapFeature::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MapFeature";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(id) + feature.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Map.
    class Map: public Message
    {
    public:
      //! Identifier.
      std::string id;
      //! Features.
      MessageList<MapFeature> features;

      static uint16_t
      getIdStatic(void)
      {
        return 602;
      }

      Map(void);

      Map*
      clone(void) const
      {
        return new Map(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Map::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Map";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(id) + features.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! CCU Event.
    class CcuEvent: public Message
    {
    public:
      //! Event Type.
      enum EventTypeEnum
      {
        //! Log Book Entry Added.
        EVT_LOG_ENTRY = 1,
        //! Plan Added.
        EVT_PLAN_ADDED = 2,
        //! Plan Removed.
        EVT_PLAN_REMOVED = 3,
        //! Plan Changed.
        EVT_PLAN_CHANGED = 4,
        //! Map feature added.
        EVT_MAP_FEATURE_ADDED = 5,
        //! Map feature removed.
        EVT_MAP_FEATURE_REMOVED = 6,
        //! Map feature changed.
        EVT_MAP_FEATURE_CHANGED = 7,
        //! The sender is now teleoperating the vehicle.
        EVT_TELEOPERATION_STARTED = 8,
        //! The sender stopped teleoperating the vehicle.
        EVT_TELEOPERATION_ENDED = 9
      };

      //! Event Type.
      uint8_t type;
      //! Identifier.
      std::string id;
      //! Additional Data.
      InlineMessage<Message> arg;

      static uint16_t
      getIdStatic(void)
      {
        return 606;
      }

      CcuEvent(void);

      CcuEvent*
      clone(void) const
      {
        return new CcuEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CcuEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CcuEvent";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(id) + arg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Vehicle Links.
    class VehicleLinks: public Message
    {
    public:
      //! Local Name.
      std::string localname;
      //! Active Links.
      MessageList<Announce> links;

      static uint16_t
      getIdStatic(void)
      {
        return 650;
      }

      VehicleLinks(void);

      VehicleLinks*
      clone(void) const
      {
        return new VehicleLinks(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return VehicleLinks::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleLinks";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(localname) + links.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Observation.
    class TrexObservation: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      std::string attributes;

      static uint16_t
      getIdStatic(void)
      {
        return 651;
      }

      TrexObservation(void);

      TrexObservation*
      clone(void) const
      {
        return new TrexObservation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexObservation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexObservation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + IMC::getSerializationSize(attributes);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Command.
    class TrexCommand: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Disable TREX.
        OP_DISABLE = 0,
        //! Enable TREX.
        OP_ENABLE = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Goal Id.
      std::string goal_id;
      //! Goal XML.
      std::string goal_xml;

      static uint16_t
      getIdStatic(void)
      {
        return 652;
      }

      TrexCommand(void);

      TrexCommand*
      clone(void) const
      {
        return new TrexCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexCommand";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(goal_id) + IMC::getSerializationSize(goal_xml);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Attribute.
    class TrexAttribute: public Message
    {
    public:
      //! Attribute type.
      enum AttributetypeEnum
      {
        //! Boolean Domain.
        TYPE_BOOL = 1,
        //! Integer Domain.
        TYPE_INT = 2,
        //! Float Domain.
        TYPE_FLOAT = 3,
        //! String Domain.
        TYPE_STRING = 4,
        //! Enumerated Domain.
        TYPE_ENUM = 5
      };

      //! Attribute Name.
      std::string name;
      //! Attribute type.
      uint8_t attr_type;
      //! Minimum.
      std::string min;
      //! Maximum.
      std::string max;

      static uint16_t
      getIdStatic(void)
      {
        return 656;
      }

      TrexAttribute(void);

      TrexAttribute*
      clone(void) const
      {
        return new TrexAttribute(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexAttribute::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexAttribute";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(min) + IMC::getSerializationSize(max);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Token.
    class TrexToken: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      MessageList<TrexAttribute> attributes;

      static uint16_t
      getIdStatic(void)
      {
        return 657;
      }

      TrexToken(void);

      TrexToken*
      clone(void) const
      {
        return new TrexToken(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexToken::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexToken";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + attributes.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Operation.
    class TrexOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Post Token.
        OP_POST_TOKEN = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Operation.
      uint8_t op;
      //! Goal Id.
      std::string goal_id;
      //! Token.
      InlineMessage<TrexToken> token;

      static uint16_t
      getIdStatic(void)
      {
        return 655;
      }

      TrexOperation(void);

      TrexOperation*
      clone(void) const
      {
        return new TrexOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexOperation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(goal_id) + token.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Plan.
    class TrexPlan: public Message
    {
    public:
      //! Reactor name.
      std::string reactor;
      //! Tokens.
      MessageList<TrexToken> tokens;

      static uint16_t
      getIdStatic(void)
      {
        return 658;
      }

      TrexPlan(void);

      TrexPlan*
      clone(void) const
      {
        return new TrexPlan(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TrexPlan::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexPlan";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(reactor) + tokens.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Event.
    class Event: public Message
    {
    public:
      //! Topic.
      std::string topic;
      //! Data.
      std::string data;

      static uint16_t
      getIdStatic(void)
      {
        return 660;
      }

      Event(void);

      Event*
      clone(void) const
      {
        return new Event(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Event::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Event";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(topic) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Compressed Image.
    class CompressedImage: public Message
    {
    public:
      //! Frame Id.
      uint8_t frameid;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 702;
      }

      CompressedImage(void);

      CompressedImage*
      clone(void) const
      {
        return new CompressedImage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CompressedImage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CompressedImage";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Image Transmission Settings.
    class ImageTxSettings: public Message
    {
    public:
      //! Frames Per Second.
      uint8_t fps;
      //! Quality.
      uint8_t quality;
      //! Repetitions.
      uint8_t reps;
      //! Target Size.
      uint8_t tsize;

      static uint16_t
      getIdStatic(void)
      {
        return 703;
      }

      ImageTxSettings(void);

      ImageTxSettings*
      clone(void) const
      {
        return new ImageTxSettings(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ImageTxSettings::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ImageTxSettings";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote State.
    class RemoteState: public Message
    {
    public:
      //! Latitude WGS-84.
      fp32_t lat;
      //! Longitude WGS-84.
      fp32_t lon;
      //! Depth.
      uint8_t depth;
      //! Speed.
      fp32_t speed;
      //! Heading.
      fp32_t psi;

      static uint16_t
      getIdStatic(void)
      {
        return 750;
      }

      RemoteState(void);

      RemoteState*
      clone(void) const
      {
        return new RemoteState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RemoteState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 17;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Target.
    class Target: public Message
    {
    public:
      //! Label.
      std::string label;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;

      static uint16_t
      getIdStatic(void)
      {
        return 800;
      }

      Target(void);

      Target*
      clone(void) const
      {
        return new Target(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Target::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Target";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 29;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(label);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! EntityParameter.
    class EntityParameter: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic(void)
      {
        return 801;
      }

      EntityParameter(void);

      EntityParameter*
      clone(void) const
      {
        return new EntityParameter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityParameter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityParameter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! EntityParameters.
    class EntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic(void)
      {
        return 802;
      }

      EntityParameters(void);

      EntityParameters*
      clone(void) const
      {
        return new EntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! QueryEntityParameters.
    class QueryEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Visibility.
      std::string visibility;
      //! Scope.
      std::string scope;

      static uint16_t
      getIdStatic(void)
      {
        return 803;
      }

      QueryEntityParameters(void);

      QueryEntityParameters*
      clone(void) const
      {
        return new QueryEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return QueryEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(visibility) + IMC::getSerializationSize(scope);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SetEntityParameters.
    class SetEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic(void)
      {
        return 804;
      }

      SetEntityParameters(void);

      SetEntityParameters*
      clone(void) const
      {
        return new SetEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetEntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! SaveEntityParameters.
    class SaveEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 805;
      }

      SaveEntityParameters(void);

      SaveEntityParameters*
      clone(void) const
      {
        return new SaveEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SaveEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SaveEntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Create Session.
    class CreateSession: public Message
    {
    public:
      //! Session Timeout.
      uint32_t timeout;

      static uint16_t
      getIdStatic(void)
      {
        return 806;
      }

      CreateSession(void);

      CreateSession*
      clone(void) const
      {
        return new CreateSession(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CreateSession::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CreateSession";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Close Session.
    class CloseSession: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic(void)
      {
        return 807;
      }

      CloseSession(void);

      CloseSession*
      clone(void) const
      {
        return new CloseSession(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CloseSession::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CloseSession";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Subscription.
    class SessionSubscription: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;
      //! Messages to subscribe.
      std::string messages;

      static uint16_t
      getIdStatic(void)
      {
        return 808;
      }

      SessionSubscription(void);

      SessionSubscription*
      clone(void) const
      {
        return new SessionSubscription(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SessionSubscription::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionSubscription";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(messages);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Keep-Alive.
    class SessionKeepAlive: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic(void)
      {
        return 809;
      }

      SessionKeepAlive(void);

      SessionKeepAlive*
      clone(void) const
      {
        return new SessionKeepAlive(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SessionKeepAlive::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionKeepAlive";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Status.
    class SessionStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Established.
        STATUS_ESTABLISHED = 1,
        //! Closed.
        STATUS_CLOSED = 2
      };

      //! Session Identifier.
      uint32_t sessid;
      //! Status.
      uint8_t status;

      static uint16_t
      getIdStatic(void)
      {
        return 810;
      }

      SessionStatus(void);

      SessionStatus*
      clone(void) const
      {
        return new SessionStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SessionStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Push Entity Parameters.
    class PushEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 811;
      }

      PushEntityParameters(void);

      PushEntityParameters*
      clone(void) const
      {
        return new PushEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PushEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PushEntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Pop Entity Parameters.
    class PopEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 812;
      }

      PopEntityParameters(void);

      PopEntityParameters*
      clone(void) const
      {
        return new PopEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PopEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PopEntityParameters";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! I/O Event.
    class IoEvent: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Input Available.
        IOV_TYPE_INPUT = 1,
        //! Input Error.
        IOV_TYPE_INPUT_ERROR = 2
      };

      //! Type.
      uint8_t type;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 813;
      }

      IoEvent(void);

      IoEvent*
      clone(void) const
      {
        return new IoEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IoEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IoEvent";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamTxFrame.
    class UamTxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Acknowledgement.
        UTF_ACK = 0x01,
        //! Delayed.
        UTF_DELAYED = 0x02,
        //! Forced.
        UTF_FORCED = 0x04
      };

      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 814;
      }

      UamTxFrame(void);

      UamTxFrame*
      clone(void) const
      {
        return new UamTxFrame(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UamTxFrame::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamTxFrame";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamRxFrame.
    class UamRxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Promiscuous.
        URF_PROMISCUOUS = 0x01,
        //! Delayed.
        URF_DELAYED = 0x02
      };

      //! Source System.
      std::string sys_src;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 815;
      }

      UamRxFrame(void);

      UamRxFrame*
      clone(void) const
      {
        return new UamRxFrame(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UamRxFrame::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamRxFrame";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys_src) + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamTxStatus.
    class UamTxStatus: public Message
    {
    public:
      //! Value.
      enum ValueEnum
      {
        //! Transmission Completed.
        UTS_DONE = 0,
        //! Transmission Failed.
        UTS_FAILED = 1,
        //! Transmission Canceled.
        UTS_CANCELED = 2,
        //! Modem is busy.
        UTS_BUSY = 3,
        //! Invalid address.
        UTS_INV_ADDR = 4,
        //! In Progress.
        UTS_IP = 5,
        //! Unsupported operation.
        UTS_UNSUPPORTED = 6,
        //! Invalid transmission size.
        UTS_INV_SIZE = 7,
        //! Message has been sent.
        UTS_SENT = 8,
        //! Message has been acknowledged by the destination.
        UTS_DELIVERED = 9
      };

      //! Sequence Id.
      uint16_t seq;
      //! Value.
      uint8_t value;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 816;
      }

      UamTxStatus(void);

      UamTxStatus*
      clone(void) const
      {
        return new UamTxStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UamTxStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamTxStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(error);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamRxRange.
    class UamRxRange: public Message
    {
    public:
      //! Sequence Id.
      uint16_t seq;
      //! System.
      std::string sys;
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 817;
      }

      UamRxRange(void);

      UamRxRange*
      clone(void) const
      {
        return new UamRxRange(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UamRxRange::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamRxRange";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamTxRange.
    class UamTxRange: public Message
    {
    public:
      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Timeout.
      fp32_t timeout;

      static uint16_t
      getIdStatic(void)
      {
        return 818;
      }

      UamTxRange(void);

      UamTxRange*
      clone(void) const
      {
        return new UamTxRange(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UamTxRange::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamTxRange";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(sys_dst);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Control Parameters.
    class FormCtrlParam: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Request.
        OP_REQ = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REP = 2
      };

      //! Action.
      uint8_t action;
      //! Longitudinal Gain.
      fp32_t longain;
      //! Lateral Gain.
      fp32_t latgain;
      //! Boundary Layer Thickness.
      uint32_t bondthick;
      //! Leader Gain.
      fp32_t leadgain;
      //! Deconfliction Gain.
      fp32_t deconflgain;

      static uint16_t
      getIdStatic(void)
      {
        return 820;
      }

      FormCtrlParam(void);

      FormCtrlParam*
      clone(void) const
      {
        return new FormCtrlParam(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormCtrlParam::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormCtrlParam";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 21;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Evaluation Data.
    class FormationEval: public Message
    {
    public:
      //! Mean position error.
      fp32_t err_mean;
      //! Absolute minimum distance.
      fp32_t dist_min_abs;
      //! Mean minimum distance.
      fp32_t dist_min_mean;

      static uint16_t
      getIdStatic(void)
      {
        return 821;
      }

      FormationEval(void);

      FormationEval*
      clone(void) const
      {
        return new FormationEval(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationEval::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationEval";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Control Parameters.
    class FormationControlParams: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Request.
        OP_REQ = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REP = 2
      };

      //! Action.
      uint8_t action;
      //! Longitudinal Gain.
      fp32_t lon_gain;
      //! Lateral Gain.
      fp32_t lat_gain;
      //! Boundary Layer Thickness.
      fp32_t bond_thick;
      //! Leader Gain.
      fp32_t lead_gain;
      //! Deconfliction Gain.
      fp32_t deconfl_gain;
      //! Acceleration Switch Gain.
      fp32_t accel_switch_gain;
      //! Safety Distance.
      fp32_t safe_dist;
      //! Deconfliction Offset.
      fp32_t deconflict_offset;
      //! Acceleration Safety Margin.
      fp32_t accel_safe_margin;
      //! Maximum Longitudinal Acceleration.
      fp32_t accel_lim_x;

      static uint16_t
      getIdStatic(void)
      {
        return 822;
      }

      FormationControlParams(void);

      FormationControlParams*
      clone(void) const
      {
        return new FormationControlParams(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationControlParams::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationControlParams";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 41;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Evaluation Data.
    class FormationEvaluation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1,
        //! Ready.
        OP_READY = 2,
        //! Executing.
        OP_EXECUTING = 3,
        //! Failure.
        OP_FAILURE = 4
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Mean Position Error.
      fp32_t err_mean;
      //! Absolute Minimum Distance.
      fp32_t dist_min_abs;
      //! Mean Minimum Distance.
      fp32_t dist_min_mean;
      //! Mean Roll Rate.
      fp32_t roll_rate_mean;
      //! Evaluation Time.
      fp32_t time;
      //! Formation Control Parameters.
      InlineMessage<FormationControlParams> controlparams;

      static uint16_t
      getIdStatic(void)
      {
        return 823;
      }

      FormationEvaluation(void);

      FormationEvaluation*
      clone(void) const
      {
        return new FormationEvaluation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FormationEvaluation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationEvaluation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 22;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return controlparams.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! SOI Waypoint.
    class SoiWaypoint: public Message
    {
    public:
      //! Latitude.
      fp32_t lat;
      //! Longitude.
      fp32_t lon;
      //! Time Of Arrival.
      uint32_t eta;
      //! Duration.
      uint16_t duration;

      static uint16_t
      getIdStatic(void)
      {
        return 850;
      }

      SoiWaypoint(void);

      SoiWaypoint*
      clone(void) const
      {
        return new SoiWaypoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SoiWaypoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoiWaypoint";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SOI Plan.
    class SoiPlan: public Message
    {
    public:
      //! Plan Identifier.
      uint16_t plan_id;
      //! Waypoints.
      MessageList<SoiWaypoint> waypoints;

      static uint16_t
      getIdStatic(void)
      {
        return 851;
      }

      SoiPlan(void);

      SoiPlan*
      clone(void) const
      {
        return new SoiPlan(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SoiPlan::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoiPlan";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return waypoints.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! SOI Command.
    class SoiCommand: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        SOITYPE_REQUEST = 1,
        //! Success.
        SOITYPE_SUCCESS = 2,
        //! Error.
        SOITYPE_ERROR = 3
      };

      //! Command.
      enum CommandEnum
      {
        //! Execute Plan.
        SOICMD_EXEC = 1,
        //! Stop Execution.
        SOICMD_STOP = 2,
        //! Set Parameters.
        SOICMD_SET_PARAMS = 3,
        //! Get Parameters.
        SOICMD_GET_PARAMS = 4,
        //! Get Plan.
        SOICMD_GET_PLAN = 5,
        //! Resume Execution.
        SOICMD_RESUME = 6
      };

      //! Type.
      uint8_t type;
      //! Command.
      uint8_t command;
      //! Settings.
      std::string settings;
      //! Plan.
      InlineMessage<SoiPlan> plan;
      //! Extra Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 852;
      }

      SoiCommand(void);

      SoiCommand*
      clone(void) const
      {
        return new SoiCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SoiCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoiCommand";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(settings) + plan.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! SOI State.
    class SoiState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Executing.
        SOISTATE_EXEC = 1,
        //! Idle.
        SOISTATE_IDLE = 2,
        //! Inactive.
        SOISTATE_INACTIVE = 3
      };

      //! State.
      uint8_t state;
      //! Plan Identifier.
      uint16_t plan_id;
      //! Waypoint Identifier.
      uint8_t wpt_id;
      //! Settings Checksum.
      uint16_t settings_chk;

      static uint16_t
      getIdStatic(void)
      {
        return 853;
      }

      SoiState(void);

      SoiState*
      clone(void) const
      {
        return new SoiState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SoiState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoiState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Message Fragment.
    class MessagePart: public Message
    {
    public:
      //! Transmission Unique Id.
      uint8_t uid;
      //! Fragment Number.
      uint8_t frag_number;
      //! Total Number of fragments.
      uint8_t num_frags;
      //! Fragment Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 877;
      }

      MessagePart(void);

      MessagePart*
      clone(void) const
      {
        return new MessagePart(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return MessagePart::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MessagePart";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Neptus Blob.
    class NeptusBlob: public Message
    {
    public:
      //! ContentType.
      std::string content_type;
      //! Content.
      std::vector<char> content;

      static uint16_t
      getIdStatic(void)
      {
        return 888;
      }

      NeptusBlob(void);

      NeptusBlob*
      clone(void) const
      {
        return new NeptusBlob(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return NeptusBlob::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NeptusBlob";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(content_type) + IMC::getSerializationSize(content);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Aborted.
    class Aborted: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 889;
      }

      Aborted(void);

      Aborted*
      clone(void) const
      {
        return new Aborted(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Aborted::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Aborted";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! USBL Angles.
    class UsblAngles: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Bearing.
      fp32_t bearing;
      //! Elevation.
      fp32_t elevation;

      static uint16_t
      getIdStatic(void)
      {
        return 890;
      }

      UsblAngles(void);

      UsblAngles*
      clone(void) const
      {
        return new UsblAngles(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblAngles::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblAngles";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Position.
    class UsblPosition: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 891;
      }

      UsblPosition(void);

      UsblPosition*
      clone(void) const
      {
        return new UsblPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblPosition";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Fix.
    class UsblFix: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Z Units.
      uint8_t z_units;
      //! Z Reference.
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 892;
      }

      UsblFix(void);

      UsblFix*
      clone(void) const
      {
        return new UsblFix(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblFix::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblFix";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Parameters XML.
    class ParametersXml: public Message
    {
    public:
      //! Locale.
      std::string locale;
      //! Configuration Data.
      std::vector<char> config;

      static uint16_t
      getIdStatic(void)
      {
        return 893;
      }

      ParametersXml(void);

      ParametersXml*
      clone(void) const
      {
        return new ParametersXml(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ParametersXml::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ParametersXml";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(locale) + IMC::getSerializationSize(config);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Get Parameters XML.
    class GetParametersXml: public Message
    {
    public:

      static uint16_t
      getIdStatic(void)
      {
        return 894;
      }

      GetParametersXml(void);

      GetParametersXml*
      clone(void) const
      {
        return new GetParametersXml(*this);
      }

      void
      clear(void);

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GetParametersXml::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GetParametersXml";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }
    };

    //! Set Image Coordinates.
    class SetImageCoords: public Message
    {
    public:
      //! Camera Identifier.
      uint8_t camid;
      //! X.
      uint16_t x;
      //! Y.
      uint16_t y;

      static uint16_t
      getIdStatic(void)
      {
        return 895;
      }

      SetImageCoords(void);

      SetImageCoords*
      clone(void) const
      {
        return new SetImageCoords(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SetImageCoords::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetImageCoords";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Get Image Coordinates.
    class GetImageCoords: public Message
    {
    public:
      //! Camera Identifier.
      uint8_t camid;
      //! X.
      uint16_t x;
      //! Y.
      uint16_t y;

      static uint16_t
      getIdStatic(void)
      {
        return 896;
      }

      GetImageCoords(void);

      GetImageCoords*
      clone(void) const
      {
        return new GetImageCoords(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GetImageCoords::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GetImageCoords";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Get World Coordinates.
    class GetWorldCoordinates: public Message
    {
    public:
      //! Tracking.
      uint8_t tracking;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 897;
      }

      GetWorldCoordinates(void);

      GetWorldCoordinates*
      clone(void) const
      {
        return new GetWorldCoordinates(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GetWorldCoordinates::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GetWorldCoordinates";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 29;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Angles Extended.
    class UsblAnglesExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! Local Bearing.
      fp32_t lbearing;
      //! Local Elevation.
      fp32_t lelevation;
      //! Bearing.
      fp32_t bearing;
      //! Elevation.
      fp32_t elevation;
      //! Roll Angle.
      fp32_t phi;
      //! Pitch Angle.
      fp32_t theta;
      //! Yaw Angle.
      fp32_t psi;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic(void)
      {
        return 898;
      }

      UsblAnglesExtended(void);

      UsblAnglesExtended*
      clone(void) const
      {
        return new UsblAnglesExtended(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblAnglesExtended::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblAnglesExtended";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Position Extended.
    class UsblPositionExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;
      //! N.
      fp32_t n;
      //! E.
      fp32_t e;
      //! D.
      fp32_t d;
      //! Roll Angle.
      fp32_t phi;
      //! Pitch Angle.
      fp32_t theta;
      //! Yaw Angle.
      fp32_t psi;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic(void)
      {
        return 899;
      }

      UsblPositionExtended(void);

      UsblPositionExtended*
      clone(void) const
      {
        return new UsblPositionExtended(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblPositionExtended::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblPositionExtended";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 40;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Fix Extended.
    class UsblFixExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Z Units.
      uint8_t z_units;
      //! Z Reference.
      fp32_t z;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic(void)
      {
        return 900;
      }

      UsblFixExtended(void);

      UsblFixExtended*
      clone(void) const
      {
        return new UsblFixExtended(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblFixExtended::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblFixExtended";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 25;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Modem Configuration.
    class UsblModem: public Message
    {
    public:
      //! Modem Name.
      std::string name;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic(void)
      {
        return 901;
      }

      UsblModem(void);

      UsblModem*
      clone(void) const
      {
        return new UsblModem(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblModem::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblModem";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 21;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Configuration.
    class UsblConfig: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Set LBL Configuration.
        OP_SET_CFG = 0,
        //! Retrieve LBL Configuration.
        OP_GET_CFG = 1,
        //! Reply to a GET command.
        OP_CUR_CFG = 2
      };

      //! Operation.
      uint8_t op;
      //! Modems.
      MessageList<UsblModem> modems;

      static uint16_t
      getIdStatic(void)
      {
        return 902;
      }

      UsblConfig(void);

      UsblConfig*
      clone(void) const
      {
        return new UsblConfig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UsblConfig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblConfig";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return modems.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Dissolved Organic Matter.
    class DissolvedOrganicMatter: public Message
    {
    public:
      //! Type of measurement.
      enum TypeofmeasurementEnum
      {
        //! Colored.
        DT_COLORED = 0,
        //! Fluorescent.
        DT_FLUORESCENT = 1
      };

      //! Value.
      fp32_t value;
      //! Type of measurement.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 903;
      }

      DissolvedOrganicMatter(void);

      DissolvedOrganicMatter*
      clone(void) const
      {
        return new DissolvedOrganicMatter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Optical Backscattering Coefficient.
    class OpticalBackscatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 904;
      }

      OpticalBackscatter(void);

      OpticalBackscatter*
      clone(void) const
      {
        return new OpticalBackscatter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return OpticalBackscatter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "OpticalBackscatter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Tachograph.
    class Tachograph: public Message
    {
    public:
      //! Last Service Timestamp.
      fp64_t timestamp_last_service;
      //! Time - Next Service.
      fp32_t time_next_service;
      //! Time Motor - Next Service.
      fp32_t time_motor_next_service;
      //! Time Idle - Ground.
      fp32_t time_idle_ground;
      //! Time Idle - Air.
      fp32_t time_idle_air;
      //! Time Idle - Water.
      fp32_t time_idle_water;
      //! Time Idle - Underwater.
      fp32_t time_idle_underwater;
      //! Time Idle - Unknown.
      fp32_t time_idle_unknown;
      //! Time Motor - Ground.
      fp32_t time_motor_ground;
      //! Time Motor - Air.
      fp32_t time_motor_air;
      //! Time Motor - Water.
      fp32_t time_motor_water;
      //! Time Motor - Underwater.
      fp32_t time_motor_underwater;
      //! Time Motor - Unknown.
      fp32_t time_motor_unknown;
      //! Recorded RPMs - Minimum.
      int16_t rpm_min;
      //! Recorded RPMs - Maximum.
      int16_t rpm_max;
      //! Recorded Depth - Maximum.
      fp32_t depth_max;

      static uint16_t
      getIdStatic(void)
      {
        return 905;
      }

      Tachograph(void);

      Tachograph*
      clone(void) const
      {
        return new Tachograph(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Tachograph::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Tachograph";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 64;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! APM Status.
    class ApmStatus: public Message
    {
    public:
      //! Severity.
      enum SeverityEnum
      {
        //! Emergency.
        APM_EMERGENCY = 0,
        //! Alert.
        APM_ALERT = 1,
        //! Critical.
        APM_CRITICAL = 2,
        //! Error.
        APM_ERROR = 3,
        //! Warning.
        APM_WARNING = 4,
        //! Notice.
        APM_NOTICE = 5,
        //! Info.
        APM_INFO = 6,
        //! Debug.
        APM_DEBUG = 7
      };

      //! Severity.
      uint8_t severity;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 906;
      }

      ApmStatus(void);

      ApmStatus*
      clone(void) const
      {
        return new ApmStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ApmStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ApmStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SADC Readings.
    class SadcReadings: public Message
    {
    public:
      //! Gain.
      enum GainEnum
      {
        //! x1.
        GAIN_X1 = 0,
        //! x10.
        GAIN_X10 = 1,
        //! x100.
        GAIN_X100 = 2
      };

      //! Channel.
      int8_t channel;
      //! Value.
      int32_t value;
      //! Gain.
      uint8_t gain;

      static uint16_t
      getIdStatic(void)
      {
        return 907;
      }

      SadcReadings(void);

      SadcReadings*
      clone(void) const
      {
        return new SadcReadings(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SadcReadings::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SadcReadings";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! DMS Detection.
    class DmsDetection: public Message
    {
    public:
      //! Channel 1.
      fp32_t ch01;
      //! Channel 2.
      fp32_t ch02;
      //! Channel 3.
      fp32_t ch03;
      //! Channel 4.
      fp32_t ch04;
      //! Channel 5.
      fp32_t ch05;
      //! Channel 6.
      fp32_t ch06;
      //! Channel 7.
      fp32_t ch07;
      //! Channel 8.
      fp32_t ch08;
      //! Channel 9.
      fp32_t ch09;
      //! Channel 10.
      fp32_t ch10;
      //! Channel 11.
      fp32_t ch11;
      //! Channel 12.
      fp32_t ch12;
      //! Channel 13.
      fp32_t ch13;
      //! Channel 14.
      fp32_t ch14;
      //! Channel 15.
      fp32_t ch15;
      //! Channel 16.
      fp32_t ch16;

      static uint16_t
      getIdStatic(void)
      {
        return 908;
      }

      DmsDetection(void);

      DmsDetection*
      clone(void) const
      {
        return new DmsDetection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DmsDetection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DmsDetection";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 64;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Home Position.
    class HomePosition: public Message
    {
    public:
      //! Action on the vehicle home position.
      enum ActiononthevehiclehomepositionEnum
      {
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the vehicle home position.
      uint8_t op;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic(void)
      {
        return 909;
      }

      HomePosition(void);

      HomePosition*
      clone(void) const
      {
        return new HomePosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return HomePosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "HomePosition";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 29;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPIO State.
    class GpioState: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2000;
      }

      GpioState(void);

      GpioState*
      clone(void) const
      {
        return new GpioState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpioState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpioState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Get GPIO State.
    class GpioStateGet: public Message
    {
    public:
      //! Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 2001;
      }

      GpioStateGet(void);

      GpioStateGet*
      clone(void) const
      {
        return new GpioStateGet(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpioStateGet::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpioStateGet";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set GPIO State.
    class GpioStateSet: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2002;
      }

      GpioStateSet(void);

      GpioStateSet*
      clone(void) const
      {
        return new GpioStateSet(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return GpioStateSet::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpioStateSet";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Colored Dissolved Organic Matter.
    class ColoredDissolvedOrganicMatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2003;
      }

      ColoredDissolvedOrganicMatter(void);

      ColoredDissolvedOrganicMatter*
      clone(void) const
      {
        return new ColoredDissolvedOrganicMatter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ColoredDissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ColoredDissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fluorescent Dissolved Organic Matter.
    class FluorescentDissolvedOrganicMatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2004;
      }

      FluorescentDissolvedOrganicMatter(void);

      FluorescentDissolvedOrganicMatter*
      clone(void) const
      {
        return new FluorescentDissolvedOrganicMatter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return FluorescentDissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FluorescentDissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Wave Profile.
    class WaveProfile: public Message
    {
    public:
      //! Amplitude.
      fp32_t ampl;
      //! Direction.
      fp32_t dir;
      //! Frequency.
      fp32_t freq;

      static uint16_t
      getIdStatic(void)
      {
        return 2005;
      }

      WaveProfile(void);

      WaveProfile*
      clone(void) const
      {
        return new WaveProfile(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return WaveProfile::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WaveProfile";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Total Magnetic Field Intensity.
    class TotalMagIntensity: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2006;
      }

      TotalMagIntensity(void);

      TotalMagIntensity*
      clone(void) const
      {
        return new TotalMagIntensity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TotalMagIntensity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TotalMagIntensity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power.
    class Power: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 910;
      }

      Power(void);

      Power*
      clone(void) const
      {
        return new Power(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Power::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Power";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Estimated Wave Frequency.
    class EstimatedFreq: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 911;
      }

      EstimatedFreq(void);

      EstimatedFreq*
      clone(void) const
      {
        return new EstimatedFreq(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return EstimatedFreq::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EstimatedFreq";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Relay State.
    class RelayState: public Message
    {
    public:
      //! ID.
      int8_t id;
      //! State.
      int8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 912;
      }

      RelayState(void);

      RelayState*
      clone(void) const
      {
        return new RelayState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RelayState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelayState";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2;
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Relative Wind.
    class RelativeWind: public Message
    {
    public:
      //! Angle.
      fp32_t angle;
      //! Speed.
      fp32_t speed;

      static uint16_t
      getIdStatic(void)
      {
        return 914;
      }

      RelativeWind(void);

      RelativeWind*
      clone(void) const
      {
        return new RelativeWind(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return RelativeWind::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelativeWind";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Absolute Wind.
    class AbsoluteWind: public Message
    {
    public:
      //! Direction.
      fp32_t dir;
      //! Speed.
      fp32_t speed;

      static uint16_t
      getIdStatic(void)
      {
        return 919;
      }

      AbsoluteWind(void);

      AbsoluteWind*
      clone(void) const
      {
        return new AbsoluteWind(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AbsoluteWind::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AbsoluteWind";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Current Velocity.
    class CurrentVelocity: public Message
    {
    public:
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z1.
      fp32_t z1;
      //! Z2.
      fp32_t z2;

      static uint16_t
      getIdStatic(void)
      {
        return 915;
      }

      CurrentVelocity(void);

      CurrentVelocity*
      clone(void) const
      {
        return new CurrentVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CurrentVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CurrentVelocity";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Collision Avoidance.
    class CollisionAvoidance: public Message
    {
    public:
      //! MMSI.
      std::string mmsi;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Speed.
      fp32_t speed;
      //! Course.
      fp32_t course;
      //! Distance.
      fp32_t dist;
      //! Length.
      fp32_t length;
      //! Width.
      fp32_t width;
      //! Obstacle vector size.
      fp32_t o_vect;

      static uint16_t
      getIdStatic(void)
      {
        return 916;
      }

      CollisionAvoidance(void);

      CollisionAvoidance*
      clone(void) const
      {
        return new CollisionAvoidance(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CollisionAvoidance::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CollisionAvoidance";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 48;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(mmsi);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! ENC Awareness.
    class ENCAwareness: public Message
    {
    public:
      //! Depth at location.
      std::string depth_at_loc;
      //! Danger.
      std::string danger;

      static uint16_t
      getIdStatic(void)
      {
        return 917;
      }

      ENCAwareness(void);

      ENCAwareness*
      clone(void) const
      {
        return new ENCAwareness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ENCAwareness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ENCAwareness";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(depth_at_loc) + IMC::getSerializationSize(danger);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Heave Displacement.
    class Heave: public Message
    {
    public:
      //! Heave.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 918;
      }

      Heave(void);

      Heave*
      clone(void) const
      {
        return new Heave(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Heave::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Heave";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Backscatter.
    class AcousticBackscatter: public Message
    {
    public:
      //! Beam 1.
      fp32_t beam1;
      //! Beam 2.
      fp32_t beam2;
      //! Beam 3.
      fp32_t beam3;
      //! Beam 4.
      fp32_t beam4;

      static uint16_t
      getIdStatic(void)
      {
        return 1011;
      }

      AcousticBackscatter(void);

      AcousticBackscatter*
      clone(void) const
      {
        return new AcousticBackscatter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return AcousticBackscatter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticBackscatter";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Correlation.
    class Correlation: public Message
    {
    public:
      //! Beam 1.
      uint8_t beam1;
      //! Beam 2.
      uint8_t beam2;
      //! Beam 3.
      uint8_t beam3;
      //! Beam 4.
      uint8_t beam4;

      static uint16_t
      getIdStatic(void)
      {
        return 1012;
      }

      Correlation(void);

      Correlation*
      clone(void) const
      {
        return new Correlation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Correlation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Correlation";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! ADCP Beam Measurements.
    class ADCPBeam: public Message
    {
    public:
      //! Water Velocity.
      fp32_t vel;
      //! Amplitude.
      fp32_t amp;
      //! Correlation.
      uint8_t cor;

      static uint16_t
      getIdStatic(void)
      {
        return 1016;
      }

      ADCPBeam(void);

      ADCPBeam*
      clone(void) const
      {
        return new ADCPBeam(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ADCPBeam::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ADCPBeam";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Current Profile Cell.
    class CurrentProfileCell: public Message
    {
    public:
      //! Cell Position.
      fp32_t pos;
      //! Beams Measurements.
      MessageList<ADCPBeam> beams;

      static uint16_t
      getIdStatic(void)
      {
        return 1014;
      }

      CurrentProfileCell(void);

      CurrentProfileCell*
      clone(void) const
      {
        return new CurrentProfileCell(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CurrentProfileCell::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CurrentProfileCell";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return beams.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Current Profile.
    class CurrentProfile: public Message
    {
    public:
      //! Coordinate System.
      enum CoordinateSystemBits
      {
        //! xyz.
        UTF_XYZ = 0x01,
        //! beams.
        UTF_BEAMS = 0x02
      };

      //! Number of Beams.
      uint8_t beams;
      //! Number of Cells.
      uint8_t cells;
      //! Coordinate System.
      uint8_t coord_sys;
      //! Profile.
      MessageList<CurrentProfileCell> prof;

      static uint16_t
      getIdStatic(void)
      {
        return 1015;
      }

      CurrentProfile(void);

      CurrentProfile*
      clone(void) const
      {
        return new CurrentProfile(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CurrentProfile::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CurrentProfile";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return prof.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TBR Fish Tag.
    class TBRFishTag: public Message
    {
    public:
      //! Transmit Protocol.
      enum TransmitProtocolEnum
      {
        //! R256.
        TBR_R256 = 1,
        //! R04K.
        TBR_R04K = 2,
        //! R64K.
        TBR_R64K = 4,
        //! R01M.
        TBR_R01M = 5,
        //! S256.
        TBR_S256 = 6,
        //! S64K.
        TBR_S64K = 3,
        //! HS256.
        TBR_HS256 = 7,
        //! DS256.
        TBR_DS256 = 8
      };

      //! TBR serial number.
      uint32_t serial_no;
      //! UNIX Timestamp.
      uint32_t unix_timestamp;
      //! Millisecond.
      uint16_t millis;
      //! Transmit Protocol.
      uint8_t trans_protocol;
      //! Transmitter ID.
      uint32_t trans_id;
      //! Transmitter Data.
      uint16_t trans_data;
      //! Signal to Noise Ratio.
      uint8_t snr;
      //! Transmitter Detection Frequency.
      uint8_t trans_freq;
      //! Receiver Memory Address.
      uint16_t recv_mem_addr;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;

      static uint16_t
      getIdStatic(void)
      {
        return 2007;
      }

      TBRFishTag(void);

      TBRFishTag*
      clone(void) const
      {
        return new TBRFishTag(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TBRFishTag::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TBRFishTag";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 37;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TBR Sensor Reading.
    class TBRSensor: public Message
    {
    public:
      //! TBR serial number.
      uint32_t serial_no;
      //! UNIX Timestamp.
      uint32_t unix_timestamp;
      //! Temperature.
      fp32_t temperature;
      //! Average noise level.
      uint8_t avg_noise_level;
      //! Peak noise level,.
      uint8_t peak_noise_level;
      //! Receiver listening frequency.
      uint8_t recv_listen_freq;
      //! Receiver Memory Address.
      uint16_t recv_mem_addr;

      static uint16_t
      getIdStatic(void)
      {
        return 2008;
      }

      TBRSensor(void);

      TBRSensor*
      clone(void) const
      {
        return new TBRSensor(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return TBRSensor::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TBRSensor";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 17;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Iridium State Reports.
    class IridiumReport: public Message
    {
    public:
      //! Frequency.
      uint32_t frequency;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 2009;
      }

      IridiumReport(void);

      IridiumReport*
      clone(void) const
      {
        return new IridiumReport(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return IridiumReport::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumReport";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Communication Restriction.
    class CommRestriction: public Message
    {
    public:
      //! Restricted Communication Means.
      enum RestrictedCommunicationMeansBits
      {
        //! Satellite.
        MEAN_SATELLITE = 0x01,
        //! Acoustic.
        MEAN_ACOUSTIC = 0x02,
        //! WiFi.
        MEAN_WIFI = 0x04,
        //! GSM.
        MEAN_GSM = 0x08
      };

      //! Restricted Communication Means.
      uint8_t restriction;
      //! Reason.
      std::string reason;

      static uint16_t
      getIdStatic(void)
      {
        return 2010;
      }

      CommRestriction(void);

      CommRestriction*
      clone(void) const
      {
        return new CommRestriction(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return CommRestriction::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CommRestriction";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(reason);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! L3 Scientific Sensors.
    class ScienceSensors: public Message
    {
    public:
      //! ADCP.
      int8_t adcp;
      //! ADCP duration.
      uint32_t adcp_dur;
      //! ADCP activation frequency.
      uint32_t adcp_fr;
      //! CTD.
      int8_t ctd;
      //! CTD duration.
      uint32_t ctd_dur;
      //! CTD activation frequency.
      uint32_t ctd_fr;
      //! OPTODE.
      int8_t opt;
      //! OPTODE duration.
      uint32_t opt_dur;
      //! OPTODE activation frequency.
      uint32_t opt_fr;
      //! TBLive.
      int8_t tbl;
      //! TBLive duration.
      uint32_t tbl_dur;
      //! TBLive activation frequency.
      uint32_t tbl_fr;
      //! EcoPuck.
      int8_t eco;
      //! EcoPuck duration.
      uint32_t eco_dur;
      //! EcoPuck activation frequency.
      uint32_t eco_fr;
      //! EcoPAR.
      int8_t par;
      //! EcoPAR duration.
      uint32_t par_dur;
      //! EcoPAR activation frequency.
      uint32_t par_fr;

      static uint16_t
      getIdStatic(void)
      {
        return 2011;
      }

      ScienceSensors(void);

      ScienceSensors*
      clone(void) const
      {
        return new ScienceSensors(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ScienceSensors::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ScienceSensors";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 54;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Reply L3 Scientific Sensors.
    class ScienceSensorsReply: public Message
    {
    public:
      //! ADCP.
      int8_t adcp;
      //! ADCP duration.
      uint32_t adcp_dur;
      //! ADCP activation frequency.
      uint32_t adcp_fr;
      //! CTD.
      int8_t ctd;
      //! CTD duration.
      uint32_t ctd_dur;
      //! CTD activation frequency.
      uint32_t ctd_fr;
      //! OPTODE.
      int8_t opt;
      //! OPTODE duration.
      uint32_t opt_dur;
      //! OPTODE activation frequency.
      uint32_t opt_fr;
      //! TBLive.
      int8_t tbl;
      //! TBLive duration.
      uint32_t tbl_dur;
      //! TBLive activation frequency.
      uint32_t tbl_fr;
      //! EcoPuck.
      int8_t eco;
      //! EcoPuck duration.
      uint32_t eco_dur;
      //! EcoPuck activation frequency.
      uint32_t eco_fr;
      //! EcoPAR.
      int8_t par;
      //! EcoPAR duration.
      uint32_t par_dur;
      //! EcoPAR activation frequency.
      uint32_t par_fr;

      static uint16_t
      getIdStatic(void)
      {
        return 2012;
      }

      ScienceSensorsReply(void);

      ScienceSensorsReply*
      clone(void) const
      {
        return new ScienceSensorsReply(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return ScienceSensorsReply::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ScienceSensorsReply";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 54;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Photosynthetically Active Radiation.
    class PAR: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2013;
      }

      PAR(void);

      PAR*
      clone(void) const
      {
        return new PAR(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return PAR::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PAR";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4;
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Single Current Cell.
    class SingleCurrentCell: public Message
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Cell Depth.
      std::string depth;
      //! Water Velocity.
      std::string vel;
      //! Direction.
      std::string dir;

      static uint16_t
      getIdStatic(void)
      {
        return 2014;
      }

      SingleCurrentCell(void);

      SingleCurrentCell*
      clone(void) const
      {
        return new SingleCurrentCell(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return SingleCurrentCell::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SingleCurrentCell";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(depth) + IMC::getSerializationSize(vel) + IMC::getSerializationSize(dir);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Gamma Gain Scheduling.
    class Gamma: public Message
    {
    public:
      //! Source.
      std::string source;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Ground Speed.
      fp32_t sog;
      //! Current Longitudinal Speed.
      fp32_t uc;
      //! Cell Depth.
      fp32_t depth;
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 2015;
      }

      Gamma(void);

      Gamma*
      clone(void) const
      {
        return new Gamma(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Gamma::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Gamma";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(source);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Imu.
    class Imu: public Message
    {
    public:
      //! Acceleration.
      InlineMessage<Acceleration> acceleration;
      //! AngularVelocity.
      InlineMessage<AngularVelocity> angular_velocity;
      //! Temperature.
      InlineMessage<Temperature> temperature;

      static uint16_t
      getIdStatic(void)
      {
        return 1310;
      }

      Imu(void);

      Imu*
      clone(void) const
      {
        return new Imu(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return Imu::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Imu";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return acceleration.getSerializationSize() + angular_velocity.getSerializationSize() + temperature.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! u-blox DOP.
    class UbxDOP: public Message
    {
    public:
      //! Geometric DOP.
      fp32_t gdop;
      //! Position DOP.
      fp32_t pdop;
      //! Time DOP.
      fp32_t tdop;
      //! Vertical DOP.
      fp32_t vdop;
      //! Horizontal DOP.
      fp32_t hdop;
      //! North DOP.
      fp32_t ndop;
      //! East DOP.
      fp32_t edop;

      static uint16_t
      getIdStatic(void)
      {
        return 1311;
      }

      UbxDOP(void);

      UbxDOP*
      clone(void) const
      {
        return new UbxDOP(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxDOP::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxDOP";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! u-blox survey-in data.
    class UbxSvIn: public Message
    {
    public:
      //! Current mean ECEF X coordinate.
      fp64_t meanx;
      //! Current mean ECEF Y coordinate.
      fp64_t meany;
      //! Current mean ECEF Z coordinate.
      fp64_t meanz;
      //! Passed observation time.
      uint32_t dur;
      //! Mean accuracy.
      fp32_t meanacc;
      //! Observations used.
      uint32_t obs;
      //! Survey-in position validity.
      uint8_t valid;
      //! Survey-in active.
      uint8_t active;

      static uint16_t
      getIdStatic(void)
      {
        return 1312;
      }

      UbxSvIn(void);

      UbxSvIn*
      clone(void) const
      {
        return new UbxSvIn(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxSvIn::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxSvIn";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 38;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! u-blox navigation status.
    class UbxStatus: public Message
    {
    public:
      //! Gps Fix Type.
      enum GpsFixTypeEnum
      {
        //! No GPS fix.
        GPSFIXTYPE_NO_FIX = 0,
        //! Dead reckoning only.
        GPSFIXTYPE_DR_ONLY = 1,
        //! Position fix 2D.
        GPSFIXTYPE_FIX_2D = 2,
        //! Position fix 3D.
        GPSFIXTYPE_FIX_3D = 3,
        //! GPS and dead reckoning combined.
        GPSFIXTYPE_GPS_DR_COMBINED = 4,
        //! Time only fix.
        GPSFIXTYPE_TIME_ONLY = 5
      };

      //! Navigation Status Flags.
      enum NavigationStatusFlagsBits
      {
        //! Position and velocity valid and within DOP and accuracy masks.
        NAV_STATUS_GPS_FIX_OK = 0x01,
        //! Differential corrections applied.
        NAV_STATUS_DIFF_SOLN = 0x02,
        //! Week number set.
        NAV_STATUS_WKN_SET = 0x04,
        //! Time of week set.
        NAV_STATUS_TOW_SET = 0x08
      };

      //! Gps Fix Type.
      uint8_t gpsfixtype;
      //! Navigation Status Flags.
      uint8_t flags;
      //! Differential corrections available.
      uint8_t diffcorr;

      static uint16_t
      getIdStatic(void)
      {
        return 1313;
      }

      UbxStatus(void);

      UbxStatus*
      clone(void) const
      {
        return new UbxStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxStatus";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! u-blox single GNSS signal info.
    class gnssSignal: public Message
    {
    public:
      //! Signal Quality Indicator.
      enum SignalQualityIndicatorEnum
      {
        //! No signal.
        SIG_NO_SIG = 0,
        //! Searching signal.
        SIG_SEARCHING = 1,
        //! Signal aquired.
        SIG_AQUIRED = 2,
        //! Signal detected but unusable.
        SIG_DETECTED = 3,
        //! Code locked and time synchronized.
        SIG_CODE_LOCK = 4,
        //! Code and carrier locked and time synchronized (5).
        SIG_CODE_CARRIER_LOCK5 = 5,
        //! Code and carrier locked and time synchronized (6).
        SIG_CODE_CARRIER_LOCK6 = 6,
        //! Code and carrier locked and time synchronized (7).
        SIG_CODE_CARRIER_LOCK7 = 7
      };

      //! Correction Source.
      enum CorrectionSourceEnum
      {
        //! No corrections.
        CORR_NONE = 0,
        //! SBAS corrections.
        CORR_SBAS = 1,
        //! BeiDou corrections.
        CORR_BEIDOU = 2,
        //! RTCM2 corrections.
        CORR_RTCM2 = 3,
        //! RTCM3 OSR corrections.
        CORR_RTCM3_OSR = 4,
        //! RTCM2 SSR corrections.
        CORR_RTCM3_SSR = 5,
        //! QZSS SLAS corrections.
        CORR_QZSS_SLAS = 6
      };

      //! Ionospheric Model Used.
      enum IonosphericModelUsedEnum
      {
        //! No model.
        IONOMODEL_NONE = 0,
        //! Klobuchar model transmitted by GPS.
        IONOMODEL_KLOBUCHAR_GPS = 1,
        //! SBAS model.
        IONOMODEL_SBAS = 2,
        //! Klobuchar model transmitted by BeiDou.
        IONOMODEL_KLOBUCHAR_BEIDOU = 3,
        //! Iono delay derived from dual frequency observations.
        IONOMODEL_DUAL_FREQ = 8
      };

      //! Signal Health.
      enum SignalHealthEnum
      {
        //! Unknown health.
        HEALTH_UNKNOWN = 0,
        //! Signal healthy.
        HEALTH_HEALTHY = 1,
        //! Signal unhealthy.
        HEALTH_UNHEALTHY = 2
      };

      //! Signal Flags.
      enum SignalFlagsBits
      {
        //! Pseudorange has been smoothed.
        SIGFLAG_PR_SMOOTHED = 0x01,
        //! Pseudorange has been used.
        SIGFLAG_PR_USED = 0x02,
        //! Carrier has been used.
        SIGFLAG_CR_USED = 0x04,
        //! Doppler has been used.
        SIGFLAG_DO_USED = 0x08,
        //! Pseudorange corrections used.
        SIGFLAG_PR_CORR_USED = 0x10,
        //! Carrier corrections used.
        SIGFLAG_CR_CORR_USED = 0x20,
        //! Doppler corrections used.
        SIGFLAG_DO_CORR_USED = 0x40
      };

      //! GNSS identifier.
      uint8_t gnssid;
      //! Satellite identifier.
      uint8_t svid;
      //! Signal identifier.
      uint8_t sigid;
      //! Frequency identifier.
      uint8_t freqid;
      //! Pseudorange residual.
      fp32_t prres;
      //! Carrier-to-noise density ratio.
      uint8_t cno;
      //! Signal Quality Indicator.
      uint8_t qualityind;
      //! Correction Source.
      uint8_t corrsource;
      //! Ionospheric Model Used.
      uint8_t ionomodel;
      //! Signal Health.
      uint8_t health;
      //! Signal Flags.
      uint8_t sigflags;

      static uint16_t
      getIdStatic(void)
      {
        return 1314;
      }

      gnssSignal(void);

      gnssSignal*
      clone(void) const
      {
        return new gnssSignal(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return gnssSignal::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "gnssSignal";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! u-blox signal information.
    class UbxSig: public Message
    {
    public:
      //! Number of signals.
      uint8_t numsigs;
      //! Signals.
      MessageList<gnssSignal> sigs;

      static uint16_t
      getIdStatic(void)
      {
        return 1315;
      }

      UbxSig(void);

      UbxSig*
      clone(void) const
      {
        return new UbxSig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxSig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxSig";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return sigs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! u-blox single GNSS satellite info.
    class gnssSatellite: public Message
    {
    public:
      //! GNSS identifier.
      uint8_t gnssid;
      //! Satellite identifier.
      uint8_t svid;
      //! Elevation.
      fp32_t elev;
      //! Azimuth.
      fp32_t azim;

      static uint16_t
      getIdStatic(void)
      {
        return 1316;
      }

      gnssSatellite(void);

      gnssSatellite*
      clone(void) const
      {
        return new gnssSatellite(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return gnssSatellite::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "gnssSatellite";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! u-blox satellite information.
    class UbxSat: public Message
    {
    public:
      //! Number of satellites.
      uint8_t numsvs;
      //! Satellites.
      MessageList<gnssSatellite> svs;

      static uint16_t
      getIdStatic(void)
      {
        return 1317;
      }

      UbxSat(void);

      UbxSat*
      clone(void) const
      {
        return new UbxSat(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxSat::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxSat";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return svs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! u-blox relative position in NED.
    class UbxRelPosNED: public Message
    {
    public:
      //! Carrier Phase Range Solution Status.
      enum CarrierPhaseRangeSolutionStatusEnum
      {
        //! No carrier phase range solution.
        CARR_PHASE_NONE = 0,
        //! Carrier phase range solution with floating ambiguities.
        CARR_PHASE_FLOAT = 1,
        //! Carrier phase range solution with fixed ambiguities.
        CARR_PHASE_FIX = 2
      };

      //! Reference station Id.
      uint16_t refstationid;
      //! GPS time of week.
      uint32_t itow;
      //! North component of relative position vector.
      fp64_t relposn;
      //! East component of relative position vector.
      fp64_t relpose;
      //! Down component of relative position vector.
      fp64_t relposd;
      //! Length of the relative position vector.
      fp64_t relposlength;
      //! Heading of the relative position vector.
      fp32_t relposheading;
      //! Accuracy of relative position North component.
      fp32_t accn;
      //! Accuracy of relative position East component.
      fp32_t acce;
      //! Accuracy of relative position Down component.
      fp32_t accd;
      //! Accuracy of length of the relative position vector.
      fp32_t acclength;
      //! Accuracy of heading of the relative position vector.
      fp32_t accheading;
      //! Fix valid within DOP and accuracy masks.
      uint8_t gnssfixok;
      //! Differential corrections applied.
      uint8_t diffsoln;
      //! Relative position and accuracy valid.
      uint8_t relposvalid;
      //! Moving baseline mode.
      uint8_t ismoving;
      //! Extrapolated reference position used.
      uint8_t refposmiss;
      //! Extrapolated reference observations used.
      uint8_t refobsmiss;
      //! RelPosHeading is valid.
      uint8_t relposheadingvalid;
      //! Carrier Phase Range Solution Status.
      uint8_t carrsoln;

      static uint16_t
      getIdStatic(void)
      {
        return 1318;
      }

      UbxRelPosNED(void);

      UbxRelPosNED*
      clone(void) const
      {
        return new UbxRelPosNED(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return UbxRelPosNED::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UbxRelPosNED";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 70;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Dynamic Obstacles Vector.
    class DynObsVec: public Message
    {
    public:
      //! Obstacle List.
      MessageList<CollisionAvoidance> obstacles;

      static uint16_t
      getIdStatic(void)
      {
        return 1000;
      }

      DynObsVec(void);

      DynObsVec*
      clone(void) const
      {
        return new DynObsVec(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return DynObsVec::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DynObsVec";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return obstacles.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Negotiation data.
    class NegotiationData: public Message
    {
    public:
      //! MMSI.
      std::string mmsi;
      //! Intended Course.
      fp32_t cog_int;
      //! Intended Speed.
      fp32_t sog_int;
      //! Negotiation state.
      std::string state;

      static uint16_t
      getIdStatic(void)
      {
        return 1010;
      }

      NegotiationData(void);

      NegotiationData*
      clone(void) const
      {
        return new NegotiationData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      int
      validate(void) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      getId(void) const
      {
        return NegotiationData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NegotiationData";
      }

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8;
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return IMC::getSerializationSize(mmsi) + IMC::getSerializationSize(state);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };
  }
}

#endif
