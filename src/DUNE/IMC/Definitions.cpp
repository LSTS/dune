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
// IMC XML MD5: 4ab0411c6256574a5ac1785347d0a9f2                            *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

// DUNE headers.
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Utils/Utils.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Serialization.hpp>

namespace DUNE
{
  namespace IMC
  {
    EntityState::EntityState(void)
    {
      m_header.mgid = 1;
      clear();
    }

    void
    EntityState::clear(void)
    {
      state = 0;
      flags = 0;
      description.clear();
    }

    bool
    EntityState::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityState& other__ = static_cast<const EntityState&>(msg__);
      if (state != other__.state) return false;
      if (flags != other__.flags) return false;
      if (description != other__.description) return false;
      return true;
    }

    int
    EntityState::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(description, ptr__);
      return ptr__;
    }

    uint16_t
    EntityState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(description, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(description, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "description", description, nindent__);
    }

    QueryEntityState::QueryEntityState(void)
    {
      m_header.mgid = 2;
      clear();
    }

    void
    QueryEntityState::clear(void)
    {
    }

    int
    QueryEntityState::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryEntityState::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    QueryEntityState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    QueryEntityState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    EntityInfo::EntityInfo(void)
    {
      m_header.mgid = 3;
      clear();
    }

    void
    EntityInfo::clear(void)
    {
      id = 0;
      label.clear();
      component.clear();
      act_time = 0;
      deact_time = 0;
    }

    bool
    EntityInfo::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityInfo& other__ = static_cast<const EntityInfo&>(msg__);
      if (id != other__.id) return false;
      if (label != other__.label) return false;
      if (component != other__.component) return false;
      if (act_time != other__.act_time) return false;
      if (deact_time != other__.deact_time) return false;
      return true;
    }

    int
    EntityInfo::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityInfo::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(label, ptr__);
      ptr__ += IMC::serialize(component, ptr__);
      ptr__ += IMC::serialize(act_time, ptr__);
      ptr__ += IMC::serialize(deact_time, ptr__);
      return ptr__;
    }

    uint16_t
    EntityInfo::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(label, bfr__, size__);
      bfr__ += IMC::deserialize(component, bfr__, size__);
      bfr__ += IMC::deserialize(act_time, bfr__, size__);
      bfr__ += IMC::deserialize(deact_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityInfo::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(label, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(component, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(act_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(deact_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityInfo::getSubId(void) const
    {
      return id;
    }

    void
    EntityInfo::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    EntityInfo::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "label", label, nindent__);
      IMC::toJSON(os__, "component", component, nindent__);
      IMC::toJSON(os__, "act_time", act_time, nindent__);
      IMC::toJSON(os__, "deact_time", deact_time, nindent__);
    }

    QueryEntityInfo::QueryEntityInfo(void)
    {
      m_header.mgid = 4;
      clear();
    }

    void
    QueryEntityInfo::clear(void)
    {
      id = 0;
    }

    bool
    QueryEntityInfo::fieldsEqual(const Message& msg__) const
    {
      const IMC::QueryEntityInfo& other__ = static_cast<const QueryEntityInfo&>(msg__);
      if (id != other__.id) return false;
      return true;
    }

    int
    QueryEntityInfo::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryEntityInfo::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      return ptr__;
    }

    uint16_t
    QueryEntityInfo::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    QueryEntityInfo::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    QueryEntityInfo::getSubId(void) const
    {
      return id;
    }

    void
    QueryEntityInfo::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    QueryEntityInfo::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
    }

    EntityList::EntityList(void)
    {
      m_header.mgid = 5;
      clear();
    }

    void
    EntityList::clear(void)
    {
      op = 0;
      list.clear();
    }

    bool
    EntityList::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityList& other__ = static_cast<const EntityList&>(msg__);
      if (op != other__.op) return false;
      if (list != other__.list) return false;
      return true;
    }

    int
    EntityList::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityList::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(list, ptr__);
      return ptr__;
    }

    uint16_t
    EntityList::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(list, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityList::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(list, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityList::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "list", list, nindent__);
    }

    CpuUsage::CpuUsage(void)
    {
      m_header.mgid = 7;
      clear();
    }

    void
    CpuUsage::clear(void)
    {
      value = 0;
    }

    bool
    CpuUsage::fieldsEqual(const Message& msg__) const
    {
      const IMC::CpuUsage& other__ = static_cast<const CpuUsage&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    CpuUsage::validate(void) const
    {
      return false;
    }

    uint8_t*
    CpuUsage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    CpuUsage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CpuUsage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    CpuUsage::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    CpuUsage::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    CpuUsage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    TransportBindings::TransportBindings(void)
    {
      m_header.mgid = 8;
      clear();
    }

    void
    TransportBindings::clear(void)
    {
      consumer.clear();
      message_id = 0;
    }

    bool
    TransportBindings::fieldsEqual(const Message& msg__) const
    {
      const IMC::TransportBindings& other__ = static_cast<const TransportBindings&>(msg__);
      if (consumer != other__.consumer) return false;
      if (message_id != other__.message_id) return false;
      return true;
    }

    int
    TransportBindings::validate(void) const
    {
      return false;
    }

    uint8_t*
    TransportBindings::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(consumer, ptr__);
      ptr__ += IMC::serialize(message_id, ptr__);
      return ptr__;
    }

    uint16_t
    TransportBindings::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(consumer, bfr__, size__);
      bfr__ += IMC::deserialize(message_id, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TransportBindings::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(consumer, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(message_id, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TransportBindings::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "consumer", consumer, nindent__);
      IMC::toJSON(os__, "message_id", message_id, nindent__);
    }

    RestartSystem::RestartSystem(void)
    {
      m_header.mgid = 9;
      clear();
    }

    void
    RestartSystem::clear(void)
    {
    }

    int
    RestartSystem::validate(void) const
    {
      return false;
    }

    uint8_t*
    RestartSystem::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    RestartSystem::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    RestartSystem::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    DevCalibrationControl::DevCalibrationControl(void)
    {
      m_header.mgid = 12;
      clear();
    }

    void
    DevCalibrationControl::clear(void)
    {
      op = 0;
    }

    bool
    DevCalibrationControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::DevCalibrationControl& other__ = static_cast<const DevCalibrationControl&>(msg__);
      if (op != other__.op) return false;
      return true;
    }

    int
    DevCalibrationControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    DevCalibrationControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      return ptr__;
    }

    uint16_t
    DevCalibrationControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DevCalibrationControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DevCalibrationControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
    }

    DevCalibrationState::DevCalibrationState(void)
    {
      m_header.mgid = 13;
      clear();
    }

    void
    DevCalibrationState::clear(void)
    {
      total_steps = 0;
      step_number = 0;
      step.clear();
      flags = 0;
    }

    bool
    DevCalibrationState::fieldsEqual(const Message& msg__) const
    {
      const IMC::DevCalibrationState& other__ = static_cast<const DevCalibrationState&>(msg__);
      if (total_steps != other__.total_steps) return false;
      if (step_number != other__.step_number) return false;
      if (step != other__.step) return false;
      if (flags != other__.flags) return false;
      return true;
    }

    int
    DevCalibrationState::validate(void) const
    {
      return false;
    }

    uint8_t*
    DevCalibrationState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(total_steps, ptr__);
      ptr__ += IMC::serialize(step_number, ptr__);
      ptr__ += IMC::serialize(step, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      return ptr__;
    }

    uint16_t
    DevCalibrationState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(total_steps, bfr__, size__);
      bfr__ += IMC::deserialize(step_number, bfr__, size__);
      bfr__ += IMC::deserialize(step, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DevCalibrationState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(total_steps, bfr__, size__);
      bfr__ += IMC::deserialize(step_number, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(step, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DevCalibrationState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "total_steps", total_steps, nindent__);
      IMC::toJSON(os__, "step_number", step_number, nindent__);
      IMC::toJSON(os__, "step", step, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
    }

    EntityActivationState::EntityActivationState(void)
    {
      m_header.mgid = 14;
      clear();
    }

    void
    EntityActivationState::clear(void)
    {
      state = 0;
      error.clear();
    }

    bool
    EntityActivationState::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityActivationState& other__ = static_cast<const EntityActivationState&>(msg__);
      if (state != other__.state) return false;
      if (error != other__.error) return false;
      return true;
    }

    int
    EntityActivationState::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityActivationState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(error, ptr__);
      return ptr__;
    }

    uint16_t
    EntityActivationState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityActivationState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityActivationState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "error", error, nindent__);
    }

    QueryEntityActivationState::QueryEntityActivationState(void)
    {
      m_header.mgid = 15;
      clear();
    }

    void
    QueryEntityActivationState::clear(void)
    {
    }

    int
    QueryEntityActivationState::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryEntityActivationState::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    QueryEntityActivationState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    QueryEntityActivationState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    VehicleOperationalLimits::VehicleOperationalLimits(void)
    {
      m_header.mgid = 16;
      clear();
    }

    void
    VehicleOperationalLimits::clear(void)
    {
      op = 0;
      speed_min = 0;
      speed_max = 0;
      long_accel = 0;
      alt_max_msl = 0;
      dive_fraction_max = 0;
      climb_fraction_max = 0;
      bank_max = 0;
      p_max = 0;
      pitch_min = 0;
      pitch_max = 0;
      q_max = 0;
      g_min = 0;
      g_max = 0;
      g_lat_max = 0;
      rpm_min = 0;
      rpm_max = 0;
      rpm_rate_max = 0;
    }

    bool
    VehicleOperationalLimits::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleOperationalLimits& other__ = static_cast<const VehicleOperationalLimits&>(msg__);
      if (op != other__.op) return false;
      if (speed_min != other__.speed_min) return false;
      if (speed_max != other__.speed_max) return false;
      if (long_accel != other__.long_accel) return false;
      if (alt_max_msl != other__.alt_max_msl) return false;
      if (dive_fraction_max != other__.dive_fraction_max) return false;
      if (climb_fraction_max != other__.climb_fraction_max) return false;
      if (bank_max != other__.bank_max) return false;
      if (p_max != other__.p_max) return false;
      if (pitch_min != other__.pitch_min) return false;
      if (pitch_max != other__.pitch_max) return false;
      if (q_max != other__.q_max) return false;
      if (g_min != other__.g_min) return false;
      if (g_max != other__.g_max) return false;
      if (g_lat_max != other__.g_lat_max) return false;
      if (rpm_min != other__.rpm_min) return false;
      if (rpm_max != other__.rpm_max) return false;
      if (rpm_rate_max != other__.rpm_rate_max) return false;
      return true;
    }

    int
    VehicleOperationalLimits::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleOperationalLimits::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(speed_min, ptr__);
      ptr__ += IMC::serialize(speed_max, ptr__);
      ptr__ += IMC::serialize(long_accel, ptr__);
      ptr__ += IMC::serialize(alt_max_msl, ptr__);
      ptr__ += IMC::serialize(dive_fraction_max, ptr__);
      ptr__ += IMC::serialize(climb_fraction_max, ptr__);
      ptr__ += IMC::serialize(bank_max, ptr__);
      ptr__ += IMC::serialize(p_max, ptr__);
      ptr__ += IMC::serialize(pitch_min, ptr__);
      ptr__ += IMC::serialize(pitch_max, ptr__);
      ptr__ += IMC::serialize(q_max, ptr__);
      ptr__ += IMC::serialize(g_min, ptr__);
      ptr__ += IMC::serialize(g_max, ptr__);
      ptr__ += IMC::serialize(g_lat_max, ptr__);
      ptr__ += IMC::serialize(rpm_min, ptr__);
      ptr__ += IMC::serialize(rpm_max, ptr__);
      ptr__ += IMC::serialize(rpm_rate_max, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleOperationalLimits::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(speed_min, bfr__, size__);
      bfr__ += IMC::deserialize(speed_max, bfr__, size__);
      bfr__ += IMC::deserialize(long_accel, bfr__, size__);
      bfr__ += IMC::deserialize(alt_max_msl, bfr__, size__);
      bfr__ += IMC::deserialize(dive_fraction_max, bfr__, size__);
      bfr__ += IMC::deserialize(climb_fraction_max, bfr__, size__);
      bfr__ += IMC::deserialize(bank_max, bfr__, size__);
      bfr__ += IMC::deserialize(p_max, bfr__, size__);
      bfr__ += IMC::deserialize(pitch_min, bfr__, size__);
      bfr__ += IMC::deserialize(pitch_max, bfr__, size__);
      bfr__ += IMC::deserialize(q_max, bfr__, size__);
      bfr__ += IMC::deserialize(g_min, bfr__, size__);
      bfr__ += IMC::deserialize(g_max, bfr__, size__);
      bfr__ += IMC::deserialize(g_lat_max, bfr__, size__);
      bfr__ += IMC::deserialize(rpm_min, bfr__, size__);
      bfr__ += IMC::deserialize(rpm_max, bfr__, size__);
      bfr__ += IMC::deserialize(rpm_rate_max, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleOperationalLimits::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed_min, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(long_accel, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(alt_max_msl, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(dive_fraction_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(climb_fraction_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bank_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch_min, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(g_min, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(g_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(g_lat_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rpm_min, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rpm_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rpm_rate_max, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleOperationalLimits::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "speed_min", speed_min, nindent__);
      IMC::toJSON(os__, "speed_max", speed_max, nindent__);
      IMC::toJSON(os__, "long_accel", long_accel, nindent__);
      IMC::toJSON(os__, "alt_max_msl", alt_max_msl, nindent__);
      IMC::toJSON(os__, "dive_fraction_max", dive_fraction_max, nindent__);
      IMC::toJSON(os__, "climb_fraction_max", climb_fraction_max, nindent__);
      IMC::toJSON(os__, "bank_max", bank_max, nindent__);
      IMC::toJSON(os__, "p_max", p_max, nindent__);
      IMC::toJSON(os__, "pitch_min", pitch_min, nindent__);
      IMC::toJSON(os__, "pitch_max", pitch_max, nindent__);
      IMC::toJSON(os__, "q_max", q_max, nindent__);
      IMC::toJSON(os__, "g_min", g_min, nindent__);
      IMC::toJSON(os__, "g_max", g_max, nindent__);
      IMC::toJSON(os__, "g_lat_max", g_lat_max, nindent__);
      IMC::toJSON(os__, "rpm_min", rpm_min, nindent__);
      IMC::toJSON(os__, "rpm_max", rpm_max, nindent__);
      IMC::toJSON(os__, "rpm_rate_max", rpm_rate_max, nindent__);
    }

    MsgList::MsgList(void)
    {
      m_header.mgid = 20;
      clear();
      msgs.setParent(this);
    }

    void
    MsgList::clear(void)
    {
      msgs.clear();
    }

    bool
    MsgList::fieldsEqual(const Message& msg__) const
    {
      const IMC::MsgList& other__ = static_cast<const MsgList&>(msg__);
      if (msgs != other__.msgs) return false;
      return true;
    }

    int
    MsgList::validate(void) const
    {
      return false;
    }

    uint8_t*
    MsgList::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += msgs.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    MsgList::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += msgs.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MsgList::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += msgs.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    MsgList::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      msgs.toJSON(os__, "msgs", nindent__);
    }

    void
    MsgList::setTimeStampNested(double value__)
    {
      msgs.setTimeStamp(value__);
    }

    void
    MsgList::setSourceNested(uint16_t value__)
    {
      msgs.setSource(value__);
    }

    void
    MsgList::setSourceEntityNested(uint8_t value__)
    {
      msgs.setSourceEntity(value__);
    }

    void
    MsgList::setDestinationNested(uint16_t value__)
    {
      msgs.setDestination(value__);
    }

    void
    MsgList::setDestinationEntityNested(uint8_t value__)
    {
      msgs.setDestinationEntity(value__);
    }

    SimulatedState::SimulatedState(void)
    {
      m_header.mgid = 50;
      clear();
    }

    void
    SimulatedState::clear(void)
    {
      lat = 0;
      lon = 0;
      height = 0;
      x = 0;
      y = 0;
      z = 0;
      phi = 0;
      theta = 0;
      psi = 0;
      u = 0;
      v = 0;
      w = 0;
      p = 0;
      q = 0;
      r = 0;
      svx = 0;
      svy = 0;
      svz = 0;
    }

    bool
    SimulatedState::fieldsEqual(const Message& msg__) const
    {
      const IMC::SimulatedState& other__ = static_cast<const SimulatedState&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height != other__.height) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      if (u != other__.u) return false;
      if (v != other__.v) return false;
      if (w != other__.w) return false;
      if (p != other__.p) return false;
      if (q != other__.q) return false;
      if (r != other__.r) return false;
      if (svx != other__.svx) return false;
      if (svy != other__.svy) return false;
      if (svz != other__.svz) return false;
      return true;
    }

    int
    SimulatedState::validate(void) const
    {
      return false;
    }

    uint8_t*
    SimulatedState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      ptr__ += IMC::serialize(u, ptr__);
      ptr__ += IMC::serialize(v, ptr__);
      ptr__ += IMC::serialize(w, ptr__);
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(q, ptr__);
      ptr__ += IMC::serialize(r, ptr__);
      ptr__ += IMC::serialize(svx, ptr__);
      ptr__ += IMC::serialize(svy, ptr__);
      ptr__ += IMC::serialize(svz, ptr__);
      return ptr__;
    }

    uint16_t
    SimulatedState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      bfr__ += IMC::deserialize(u, bfr__, size__);
      bfr__ += IMC::deserialize(v, bfr__, size__);
      bfr__ += IMC::deserialize(w, bfr__, size__);
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(q, bfr__, size__);
      bfr__ += IMC::deserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(svx, bfr__, size__);
      bfr__ += IMC::deserialize(svy, bfr__, size__);
      bfr__ += IMC::deserialize(svz, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SimulatedState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(u, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(v, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(w, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(r, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svz, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SimulatedState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height", height, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
      IMC::toJSON(os__, "u", u, nindent__);
      IMC::toJSON(os__, "v", v, nindent__);
      IMC::toJSON(os__, "w", w, nindent__);
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "q", q, nindent__);
      IMC::toJSON(os__, "r", r, nindent__);
      IMC::toJSON(os__, "svx", svx, nindent__);
      IMC::toJSON(os__, "svy", svy, nindent__);
      IMC::toJSON(os__, "svz", svz, nindent__);
    }

    LeakSimulation::LeakSimulation(void)
    {
      m_header.mgid = 51;
      clear();
    }

    void
    LeakSimulation::clear(void)
    {
      op = 0;
      entities.clear();
    }

    bool
    LeakSimulation::fieldsEqual(const Message& msg__) const
    {
      const IMC::LeakSimulation& other__ = static_cast<const LeakSimulation&>(msg__);
      if (op != other__.op) return false;
      if (entities != other__.entities) return false;
      return true;
    }

    int
    LeakSimulation::validate(void) const
    {
      return false;
    }

    uint8_t*
    LeakSimulation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(entities, ptr__);
      return ptr__;
    }

    uint16_t
    LeakSimulation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(entities, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LeakSimulation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(entities, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LeakSimulation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "entities", entities, nindent__);
    }

    UASimulation::UASimulation(void)
    {
      m_header.mgid = 52;
      clear();
    }

    void
    UASimulation::clear(void)
    {
      type = 0;
      speed = 0;
      data.clear();
    }

    bool
    UASimulation::fieldsEqual(const Message& msg__) const
    {
      const IMC::UASimulation& other__ = static_cast<const UASimulation&>(msg__);
      if (type != other__.type) return false;
      if (speed != other__.speed) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    UASimulation::validate(void) const
    {
      return false;
    }

    uint8_t*
    UASimulation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    UASimulation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UASimulation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UASimulation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    DynamicsSimParam::DynamicsSimParam(void)
    {
      m_header.mgid = 53;
      clear();
    }

    void
    DynamicsSimParam::clear(void)
    {
      op = 0;
      tas2acc_pgain = 0;
      bank2p_pgain = 0;
    }

    bool
    DynamicsSimParam::fieldsEqual(const Message& msg__) const
    {
      const IMC::DynamicsSimParam& other__ = static_cast<const DynamicsSimParam&>(msg__);
      if (op != other__.op) return false;
      if (tas2acc_pgain != other__.tas2acc_pgain) return false;
      if (bank2p_pgain != other__.bank2p_pgain) return false;
      return true;
    }

    int
    DynamicsSimParam::validate(void) const
    {
      return false;
    }

    uint8_t*
    DynamicsSimParam::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(tas2acc_pgain, ptr__);
      ptr__ += IMC::serialize(bank2p_pgain, ptr__);
      return ptr__;
    }

    uint16_t
    DynamicsSimParam::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(tas2acc_pgain, bfr__, size__);
      bfr__ += IMC::deserialize(bank2p_pgain, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DynamicsSimParam::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(tas2acc_pgain, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bank2p_pgain, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DynamicsSimParam::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "tas2acc_pgain", tas2acc_pgain, nindent__);
      IMC::toJSON(os__, "bank2p_pgain", bank2p_pgain, nindent__);
    }

    StorageUsage::StorageUsage(void)
    {
      m_header.mgid = 100;
      clear();
    }

    void
    StorageUsage::clear(void)
    {
      available = 0;
      value = 0;
    }

    bool
    StorageUsage::fieldsEqual(const Message& msg__) const
    {
      const IMC::StorageUsage& other__ = static_cast<const StorageUsage&>(msg__);
      if (available != other__.available) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    StorageUsage::validate(void) const
    {
      return false;
    }

    uint8_t*
    StorageUsage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(available, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    StorageUsage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(available, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    StorageUsage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(available, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    StorageUsage::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    StorageUsage::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    StorageUsage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "available", available, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    CacheControl::CacheControl(void)
    {
      m_header.mgid = 101;
      clear();
      message.setParent(this);
    }

    void
    CacheControl::clear(void)
    {
      op = 0;
      snapshot.clear();
      message.clear();
    }

    bool
    CacheControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::CacheControl& other__ = static_cast<const CacheControl&>(msg__);
      if (op != other__.op) return false;
      if (snapshot != other__.snapshot) return false;
      if (message != other__.message) return false;
      return true;
    }

    int
    CacheControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    CacheControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(snapshot, ptr__);
      ptr__ += message.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    CacheControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(snapshot, bfr__, size__);
      bfr__ += message.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CacheControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(snapshot, bfr__, size__);
      bfr__ += message.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    CacheControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "snapshot", snapshot, nindent__);
      message.toJSON(os__, "message", nindent__);
    }

    void
    CacheControl::setTimeStampNested(double value__)
    {
      if (!message.isNull())
      {
        message.get()->setTimeStamp(value__);
      }
    }

    void
    CacheControl::setSourceNested(uint16_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setSource(value__);
      }
    }

    void
    CacheControl::setSourceEntityNested(uint8_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setSourceEntity(value__);
      }
    }

    void
    CacheControl::setDestinationNested(uint16_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setDestination(value__);
      }
    }

    void
    CacheControl::setDestinationEntityNested(uint8_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setDestinationEntity(value__);
      }
    }

    LoggingControl::LoggingControl(void)
    {
      m_header.mgid = 102;
      clear();
    }

    void
    LoggingControl::clear(void)
    {
      op = 0;
      name.clear();
    }

    bool
    LoggingControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::LoggingControl& other__ = static_cast<const LoggingControl&>(msg__);
      if (op != other__.op) return false;
      if (name != other__.name) return false;
      return true;
    }

    int
    LoggingControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    LoggingControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(name, ptr__);
      return ptr__;
    }

    uint16_t
    LoggingControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LoggingControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LoggingControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "name", name, nindent__);
    }

    LogBookEntry::LogBookEntry(void)
    {
      m_header.mgid = 103;
      clear();
    }

    void
    LogBookEntry::clear(void)
    {
      type = 0;
      htime = 0;
      context.clear();
      text.clear();
    }

    bool
    LogBookEntry::fieldsEqual(const Message& msg__) const
    {
      const IMC::LogBookEntry& other__ = static_cast<const LogBookEntry&>(msg__);
      if (type != other__.type) return false;
      if (htime != other__.htime) return false;
      if (context != other__.context) return false;
      if (text != other__.text) return false;
      return true;
    }

    int
    LogBookEntry::validate(void) const
    {
      return false;
    }

    uint8_t*
    LogBookEntry::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(htime, ptr__);
      ptr__ += IMC::serialize(context, ptr__);
      ptr__ += IMC::serialize(text, ptr__);
      return ptr__;
    }

    uint16_t
    LogBookEntry::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(htime, bfr__, size__);
      bfr__ += IMC::deserialize(context, bfr__, size__);
      bfr__ += IMC::deserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LogBookEntry::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(htime, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(context, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LogBookEntry::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "htime", htime, nindent__);
      IMC::toJSON(os__, "context", context, nindent__);
      IMC::toJSON(os__, "text", text, nindent__);
    }

    LogBookControl::LogBookControl(void)
    {
      m_header.mgid = 104;
      clear();
      msg.setParent(this);
    }

    void
    LogBookControl::clear(void)
    {
      command = 0;
      htime = 0;
      msg.clear();
    }

    bool
    LogBookControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::LogBookControl& other__ = static_cast<const LogBookControl&>(msg__);
      if (command != other__.command) return false;
      if (htime != other__.htime) return false;
      if (msg != other__.msg) return false;
      return true;
    }

    int
    LogBookControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    LogBookControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(command, ptr__);
      ptr__ += IMC::serialize(htime, ptr__);
      ptr__ += msg.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    LogBookControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::deserialize(htime, bfr__, size__);
      bfr__ += msg.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LogBookControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(htime, bfr__, size__);
      bfr__ += msg.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    LogBookControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "command", command, nindent__);
      IMC::toJSON(os__, "htime", htime, nindent__);
      msg.toJSON(os__, "msg", nindent__);
    }

    void
    LogBookControl::setTimeStampNested(double value__)
    {
      msg.setTimeStamp(value__);
    }

    void
    LogBookControl::setSourceNested(uint16_t value__)
    {
      msg.setSource(value__);
    }

    void
    LogBookControl::setSourceEntityNested(uint8_t value__)
    {
      msg.setSourceEntity(value__);
    }

    void
    LogBookControl::setDestinationNested(uint16_t value__)
    {
      msg.setDestination(value__);
    }

    void
    LogBookControl::setDestinationEntityNested(uint8_t value__)
    {
      msg.setDestinationEntity(value__);
    }

    ReplayControl::ReplayControl(void)
    {
      m_header.mgid = 105;
      clear();
    }

    void
    ReplayControl::clear(void)
    {
      op = 0;
      file.clear();
    }

    bool
    ReplayControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::ReplayControl& other__ = static_cast<const ReplayControl&>(msg__);
      if (op != other__.op) return false;
      if (file != other__.file) return false;
      return true;
    }

    int
    ReplayControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    ReplayControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(file, ptr__);
      return ptr__;
    }

    uint16_t
    ReplayControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(file, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ReplayControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(file, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ReplayControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "file", file, nindent__);
    }

    ClockControl::ClockControl(void)
    {
      m_header.mgid = 106;
      clear();
    }

    void
    ClockControl::clear(void)
    {
      op = 0;
      clock = 0;
      tz = 0;
    }

    bool
    ClockControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::ClockControl& other__ = static_cast<const ClockControl&>(msg__);
      if (op != other__.op) return false;
      if (clock != other__.clock) return false;
      if (tz != other__.tz) return false;
      return true;
    }

    int
    ClockControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    ClockControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(clock, ptr__);
      ptr__ += IMC::serialize(tz, ptr__);
      return ptr__;
    }

    uint16_t
    ClockControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(clock, bfr__, size__);
      bfr__ += IMC::deserialize(tz, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ClockControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(clock, bfr__, size__);
      bfr__ += IMC::deserialize(tz, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ClockControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "clock", clock, nindent__);
      IMC::toJSON(os__, "tz", tz, nindent__);
    }

    Heartbeat::Heartbeat(void)
    {
      m_header.mgid = 150;
      clear();
    }

    void
    Heartbeat::clear(void)
    {
    }

    int
    Heartbeat::validate(void) const
    {
      return false;
    }

    uint8_t*
    Heartbeat::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    Heartbeat::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    Heartbeat::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    Announce::Announce(void)
    {
      m_header.mgid = 151;
      clear();
    }

    void
    Announce::clear(void)
    {
      sys_name.clear();
      sys_type = 0;
      owner = 0;
      lat = 0;
      lon = 0;
      height = 0;
      services.clear();
    }

    bool
    Announce::fieldsEqual(const Message& msg__) const
    {
      const IMC::Announce& other__ = static_cast<const Announce&>(msg__);
      if (sys_name != other__.sys_name) return false;
      if (sys_type != other__.sys_type) return false;
      if (owner != other__.owner) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height != other__.height) return false;
      if (services != other__.services) return false;
      return true;
    }

    int
    Announce::validate(void) const
    {
      return false;
    }

    uint8_t*
    Announce::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sys_name, ptr__);
      ptr__ += IMC::serialize(sys_type, ptr__);
      ptr__ += IMC::serialize(owner, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height, ptr__);
      ptr__ += IMC::serialize(services, ptr__);
      return ptr__;
    }

    uint16_t
    Announce::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sys_name, bfr__, size__);
      bfr__ += IMC::deserialize(sys_type, bfr__, size__);
      bfr__ += IMC::deserialize(owner, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(services, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Announce::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sys_name, bfr__, size__);
      bfr__ += IMC::deserialize(sys_type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(owner, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(services, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Announce::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sys_name", sys_name, nindent__);
      IMC::toJSON(os__, "sys_type", sys_type, nindent__);
      IMC::toJSON(os__, "owner", owner, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height", height, nindent__);
      IMC::toJSON(os__, "services", services, nindent__);
    }

    AnnounceService::AnnounceService(void)
    {
      m_header.mgid = 152;
      clear();
    }

    void
    AnnounceService::clear(void)
    {
      service.clear();
      service_type = 0;
    }

    bool
    AnnounceService::fieldsEqual(const Message& msg__) const
    {
      const IMC::AnnounceService& other__ = static_cast<const AnnounceService&>(msg__);
      if (service != other__.service) return false;
      if (service_type != other__.service_type) return false;
      return true;
    }

    int
    AnnounceService::validate(void) const
    {
      return false;
    }

    uint8_t*
    AnnounceService::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(service, ptr__);
      ptr__ += IMC::serialize(service_type, ptr__);
      return ptr__;
    }

    uint16_t
    AnnounceService::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(service, bfr__, size__);
      bfr__ += IMC::deserialize(service_type, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AnnounceService::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(service, bfr__, size__);
      bfr__ += IMC::deserialize(service_type, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AnnounceService::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "service", service, nindent__);
      IMC::toJSON(os__, "service_type", service_type, nindent__);
    }

    RSSI::RSSI(void)
    {
      m_header.mgid = 153;
      clear();
    }

    void
    RSSI::clear(void)
    {
      value = 0;
    }

    bool
    RSSI::fieldsEqual(const Message& msg__) const
    {
      const IMC::RSSI& other__ = static_cast<const RSSI&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    RSSI::validate(void) const
    {
      return false;
    }

    uint8_t*
    RSSI::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    RSSI::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RSSI::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    RSSI::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    RSSI::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    RSSI::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    VSWR::VSWR(void)
    {
      m_header.mgid = 154;
      clear();
    }

    void
    VSWR::clear(void)
    {
      value = 0;
    }

    bool
    VSWR::fieldsEqual(const Message& msg__) const
    {
      const IMC::VSWR& other__ = static_cast<const VSWR&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    VSWR::validate(void) const
    {
      return false;
    }

    uint8_t*
    VSWR::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    VSWR::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VSWR::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    VSWR::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    VSWR::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    VSWR::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    LinkLevel::LinkLevel(void)
    {
      m_header.mgid = 155;
      clear();
    }

    void
    LinkLevel::clear(void)
    {
      value = 0;
    }

    bool
    LinkLevel::fieldsEqual(const Message& msg__) const
    {
      const IMC::LinkLevel& other__ = static_cast<const LinkLevel&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    LinkLevel::validate(void) const
    {
      return false;
    }

    uint8_t*
    LinkLevel::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    LinkLevel::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LinkLevel::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    LinkLevel::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    LinkLevel::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    LinkLevel::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Sms::Sms(void)
    {
      m_header.mgid = 156;
      clear();
    }

    void
    Sms::clear(void)
    {
      number.clear();
      timeout = 0;
      contents.clear();
    }

    bool
    Sms::fieldsEqual(const Message& msg__) const
    {
      const IMC::Sms& other__ = static_cast<const Sms&>(msg__);
      if (number != other__.number) return false;
      if (timeout != other__.timeout) return false;
      if (contents != other__.contents) return false;
      return true;
    }

    int
    Sms::validate(void) const
    {
      return false;
    }

    uint8_t*
    Sms::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(number, ptr__);
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(contents, ptr__);
      return ptr__;
    }

    uint16_t
    Sms::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(number, bfr__, size__);
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(contents, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Sms::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(number, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(contents, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Sms::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "number", number, nindent__);
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "contents", contents, nindent__);
    }

    SmsTx::SmsTx(void)
    {
      m_header.mgid = 157;
      clear();
    }

    void
    SmsTx::clear(void)
    {
      seq = 0;
      destination.clear();
      timeout = 0;
      data.clear();
    }

    bool
    SmsTx::fieldsEqual(const Message& msg__) const
    {
      const IMC::SmsTx& other__ = static_cast<const SmsTx&>(msg__);
      if (seq != other__.seq) return false;
      if (destination != other__.destination) return false;
      if (timeout != other__.timeout) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    SmsTx::validate(void) const
    {
      return false;
    }

    uint8_t*
    SmsTx::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(destination, ptr__);
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    SmsTx::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(destination, bfr__, size__);
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SmsTx::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(destination, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SmsTx::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "destination", destination, nindent__);
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    SmsRx::SmsRx(void)
    {
      m_header.mgid = 158;
      clear();
    }

    void
    SmsRx::clear(void)
    {
      source.clear();
      data.clear();
    }

    bool
    SmsRx::fieldsEqual(const Message& msg__) const
    {
      const IMC::SmsRx& other__ = static_cast<const SmsRx&>(msg__);
      if (source != other__.source) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    SmsRx::validate(void) const
    {
      return false;
    }

    uint8_t*
    SmsRx::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(source, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    SmsRx::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(source, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SmsRx::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(source, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SmsRx::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "source", source, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    SmsState::SmsState(void)
    {
      m_header.mgid = 159;
      clear();
    }

    void
    SmsState::clear(void)
    {
      seq = 0;
      state = 0;
      error.clear();
    }

    bool
    SmsState::fieldsEqual(const Message& msg__) const
    {
      const IMC::SmsState& other__ = static_cast<const SmsState&>(msg__);
      if (seq != other__.seq) return false;
      if (state != other__.state) return false;
      if (error != other__.error) return false;
      return true;
    }

    int
    SmsState::validate(void) const
    {
      return false;
    }

    uint8_t*
    SmsState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(error, ptr__);
      return ptr__;
    }

    uint16_t
    SmsState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SmsState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SmsState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "error", error, nindent__);
    }

    TextMessage::TextMessage(void)
    {
      m_header.mgid = 160;
      clear();
    }

    void
    TextMessage::clear(void)
    {
      origin.clear();
      text.clear();
    }

    bool
    TextMessage::fieldsEqual(const Message& msg__) const
    {
      const IMC::TextMessage& other__ = static_cast<const TextMessage&>(msg__);
      if (origin != other__.origin) return false;
      if (text != other__.text) return false;
      return true;
    }

    int
    TextMessage::validate(void) const
    {
      return false;
    }

    uint8_t*
    TextMessage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(origin, ptr__);
      ptr__ += IMC::serialize(text, ptr__);
      return ptr__;
    }

    uint16_t
    TextMessage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(origin, bfr__, size__);
      bfr__ += IMC::deserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TextMessage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(origin, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TextMessage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "origin", origin, nindent__);
      IMC::toJSON(os__, "text", text, nindent__);
    }

    IridiumMsgRx::IridiumMsgRx(void)
    {
      m_header.mgid = 170;
      clear();
    }

    void
    IridiumMsgRx::clear(void)
    {
      origin.clear();
      htime = 0;
      lat = 0;
      lon = 0;
      data.clear();
    }

    bool
    IridiumMsgRx::fieldsEqual(const Message& msg__) const
    {
      const IMC::IridiumMsgRx& other__ = static_cast<const IridiumMsgRx&>(msg__);
      if (origin != other__.origin) return false;
      if (htime != other__.htime) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    IridiumMsgRx::validate(void) const
    {
      return false;
    }

    uint8_t*
    IridiumMsgRx::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(origin, ptr__);
      ptr__ += IMC::serialize(htime, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    IridiumMsgRx::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(origin, bfr__, size__);
      bfr__ += IMC::deserialize(htime, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IridiumMsgRx::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(origin, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(htime, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    IridiumMsgRx::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "origin", origin, nindent__);
      IMC::toJSON(os__, "htime", htime, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    IridiumMsgTx::IridiumMsgTx(void)
    {
      m_header.mgid = 171;
      clear();
    }

    void
    IridiumMsgTx::clear(void)
    {
      req_id = 0;
      ttl = 0;
      destination.clear();
      data.clear();
    }

    bool
    IridiumMsgTx::fieldsEqual(const Message& msg__) const
    {
      const IMC::IridiumMsgTx& other__ = static_cast<const IridiumMsgTx&>(msg__);
      if (req_id != other__.req_id) return false;
      if (ttl != other__.ttl) return false;
      if (destination != other__.destination) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    IridiumMsgTx::validate(void) const
    {
      return false;
    }

    uint8_t*
    IridiumMsgTx::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(req_id, ptr__);
      ptr__ += IMC::serialize(ttl, ptr__);
      ptr__ += IMC::serialize(destination, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    IridiumMsgTx::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(req_id, bfr__, size__);
      bfr__ += IMC::deserialize(ttl, bfr__, size__);
      bfr__ += IMC::deserialize(destination, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IridiumMsgTx::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(req_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ttl, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(destination, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    IridiumMsgTx::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "req_id", req_id, nindent__);
      IMC::toJSON(os__, "ttl", ttl, nindent__);
      IMC::toJSON(os__, "destination", destination, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    IridiumTxStatus::IridiumTxStatus(void)
    {
      m_header.mgid = 172;
      clear();
    }

    void
    IridiumTxStatus::clear(void)
    {
      req_id = 0;
      status = 0;
      text.clear();
    }

    bool
    IridiumTxStatus::fieldsEqual(const Message& msg__) const
    {
      const IMC::IridiumTxStatus& other__ = static_cast<const IridiumTxStatus&>(msg__);
      if (req_id != other__.req_id) return false;
      if (status != other__.status) return false;
      if (text != other__.text) return false;
      return true;
    }

    int
    IridiumTxStatus::validate(void) const
    {
      return false;
    }

    uint8_t*
    IridiumTxStatus::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(req_id, ptr__);
      ptr__ += IMC::serialize(status, ptr__);
      ptr__ += IMC::serialize(text, ptr__);
      return ptr__;
    }

    uint16_t
    IridiumTxStatus::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(req_id, bfr__, size__);
      bfr__ += IMC::deserialize(status, bfr__, size__);
      bfr__ += IMC::deserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IridiumTxStatus::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(req_id, bfr__, size__);
      bfr__ += IMC::deserialize(status, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    void
    IridiumTxStatus::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "req_id", req_id, nindent__);
      IMC::toJSON(os__, "status", status, nindent__);
      IMC::toJSON(os__, "text", text, nindent__);
    }

    GroupMembershipState::GroupMembershipState(void)
    {
      m_header.mgid = 180;
      clear();
    }

    void
    GroupMembershipState::clear(void)
    {
      group_name.clear();
      links = 0;
    }

    bool
    GroupMembershipState::fieldsEqual(const Message& msg__) const
    {
      const IMC::GroupMembershipState& other__ = static_cast<const GroupMembershipState&>(msg__);
      if (group_name != other__.group_name) return false;
      if (links != other__.links) return false;
      return true;
    }

    int
    GroupMembershipState::validate(void) const
    {
      return false;
    }

    uint8_t*
    GroupMembershipState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(group_name, ptr__);
      ptr__ += IMC::serialize(links, ptr__);
      return ptr__;
    }

    uint16_t
    GroupMembershipState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(group_name, bfr__, size__);
      bfr__ += IMC::deserialize(links, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GroupMembershipState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(group_name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(links, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GroupMembershipState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "group_name", group_name, nindent__);
      IMC::toJSON(os__, "links", links, nindent__);
    }

    SystemGroup::SystemGroup(void)
    {
      m_header.mgid = 181;
      clear();
    }

    void
    SystemGroup::clear(void)
    {
      groupname.clear();
      action = 0;
      grouplist.clear();
    }

    bool
    SystemGroup::fieldsEqual(const Message& msg__) const
    {
      const IMC::SystemGroup& other__ = static_cast<const SystemGroup&>(msg__);
      if (groupname != other__.groupname) return false;
      if (action != other__.action) return false;
      if (grouplist != other__.grouplist) return false;
      return true;
    }

    int
    SystemGroup::validate(void) const
    {
      return false;
    }

    uint8_t*
    SystemGroup::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(groupname, ptr__);
      ptr__ += IMC::serialize(action, ptr__);
      ptr__ += IMC::serialize(grouplist, ptr__);
      return ptr__;
    }

    uint16_t
    SystemGroup::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(groupname, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      bfr__ += IMC::deserialize(grouplist, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SystemGroup::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(groupname, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(grouplist, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SystemGroup::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "groupname", groupname, nindent__);
      IMC::toJSON(os__, "action", action, nindent__);
      IMC::toJSON(os__, "grouplist", grouplist, nindent__);
    }

    LblRange::LblRange(void)
    {
      m_header.mgid = 200;
      clear();
    }

    void
    LblRange::clear(void)
    {
      id = 0;
      range = 0;
    }

    bool
    LblRange::fieldsEqual(const Message& msg__) const
    {
      const IMC::LblRange& other__ = static_cast<const LblRange&>(msg__);
      if (id != other__.id) return false;
      if (range != other__.range) return false;
      return true;
    }

    int
    LblRange::validate(void) const
    {
      return false;
    }

    uint8_t*
    LblRange::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(range, ptr__);
      return ptr__;
    }

    uint16_t
    LblRange::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(range, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblRange::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(range, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblRange::getSubId(void) const
    {
      return id;
    }

    void
    LblRange::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    LblRange::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "range", range, nindent__);
    }

    LblBeacon::LblBeacon(void)
    {
      m_header.mgid = 202;
      clear();
    }

    void
    LblBeacon::clear(void)
    {
      beacon.clear();
      lat = 0;
      lon = 0;
      depth = 0;
      query_channel = 0;
      reply_channel = 0;
      transponder_delay = 0;
    }

    bool
    LblBeacon::fieldsEqual(const Message& msg__) const
    {
      const IMC::LblBeacon& other__ = static_cast<const LblBeacon&>(msg__);
      if (beacon != other__.beacon) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (depth != other__.depth) return false;
      if (query_channel != other__.query_channel) return false;
      if (reply_channel != other__.reply_channel) return false;
      if (transponder_delay != other__.transponder_delay) return false;
      return true;
    }

    int
    LblBeacon::validate(void) const
    {
      return false;
    }

    uint8_t*
    LblBeacon::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(beacon, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(depth, ptr__);
      ptr__ += IMC::serialize(query_channel, ptr__);
      ptr__ += IMC::serialize(reply_channel, ptr__);
      ptr__ += IMC::serialize(transponder_delay, ptr__);
      return ptr__;
    }

    uint16_t
    LblBeacon::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(beacon, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(depth, bfr__, size__);
      bfr__ += IMC::deserialize(query_channel, bfr__, size__);
      bfr__ += IMC::deserialize(reply_channel, bfr__, size__);
      bfr__ += IMC::deserialize(transponder_delay, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblBeacon::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(beacon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(depth, bfr__, size__);
      bfr__ += IMC::deserialize(query_channel, bfr__, size__);
      bfr__ += IMC::deserialize(reply_channel, bfr__, size__);
      bfr__ += IMC::deserialize(transponder_delay, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LblBeacon::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "beacon", beacon, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "depth", depth, nindent__);
      IMC::toJSON(os__, "query_channel", query_channel, nindent__);
      IMC::toJSON(os__, "reply_channel", reply_channel, nindent__);
      IMC::toJSON(os__, "transponder_delay", transponder_delay, nindent__);
    }

    LblConfig::LblConfig(void)
    {
      m_header.mgid = 203;
      clear();
      beacons.setParent(this);
    }

    void
    LblConfig::clear(void)
    {
      op = 0;
      beacons.clear();
    }

    bool
    LblConfig::fieldsEqual(const Message& msg__) const
    {
      const IMC::LblConfig& other__ = static_cast<const LblConfig&>(msg__);
      if (op != other__.op) return false;
      if (beacons != other__.beacons) return false;
      return true;
    }

    int
    LblConfig::validate(void) const
    {
      return false;
    }

    uint8_t*
    LblConfig::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += beacons.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    LblConfig::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += beacons.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblConfig::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += beacons.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    LblConfig::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      beacons.toJSON(os__, "beacons", nindent__);
    }

    void
    LblConfig::setTimeStampNested(double value__)
    {
      beacons.setTimeStamp(value__);
    }

    void
    LblConfig::setSourceNested(uint16_t value__)
    {
      beacons.setSource(value__);
    }

    void
    LblConfig::setSourceEntityNested(uint8_t value__)
    {
      beacons.setSourceEntity(value__);
    }

    void
    LblConfig::setDestinationNested(uint16_t value__)
    {
      beacons.setDestination(value__);
    }

    void
    LblConfig::setDestinationEntityNested(uint8_t value__)
    {
      beacons.setDestinationEntity(value__);
    }

    AcousticMessage::AcousticMessage(void)
    {
      m_header.mgid = 206;
      clear();
      message.setParent(this);
    }

    void
    AcousticMessage::clear(void)
    {
      message.clear();
    }

    bool
    AcousticMessage::fieldsEqual(const Message& msg__) const
    {
      const IMC::AcousticMessage& other__ = static_cast<const AcousticMessage&>(msg__);
      if (message != other__.message) return false;
      return true;
    }

    int
    AcousticMessage::validate(void) const
    {
      return false;
    }

    uint8_t*
    AcousticMessage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += message.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    AcousticMessage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += message.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AcousticMessage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += message.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    AcousticMessage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      message.toJSON(os__, "message", nindent__);
    }

    void
    AcousticMessage::setTimeStampNested(double value__)
    {
      if (!message.isNull())
      {
        message.get()->setTimeStamp(value__);
      }
    }

    void
    AcousticMessage::setSourceNested(uint16_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setSource(value__);
      }
    }

    void
    AcousticMessage::setSourceEntityNested(uint8_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setSourceEntity(value__);
      }
    }

    void
    AcousticMessage::setDestinationNested(uint16_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setDestination(value__);
      }
    }

    void
    AcousticMessage::setDestinationEntityNested(uint8_t value__)
    {
      if (!message.isNull())
      {
        message.get()->setDestinationEntity(value__);
      }
    }

    AcousticOperation::AcousticOperation(void)
    {
      m_header.mgid = 211;
      clear();
      msg.setParent(this);
    }

    void
    AcousticOperation::clear(void)
    {
      op = 0;
      system.clear();
      range = 0;
      msg.clear();
    }

    bool
    AcousticOperation::fieldsEqual(const Message& msg__) const
    {
      const IMC::AcousticOperation& other__ = static_cast<const AcousticOperation&>(msg__);
      if (op != other__.op) return false;
      if (system != other__.system) return false;
      if (range != other__.range) return false;
      if (msg != other__.msg) return false;
      return true;
    }

    int
    AcousticOperation::validate(void) const
    {
      return false;
    }

    uint8_t*
    AcousticOperation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(system, ptr__);
      ptr__ += IMC::serialize(range, ptr__);
      ptr__ += msg.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    AcousticOperation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(system, bfr__, size__);
      bfr__ += IMC::deserialize(range, bfr__, size__);
      bfr__ += msg.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AcousticOperation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(system, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(range, bfr__, size__);
      bfr__ += msg.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    AcousticOperation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "system", system, nindent__);
      IMC::toJSON(os__, "range", range, nindent__);
      msg.toJSON(os__, "msg", nindent__);
    }

    void
    AcousticOperation::setTimeStampNested(double value__)
    {
      if (!msg.isNull())
      {
        msg.get()->setTimeStamp(value__);
      }
    }

    void
    AcousticOperation::setSourceNested(uint16_t value__)
    {
      if (!msg.isNull())
      {
        msg.get()->setSource(value__);
      }
    }

    void
    AcousticOperation::setSourceEntityNested(uint8_t value__)
    {
      if (!msg.isNull())
      {
        msg.get()->setSourceEntity(value__);
      }
    }

    void
    AcousticOperation::setDestinationNested(uint16_t value__)
    {
      if (!msg.isNull())
      {
        msg.get()->setDestination(value__);
      }
    }

    void
    AcousticOperation::setDestinationEntityNested(uint8_t value__)
    {
      if (!msg.isNull())
      {
        msg.get()->setDestinationEntity(value__);
      }
    }

    AcousticSystemsQuery::AcousticSystemsQuery(void)
    {
      m_header.mgid = 212;
      clear();
    }

    void
    AcousticSystemsQuery::clear(void)
    {
    }

    int
    AcousticSystemsQuery::validate(void) const
    {
      return false;
    }

    uint8_t*
    AcousticSystemsQuery::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    AcousticSystemsQuery::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    AcousticSystemsQuery::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    AcousticSystems::AcousticSystems(void)
    {
      m_header.mgid = 213;
      clear();
    }

    void
    AcousticSystems::clear(void)
    {
      list.clear();
    }

    bool
    AcousticSystems::fieldsEqual(const Message& msg__) const
    {
      const IMC::AcousticSystems& other__ = static_cast<const AcousticSystems&>(msg__);
      if (list != other__.list) return false;
      return true;
    }

    int
    AcousticSystems::validate(void) const
    {
      return false;
    }

    uint8_t*
    AcousticSystems::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(list, ptr__);
      return ptr__;
    }

    uint16_t
    AcousticSystems::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(list, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AcousticSystems::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(list, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AcousticSystems::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "list", list, nindent__);
    }

    Rpm::Rpm(void)
    {
      m_header.mgid = 250;
      clear();
    }

    void
    Rpm::clear(void)
    {
      value = 0;
    }

    bool
    Rpm::fieldsEqual(const Message& msg__) const
    {
      const IMC::Rpm& other__ = static_cast<const Rpm&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Rpm::validate(void) const
    {
      return false;
    }

    uint8_t*
    Rpm::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Rpm::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Rpm::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Rpm::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Rpm::setValueFP(fp64_t val)
    {
      value = static_cast<int16_t>(val);
    }

    void
    Rpm::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Voltage::Voltage(void)
    {
      m_header.mgid = 251;
      clear();
    }

    void
    Voltage::clear(void)
    {
      value = 0;
    }

    bool
    Voltage::fieldsEqual(const Message& msg__) const
    {
      const IMC::Voltage& other__ = static_cast<const Voltage&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Voltage::validate(void) const
    {
      return false;
    }

    uint8_t*
    Voltage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Voltage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Voltage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Voltage::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Voltage::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Voltage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Current::Current(void)
    {
      m_header.mgid = 252;
      clear();
    }

    void
    Current::clear(void)
    {
      value = 0;
    }

    bool
    Current::fieldsEqual(const Message& msg__) const
    {
      const IMC::Current& other__ = static_cast<const Current&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Current::validate(void) const
    {
      return false;
    }

    uint8_t*
    Current::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Current::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Current::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Current::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Current::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Current::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    GpsFix::GpsFix(void)
    {
      m_header.mgid = 253;
      clear();
    }

    void
    GpsFix::clear(void)
    {
      validity = 0;
      type = 0;
      utc_year = 0;
      utc_month = 0;
      utc_day = 0;
      utc_time = 0;
      lat = 0;
      lon = 0;
      height = 0;
      satellites = 0;
      cog = 0;
      sog = 0;
      hdop = 0;
      vdop = 0;
      hacc = 0;
      vacc = 0;
    }

    bool
    GpsFix::fieldsEqual(const Message& msg__) const
    {
      const IMC::GpsFix& other__ = static_cast<const GpsFix&>(msg__);
      if (validity != other__.validity) return false;
      if (type != other__.type) return false;
      if (utc_year != other__.utc_year) return false;
      if (utc_month != other__.utc_month) return false;
      if (utc_day != other__.utc_day) return false;
      if (utc_time != other__.utc_time) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height != other__.height) return false;
      if (satellites != other__.satellites) return false;
      if (cog != other__.cog) return false;
      if (sog != other__.sog) return false;
      if (hdop != other__.hdop) return false;
      if (vdop != other__.vdop) return false;
      if (hacc != other__.hacc) return false;
      if (vacc != other__.vacc) return false;
      return true;
    }

    int
    GpsFix::validate(void) const
    {
      return false;
    }

    uint8_t*
    GpsFix::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(validity, ptr__);
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(utc_year, ptr__);
      ptr__ += IMC::serialize(utc_month, ptr__);
      ptr__ += IMC::serialize(utc_day, ptr__);
      ptr__ += IMC::serialize(utc_time, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height, ptr__);
      ptr__ += IMC::serialize(satellites, ptr__);
      ptr__ += IMC::serialize(cog, ptr__);
      ptr__ += IMC::serialize(sog, ptr__);
      ptr__ += IMC::serialize(hdop, ptr__);
      ptr__ += IMC::serialize(vdop, ptr__);
      ptr__ += IMC::serialize(hacc, ptr__);
      ptr__ += IMC::serialize(vacc, ptr__);
      return ptr__;
    }

    uint16_t
    GpsFix::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(utc_year, bfr__, size__);
      bfr__ += IMC::deserialize(utc_month, bfr__, size__);
      bfr__ += IMC::deserialize(utc_day, bfr__, size__);
      bfr__ += IMC::deserialize(utc_time, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(satellites, bfr__, size__);
      bfr__ += IMC::deserialize(cog, bfr__, size__);
      bfr__ += IMC::deserialize(sog, bfr__, size__);
      bfr__ += IMC::deserialize(hdop, bfr__, size__);
      bfr__ += IMC::deserialize(vdop, bfr__, size__);
      bfr__ += IMC::deserialize(hacc, bfr__, size__);
      bfr__ += IMC::deserialize(vacc, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GpsFix::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(validity, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(utc_year, bfr__, size__);
      bfr__ += IMC::deserialize(utc_month, bfr__, size__);
      bfr__ += IMC::deserialize(utc_day, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(utc_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(satellites, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cog, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sog, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(hdop, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vdop, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(hacc, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vacc, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GpsFix::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "validity", validity, nindent__);
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "utc_year", utc_year, nindent__);
      IMC::toJSON(os__, "utc_month", utc_month, nindent__);
      IMC::toJSON(os__, "utc_day", utc_day, nindent__);
      IMC::toJSON(os__, "utc_time", utc_time, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height", height, nindent__);
      IMC::toJSON(os__, "satellites", satellites, nindent__);
      IMC::toJSON(os__, "cog", cog, nindent__);
      IMC::toJSON(os__, "sog", sog, nindent__);
      IMC::toJSON(os__, "hdop", hdop, nindent__);
      IMC::toJSON(os__, "vdop", vdop, nindent__);
      IMC::toJSON(os__, "hacc", hacc, nindent__);
      IMC::toJSON(os__, "vacc", vacc, nindent__);
    }

    EulerAngles::EulerAngles(void)
    {
      m_header.mgid = 254;
      clear();
    }

    void
    EulerAngles::clear(void)
    {
      time = 0;
      phi = 0;
      theta = 0;
      psi = 0;
      psi_magnetic = 0;
    }

    bool
    EulerAngles::fieldsEqual(const Message& msg__) const
    {
      const IMC::EulerAngles& other__ = static_cast<const EulerAngles&>(msg__);
      if (time != other__.time) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      if (psi_magnetic != other__.psi_magnetic) return false;
      return true;
    }

    int
    EulerAngles::validate(void) const
    {
      return false;
    }

    uint8_t*
    EulerAngles::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      ptr__ += IMC::serialize(psi_magnetic, ptr__);
      return ptr__;
    }

    uint16_t
    EulerAngles::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      bfr__ += IMC::deserialize(psi_magnetic, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EulerAngles::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi_magnetic, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EulerAngles::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
      IMC::toJSON(os__, "psi_magnetic", psi_magnetic, nindent__);
    }

    EulerAnglesDelta::EulerAnglesDelta(void)
    {
      m_header.mgid = 255;
      clear();
    }

    void
    EulerAnglesDelta::clear(void)
    {
      time = 0;
      x = 0;
      y = 0;
      z = 0;
      timestep = 0;
    }

    bool
    EulerAnglesDelta::fieldsEqual(const Message& msg__) const
    {
      const IMC::EulerAnglesDelta& other__ = static_cast<const EulerAnglesDelta&>(msg__);
      if (time != other__.time) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (timestep != other__.timestep) return false;
      return true;
    }

    int
    EulerAnglesDelta::validate(void) const
    {
      return false;
    }

    uint8_t*
    EulerAnglesDelta::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(timestep, ptr__);
      return ptr__;
    }

    uint16_t
    EulerAnglesDelta::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(timestep, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EulerAnglesDelta::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(timestep, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EulerAnglesDelta::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "timestep", timestep, nindent__);
    }

    AngularVelocity::AngularVelocity(void)
    {
      m_header.mgid = 256;
      clear();
    }

    void
    AngularVelocity::clear(void)
    {
      time = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    AngularVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::AngularVelocity& other__ = static_cast<const AngularVelocity&>(msg__);
      if (time != other__.time) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    AngularVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    AngularVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    AngularVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AngularVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AngularVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    Acceleration::Acceleration(void)
    {
      m_header.mgid = 257;
      clear();
    }

    void
    Acceleration::clear(void)
    {
      time = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    Acceleration::fieldsEqual(const Message& msg__) const
    {
      const IMC::Acceleration& other__ = static_cast<const Acceleration&>(msg__);
      if (time != other__.time) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    Acceleration::validate(void) const
    {
      return false;
    }

    uint8_t*
    Acceleration::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    Acceleration::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Acceleration::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Acceleration::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    MagneticField::MagneticField(void)
    {
      m_header.mgid = 258;
      clear();
    }

    void
    MagneticField::clear(void)
    {
      time = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    MagneticField::fieldsEqual(const Message& msg__) const
    {
      const IMC::MagneticField& other__ = static_cast<const MagneticField&>(msg__);
      if (time != other__.time) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    MagneticField::validate(void) const
    {
      return false;
    }

    uint8_t*
    MagneticField::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    MagneticField::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MagneticField::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    MagneticField::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    GroundVelocity::GroundVelocity(void)
    {
      m_header.mgid = 259;
      clear();
    }

    void
    GroundVelocity::clear(void)
    {
      validity = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    GroundVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::GroundVelocity& other__ = static_cast<const GroundVelocity&>(msg__);
      if (validity != other__.validity) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    GroundVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    GroundVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(validity, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    GroundVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GroundVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GroundVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "validity", validity, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    WaterVelocity::WaterVelocity(void)
    {
      m_header.mgid = 260;
      clear();
    }

    void
    WaterVelocity::clear(void)
    {
      validity = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    WaterVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::WaterVelocity& other__ = static_cast<const WaterVelocity&>(msg__);
      if (validity != other__.validity) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    WaterVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    WaterVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(validity, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    WaterVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    WaterVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    WaterVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "validity", validity, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    VelocityDelta::VelocityDelta(void)
    {
      m_header.mgid = 261;
      clear();
    }

    void
    VelocityDelta::clear(void)
    {
      time = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    VelocityDelta::fieldsEqual(const Message& msg__) const
    {
      const IMC::VelocityDelta& other__ = static_cast<const VelocityDelta&>(msg__);
      if (time != other__.time) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    VelocityDelta::validate(void) const
    {
      return false;
    }

    uint8_t*
    VelocityDelta::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(time, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    VelocityDelta::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(time, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VelocityDelta::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VelocityDelta::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "time", time, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    DeviceState::DeviceState(void)
    {
      m_header.mgid = 282;
      clear();
    }

    void
    DeviceState::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
      phi = 0;
      theta = 0;
      psi = 0;
    }

    bool
    DeviceState::fieldsEqual(const Message& msg__) const
    {
      const IMC::DeviceState& other__ = static_cast<const DeviceState&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      return true;
    }

    int
    DeviceState::validate(void) const
    {
      return false;
    }

    uint8_t*
    DeviceState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      return ptr__;
    }

    uint16_t
    DeviceState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DeviceState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DeviceState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
    }

    BeamConfig::BeamConfig(void)
    {
      m_header.mgid = 283;
      clear();
    }

    void
    BeamConfig::clear(void)
    {
      beam_width = 0;
      beam_height = 0;
    }

    bool
    BeamConfig::fieldsEqual(const Message& msg__) const
    {
      const IMC::BeamConfig& other__ = static_cast<const BeamConfig&>(msg__);
      if (beam_width != other__.beam_width) return false;
      if (beam_height != other__.beam_height) return false;
      return true;
    }

    int
    BeamConfig::validate(void) const
    {
      return false;
    }

    uint8_t*
    BeamConfig::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(beam_width, ptr__);
      ptr__ += IMC::serialize(beam_height, ptr__);
      return ptr__;
    }

    uint16_t
    BeamConfig::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(beam_width, bfr__, size__);
      bfr__ += IMC::deserialize(beam_height, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    BeamConfig::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(beam_width, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(beam_height, bfr__, size__);
      return bfr__ - start__;
    }

    void
    BeamConfig::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "beam_width", beam_width, nindent__);
      IMC::toJSON(os__, "beam_height", beam_height, nindent__);
    }

    Distance::Distance(void)
    {
      m_header.mgid = 262;
      clear();
      location.setParent(this);
      beam_config.setParent(this);
    }

    void
    Distance::clear(void)
    {
      validity = 0;
      location.clear();
      beam_config.clear();
      value = 0;
    }

    bool
    Distance::fieldsEqual(const Message& msg__) const
    {
      const IMC::Distance& other__ = static_cast<const Distance&>(msg__);
      if (validity != other__.validity) return false;
      if (location != other__.location) return false;
      if (beam_config != other__.beam_config) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    Distance::validate(void) const
    {
      return false;
    }

    uint8_t*
    Distance::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(validity, ptr__);
      ptr__ += location.serialize(ptr__);
      ptr__ += beam_config.serialize(ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Distance::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += location.deserialize(bfr__, size__);
      bfr__ += beam_config.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Distance::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(validity, bfr__, size__);
      bfr__ += location.reverseDeserialize(bfr__, size__);
      bfr__ += beam_config.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Distance::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Distance::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Distance::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "validity", validity, nindent__);
      location.toJSON(os__, "location", nindent__);
      beam_config.toJSON(os__, "beam_config", nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    void
    Distance::setTimeStampNested(double value__)
    {
      location.setTimeStamp(value__);

      beam_config.setTimeStamp(value__);
    }

    void
    Distance::setSourceNested(uint16_t value__)
    {
      location.setSource(value__);

      beam_config.setSource(value__);
    }

    void
    Distance::setSourceEntityNested(uint8_t value__)
    {
      location.setSourceEntity(value__);

      beam_config.setSourceEntity(value__);
    }

    void
    Distance::setDestinationNested(uint16_t value__)
    {
      location.setDestination(value__);

      beam_config.setDestination(value__);
    }

    void
    Distance::setDestinationEntityNested(uint8_t value__)
    {
      location.setDestinationEntity(value__);

      beam_config.setDestinationEntity(value__);
    }

    Temperature::Temperature(void)
    {
      m_header.mgid = 263;
      clear();
    }

    void
    Temperature::clear(void)
    {
      value = 0;
    }

    bool
    Temperature::fieldsEqual(const Message& msg__) const
    {
      const IMC::Temperature& other__ = static_cast<const Temperature&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Temperature::validate(void) const
    {
      return false;
    }

    uint8_t*
    Temperature::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Temperature::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Temperature::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Temperature::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Temperature::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Temperature::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Pressure::Pressure(void)
    {
      m_header.mgid = 264;
      clear();
    }

    void
    Pressure::clear(void)
    {
      value = 0;
    }

    bool
    Pressure::fieldsEqual(const Message& msg__) const
    {
      const IMC::Pressure& other__ = static_cast<const Pressure&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Pressure::validate(void) const
    {
      return false;
    }

    uint8_t*
    Pressure::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Pressure::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Pressure::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Pressure::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Pressure::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    Pressure::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Depth::Depth(void)
    {
      m_header.mgid = 265;
      clear();
    }

    void
    Depth::clear(void)
    {
      value = 0;
    }

    bool
    Depth::fieldsEqual(const Message& msg__) const
    {
      const IMC::Depth& other__ = static_cast<const Depth&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Depth::validate(void) const
    {
      return false;
    }

    uint8_t*
    Depth::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Depth::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Depth::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Depth::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Depth::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Depth::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DepthOffset::DepthOffset(void)
    {
      m_header.mgid = 266;
      clear();
    }

    void
    DepthOffset::clear(void)
    {
      value = 0;
    }

    bool
    DepthOffset::fieldsEqual(const Message& msg__) const
    {
      const IMC::DepthOffset& other__ = static_cast<const DepthOffset&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DepthOffset::validate(void) const
    {
      return false;
    }

    uint8_t*
    DepthOffset::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DepthOffset::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DepthOffset::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DepthOffset::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DepthOffset::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    DepthOffset::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    SoundSpeed::SoundSpeed(void)
    {
      m_header.mgid = 267;
      clear();
    }

    void
    SoundSpeed::clear(void)
    {
      value = 0;
    }

    bool
    SoundSpeed::fieldsEqual(const Message& msg__) const
    {
      const IMC::SoundSpeed& other__ = static_cast<const SoundSpeed&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    SoundSpeed::validate(void) const
    {
      return false;
    }

    uint8_t*
    SoundSpeed::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    SoundSpeed::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SoundSpeed::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    SoundSpeed::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    SoundSpeed::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    SoundSpeed::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    WaterDensity::WaterDensity(void)
    {
      m_header.mgid = 268;
      clear();
    }

    void
    WaterDensity::clear(void)
    {
      value = 0;
    }

    bool
    WaterDensity::fieldsEqual(const Message& msg__) const
    {
      const IMC::WaterDensity& other__ = static_cast<const WaterDensity&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    WaterDensity::validate(void) const
    {
      return false;
    }

    uint8_t*
    WaterDensity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    WaterDensity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    WaterDensity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    WaterDensity::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    WaterDensity::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    WaterDensity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Conductivity::Conductivity(void)
    {
      m_header.mgid = 269;
      clear();
    }

    void
    Conductivity::clear(void)
    {
      value = 0;
    }

    bool
    Conductivity::fieldsEqual(const Message& msg__) const
    {
      const IMC::Conductivity& other__ = static_cast<const Conductivity&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Conductivity::validate(void) const
    {
      return false;
    }

    uint8_t*
    Conductivity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Conductivity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Conductivity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Conductivity::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Conductivity::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Conductivity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    Salinity::Salinity(void)
    {
      m_header.mgid = 270;
      clear();
    }

    void
    Salinity::clear(void)
    {
      value = 0;
    }

    bool
    Salinity::fieldsEqual(const Message& msg__) const
    {
      const IMC::Salinity& other__ = static_cast<const Salinity&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    Salinity::validate(void) const
    {
      return false;
    }

    uint8_t*
    Salinity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    Salinity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Salinity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Salinity::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Salinity::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Salinity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    WindSpeed::WindSpeed(void)
    {
      m_header.mgid = 271;
      clear();
    }

    void
    WindSpeed::clear(void)
    {
      direction = 0;
      speed = 0;
      turbulence = 0;
    }

    bool
    WindSpeed::fieldsEqual(const Message& msg__) const
    {
      const IMC::WindSpeed& other__ = static_cast<const WindSpeed&>(msg__);
      if (direction != other__.direction) return false;
      if (speed != other__.speed) return false;
      if (turbulence != other__.turbulence) return false;
      return true;
    }

    int
    WindSpeed::validate(void) const
    {
      return false;
    }

    uint8_t*
    WindSpeed::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(direction, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(turbulence, ptr__);
      return ptr__;
    }

    uint16_t
    WindSpeed::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(turbulence, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    WindSpeed::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(direction, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(turbulence, bfr__, size__);
      return bfr__ - start__;
    }

    void
    WindSpeed::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "direction", direction, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "turbulence", turbulence, nindent__);
    }

    RelativeHumidity::RelativeHumidity(void)
    {
      m_header.mgid = 272;
      clear();
    }

    void
    RelativeHumidity::clear(void)
    {
      value = 0;
    }

    bool
    RelativeHumidity::fieldsEqual(const Message& msg__) const
    {
      const IMC::RelativeHumidity& other__ = static_cast<const RelativeHumidity&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    RelativeHumidity::validate(void) const
    {
      return false;
    }

    uint8_t*
    RelativeHumidity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    RelativeHumidity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RelativeHumidity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    RelativeHumidity::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    RelativeHumidity::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    RelativeHumidity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DevDataText::DevDataText(void)
    {
      m_header.mgid = 273;
      clear();
    }

    void
    DevDataText::clear(void)
    {
      value.clear();
    }

    bool
    DevDataText::fieldsEqual(const Message& msg__) const
    {
      const IMC::DevDataText& other__ = static_cast<const DevDataText&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DevDataText::validate(void) const
    {
      return false;
    }

    uint8_t*
    DevDataText::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DevDataText::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DevDataText::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DevDataText::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DevDataBinary::DevDataBinary(void)
    {
      m_header.mgid = 274;
      clear();
    }

    void
    DevDataBinary::clear(void)
    {
      value.clear();
    }

    bool
    DevDataBinary::fieldsEqual(const Message& msg__) const
    {
      const IMC::DevDataBinary& other__ = static_cast<const DevDataBinary&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DevDataBinary::validate(void) const
    {
      return false;
    }

    uint8_t*
    DevDataBinary::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DevDataBinary::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DevDataBinary::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DevDataBinary::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    SonarData::SonarData(void)
    {
      m_header.mgid = 276;
      clear();
      beam_config.setParent(this);
    }

    void
    SonarData::clear(void)
    {
      type = 0;
      frequency = 0;
      min_range = 0;
      max_range = 0;
      bits_per_point = 0;
      scale_factor = 0;
      beam_config.clear();
      data.clear();
    }

    bool
    SonarData::fieldsEqual(const Message& msg__) const
    {
      const IMC::SonarData& other__ = static_cast<const SonarData&>(msg__);
      if (type != other__.type) return false;
      if (frequency != other__.frequency) return false;
      if (min_range != other__.min_range) return false;
      if (max_range != other__.max_range) return false;
      if (bits_per_point != other__.bits_per_point) return false;
      if (scale_factor != other__.scale_factor) return false;
      if (beam_config != other__.beam_config) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    SonarData::validate(void) const
    {
      return false;
    }

    uint8_t*
    SonarData::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(frequency, ptr__);
      ptr__ += IMC::serialize(min_range, ptr__);
      ptr__ += IMC::serialize(max_range, ptr__);
      ptr__ += IMC::serialize(bits_per_point, ptr__);
      ptr__ += IMC::serialize(scale_factor, ptr__);
      ptr__ += beam_config.serialize(ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    SonarData::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(frequency, bfr__, size__);
      bfr__ += IMC::deserialize(min_range, bfr__, size__);
      bfr__ += IMC::deserialize(max_range, bfr__, size__);
      bfr__ += IMC::deserialize(bits_per_point, bfr__, size__);
      bfr__ += IMC::deserialize(scale_factor, bfr__, size__);
      bfr__ += beam_config.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SonarData::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(frequency, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(min_range, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max_range, bfr__, size__);
      bfr__ += IMC::deserialize(bits_per_point, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(scale_factor, bfr__, size__);
      bfr__ += beam_config.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SonarData::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "frequency", frequency, nindent__);
      IMC::toJSON(os__, "min_range", min_range, nindent__);
      IMC::toJSON(os__, "max_range", max_range, nindent__);
      IMC::toJSON(os__, "bits_per_point", bits_per_point, nindent__);
      IMC::toJSON(os__, "scale_factor", scale_factor, nindent__);
      beam_config.toJSON(os__, "beam_config", nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    void
    SonarData::setTimeStampNested(double value__)
    {
      beam_config.setTimeStamp(value__);
    }

    void
    SonarData::setSourceNested(uint16_t value__)
    {
      beam_config.setSource(value__);
    }

    void
    SonarData::setSourceEntityNested(uint8_t value__)
    {
      beam_config.setSourceEntity(value__);
    }

    void
    SonarData::setDestinationNested(uint16_t value__)
    {
      beam_config.setDestination(value__);
    }

    void
    SonarData::setDestinationEntityNested(uint8_t value__)
    {
      beam_config.setDestinationEntity(value__);
    }

    Pulse::Pulse(void)
    {
      m_header.mgid = 277;
      clear();
    }

    void
    Pulse::clear(void)
    {
    }

    int
    Pulse::validate(void) const
    {
      return false;
    }

    uint8_t*
    Pulse::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    Pulse::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    Pulse::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    PulseDetectionControl::PulseDetectionControl(void)
    {
      m_header.mgid = 278;
      clear();
    }

    void
    PulseDetectionControl::clear(void)
    {
      op = 0;
    }

    bool
    PulseDetectionControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::PulseDetectionControl& other__ = static_cast<const PulseDetectionControl&>(msg__);
      if (op != other__.op) return false;
      return true;
    }

    int
    PulseDetectionControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    PulseDetectionControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      return ptr__;
    }

    uint16_t
    PulseDetectionControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PulseDetectionControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PulseDetectionControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
    }

    FuelLevel::FuelLevel(void)
    {
      m_header.mgid = 279;
      clear();
    }

    void
    FuelLevel::clear(void)
    {
      value = 0;
      confidence = 0;
      opmodes.clear();
    }

    bool
    FuelLevel::fieldsEqual(const Message& msg__) const
    {
      const IMC::FuelLevel& other__ = static_cast<const FuelLevel&>(msg__);
      if (value != other__.value) return false;
      if (confidence != other__.confidence) return false;
      if (opmodes != other__.opmodes) return false;
      return true;
    }

    int
    FuelLevel::validate(void) const
    {
      return false;
    }

    uint8_t*
    FuelLevel::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(confidence, ptr__);
      ptr__ += IMC::serialize(opmodes, ptr__);
      return ptr__;
    }

    uint16_t
    FuelLevel::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(confidence, bfr__, size__);
      bfr__ += IMC::deserialize(opmodes, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FuelLevel::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(confidence, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(opmodes, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    FuelLevel::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    FuelLevel::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    FuelLevel::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "confidence", confidence, nindent__);
      IMC::toJSON(os__, "opmodes", opmodes, nindent__);
    }

    GpsNavData::GpsNavData(void)
    {
      m_header.mgid = 280;
      clear();
    }

    void
    GpsNavData::clear(void)
    {
      itow = 0;
      lat = 0;
      lon = 0;
      height_ell = 0;
      height_sea = 0;
      hacc = 0;
      vacc = 0;
      vel_n = 0;
      vel_e = 0;
      vel_d = 0;
      speed = 0;
      gspeed = 0;
      heading = 0;
      sacc = 0;
      cacc = 0;
    }

    bool
    GpsNavData::fieldsEqual(const Message& msg__) const
    {
      const IMC::GpsNavData& other__ = static_cast<const GpsNavData&>(msg__);
      if (itow != other__.itow) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height_ell != other__.height_ell) return false;
      if (height_sea != other__.height_sea) return false;
      if (hacc != other__.hacc) return false;
      if (vacc != other__.vacc) return false;
      if (vel_n != other__.vel_n) return false;
      if (vel_e != other__.vel_e) return false;
      if (vel_d != other__.vel_d) return false;
      if (speed != other__.speed) return false;
      if (gspeed != other__.gspeed) return false;
      if (heading != other__.heading) return false;
      if (sacc != other__.sacc) return false;
      if (cacc != other__.cacc) return false;
      return true;
    }

    int
    GpsNavData::validate(void) const
    {
      return false;
    }

    uint8_t*
    GpsNavData::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(itow, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height_ell, ptr__);
      ptr__ += IMC::serialize(height_sea, ptr__);
      ptr__ += IMC::serialize(hacc, ptr__);
      ptr__ += IMC::serialize(vacc, ptr__);
      ptr__ += IMC::serialize(vel_n, ptr__);
      ptr__ += IMC::serialize(vel_e, ptr__);
      ptr__ += IMC::serialize(vel_d, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(gspeed, ptr__);
      ptr__ += IMC::serialize(heading, ptr__);
      ptr__ += IMC::serialize(sacc, ptr__);
      ptr__ += IMC::serialize(cacc, ptr__);
      return ptr__;
    }

    uint16_t
    GpsNavData::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(itow, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height_ell, bfr__, size__);
      bfr__ += IMC::deserialize(height_sea, bfr__, size__);
      bfr__ += IMC::deserialize(hacc, bfr__, size__);
      bfr__ += IMC::deserialize(vacc, bfr__, size__);
      bfr__ += IMC::deserialize(vel_n, bfr__, size__);
      bfr__ += IMC::deserialize(vel_e, bfr__, size__);
      bfr__ += IMC::deserialize(vel_d, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(gspeed, bfr__, size__);
      bfr__ += IMC::deserialize(heading, bfr__, size__);
      bfr__ += IMC::deserialize(sacc, bfr__, size__);
      bfr__ += IMC::deserialize(cacc, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GpsNavData::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(itow, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height_ell, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height_sea, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(hacc, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vacc, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vel_n, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vel_e, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vel_d, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(gspeed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(heading, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sacc, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cacc, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GpsNavData::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "itow", itow, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height_ell", height_ell, nindent__);
      IMC::toJSON(os__, "height_sea", height_sea, nindent__);
      IMC::toJSON(os__, "hacc", hacc, nindent__);
      IMC::toJSON(os__, "vacc", vacc, nindent__);
      IMC::toJSON(os__, "vel_n", vel_n, nindent__);
      IMC::toJSON(os__, "vel_e", vel_e, nindent__);
      IMC::toJSON(os__, "vel_d", vel_d, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "gspeed", gspeed, nindent__);
      IMC::toJSON(os__, "heading", heading, nindent__);
      IMC::toJSON(os__, "sacc", sacc, nindent__);
      IMC::toJSON(os__, "cacc", cacc, nindent__);
    }

    ServoPosition::ServoPosition(void)
    {
      m_header.mgid = 281;
      clear();
    }

    void
    ServoPosition::clear(void)
    {
      id = 0;
      value = 0;
    }

    bool
    ServoPosition::fieldsEqual(const Message& msg__) const
    {
      const IMC::ServoPosition& other__ = static_cast<const ServoPosition&>(msg__);
      if (id != other__.id) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    ServoPosition::validate(void) const
    {
      return false;
    }

    uint8_t*
    ServoPosition::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    ServoPosition::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ServoPosition::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ServoPosition::getSubId(void) const
    {
      return id;
    }

    void
    ServoPosition::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    fp64_t
    ServoPosition::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    ServoPosition::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    ServoPosition::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DataSanity::DataSanity(void)
    {
      m_header.mgid = 284;
      clear();
    }

    void
    DataSanity::clear(void)
    {
      sane = 0;
    }

    bool
    DataSanity::fieldsEqual(const Message& msg__) const
    {
      const IMC::DataSanity& other__ = static_cast<const DataSanity&>(msg__);
      if (sane != other__.sane) return false;
      return true;
    }

    int
    DataSanity::validate(void) const
    {
      return false;
    }

    uint8_t*
    DataSanity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sane, ptr__);
      return ptr__;
    }

    uint16_t
    DataSanity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sane, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DataSanity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sane, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DataSanity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sane", sane, nindent__);
    }

    RhodamineDye::RhodamineDye(void)
    {
      m_header.mgid = 285;
      clear();
    }

    void
    RhodamineDye::clear(void)
    {
      value = 0;
    }

    bool
    RhodamineDye::fieldsEqual(const Message& msg__) const
    {
      const IMC::RhodamineDye& other__ = static_cast<const RhodamineDye&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    RhodamineDye::validate(void) const
    {
      return false;
    }

    uint8_t*
    RhodamineDye::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    RhodamineDye::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RhodamineDye::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    RhodamineDye::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    RhodamineDye::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    RhodamineDye::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    CrudeOil::CrudeOil(void)
    {
      m_header.mgid = 286;
      clear();
    }

    void
    CrudeOil::clear(void)
    {
      value = 0;
    }

    bool
    CrudeOil::fieldsEqual(const Message& msg__) const
    {
      const IMC::CrudeOil& other__ = static_cast<const CrudeOil&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    CrudeOil::validate(void) const
    {
      return false;
    }

    uint8_t*
    CrudeOil::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    CrudeOil::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CrudeOil::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    CrudeOil::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    CrudeOil::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    CrudeOil::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    FineOil::FineOil(void)
    {
      m_header.mgid = 287;
      clear();
    }

    void
    FineOil::clear(void)
    {
      value = 0;
    }

    bool
    FineOil::fieldsEqual(const Message& msg__) const
    {
      const IMC::FineOil& other__ = static_cast<const FineOil&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    FineOil::validate(void) const
    {
      return false;
    }

    uint8_t*
    FineOil::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    FineOil::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FineOil::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    FineOil::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    FineOil::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    FineOil::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    CameraZoom::CameraZoom(void)
    {
      m_header.mgid = 300;
      clear();
    }

    void
    CameraZoom::clear(void)
    {
      id = 0;
      zoom = 0;
      action = 0;
    }

    bool
    CameraZoom::fieldsEqual(const Message& msg__) const
    {
      const IMC::CameraZoom& other__ = static_cast<const CameraZoom&>(msg__);
      if (id != other__.id) return false;
      if (zoom != other__.zoom) return false;
      if (action != other__.action) return false;
      return true;
    }

    int
    CameraZoom::validate(void) const
    {
      return false;
    }

    uint8_t*
    CameraZoom::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(zoom, ptr__);
      ptr__ += IMC::serialize(action, ptr__);
      return ptr__;
    }

    uint16_t
    CameraZoom::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(zoom, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CameraZoom::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(zoom, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CameraZoom::getSubId(void) const
    {
      return id;
    }

    void
    CameraZoom::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    CameraZoom::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "zoom", zoom, nindent__);
      IMC::toJSON(os__, "action", action, nindent__);
    }

    SetThrusterActuation::SetThrusterActuation(void)
    {
      m_header.mgid = 301;
      clear();
    }

    void
    SetThrusterActuation::clear(void)
    {
      id = 0;
      value = 0;
    }

    bool
    SetThrusterActuation::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetThrusterActuation& other__ = static_cast<const SetThrusterActuation&>(msg__);
      if (id != other__.id) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    SetThrusterActuation::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetThrusterActuation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    SetThrusterActuation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetThrusterActuation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetThrusterActuation::getSubId(void) const
    {
      return id;
    }

    void
    SetThrusterActuation::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    fp64_t
    SetThrusterActuation::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    SetThrusterActuation::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    SetThrusterActuation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    SetServoPosition::SetServoPosition(void)
    {
      m_header.mgid = 302;
      clear();
    }

    void
    SetServoPosition::clear(void)
    {
      id = 0;
      value = 0;
    }

    bool
    SetServoPosition::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetServoPosition& other__ = static_cast<const SetServoPosition&>(msg__);
      if (id != other__.id) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    SetServoPosition::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetServoPosition::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    SetServoPosition::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetServoPosition::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetServoPosition::getSubId(void) const
    {
      return id;
    }

    void
    SetServoPosition::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    fp64_t
    SetServoPosition::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    SetServoPosition::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    SetServoPosition::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    SetControlSurfaceDeflection::SetControlSurfaceDeflection(void)
    {
      m_header.mgid = 303;
      clear();
    }

    void
    SetControlSurfaceDeflection::clear(void)
    {
      id = 0;
      angle = 0;
    }

    bool
    SetControlSurfaceDeflection::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetControlSurfaceDeflection& other__ = static_cast<const SetControlSurfaceDeflection&>(msg__);
      if (id != other__.id) return false;
      if (angle != other__.angle) return false;
      return true;
    }

    int
    SetControlSurfaceDeflection::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetControlSurfaceDeflection::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(angle, ptr__);
      return ptr__;
    }

    uint16_t
    SetControlSurfaceDeflection::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(angle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetControlSurfaceDeflection::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(angle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetControlSurfaceDeflection::getSubId(void) const
    {
      return id;
    }

    void
    SetControlSurfaceDeflection::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    SetControlSurfaceDeflection::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "angle", angle, nindent__);
    }

    RemoteActionsRequest::RemoteActionsRequest(void)
    {
      m_header.mgid = 304;
      clear();
    }

    void
    RemoteActionsRequest::clear(void)
    {
      op = 0;
      actions.clear();
    }

    bool
    RemoteActionsRequest::fieldsEqual(const Message& msg__) const
    {
      const IMC::RemoteActionsRequest& other__ = static_cast<const RemoteActionsRequest&>(msg__);
      if (op != other__.op) return false;
      if (actions != other__.actions) return false;
      return true;
    }

    int
    RemoteActionsRequest::validate(void) const
    {
      return false;
    }

    uint8_t*
    RemoteActionsRequest::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(actions, ptr__);
      return ptr__;
    }

    uint16_t
    RemoteActionsRequest::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(actions, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RemoteActionsRequest::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(actions, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RemoteActionsRequest::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "actions", actions, nindent__);
    }

    RemoteActions::RemoteActions(void)
    {
      m_header.mgid = 305;
      clear();
    }

    void
    RemoteActions::clear(void)
    {
      actions.clear();
    }

    bool
    RemoteActions::fieldsEqual(const Message& msg__) const
    {
      const IMC::RemoteActions& other__ = static_cast<const RemoteActions&>(msg__);
      if (actions != other__.actions) return false;
      return true;
    }

    int
    RemoteActions::validate(void) const
    {
      return false;
    }

    uint8_t*
    RemoteActions::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(actions, ptr__);
      return ptr__;
    }

    uint16_t
    RemoteActions::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(actions, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RemoteActions::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(actions, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RemoteActions::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "actions", actions, nindent__);
    }

    ButtonEvent::ButtonEvent(void)
    {
      m_header.mgid = 306;
      clear();
    }

    void
    ButtonEvent::clear(void)
    {
      button = 0;
      value = 0;
    }

    bool
    ButtonEvent::fieldsEqual(const Message& msg__) const
    {
      const IMC::ButtonEvent& other__ = static_cast<const ButtonEvent&>(msg__);
      if (button != other__.button) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    ButtonEvent::validate(void) const
    {
      return false;
    }

    uint8_t*
    ButtonEvent::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(button, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    ButtonEvent::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(button, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ButtonEvent::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(button, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    ButtonEvent::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    ButtonEvent::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    ButtonEvent::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "button", button, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    LcdControl::LcdControl(void)
    {
      m_header.mgid = 307;
      clear();
    }

    void
    LcdControl::clear(void)
    {
      op = 0;
      text.clear();
    }

    bool
    LcdControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::LcdControl& other__ = static_cast<const LcdControl&>(msg__);
      if (op != other__.op) return false;
      if (text != other__.text) return false;
      return true;
    }

    int
    LcdControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    LcdControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(text, ptr__);
      return ptr__;
    }

    uint16_t
    LcdControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LcdControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(text, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LcdControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "text", text, nindent__);
    }

    PowerOperation::PowerOperation(void)
    {
      m_header.mgid = 308;
      clear();
    }

    void
    PowerOperation::clear(void)
    {
      op = 0;
      time_remain = 0;
      sched_time = 0;
    }

    bool
    PowerOperation::fieldsEqual(const Message& msg__) const
    {
      const IMC::PowerOperation& other__ = static_cast<const PowerOperation&>(msg__);
      if (op != other__.op) return false;
      if (time_remain != other__.time_remain) return false;
      if (sched_time != other__.sched_time) return false;
      return true;
    }

    int
    PowerOperation::validate(void) const
    {
      return false;
    }

    uint8_t*
    PowerOperation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(time_remain, ptr__);
      ptr__ += IMC::serialize(sched_time, ptr__);
      return ptr__;
    }

    uint16_t
    PowerOperation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(time_remain, bfr__, size__);
      bfr__ += IMC::deserialize(sched_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PowerOperation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(time_remain, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sched_time, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PowerOperation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "time_remain", time_remain, nindent__);
      IMC::toJSON(os__, "sched_time", sched_time, nindent__);
    }

    PowerChannelControl::PowerChannelControl(void)
    {
      m_header.mgid = 309;
      clear();
    }

    void
    PowerChannelControl::clear(void)
    {
      name.clear();
      op = 0;
      sched_time = 0;
    }

    bool
    PowerChannelControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::PowerChannelControl& other__ = static_cast<const PowerChannelControl&>(msg__);
      if (name != other__.name) return false;
      if (op != other__.op) return false;
      if (sched_time != other__.sched_time) return false;
      return true;
    }

    int
    PowerChannelControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    PowerChannelControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(sched_time, ptr__);
      return ptr__;
    }

    uint16_t
    PowerChannelControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(sched_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PowerChannelControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sched_time, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PowerChannelControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "sched_time", sched_time, nindent__);
    }

    QueryPowerChannelState::QueryPowerChannelState(void)
    {
      m_header.mgid = 310;
      clear();
    }

    void
    QueryPowerChannelState::clear(void)
    {
    }

    int
    QueryPowerChannelState::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryPowerChannelState::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    QueryPowerChannelState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    QueryPowerChannelState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    PowerChannelState::PowerChannelState(void)
    {
      m_header.mgid = 311;
      clear();
    }

    void
    PowerChannelState::clear(void)
    {
      name.clear();
      state = 0;
    }

    bool
    PowerChannelState::fieldsEqual(const Message& msg__) const
    {
      const IMC::PowerChannelState& other__ = static_cast<const PowerChannelState&>(msg__);
      if (name != other__.name) return false;
      if (state != other__.state) return false;
      return true;
    }

    int
    PowerChannelState::validate(void) const
    {
      return false;
    }

    uint8_t*
    PowerChannelState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(state, ptr__);
      return ptr__;
    }

    uint16_t
    PowerChannelState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PowerChannelState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PowerChannelState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "state", state, nindent__);
    }

    LedBrightness::LedBrightness(void)
    {
      m_header.mgid = 312;
      clear();
    }

    void
    LedBrightness::clear(void)
    {
      name.clear();
      value = 0;
    }

    bool
    LedBrightness::fieldsEqual(const Message& msg__) const
    {
      const IMC::LedBrightness& other__ = static_cast<const LedBrightness&>(msg__);
      if (name != other__.name) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    LedBrightness::validate(void) const
    {
      return false;
    }

    uint8_t*
    LedBrightness::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    LedBrightness::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LedBrightness::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    LedBrightness::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    LedBrightness::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    LedBrightness::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    QueryLedBrightness::QueryLedBrightness(void)
    {
      m_header.mgid = 313;
      clear();
    }

    void
    QueryLedBrightness::clear(void)
    {
      name.clear();
    }

    bool
    QueryLedBrightness::fieldsEqual(const Message& msg__) const
    {
      const IMC::QueryLedBrightness& other__ = static_cast<const QueryLedBrightness&>(msg__);
      if (name != other__.name) return false;
      return true;
    }

    int
    QueryLedBrightness::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryLedBrightness::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      return ptr__;
    }

    uint16_t
    QueryLedBrightness::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    QueryLedBrightness::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    void
    QueryLedBrightness::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
    }

    SetLedBrightness::SetLedBrightness(void)
    {
      m_header.mgid = 314;
      clear();
    }

    void
    SetLedBrightness::clear(void)
    {
      name.clear();
      value = 0;
    }

    bool
    SetLedBrightness::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetLedBrightness& other__ = static_cast<const SetLedBrightness&>(msg__);
      if (name != other__.name) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    SetLedBrightness::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetLedBrightness::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    SetLedBrightness::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetLedBrightness::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    SetLedBrightness::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    SetLedBrightness::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    SetLedBrightness::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    SetPWM::SetPWM(void)
    {
      m_header.mgid = 315;
      clear();
    }

    void
    SetPWM::clear(void)
    {
      id = 0;
      period = 0;
      duty_cycle = 0;
    }

    bool
    SetPWM::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetPWM& other__ = static_cast<const SetPWM&>(msg__);
      if (id != other__.id) return false;
      if (period != other__.period) return false;
      if (duty_cycle != other__.duty_cycle) return false;
      return true;
    }

    int
    SetPWM::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetPWM::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(period, ptr__);
      ptr__ += IMC::serialize(duty_cycle, ptr__);
      return ptr__;
    }

    uint16_t
    SetPWM::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(period, bfr__, size__);
      bfr__ += IMC::deserialize(duty_cycle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetPWM::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(period, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duty_cycle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetPWM::getSubId(void) const
    {
      return id;
    }

    void
    SetPWM::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    SetPWM::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "period", period, nindent__);
      IMC::toJSON(os__, "duty_cycle", duty_cycle, nindent__);
    }

    PWM::PWM(void)
    {
      m_header.mgid = 316;
      clear();
    }

    void
    PWM::clear(void)
    {
      id = 0;
      period = 0;
      duty_cycle = 0;
    }

    bool
    PWM::fieldsEqual(const Message& msg__) const
    {
      const IMC::PWM& other__ = static_cast<const PWM&>(msg__);
      if (id != other__.id) return false;
      if (period != other__.period) return false;
      if (duty_cycle != other__.duty_cycle) return false;
      return true;
    }

    int
    PWM::validate(void) const
    {
      return false;
    }

    uint8_t*
    PWM::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(period, ptr__);
      ptr__ += IMC::serialize(duty_cycle, ptr__);
      return ptr__;
    }

    uint16_t
    PWM::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(period, bfr__, size__);
      bfr__ += IMC::deserialize(duty_cycle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PWM::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(period, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duty_cycle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PWM::getSubId(void) const
    {
      return id;
    }

    void
    PWM::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    PWM::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "period", period, nindent__);
      IMC::toJSON(os__, "duty_cycle", duty_cycle, nindent__);
    }

    EstimatedState::EstimatedState(void)
    {
      m_header.mgid = 350;
      clear();
    }

    void
    EstimatedState::clear(void)
    {
      lat = 0;
      lon = 0;
      height = 0;
      x = 0;
      y = 0;
      z = 0;
      phi = 0;
      theta = 0;
      psi = 0;
      u = 0;
      v = 0;
      w = 0;
      vx = 0;
      vy = 0;
      vz = 0;
      p = 0;
      q = 0;
      r = 0;
      depth = 0;
      alt = 0;
    }

    bool
    EstimatedState::fieldsEqual(const Message& msg__) const
    {
      const IMC::EstimatedState& other__ = static_cast<const EstimatedState&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height != other__.height) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      if (u != other__.u) return false;
      if (v != other__.v) return false;
      if (w != other__.w) return false;
      if (vx != other__.vx) return false;
      if (vy != other__.vy) return false;
      if (vz != other__.vz) return false;
      if (p != other__.p) return false;
      if (q != other__.q) return false;
      if (r != other__.r) return false;
      if (depth != other__.depth) return false;
      if (alt != other__.alt) return false;
      return true;
    }

    int
    EstimatedState::validate(void) const
    {
      return false;
    }

    uint8_t*
    EstimatedState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      ptr__ += IMC::serialize(u, ptr__);
      ptr__ += IMC::serialize(v, ptr__);
      ptr__ += IMC::serialize(w, ptr__);
      ptr__ += IMC::serialize(vx, ptr__);
      ptr__ += IMC::serialize(vy, ptr__);
      ptr__ += IMC::serialize(vz, ptr__);
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(q, ptr__);
      ptr__ += IMC::serialize(r, ptr__);
      ptr__ += IMC::serialize(depth, ptr__);
      ptr__ += IMC::serialize(alt, ptr__);
      return ptr__;
    }

    uint16_t
    EstimatedState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      bfr__ += IMC::deserialize(u, bfr__, size__);
      bfr__ += IMC::deserialize(v, bfr__, size__);
      bfr__ += IMC::deserialize(w, bfr__, size__);
      bfr__ += IMC::deserialize(vx, bfr__, size__);
      bfr__ += IMC::deserialize(vy, bfr__, size__);
      bfr__ += IMC::deserialize(vz, bfr__, size__);
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(q, bfr__, size__);
      bfr__ += IMC::deserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(depth, bfr__, size__);
      bfr__ += IMC::deserialize(alt, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EstimatedState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(u, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(v, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(w, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vz, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(r, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(depth, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(alt, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EstimatedState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height", height, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
      IMC::toJSON(os__, "u", u, nindent__);
      IMC::toJSON(os__, "v", v, nindent__);
      IMC::toJSON(os__, "w", w, nindent__);
      IMC::toJSON(os__, "vx", vx, nindent__);
      IMC::toJSON(os__, "vy", vy, nindent__);
      IMC::toJSON(os__, "vz", vz, nindent__);
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "q", q, nindent__);
      IMC::toJSON(os__, "r", r, nindent__);
      IMC::toJSON(os__, "depth", depth, nindent__);
      IMC::toJSON(os__, "alt", alt, nindent__);
    }

    EstimatedStreamVelocity::EstimatedStreamVelocity(void)
    {
      m_header.mgid = 351;
      clear();
    }

    void
    EstimatedStreamVelocity::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    EstimatedStreamVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::EstimatedStreamVelocity& other__ = static_cast<const EstimatedStreamVelocity&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    EstimatedStreamVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    EstimatedStreamVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    EstimatedStreamVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EstimatedStreamVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EstimatedStreamVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    IndicatedSpeed::IndicatedSpeed(void)
    {
      m_header.mgid = 352;
      clear();
    }

    void
    IndicatedSpeed::clear(void)
    {
      value = 0;
    }

    bool
    IndicatedSpeed::fieldsEqual(const Message& msg__) const
    {
      const IMC::IndicatedSpeed& other__ = static_cast<const IndicatedSpeed&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    IndicatedSpeed::validate(void) const
    {
      return false;
    }

    uint8_t*
    IndicatedSpeed::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    IndicatedSpeed::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IndicatedSpeed::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    IndicatedSpeed::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    IndicatedSpeed::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    IndicatedSpeed::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    TrueSpeed::TrueSpeed(void)
    {
      m_header.mgid = 353;
      clear();
    }

    void
    TrueSpeed::clear(void)
    {
      value = 0;
    }

    bool
    TrueSpeed::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrueSpeed& other__ = static_cast<const TrueSpeed&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    TrueSpeed::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrueSpeed::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    TrueSpeed::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrueSpeed::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    TrueSpeed::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    TrueSpeed::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    TrueSpeed::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    NavigationUncertainty::NavigationUncertainty(void)
    {
      m_header.mgid = 354;
      clear();
    }

    void
    NavigationUncertainty::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
      phi = 0;
      theta = 0;
      psi = 0;
      p = 0;
      q = 0;
      r = 0;
      u = 0;
      v = 0;
      w = 0;
      bias_psi = 0;
      bias_r = 0;
    }

    bool
    NavigationUncertainty::fieldsEqual(const Message& msg__) const
    {
      const IMC::NavigationUncertainty& other__ = static_cast<const NavigationUncertainty&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      if (p != other__.p) return false;
      if (q != other__.q) return false;
      if (r != other__.r) return false;
      if (u != other__.u) return false;
      if (v != other__.v) return false;
      if (w != other__.w) return false;
      if (bias_psi != other__.bias_psi) return false;
      if (bias_r != other__.bias_r) return false;
      return true;
    }

    int
    NavigationUncertainty::validate(void) const
    {
      return false;
    }

    uint8_t*
    NavigationUncertainty::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(q, ptr__);
      ptr__ += IMC::serialize(r, ptr__);
      ptr__ += IMC::serialize(u, ptr__);
      ptr__ += IMC::serialize(v, ptr__);
      ptr__ += IMC::serialize(w, ptr__);
      ptr__ += IMC::serialize(bias_psi, ptr__);
      ptr__ += IMC::serialize(bias_r, ptr__);
      return ptr__;
    }

    uint16_t
    NavigationUncertainty::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(q, bfr__, size__);
      bfr__ += IMC::deserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(u, bfr__, size__);
      bfr__ += IMC::deserialize(v, bfr__, size__);
      bfr__ += IMC::deserialize(w, bfr__, size__);
      bfr__ += IMC::deserialize(bias_psi, bfr__, size__);
      bfr__ += IMC::deserialize(bias_r, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    NavigationUncertainty::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(r, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(u, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(v, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(w, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bias_psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bias_r, bfr__, size__);
      return bfr__ - start__;
    }

    void
    NavigationUncertainty::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "q", q, nindent__);
      IMC::toJSON(os__, "r", r, nindent__);
      IMC::toJSON(os__, "u", u, nindent__);
      IMC::toJSON(os__, "v", v, nindent__);
      IMC::toJSON(os__, "w", w, nindent__);
      IMC::toJSON(os__, "bias_psi", bias_psi, nindent__);
      IMC::toJSON(os__, "bias_r", bias_r, nindent__);
    }

    NavigationData::NavigationData(void)
    {
      m_header.mgid = 355;
      clear();
    }

    void
    NavigationData::clear(void)
    {
      bias_psi = 0;
      bias_r = 0;
      cog = 0;
      cyaw = 0;
      lbl_rej_level = 0;
      gps_rej_level = 0;
      custom_x = 0;
      custom_y = 0;
      custom_z = 0;
    }

    bool
    NavigationData::fieldsEqual(const Message& msg__) const
    {
      const IMC::NavigationData& other__ = static_cast<const NavigationData&>(msg__);
      if (bias_psi != other__.bias_psi) return false;
      if (bias_r != other__.bias_r) return false;
      if (cog != other__.cog) return false;
      if (cyaw != other__.cyaw) return false;
      if (lbl_rej_level != other__.lbl_rej_level) return false;
      if (gps_rej_level != other__.gps_rej_level) return false;
      if (custom_x != other__.custom_x) return false;
      if (custom_y != other__.custom_y) return false;
      if (custom_z != other__.custom_z) return false;
      return true;
    }

    int
    NavigationData::validate(void) const
    {
      return false;
    }

    uint8_t*
    NavigationData::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(bias_psi, ptr__);
      ptr__ += IMC::serialize(bias_r, ptr__);
      ptr__ += IMC::serialize(cog, ptr__);
      ptr__ += IMC::serialize(cyaw, ptr__);
      ptr__ += IMC::serialize(lbl_rej_level, ptr__);
      ptr__ += IMC::serialize(gps_rej_level, ptr__);
      ptr__ += IMC::serialize(custom_x, ptr__);
      ptr__ += IMC::serialize(custom_y, ptr__);
      ptr__ += IMC::serialize(custom_z, ptr__);
      return ptr__;
    }

    uint16_t
    NavigationData::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(bias_psi, bfr__, size__);
      bfr__ += IMC::deserialize(bias_r, bfr__, size__);
      bfr__ += IMC::deserialize(cog, bfr__, size__);
      bfr__ += IMC::deserialize(cyaw, bfr__, size__);
      bfr__ += IMC::deserialize(lbl_rej_level, bfr__, size__);
      bfr__ += IMC::deserialize(gps_rej_level, bfr__, size__);
      bfr__ += IMC::deserialize(custom_x, bfr__, size__);
      bfr__ += IMC::deserialize(custom_y, bfr__, size__);
      bfr__ += IMC::deserialize(custom_z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    NavigationData::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(bias_psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bias_r, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cog, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cyaw, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lbl_rej_level, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(gps_rej_level, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom_z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    NavigationData::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "bias_psi", bias_psi, nindent__);
      IMC::toJSON(os__, "bias_r", bias_r, nindent__);
      IMC::toJSON(os__, "cog", cog, nindent__);
      IMC::toJSON(os__, "cyaw", cyaw, nindent__);
      IMC::toJSON(os__, "lbl_rej_level", lbl_rej_level, nindent__);
      IMC::toJSON(os__, "gps_rej_level", gps_rej_level, nindent__);
      IMC::toJSON(os__, "custom_x", custom_x, nindent__);
      IMC::toJSON(os__, "custom_y", custom_y, nindent__);
      IMC::toJSON(os__, "custom_z", custom_z, nindent__);
    }

    GpsFixRejection::GpsFixRejection(void)
    {
      m_header.mgid = 356;
      clear();
    }

    void
    GpsFixRejection::clear(void)
    {
      utc_time = 0;
      reason = 0;
    }

    bool
    GpsFixRejection::fieldsEqual(const Message& msg__) const
    {
      const IMC::GpsFixRejection& other__ = static_cast<const GpsFixRejection&>(msg__);
      if (utc_time != other__.utc_time) return false;
      if (reason != other__.reason) return false;
      return true;
    }

    int
    GpsFixRejection::validate(void) const
    {
      return false;
    }

    uint8_t*
    GpsFixRejection::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(utc_time, ptr__);
      ptr__ += IMC::serialize(reason, ptr__);
      return ptr__;
    }

    uint16_t
    GpsFixRejection::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(utc_time, bfr__, size__);
      bfr__ += IMC::deserialize(reason, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GpsFixRejection::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(utc_time, bfr__, size__);
      bfr__ += IMC::deserialize(reason, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GpsFixRejection::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "utc_time", utc_time, nindent__);
      IMC::toJSON(os__, "reason", reason, nindent__);
    }

    LblRangeAcceptance::LblRangeAcceptance(void)
    {
      m_header.mgid = 357;
      clear();
    }

    void
    LblRangeAcceptance::clear(void)
    {
      id = 0;
      range = 0;
      acceptance = 0;
    }

    bool
    LblRangeAcceptance::fieldsEqual(const Message& msg__) const
    {
      const IMC::LblRangeAcceptance& other__ = static_cast<const LblRangeAcceptance&>(msg__);
      if (id != other__.id) return false;
      if (range != other__.range) return false;
      if (acceptance != other__.acceptance) return false;
      return true;
    }

    int
    LblRangeAcceptance::validate(void) const
    {
      return false;
    }

    uint8_t*
    LblRangeAcceptance::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(range, ptr__);
      ptr__ += IMC::serialize(acceptance, ptr__);
      return ptr__;
    }

    uint16_t
    LblRangeAcceptance::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(range, bfr__, size__);
      bfr__ += IMC::deserialize(acceptance, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblRangeAcceptance::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(range, bfr__, size__);
      bfr__ += IMC::deserialize(acceptance, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblRangeAcceptance::getSubId(void) const
    {
      return id;
    }

    void
    LblRangeAcceptance::setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    LblRangeAcceptance::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "range", range, nindent__);
      IMC::toJSON(os__, "acceptance", acceptance, nindent__);
    }

    DvlRejection::DvlRejection(void)
    {
      m_header.mgid = 358;
      clear();
    }

    void
    DvlRejection::clear(void)
    {
      type = 0;
      reason = 0;
      value = 0;
      timestep = 0;
    }

    bool
    DvlRejection::fieldsEqual(const Message& msg__) const
    {
      const IMC::DvlRejection& other__ = static_cast<const DvlRejection&>(msg__);
      if (type != other__.type) return false;
      if (reason != other__.reason) return false;
      if (value != other__.value) return false;
      if (timestep != other__.timestep) return false;
      return true;
    }

    int
    DvlRejection::validate(void) const
    {
      return false;
    }

    uint8_t*
    DvlRejection::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(reason, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(timestep, ptr__);
      return ptr__;
    }

    uint16_t
    DvlRejection::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(reason, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(timestep, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DvlRejection::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(reason, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(timestep, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DvlRejection::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DvlRejection::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    DvlRejection::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "reason", reason, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "timestep", timestep, nindent__);
    }

    LblEstimate::LblEstimate(void)
    {
      m_header.mgid = 360;
      clear();
      beacon.setParent(this);
    }

    void
    LblEstimate::clear(void)
    {
      beacon.clear();
      x = 0;
      y = 0;
      var_x = 0;
      var_y = 0;
      distance = 0;
    }

    bool
    LblEstimate::fieldsEqual(const Message& msg__) const
    {
      const IMC::LblEstimate& other__ = static_cast<const LblEstimate&>(msg__);
      if (beacon != other__.beacon) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (var_x != other__.var_x) return false;
      if (var_y != other__.var_y) return false;
      if (distance != other__.distance) return false;
      return true;
    }

    int
    LblEstimate::validate(void) const
    {
      return false;
    }

    uint8_t*
    LblEstimate::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += beacon.serialize(ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(var_x, ptr__);
      ptr__ += IMC::serialize(var_y, ptr__);
      ptr__ += IMC::serialize(distance, ptr__);
      return ptr__;
    }

    uint16_t
    LblEstimate::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += beacon.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(var_x, bfr__, size__);
      bfr__ += IMC::deserialize(var_y, bfr__, size__);
      bfr__ += IMC::deserialize(distance, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LblEstimate::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += beacon.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(var_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(var_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(distance, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LblEstimate::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      beacon.toJSON(os__, "beacon", nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "var_x", var_x, nindent__);
      IMC::toJSON(os__, "var_y", var_y, nindent__);
      IMC::toJSON(os__, "distance", distance, nindent__);
    }

    void
    LblEstimate::setTimeStampNested(double value__)
    {
      if (!beacon.isNull())
      {
        beacon.get()->setTimeStamp(value__);
      }
    }

    void
    LblEstimate::setSourceNested(uint16_t value__)
    {
      if (!beacon.isNull())
      {
        beacon.get()->setSource(value__);
      }
    }

    void
    LblEstimate::setSourceEntityNested(uint8_t value__)
    {
      if (!beacon.isNull())
      {
        beacon.get()->setSourceEntity(value__);
      }
    }

    void
    LblEstimate::setDestinationNested(uint16_t value__)
    {
      if (!beacon.isNull())
      {
        beacon.get()->setDestination(value__);
      }
    }

    void
    LblEstimate::setDestinationEntityNested(uint8_t value__)
    {
      if (!beacon.isNull())
      {
        beacon.get()->setDestinationEntity(value__);
      }
    }

    AlignmentState::AlignmentState(void)
    {
      m_header.mgid = 361;
      clear();
    }

    void
    AlignmentState::clear(void)
    {
      state = 0;
    }

    bool
    AlignmentState::fieldsEqual(const Message& msg__) const
    {
      const IMC::AlignmentState& other__ = static_cast<const AlignmentState&>(msg__);
      if (state != other__.state) return false;
      return true;
    }

    int
    AlignmentState::validate(void) const
    {
      return false;
    }

    uint8_t*
    AlignmentState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      return ptr__;
    }

    uint16_t
    AlignmentState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AlignmentState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AlignmentState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
    }

    GroupStreamVelocity::GroupStreamVelocity(void)
    {
      m_header.mgid = 362;
      clear();
    }

    void
    GroupStreamVelocity::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    GroupStreamVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::GroupStreamVelocity& other__ = static_cast<const GroupStreamVelocity&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    GroupStreamVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    GroupStreamVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    GroupStreamVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    GroupStreamVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    GroupStreamVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    DesiredHeading::DesiredHeading(void)
    {
      m_header.mgid = 400;
      clear();
    }

    void
    DesiredHeading::clear(void)
    {
      value = 0;
    }

    bool
    DesiredHeading::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredHeading& other__ = static_cast<const DesiredHeading&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DesiredHeading::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredHeading::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredHeading::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredHeading::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredHeading::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredHeading::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredHeading::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DesiredZ::DesiredZ(void)
    {
      m_header.mgid = 401;
      clear();
    }

    void
    DesiredZ::clear(void)
    {
      value = 0;
      z_units = 0;
    }

    bool
    DesiredZ::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredZ& other__ = static_cast<const DesiredZ&>(msg__);
      if (value != other__.value) return false;
      if (z_units != other__.z_units) return false;
      return true;
    }

    int
    DesiredZ::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredZ::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredZ::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredZ::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredZ::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredZ::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    DesiredZ::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
    }

    DesiredSpeed::DesiredSpeed(void)
    {
      m_header.mgid = 402;
      clear();
    }

    void
    DesiredSpeed::clear(void)
    {
      value = 0;
      speed_units = 0;
    }

    bool
    DesiredSpeed::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredSpeed& other__ = static_cast<const DesiredSpeed&>(msg__);
      if (value != other__.value) return false;
      if (speed_units != other__.speed_units) return false;
      return true;
    }

    int
    DesiredSpeed::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredSpeed::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredSpeed::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredSpeed::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredSpeed::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredSpeed::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredSpeed::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
    }

    DesiredRoll::DesiredRoll(void)
    {
      m_header.mgid = 403;
      clear();
    }

    void
    DesiredRoll::clear(void)
    {
      value = 0;
    }

    bool
    DesiredRoll::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredRoll& other__ = static_cast<const DesiredRoll&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DesiredRoll::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredRoll::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredRoll::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredRoll::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredRoll::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredRoll::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredRoll::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DesiredPitch::DesiredPitch(void)
    {
      m_header.mgid = 404;
      clear();
    }

    void
    DesiredPitch::clear(void)
    {
      value = 0;
    }

    bool
    DesiredPitch::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredPitch& other__ = static_cast<const DesiredPitch&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DesiredPitch::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredPitch::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredPitch::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredPitch::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredPitch::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredPitch::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredPitch::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DesiredVerticalRate::DesiredVerticalRate(void)
    {
      m_header.mgid = 405;
      clear();
    }

    void
    DesiredVerticalRate::clear(void)
    {
      value = 0;
    }

    bool
    DesiredVerticalRate::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredVerticalRate& other__ = static_cast<const DesiredVerticalRate&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DesiredVerticalRate::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredVerticalRate::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredVerticalRate::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredVerticalRate::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredVerticalRate::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredVerticalRate::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredVerticalRate::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DesiredPath::DesiredPath(void)
    {
      m_header.mgid = 406;
      clear();
    }

    void
    DesiredPath::clear(void)
    {
      path_ref = 0;
      start_lat = 0;
      start_lon = 0;
      start_z = 0;
      start_z_units = 0;
      end_lat = 0;
      end_lon = 0;
      end_z = 0;
      end_z_units = 0;
      speed = 0;
      speed_units = 0;
      lradius = 0;
      flags = 0;
    }

    bool
    DesiredPath::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredPath& other__ = static_cast<const DesiredPath&>(msg__);
      if (path_ref != other__.path_ref) return false;
      if (start_lat != other__.start_lat) return false;
      if (start_lon != other__.start_lon) return false;
      if (start_z != other__.start_z) return false;
      if (start_z_units != other__.start_z_units) return false;
      if (end_lat != other__.end_lat) return false;
      if (end_lon != other__.end_lon) return false;
      if (end_z != other__.end_z) return false;
      if (end_z_units != other__.end_z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (lradius != other__.lradius) return false;
      if (flags != other__.flags) return false;
      return true;
    }

    int
    DesiredPath::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredPath::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(path_ref, ptr__);
      ptr__ += IMC::serialize(start_lat, ptr__);
      ptr__ += IMC::serialize(start_lon, ptr__);
      ptr__ += IMC::serialize(start_z, ptr__);
      ptr__ += IMC::serialize(start_z_units, ptr__);
      ptr__ += IMC::serialize(end_lat, ptr__);
      ptr__ += IMC::serialize(end_lon, ptr__);
      ptr__ += IMC::serialize(end_z, ptr__);
      ptr__ += IMC::serialize(end_z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(lradius, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredPath::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(path_ref, bfr__, size__);
      bfr__ += IMC::deserialize(start_lat, bfr__, size__);
      bfr__ += IMC::deserialize(start_lon, bfr__, size__);
      bfr__ += IMC::deserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(end_lat, bfr__, size__);
      bfr__ += IMC::deserialize(end_lon, bfr__, size__);
      bfr__ += IMC::deserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(lradius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredPath::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(path_ref, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lradius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DesiredPath::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "path_ref", path_ref, nindent__);
      IMC::toJSON(os__, "start_lat", start_lat, nindent__);
      IMC::toJSON(os__, "start_lon", start_lon, nindent__);
      IMC::toJSON(os__, "start_z", start_z, nindent__);
      IMC::toJSON(os__, "start_z_units", start_z_units, nindent__);
      IMC::toJSON(os__, "end_lat", end_lat, nindent__);
      IMC::toJSON(os__, "end_lon", end_lon, nindent__);
      IMC::toJSON(os__, "end_z", end_z, nindent__);
      IMC::toJSON(os__, "end_z_units", end_z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "lradius", lradius, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
    }

    DesiredControl::DesiredControl(void)
    {
      m_header.mgid = 407;
      clear();
    }

    void
    DesiredControl::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
      k = 0;
      m = 0;
      n = 0;
      flags = 0;
    }

    bool
    DesiredControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredControl& other__ = static_cast<const DesiredControl&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (k != other__.k) return false;
      if (m != other__.m) return false;
      if (n != other__.n) return false;
      if (flags != other__.flags) return false;
      return true;
    }

    int
    DesiredControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(k, ptr__);
      ptr__ += IMC::serialize(m, ptr__);
      ptr__ += IMC::serialize(n, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(k, bfr__, size__);
      bfr__ += IMC::deserialize(m, bfr__, size__);
      bfr__ += IMC::deserialize(n, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(k, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(m, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(n, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DesiredControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "k", k, nindent__);
      IMC::toJSON(os__, "m", m, nindent__);
      IMC::toJSON(os__, "n", n, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
    }

    DesiredHeadingRate::DesiredHeadingRate(void)
    {
      m_header.mgid = 408;
      clear();
    }

    void
    DesiredHeadingRate::clear(void)
    {
      value = 0;
    }

    bool
    DesiredHeadingRate::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredHeadingRate& other__ = static_cast<const DesiredHeadingRate&>(msg__);
      if (value != other__.value) return false;
      return true;
    }

    int
    DesiredHeadingRate::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredHeadingRate::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredHeadingRate::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredHeadingRate::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    DesiredHeadingRate::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    DesiredHeadingRate::setValueFP(fp64_t val)
    {
      value = static_cast<fp64_t>(val);
    }

    void
    DesiredHeadingRate::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
    }

    DesiredVelocity::DesiredVelocity(void)
    {
      m_header.mgid = 409;
      clear();
    }

    void
    DesiredVelocity::clear(void)
    {
      u = 0;
      v = 0;
      w = 0;
      p = 0;
      q = 0;
      r = 0;
      flags = 0;
    }

    bool
    DesiredVelocity::fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredVelocity& other__ = static_cast<const DesiredVelocity&>(msg__);
      if (u != other__.u) return false;
      if (v != other__.v) return false;
      if (w != other__.w) return false;
      if (p != other__.p) return false;
      if (q != other__.q) return false;
      if (r != other__.r) return false;
      if (flags != other__.flags) return false;
      return true;
    }

    int
    DesiredVelocity::validate(void) const
    {
      return false;
    }

    uint8_t*
    DesiredVelocity::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(u, ptr__);
      ptr__ += IMC::serialize(v, ptr__);
      ptr__ += IMC::serialize(w, ptr__);
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(q, ptr__);
      ptr__ += IMC::serialize(r, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      return ptr__;
    }

    uint16_t
    DesiredVelocity::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(u, bfr__, size__);
      bfr__ += IMC::deserialize(v, bfr__, size__);
      bfr__ += IMC::deserialize(w, bfr__, size__);
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(q, bfr__, size__);
      bfr__ += IMC::deserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    DesiredVelocity::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(u, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(v, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(w, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      return bfr__ - start__;
    }

    void
    DesiredVelocity::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "u", u, nindent__);
      IMC::toJSON(os__, "v", v, nindent__);
      IMC::toJSON(os__, "w", w, nindent__);
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "q", q, nindent__);
      IMC::toJSON(os__, "r", r, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
    }

    PathControlState::PathControlState(void)
    {
      m_header.mgid = 410;
      clear();
    }

    void
    PathControlState::clear(void)
    {
      path_ref = 0;
      start_lat = 0;
      start_lon = 0;
      start_z = 0;
      start_z_units = 0;
      end_lat = 0;
      end_lon = 0;
      end_z = 0;
      end_z_units = 0;
      lradius = 0;
      flags = 0;
      x = 0;
      y = 0;
      z = 0;
      vx = 0;
      vy = 0;
      vz = 0;
      course_error = 0;
      eta = 0;
    }

    bool
    PathControlState::fieldsEqual(const Message& msg__) const
    {
      const IMC::PathControlState& other__ = static_cast<const PathControlState&>(msg__);
      if (path_ref != other__.path_ref) return false;
      if (start_lat != other__.start_lat) return false;
      if (start_lon != other__.start_lon) return false;
      if (start_z != other__.start_z) return false;
      if (start_z_units != other__.start_z_units) return false;
      if (end_lat != other__.end_lat) return false;
      if (end_lon != other__.end_lon) return false;
      if (end_z != other__.end_z) return false;
      if (end_z_units != other__.end_z_units) return false;
      if (lradius != other__.lradius) return false;
      if (flags != other__.flags) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (vx != other__.vx) return false;
      if (vy != other__.vy) return false;
      if (vz != other__.vz) return false;
      if (course_error != other__.course_error) return false;
      if (eta != other__.eta) return false;
      return true;
    }

    int
    PathControlState::validate(void) const
    {
      return false;
    }

    uint8_t*
    PathControlState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(path_ref, ptr__);
      ptr__ += IMC::serialize(start_lat, ptr__);
      ptr__ += IMC::serialize(start_lon, ptr__);
      ptr__ += IMC::serialize(start_z, ptr__);
      ptr__ += IMC::serialize(start_z_units, ptr__);
      ptr__ += IMC::serialize(end_lat, ptr__);
      ptr__ += IMC::serialize(end_lon, ptr__);
      ptr__ += IMC::serialize(end_z, ptr__);
      ptr__ += IMC::serialize(end_z_units, ptr__);
      ptr__ += IMC::serialize(lradius, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(vx, ptr__);
      ptr__ += IMC::serialize(vy, ptr__);
      ptr__ += IMC::serialize(vz, ptr__);
      ptr__ += IMC::serialize(course_error, ptr__);
      ptr__ += IMC::serialize(eta, ptr__);
      return ptr__;
    }

    uint16_t
    PathControlState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(path_ref, bfr__, size__);
      bfr__ += IMC::deserialize(start_lat, bfr__, size__);
      bfr__ += IMC::deserialize(start_lon, bfr__, size__);
      bfr__ += IMC::deserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(end_lat, bfr__, size__);
      bfr__ += IMC::deserialize(end_lon, bfr__, size__);
      bfr__ += IMC::deserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(lradius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(vx, bfr__, size__);
      bfr__ += IMC::deserialize(vy, bfr__, size__);
      bfr__ += IMC::deserialize(vz, bfr__, size__);
      bfr__ += IMC::deserialize(course_error, bfr__, size__);
      bfr__ += IMC::deserialize(eta, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PathControlState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(path_ref, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lradius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vz, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(course_error, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(eta, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PathControlState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "path_ref", path_ref, nindent__);
      IMC::toJSON(os__, "start_lat", start_lat, nindent__);
      IMC::toJSON(os__, "start_lon", start_lon, nindent__);
      IMC::toJSON(os__, "start_z", start_z, nindent__);
      IMC::toJSON(os__, "start_z_units", start_z_units, nindent__);
      IMC::toJSON(os__, "end_lat", end_lat, nindent__);
      IMC::toJSON(os__, "end_lon", end_lon, nindent__);
      IMC::toJSON(os__, "end_z", end_z, nindent__);
      IMC::toJSON(os__, "end_z_units", end_z_units, nindent__);
      IMC::toJSON(os__, "lradius", lradius, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "vx", vx, nindent__);
      IMC::toJSON(os__, "vy", vy, nindent__);
      IMC::toJSON(os__, "vz", vz, nindent__);
      IMC::toJSON(os__, "course_error", course_error, nindent__);
      IMC::toJSON(os__, "eta", eta, nindent__);
    }

    AllocatedControlTorques::AllocatedControlTorques(void)
    {
      m_header.mgid = 411;
      clear();
    }

    void
    AllocatedControlTorques::clear(void)
    {
      k = 0;
      m = 0;
      n = 0;
    }

    bool
    AllocatedControlTorques::fieldsEqual(const Message& msg__) const
    {
      const IMC::AllocatedControlTorques& other__ = static_cast<const AllocatedControlTorques&>(msg__);
      if (k != other__.k) return false;
      if (m != other__.m) return false;
      if (n != other__.n) return false;
      return true;
    }

    int
    AllocatedControlTorques::validate(void) const
    {
      return false;
    }

    uint8_t*
    AllocatedControlTorques::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(k, ptr__);
      ptr__ += IMC::serialize(m, ptr__);
      ptr__ += IMC::serialize(n, ptr__);
      return ptr__;
    }

    uint16_t
    AllocatedControlTorques::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(k, bfr__, size__);
      bfr__ += IMC::deserialize(m, bfr__, size__);
      bfr__ += IMC::deserialize(n, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AllocatedControlTorques::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(k, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(m, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(n, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AllocatedControlTorques::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "k", k, nindent__);
      IMC::toJSON(os__, "m", m, nindent__);
      IMC::toJSON(os__, "n", n, nindent__);
    }

    ControlParcel::ControlParcel(void)
    {
      m_header.mgid = 412;
      clear();
    }

    void
    ControlParcel::clear(void)
    {
      p = 0;
      i = 0;
      d = 0;
      a = 0;
    }

    bool
    ControlParcel::fieldsEqual(const Message& msg__) const
    {
      const IMC::ControlParcel& other__ = static_cast<const ControlParcel&>(msg__);
      if (p != other__.p) return false;
      if (i != other__.i) return false;
      if (d != other__.d) return false;
      if (a != other__.a) return false;
      return true;
    }

    int
    ControlParcel::validate(void) const
    {
      return false;
    }

    uint8_t*
    ControlParcel::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(i, ptr__);
      ptr__ += IMC::serialize(d, ptr__);
      ptr__ += IMC::serialize(a, ptr__);
      return ptr__;
    }

    uint16_t
    ControlParcel::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(i, bfr__, size__);
      bfr__ += IMC::deserialize(d, bfr__, size__);
      bfr__ += IMC::deserialize(a, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ControlParcel::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(i, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(d, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(a, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ControlParcel::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "i", i, nindent__);
      IMC::toJSON(os__, "d", d, nindent__);
      IMC::toJSON(os__, "a", a, nindent__);
    }

    Brake::Brake(void)
    {
      m_header.mgid = 413;
      clear();
    }

    void
    Brake::clear(void)
    {
      op = 0;
    }

    bool
    Brake::fieldsEqual(const Message& msg__) const
    {
      const IMC::Brake& other__ = static_cast<const Brake&>(msg__);
      if (op != other__.op) return false;
      return true;
    }

    int
    Brake::validate(void) const
    {
      return false;
    }

    uint8_t*
    Brake::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      return ptr__;
    }

    uint16_t
    Brake::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Brake::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Brake::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
    }

    Goto::Goto(void)
    {
      m_header.mgid = 450;
      clear();
    }

    void
    Goto::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      roll = 0;
      pitch = 0;
      yaw = 0;
      custom.clear();
    }

    bool
    Goto::fieldsEqual(const Message& msg__) const
    {
      const IMC::Goto& other__ = static_cast<const Goto&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (roll != other__.roll) return false;
      if (pitch != other__.pitch) return false;
      if (yaw != other__.yaw) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Goto::validate(void) const
    {
      return false;
    }

    uint8_t*
    Goto::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(roll, ptr__);
      ptr__ += IMC::serialize(pitch, ptr__);
      ptr__ += IMC::serialize(yaw, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Goto::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(roll, bfr__, size__);
      bfr__ += IMC::deserialize(pitch, bfr__, size__);
      bfr__ += IMC::deserialize(yaw, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Goto::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(roll, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(yaw, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Goto::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "roll", roll, nindent__);
      IMC::toJSON(os__, "pitch", pitch, nindent__);
      IMC::toJSON(os__, "yaw", yaw, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    PopUp::PopUp(void)
    {
      m_header.mgid = 451;
      clear();
    }

    void
    PopUp::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      duration = 0;
      radius = 0;
      flags = 0;
      custom.clear();
    }

    bool
    PopUp::fieldsEqual(const Message& msg__) const
    {
      const IMC::PopUp& other__ = static_cast<const PopUp&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (duration != other__.duration) return false;
      if (radius != other__.radius) return false;
      if (flags != other__.flags) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    PopUp::validate(void) const
    {
      return false;
    }

    uint8_t*
    PopUp::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    PopUp::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PopUp::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PopUp::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    Teleoperation::Teleoperation(void)
    {
      m_header.mgid = 452;
      clear();
    }

    void
    Teleoperation::clear(void)
    {
      custom.clear();
    }

    bool
    Teleoperation::fieldsEqual(const Message& msg__) const
    {
      const IMC::Teleoperation& other__ = static_cast<const Teleoperation&>(msg__);
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Teleoperation::validate(void) const
    {
      return false;
    }

    uint8_t*
    Teleoperation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Teleoperation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Teleoperation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Teleoperation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    Loiter::Loiter(void)
    {
      m_header.mgid = 453;
      clear();
    }

    void
    Loiter::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      duration = 0;
      speed = 0;
      speed_units = 0;
      type = 0;
      radius = 0;
      length = 0;
      bearing = 0;
      direction = 0;
      custom.clear();
    }

    bool
    Loiter::fieldsEqual(const Message& msg__) const
    {
      const IMC::Loiter& other__ = static_cast<const Loiter&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (duration != other__.duration) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (type != other__.type) return false;
      if (radius != other__.radius) return false;
      if (length != other__.length) return false;
      if (bearing != other__.bearing) return false;
      if (direction != other__.direction) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Loiter::validate(void) const
    {
      return false;
    }

    uint8_t*
    Loiter::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      ptr__ += IMC::serialize(length, ptr__);
      ptr__ += IMC::serialize(bearing, ptr__);
      ptr__ += IMC::serialize(direction, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Loiter::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(length, bfr__, size__);
      bfr__ += IMC::deserialize(bearing, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Loiter::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(length, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bearing, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Loiter::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
      IMC::toJSON(os__, "length", length, nindent__);
      IMC::toJSON(os__, "bearing", bearing, nindent__);
      IMC::toJSON(os__, "direction", direction, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    IdleManeuver::IdleManeuver(void)
    {
      m_header.mgid = 454;
      clear();
    }

    void
    IdleManeuver::clear(void)
    {
      duration = 0;
      custom.clear();
    }

    bool
    IdleManeuver::fieldsEqual(const Message& msg__) const
    {
      const IMC::IdleManeuver& other__ = static_cast<const IdleManeuver&>(msg__);
      if (duration != other__.duration) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    IdleManeuver::validate(void) const
    {
      return false;
    }

    uint8_t*
    IdleManeuver::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    IdleManeuver::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IdleManeuver::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    IdleManeuver::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    LowLevelControl::LowLevelControl(void)
    {
      m_header.mgid = 455;
      clear();
      control.setParent(this);
    }

    void
    LowLevelControl::clear(void)
    {
      control.clear();
      duration = 0;
      custom.clear();
    }

    bool
    LowLevelControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::LowLevelControl& other__ = static_cast<const LowLevelControl&>(msg__);
      if (control != other__.control) return false;
      if (duration != other__.duration) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    LowLevelControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    LowLevelControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += control.serialize(ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    LowLevelControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += control.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LowLevelControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += control.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LowLevelControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      control.toJSON(os__, "control", nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    LowLevelControl::setTimeStampNested(double value__)
    {
      if (!control.isNull())
      {
        control.get()->setTimeStamp(value__);
      }
    }

    void
    LowLevelControl::setSourceNested(uint16_t value__)
    {
      if (!control.isNull())
      {
        control.get()->setSource(value__);
      }
    }

    void
    LowLevelControl::setSourceEntityNested(uint8_t value__)
    {
      if (!control.isNull())
      {
        control.get()->setSourceEntity(value__);
      }
    }

    void
    LowLevelControl::setDestinationNested(uint16_t value__)
    {
      if (!control.isNull())
      {
        control.get()->setDestination(value__);
      }
    }

    void
    LowLevelControl::setDestinationEntityNested(uint8_t value__)
    {
      if (!control.isNull())
      {
        control.get()->setDestinationEntity(value__);
      }
    }

    Rows::Rows(void)
    {
      m_header.mgid = 456;
      clear();
    }

    void
    Rows::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      bearing = 0;
      cross_angle = 0;
      width = 0;
      length = 0;
      hstep = 0;
      coff = 0;
      alternation = 0;
      flags = 0;
      custom.clear();
    }

    bool
    Rows::fieldsEqual(const Message& msg__) const
    {
      const IMC::Rows& other__ = static_cast<const Rows&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (bearing != other__.bearing) return false;
      if (cross_angle != other__.cross_angle) return false;
      if (width != other__.width) return false;
      if (length != other__.length) return false;
      if (hstep != other__.hstep) return false;
      if (coff != other__.coff) return false;
      if (alternation != other__.alternation) return false;
      if (flags != other__.flags) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Rows::validate(void) const
    {
      return false;
    }

    uint8_t*
    Rows::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(bearing, ptr__);
      ptr__ += IMC::serialize(cross_angle, ptr__);
      ptr__ += IMC::serialize(width, ptr__);
      ptr__ += IMC::serialize(length, ptr__);
      ptr__ += IMC::serialize(hstep, ptr__);
      ptr__ += IMC::serialize(coff, ptr__);
      ptr__ += IMC::serialize(alternation, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Rows::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(bearing, bfr__, size__);
      bfr__ += IMC::deserialize(cross_angle, bfr__, size__);
      bfr__ += IMC::deserialize(width, bfr__, size__);
      bfr__ += IMC::deserialize(length, bfr__, size__);
      bfr__ += IMC::deserialize(hstep, bfr__, size__);
      bfr__ += IMC::deserialize(coff, bfr__, size__);
      bfr__ += IMC::deserialize(alternation, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Rows::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bearing, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cross_angle, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(width, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(length, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(hstep, bfr__, size__);
      bfr__ += IMC::deserialize(coff, bfr__, size__);
      bfr__ += IMC::deserialize(alternation, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Rows::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "bearing", bearing, nindent__);
      IMC::toJSON(os__, "cross_angle", cross_angle, nindent__);
      IMC::toJSON(os__, "width", width, nindent__);
      IMC::toJSON(os__, "length", length, nindent__);
      IMC::toJSON(os__, "hstep", hstep, nindent__);
      IMC::toJSON(os__, "coff", coff, nindent__);
      IMC::toJSON(os__, "alternation", alternation, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    PathPoint::PathPoint(void)
    {
      m_header.mgid = 458;
      clear();
    }

    void
    PathPoint::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    PathPoint::fieldsEqual(const Message& msg__) const
    {
      const IMC::PathPoint& other__ = static_cast<const PathPoint&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    PathPoint::validate(void) const
    {
      return false;
    }

    uint8_t*
    PathPoint::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    PathPoint::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PathPoint::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PathPoint::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    FollowPath::FollowPath(void)
    {
      m_header.mgid = 457;
      clear();
      points.setParent(this);
    }

    void
    FollowPath::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      points.clear();
      custom.clear();
    }

    bool
    FollowPath::fieldsEqual(const Message& msg__) const
    {
      const IMC::FollowPath& other__ = static_cast<const FollowPath&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (points != other__.points) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    FollowPath::validate(void) const
    {
      return false;
    }

    uint8_t*
    FollowPath::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += points.serialize(ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    FollowPath::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FollowPath::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FollowPath::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      points.toJSON(os__, "points", nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    FollowPath::setTimeStampNested(double value__)
    {
      points.setTimeStamp(value__);
    }

    void
    FollowPath::setSourceNested(uint16_t value__)
    {
      points.setSource(value__);
    }

    void
    FollowPath::setSourceEntityNested(uint8_t value__)
    {
      points.setSourceEntity(value__);
    }

    void
    FollowPath::setDestinationNested(uint16_t value__)
    {
      points.setDestination(value__);
    }

    void
    FollowPath::setDestinationEntityNested(uint8_t value__)
    {
      points.setDestinationEntity(value__);
    }

    YoYo::YoYo(void)
    {
      m_header.mgid = 459;
      clear();
    }

    void
    YoYo::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      amplitude = 0;
      pitch = 0;
      speed = 0;
      speed_units = 0;
      custom.clear();
    }

    bool
    YoYo::fieldsEqual(const Message& msg__) const
    {
      const IMC::YoYo& other__ = static_cast<const YoYo&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (amplitude != other__.amplitude) return false;
      if (pitch != other__.pitch) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    YoYo::validate(void) const
    {
      return false;
    }

    uint8_t*
    YoYo::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(amplitude, ptr__);
      ptr__ += IMC::serialize(pitch, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    YoYo::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(amplitude, bfr__, size__);
      bfr__ += IMC::deserialize(pitch, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    YoYo::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(amplitude, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    YoYo::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "amplitude", amplitude, nindent__);
      IMC::toJSON(os__, "pitch", pitch, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    TeleoperationDone::TeleoperationDone(void)
    {
      m_header.mgid = 460;
      clear();
    }

    void
    TeleoperationDone::clear(void)
    {
    }

    int
    TeleoperationDone::validate(void) const
    {
      return false;
    }

    uint8_t*
    TeleoperationDone::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    TeleoperationDone::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    TeleoperationDone::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    StationKeeping::StationKeeping(void)
    {
      m_header.mgid = 461;
      clear();
    }

    void
    StationKeeping::clear(void)
    {
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      radius = 0;
      duration = 0;
      speed = 0;
      speed_units = 0;
      custom.clear();
    }

    bool
    StationKeeping::fieldsEqual(const Message& msg__) const
    {
      const IMC::StationKeeping& other__ = static_cast<const StationKeeping&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (radius != other__.radius) return false;
      if (duration != other__.duration) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    StationKeeping::validate(void) const
    {
      return false;
    }

    uint8_t*
    StationKeeping::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    StationKeeping::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    StationKeeping::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    StationKeeping::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    Elevator::Elevator(void)
    {
      m_header.mgid = 462;
      clear();
    }

    void
    Elevator::clear(void)
    {
      timeout = 0;
      flags = 0;
      lat = 0;
      lon = 0;
      start_z = 0;
      start_z_units = 0;
      end_z = 0;
      end_z_units = 0;
      radius = 0;
      speed = 0;
      speed_units = 0;
      custom.clear();
    }

    bool
    Elevator::fieldsEqual(const Message& msg__) const
    {
      const IMC::Elevator& other__ = static_cast<const Elevator&>(msg__);
      if (timeout != other__.timeout) return false;
      if (flags != other__.flags) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (start_z != other__.start_z) return false;
      if (start_z_units != other__.start_z_units) return false;
      if (end_z != other__.end_z) return false;
      if (end_z_units != other__.end_z_units) return false;
      if (radius != other__.radius) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Elevator::validate(void) const
    {
      return false;
    }

    uint8_t*
    Elevator::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(start_z, ptr__);
      ptr__ += IMC::serialize(start_z_units, ptr__);
      ptr__ += IMC::serialize(end_z, ptr__);
      ptr__ += IMC::serialize(end_z_units, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Elevator::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Elevator::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_z, bfr__, size__);
      bfr__ += IMC::deserialize(start_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(end_z, bfr__, size__);
      bfr__ += IMC::deserialize(end_z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Elevator::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "start_z", start_z, nindent__);
      IMC::toJSON(os__, "start_z_units", start_z_units, nindent__);
      IMC::toJSON(os__, "end_z", end_z, nindent__);
      IMC::toJSON(os__, "end_z_units", end_z_units, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    TrajectoryPoint::TrajectoryPoint(void)
    {
      m_header.mgid = 464;
      clear();
    }

    void
    TrajectoryPoint::clear(void)
    {
      x = 0;
      y = 0;
      z = 0;
      t = 0;
    }

    bool
    TrajectoryPoint::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrajectoryPoint& other__ = static_cast<const TrajectoryPoint&>(msg__);
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (t != other__.t) return false;
      return true;
    }

    int
    TrajectoryPoint::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrajectoryPoint::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(t, ptr__);
      return ptr__;
    }

    uint16_t
    TrajectoryPoint::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(t, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrajectoryPoint::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(t, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrajectoryPoint::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "t", t, nindent__);
    }

    FollowTrajectory::FollowTrajectory(void)
    {
      m_header.mgid = 463;
      clear();
      points.setParent(this);
    }

    void
    FollowTrajectory::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      points.clear();
      custom.clear();
    }

    bool
    FollowTrajectory::fieldsEqual(const Message& msg__) const
    {
      const IMC::FollowTrajectory& other__ = static_cast<const FollowTrajectory&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (points != other__.points) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    FollowTrajectory::validate(void) const
    {
      return false;
    }

    uint8_t*
    FollowTrajectory::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += points.serialize(ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    FollowTrajectory::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FollowTrajectory::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FollowTrajectory::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      points.toJSON(os__, "points", nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    FollowTrajectory::setTimeStampNested(double value__)
    {
      points.setTimeStamp(value__);
    }

    void
    FollowTrajectory::setSourceNested(uint16_t value__)
    {
      points.setSource(value__);
    }

    void
    FollowTrajectory::setSourceEntityNested(uint8_t value__)
    {
      points.setSourceEntity(value__);
    }

    void
    FollowTrajectory::setDestinationNested(uint16_t value__)
    {
      points.setDestination(value__);
    }

    void
    FollowTrajectory::setDestinationEntityNested(uint8_t value__)
    {
      points.setDestinationEntity(value__);
    }

    CustomManeuver::CustomManeuver(void)
    {
      m_header.mgid = 465;
      clear();
    }

    void
    CustomManeuver::clear(void)
    {
      timeout = 0;
      name.clear();
      custom.clear();
    }

    bool
    CustomManeuver::fieldsEqual(const Message& msg__) const
    {
      const IMC::CustomManeuver& other__ = static_cast<const CustomManeuver&>(msg__);
      if (timeout != other__.timeout) return false;
      if (name != other__.name) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    CustomManeuver::validate(void) const
    {
      return false;
    }

    uint8_t*
    CustomManeuver::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    CustomManeuver::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CustomManeuver::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CustomManeuver::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    VehicleFormationParticipant::VehicleFormationParticipant(void)
    {
      m_header.mgid = 467;
      clear();
    }

    void
    VehicleFormationParticipant::clear(void)
    {
      vid = 0;
      off_x = 0;
      off_y = 0;
      off_z = 0;
    }

    bool
    VehicleFormationParticipant::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleFormationParticipant& other__ = static_cast<const VehicleFormationParticipant&>(msg__);
      if (vid != other__.vid) return false;
      if (off_x != other__.off_x) return false;
      if (off_y != other__.off_y) return false;
      if (off_z != other__.off_z) return false;
      return true;
    }

    int
    VehicleFormationParticipant::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleFormationParticipant::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(vid, ptr__);
      ptr__ += IMC::serialize(off_x, ptr__);
      ptr__ += IMC::serialize(off_y, ptr__);
      ptr__ += IMC::serialize(off_z, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleFormationParticipant::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(vid, bfr__, size__);
      bfr__ += IMC::deserialize(off_x, bfr__, size__);
      bfr__ += IMC::deserialize(off_y, bfr__, size__);
      bfr__ += IMC::deserialize(off_z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleFormationParticipant::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(vid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(off_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(off_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(off_z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleFormationParticipant::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "vid", vid, nindent__);
      IMC::toJSON(os__, "off_x", off_x, nindent__);
      IMC::toJSON(os__, "off_y", off_y, nindent__);
      IMC::toJSON(os__, "off_z", off_z, nindent__);
    }

    VehicleFormation::VehicleFormation(void)
    {
      m_header.mgid = 466;
      clear();
      points.setParent(this);
      participants.setParent(this);
    }

    void
    VehicleFormation::clear(void)
    {
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      points.clear();
      participants.clear();
      start_time = 0;
      custom.clear();
    }

    bool
    VehicleFormation::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleFormation& other__ = static_cast<const VehicleFormation&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (points != other__.points) return false;
      if (participants != other__.participants) return false;
      if (start_time != other__.start_time) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    VehicleFormation::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleFormation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += points.serialize(ptr__);
      ptr__ += participants.serialize(ptr__);
      ptr__ += IMC::serialize(start_time, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleFormation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.deserialize(bfr__, size__);
      bfr__ += participants.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(start_time, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleFormation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += points.reverseDeserialize(bfr__, size__);
      bfr__ += participants.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleFormation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      points.toJSON(os__, "points", nindent__);
      participants.toJSON(os__, "participants", nindent__);
      IMC::toJSON(os__, "start_time", start_time, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    VehicleFormation::setTimeStampNested(double value__)
    {
      points.setTimeStamp(value__);

      participants.setTimeStamp(value__);
    }

    void
    VehicleFormation::setSourceNested(uint16_t value__)
    {
      points.setSource(value__);

      participants.setSource(value__);
    }

    void
    VehicleFormation::setSourceEntityNested(uint8_t value__)
    {
      points.setSourceEntity(value__);

      participants.setSourceEntity(value__);
    }

    void
    VehicleFormation::setDestinationNested(uint16_t value__)
    {
      points.setDestination(value__);

      participants.setDestination(value__);
    }

    void
    VehicleFormation::setDestinationEntityNested(uint8_t value__)
    {
      points.setDestinationEntity(value__);

      participants.setDestinationEntity(value__);
    }

    StopManeuver::StopManeuver(void)
    {
      m_header.mgid = 468;
      clear();
    }

    void
    StopManeuver::clear(void)
    {
    }

    int
    StopManeuver::validate(void) const
    {
      return false;
    }

    uint8_t*
    StopManeuver::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    StopManeuver::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    StopManeuver::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    RegisterManeuver::RegisterManeuver(void)
    {
      m_header.mgid = 469;
      clear();
    }

    void
    RegisterManeuver::clear(void)
    {
      mid = 0;
    }

    bool
    RegisterManeuver::fieldsEqual(const Message& msg__) const
    {
      const IMC::RegisterManeuver& other__ = static_cast<const RegisterManeuver&>(msg__);
      if (mid != other__.mid) return false;
      return true;
    }

    int
    RegisterManeuver::validate(void) const
    {
      return false;
    }

    uint8_t*
    RegisterManeuver::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(mid, ptr__);
      return ptr__;
    }

    uint16_t
    RegisterManeuver::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(mid, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RegisterManeuver::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(mid, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RegisterManeuver::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "mid", mid, nindent__);
    }

    ManeuverControlState::ManeuverControlState(void)
    {
      m_header.mgid = 470;
      clear();
    }

    void
    ManeuverControlState::clear(void)
    {
      state = 0;
      eta = 0;
      info.clear();
    }

    bool
    ManeuverControlState::fieldsEqual(const Message& msg__) const
    {
      const IMC::ManeuverControlState& other__ = static_cast<const ManeuverControlState&>(msg__);
      if (state != other__.state) return false;
      if (eta != other__.eta) return false;
      if (info != other__.info) return false;
      return true;
    }

    int
    ManeuverControlState::validate(void) const
    {
      return false;
    }

    uint8_t*
    ManeuverControlState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(eta, ptr__);
      ptr__ += IMC::serialize(info, ptr__);
      return ptr__;
    }

    uint16_t
    ManeuverControlState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(eta, bfr__, size__);
      bfr__ += IMC::deserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ManeuverControlState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(eta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ManeuverControlState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "eta", eta, nindent__);
      IMC::toJSON(os__, "info", info, nindent__);
    }

    FollowSystem::FollowSystem(void)
    {
      m_header.mgid = 471;
      clear();
    }

    void
    FollowSystem::clear(void)
    {
      system = 0;
      duration = 0;
      speed = 0;
      speed_units = 0;
      x = 0;
      y = 0;
      z = 0;
      z_units = 0;
    }

    bool
    FollowSystem::fieldsEqual(const Message& msg__) const
    {
      const IMC::FollowSystem& other__ = static_cast<const FollowSystem&>(msg__);
      if (system != other__.system) return false;
      if (duration != other__.duration) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      return true;
    }

    int
    FollowSystem::validate(void) const
    {
      return false;
    }

    uint8_t*
    FollowSystem::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(system, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      return ptr__;
    }

    uint16_t
    FollowSystem::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(system, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FollowSystem::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(system, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FollowSystem::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "system", system, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
    }

    CommsRelay::CommsRelay(void)
    {
      m_header.mgid = 472;
      clear();
    }

    void
    CommsRelay::clear(void)
    {
      lat = 0;
      lon = 0;
      speed = 0;
      speed_units = 0;
      duration = 0;
      sys_a = 0;
      sys_b = 0;
      move_threshold = 0;
    }

    bool
    CommsRelay::fieldsEqual(const Message& msg__) const
    {
      const IMC::CommsRelay& other__ = static_cast<const CommsRelay&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (duration != other__.duration) return false;
      if (sys_a != other__.sys_a) return false;
      if (sys_b != other__.sys_b) return false;
      if (move_threshold != other__.move_threshold) return false;
      return true;
    }

    int
    CommsRelay::validate(void) const
    {
      return false;
    }

    uint8_t*
    CommsRelay::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(sys_a, ptr__);
      ptr__ += IMC::serialize(sys_b, ptr__);
      ptr__ += IMC::serialize(move_threshold, ptr__);
      return ptr__;
    }

    uint16_t
    CommsRelay::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(sys_a, bfr__, size__);
      bfr__ += IMC::deserialize(sys_b, bfr__, size__);
      bfr__ += IMC::deserialize(move_threshold, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CommsRelay::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys_a, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys_b, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(move_threshold, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CommsRelay::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "sys_a", sys_a, nindent__);
      IMC::toJSON(os__, "sys_b", sys_b, nindent__);
      IMC::toJSON(os__, "move_threshold", move_threshold, nindent__);
    }

    PolygonVertex::PolygonVertex(void)
    {
      m_header.mgid = 474;
      clear();
    }

    void
    PolygonVertex::clear(void)
    {
      lat = 0;
      lon = 0;
    }

    bool
    PolygonVertex::fieldsEqual(const Message& msg__) const
    {
      const IMC::PolygonVertex& other__ = static_cast<const PolygonVertex&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      return true;
    }

    int
    PolygonVertex::validate(void) const
    {
      return false;
    }

    uint8_t*
    PolygonVertex::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      return ptr__;
    }

    uint16_t
    PolygonVertex::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PolygonVertex::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PolygonVertex::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
    }

    CoverArea::CoverArea(void)
    {
      m_header.mgid = 473;
      clear();
      polygon.setParent(this);
    }

    void
    CoverArea::clear(void)
    {
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      speed = 0;
      speed_units = 0;
      polygon.clear();
      custom.clear();
    }

    bool
    CoverArea::fieldsEqual(const Message& msg__) const
    {
      const IMC::CoverArea& other__ = static_cast<const CoverArea&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (polygon != other__.polygon) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    CoverArea::validate(void) const
    {
      return false;
    }

    uint8_t*
    CoverArea::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += polygon.serialize(ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    CoverArea::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += polygon.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CoverArea::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += polygon.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CoverArea::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      polygon.toJSON(os__, "polygon", nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    CoverArea::setTimeStampNested(double value__)
    {
      polygon.setTimeStamp(value__);
    }

    void
    CoverArea::setSourceNested(uint16_t value__)
    {
      polygon.setSource(value__);
    }

    void
    CoverArea::setSourceEntityNested(uint8_t value__)
    {
      polygon.setSourceEntity(value__);
    }

    void
    CoverArea::setDestinationNested(uint16_t value__)
    {
      polygon.setDestination(value__);
    }

    void
    CoverArea::setDestinationEntityNested(uint8_t value__)
    {
      polygon.setDestinationEntity(value__);
    }

    CompassCalibration::CompassCalibration(void)
    {
      m_header.mgid = 475;
      clear();
    }

    void
    CompassCalibration::clear(void)
    {
      timeout = 0;
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      pitch = 0;
      amplitude = 0;
      duration = 0;
      speed = 0;
      speed_units = 0;
      radius = 0;
      direction = 0;
      custom.clear();
    }

    bool
    CompassCalibration::fieldsEqual(const Message& msg__) const
    {
      const IMC::CompassCalibration& other__ = static_cast<const CompassCalibration&>(msg__);
      if (timeout != other__.timeout) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (pitch != other__.pitch) return false;
      if (amplitude != other__.amplitude) return false;
      if (duration != other__.duration) return false;
      if (speed != other__.speed) return false;
      if (speed_units != other__.speed_units) return false;
      if (radius != other__.radius) return false;
      if (direction != other__.direction) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    CompassCalibration::validate(void) const
    {
      return false;
    }

    uint8_t*
    CompassCalibration::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(pitch, ptr__);
      ptr__ += IMC::serialize(amplitude, ptr__);
      ptr__ += IMC::serialize(duration, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(speed_units, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      ptr__ += IMC::serialize(direction, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    CompassCalibration::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(pitch, bfr__, size__);
      bfr__ += IMC::deserialize(amplitude, bfr__, size__);
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CompassCalibration::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(amplitude, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(speed_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CompassCalibration::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "pitch", pitch, nindent__);
      IMC::toJSON(os__, "amplitude", amplitude, nindent__);
      IMC::toJSON(os__, "duration", duration, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "speed_units", speed_units, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
      IMC::toJSON(os__, "direction", direction, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    FormationParameters::FormationParameters(void)
    {
      m_header.mgid = 476;
      clear();
      participants.setParent(this);
    }

    void
    FormationParameters::clear(void)
    {
      formation_name.clear();
      reference_frame = 0;
      participants.clear();
      custom.clear();
    }

    bool
    FormationParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormationParameters& other__ = static_cast<const FormationParameters&>(msg__);
      if (formation_name != other__.formation_name) return false;
      if (reference_frame != other__.reference_frame) return false;
      if (participants != other__.participants) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    FormationParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormationParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(formation_name, ptr__);
      ptr__ += IMC::serialize(reference_frame, ptr__);
      ptr__ += participants.serialize(ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    FormationParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(formation_name, bfr__, size__);
      bfr__ += IMC::deserialize(reference_frame, bfr__, size__);
      bfr__ += participants.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormationParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(formation_name, bfr__, size__);
      bfr__ += IMC::deserialize(reference_frame, bfr__, size__);
      bfr__ += participants.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormationParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "formation_name", formation_name, nindent__);
      IMC::toJSON(os__, "reference_frame", reference_frame, nindent__);
      participants.toJSON(os__, "participants", nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    void
    FormationParameters::setTimeStampNested(double value__)
    {
      participants.setTimeStamp(value__);
    }

    void
    FormationParameters::setSourceNested(uint16_t value__)
    {
      participants.setSource(value__);
    }

    void
    FormationParameters::setSourceEntityNested(uint8_t value__)
    {
      participants.setSourceEntity(value__);
    }

    void
    FormationParameters::setDestinationNested(uint16_t value__)
    {
      participants.setDestination(value__);
    }

    void
    FormationParameters::setDestinationEntityNested(uint8_t value__)
    {
      participants.setDestinationEntity(value__);
    }

    FormationPlanExecution::FormationPlanExecution(void)
    {
      m_header.mgid = 477;
      clear();
    }

    void
    FormationPlanExecution::clear(void)
    {
      group_name.clear();
      formation_name.clear();
      plan_id.clear();
      description.clear();
      leader_speed = 0;
      leader_bank_lim = 0;
      pos_sim_err_lim = 0;
      pos_sim_err_wrn = 0;
      pos_sim_err_timeout = 0;
      converg_max = 0;
      converg_timeout = 0;
      comms_timeout = 0;
      turb_lim = 0;
      custom.clear();
    }

    bool
    FormationPlanExecution::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormationPlanExecution& other__ = static_cast<const FormationPlanExecution&>(msg__);
      if (group_name != other__.group_name) return false;
      if (formation_name != other__.formation_name) return false;
      if (plan_id != other__.plan_id) return false;
      if (description != other__.description) return false;
      if (leader_speed != other__.leader_speed) return false;
      if (leader_bank_lim != other__.leader_bank_lim) return false;
      if (pos_sim_err_lim != other__.pos_sim_err_lim) return false;
      if (pos_sim_err_wrn != other__.pos_sim_err_wrn) return false;
      if (pos_sim_err_timeout != other__.pos_sim_err_timeout) return false;
      if (converg_max != other__.converg_max) return false;
      if (converg_timeout != other__.converg_timeout) return false;
      if (comms_timeout != other__.comms_timeout) return false;
      if (turb_lim != other__.turb_lim) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    FormationPlanExecution::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormationPlanExecution::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(group_name, ptr__);
      ptr__ += IMC::serialize(formation_name, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(description, ptr__);
      ptr__ += IMC::serialize(leader_speed, ptr__);
      ptr__ += IMC::serialize(leader_bank_lim, ptr__);
      ptr__ += IMC::serialize(pos_sim_err_lim, ptr__);
      ptr__ += IMC::serialize(pos_sim_err_wrn, ptr__);
      ptr__ += IMC::serialize(pos_sim_err_timeout, ptr__);
      ptr__ += IMC::serialize(converg_max, ptr__);
      ptr__ += IMC::serialize(converg_timeout, ptr__);
      ptr__ += IMC::serialize(comms_timeout, ptr__);
      ptr__ += IMC::serialize(turb_lim, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    FormationPlanExecution::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(group_name, bfr__, size__);
      bfr__ += IMC::deserialize(formation_name, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(description, bfr__, size__);
      bfr__ += IMC::deserialize(leader_speed, bfr__, size__);
      bfr__ += IMC::deserialize(leader_bank_lim, bfr__, size__);
      bfr__ += IMC::deserialize(pos_sim_err_lim, bfr__, size__);
      bfr__ += IMC::deserialize(pos_sim_err_wrn, bfr__, size__);
      bfr__ += IMC::deserialize(pos_sim_err_timeout, bfr__, size__);
      bfr__ += IMC::deserialize(converg_max, bfr__, size__);
      bfr__ += IMC::deserialize(converg_timeout, bfr__, size__);
      bfr__ += IMC::deserialize(comms_timeout, bfr__, size__);
      bfr__ += IMC::deserialize(turb_lim, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormationPlanExecution::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(group_name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(formation_name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(description, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(leader_speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(leader_bank_lim, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pos_sim_err_lim, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pos_sim_err_wrn, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pos_sim_err_timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(converg_max, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(converg_timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(comms_timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(turb_lim, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormationPlanExecution::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "group_name", group_name, nindent__);
      IMC::toJSON(os__, "formation_name", formation_name, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "description", description, nindent__);
      IMC::toJSON(os__, "leader_speed", leader_speed, nindent__);
      IMC::toJSON(os__, "leader_bank_lim", leader_bank_lim, nindent__);
      IMC::toJSON(os__, "pos_sim_err_lim", pos_sim_err_lim, nindent__);
      IMC::toJSON(os__, "pos_sim_err_wrn", pos_sim_err_wrn, nindent__);
      IMC::toJSON(os__, "pos_sim_err_timeout", pos_sim_err_timeout, nindent__);
      IMC::toJSON(os__, "converg_max", converg_max, nindent__);
      IMC::toJSON(os__, "converg_timeout", converg_timeout, nindent__);
      IMC::toJSON(os__, "comms_timeout", comms_timeout, nindent__);
      IMC::toJSON(os__, "turb_lim", turb_lim, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    FollowReference::FollowReference(void)
    {
      m_header.mgid = 478;
      clear();
    }

    void
    FollowReference::clear(void)
    {
      control_src = 0;
      control_ent = 0;
      timeout = 0;
      loiter_radius = 0;
      altitude_interval = 0;
    }

    bool
    FollowReference::fieldsEqual(const Message& msg__) const
    {
      const IMC::FollowReference& other__ = static_cast<const FollowReference&>(msg__);
      if (control_src != other__.control_src) return false;
      if (control_ent != other__.control_ent) return false;
      if (timeout != other__.timeout) return false;
      if (loiter_radius != other__.loiter_radius) return false;
      if (altitude_interval != other__.altitude_interval) return false;
      return true;
    }

    int
    FollowReference::validate(void) const
    {
      return false;
    }

    uint8_t*
    FollowReference::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(control_src, ptr__);
      ptr__ += IMC::serialize(control_ent, ptr__);
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(loiter_radius, ptr__);
      ptr__ += IMC::serialize(altitude_interval, ptr__);
      return ptr__;
    }

    uint16_t
    FollowReference::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(control_src, bfr__, size__);
      bfr__ += IMC::deserialize(control_ent, bfr__, size__);
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(loiter_radius, bfr__, size__);
      bfr__ += IMC::deserialize(altitude_interval, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FollowReference::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(control_src, bfr__, size__);
      bfr__ += IMC::deserialize(control_ent, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(loiter_radius, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(altitude_interval, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FollowReference::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "control_src", control_src, nindent__);
      IMC::toJSON(os__, "control_ent", control_ent, nindent__);
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "loiter_radius", loiter_radius, nindent__);
      IMC::toJSON(os__, "altitude_interval", altitude_interval, nindent__);
    }

    Reference::Reference(void)
    {
      m_header.mgid = 479;
      clear();
      speed.setParent(this);
      z.setParent(this);
    }

    void
    Reference::clear(void)
    {
      flags = 0;
      speed.clear();
      z.clear();
      lat = 0;
      lon = 0;
      radius = 0;
    }

    bool
    Reference::fieldsEqual(const Message& msg__) const
    {
      const IMC::Reference& other__ = static_cast<const Reference&>(msg__);
      if (flags != other__.flags) return false;
      if (speed != other__.speed) return false;
      if (z != other__.z) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (radius != other__.radius) return false;
      return true;
    }

    int
    Reference::validate(void) const
    {
      return false;
    }

    uint8_t*
    Reference::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += speed.serialize(ptr__);
      ptr__ += z.serialize(ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(radius, ptr__);
      return ptr__;
    }

    uint16_t
    Reference::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += speed.deserialize(bfr__, size__);
      bfr__ += z.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(radius, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Reference::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += speed.reverseDeserialize(bfr__, size__);
      bfr__ += z.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(radius, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Reference::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "flags", flags, nindent__);
      speed.toJSON(os__, "speed", nindent__);
      z.toJSON(os__, "z", nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "radius", radius, nindent__);
    }

    void
    Reference::setTimeStampNested(double value__)
    {
      if (!speed.isNull())
      {
        speed.get()->setTimeStamp(value__);
      }

      if (!z.isNull())
      {
        z.get()->setTimeStamp(value__);
      }
    }

    void
    Reference::setSourceNested(uint16_t value__)
    {
      if (!speed.isNull())
      {
        speed.get()->setSource(value__);
      }

      if (!z.isNull())
      {
        z.get()->setSource(value__);
      }
    }

    void
    Reference::setSourceEntityNested(uint8_t value__)
    {
      if (!speed.isNull())
      {
        speed.get()->setSourceEntity(value__);
      }

      if (!z.isNull())
      {
        z.get()->setSourceEntity(value__);
      }
    }

    void
    Reference::setDestinationNested(uint16_t value__)
    {
      if (!speed.isNull())
      {
        speed.get()->setDestination(value__);
      }

      if (!z.isNull())
      {
        z.get()->setDestination(value__);
      }
    }

    void
    Reference::setDestinationEntityNested(uint8_t value__)
    {
      if (!speed.isNull())
      {
        speed.get()->setDestinationEntity(value__);
      }

      if (!z.isNull())
      {
        z.get()->setDestinationEntity(value__);
      }
    }

    FollowRefState::FollowRefState(void)
    {
      m_header.mgid = 480;
      clear();
      reference.setParent(this);
    }

    void
    FollowRefState::clear(void)
    {
      control_src = 0;
      control_ent = 0;
      reference.clear();
      state = 0;
      proximity = 0;
    }

    bool
    FollowRefState::fieldsEqual(const Message& msg__) const
    {
      const IMC::FollowRefState& other__ = static_cast<const FollowRefState&>(msg__);
      if (control_src != other__.control_src) return false;
      if (control_ent != other__.control_ent) return false;
      if (reference != other__.reference) return false;
      if (state != other__.state) return false;
      if (proximity != other__.proximity) return false;
      return true;
    }

    int
    FollowRefState::validate(void) const
    {
      return false;
    }

    uint8_t*
    FollowRefState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(control_src, ptr__);
      ptr__ += IMC::serialize(control_ent, ptr__);
      ptr__ += reference.serialize(ptr__);
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(proximity, ptr__);
      return ptr__;
    }

    uint16_t
    FollowRefState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(control_src, bfr__, size__);
      bfr__ += IMC::deserialize(control_ent, bfr__, size__);
      bfr__ += reference.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(proximity, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FollowRefState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(control_src, bfr__, size__);
      bfr__ += IMC::deserialize(control_ent, bfr__, size__);
      bfr__ += reference.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(proximity, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FollowRefState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "control_src", control_src, nindent__);
      IMC::toJSON(os__, "control_ent", control_ent, nindent__);
      reference.toJSON(os__, "reference", nindent__);
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "proximity", proximity, nindent__);
    }

    void
    FollowRefState::setTimeStampNested(double value__)
    {
      if (!reference.isNull())
      {
        reference.get()->setTimeStamp(value__);
      }
    }

    void
    FollowRefState::setSourceNested(uint16_t value__)
    {
      if (!reference.isNull())
      {
        reference.get()->setSource(value__);
      }
    }

    void
    FollowRefState::setSourceEntityNested(uint8_t value__)
    {
      if (!reference.isNull())
      {
        reference.get()->setSourceEntity(value__);
      }
    }

    void
    FollowRefState::setDestinationNested(uint16_t value__)
    {
      if (!reference.isNull())
      {
        reference.get()->setDestination(value__);
      }
    }

    void
    FollowRefState::setDestinationEntityNested(uint8_t value__)
    {
      if (!reference.isNull())
      {
        reference.get()->setDestinationEntity(value__);
      }
    }

    RelativeState::RelativeState(void)
    {
      m_header.mgid = 482;
      clear();
    }

    void
    RelativeState::clear(void)
    {
      s_id.clear();
      dist = 0;
      err = 0;
      ctrl_imp = 0;
      rel_dir_x = 0;
      rel_dir_y = 0;
      rel_dir_z = 0;
      err_x = 0;
      err_y = 0;
      err_z = 0;
      rf_err_x = 0;
      rf_err_y = 0;
      rf_err_z = 0;
      rf_err_vx = 0;
      rf_err_vy = 0;
      rf_err_vz = 0;
      ss_x = 0;
      ss_y = 0;
      ss_z = 0;
      virt_err_x = 0;
      virt_err_y = 0;
      virt_err_z = 0;
    }

    bool
    RelativeState::fieldsEqual(const Message& msg__) const
    {
      const IMC::RelativeState& other__ = static_cast<const RelativeState&>(msg__);
      if (s_id != other__.s_id) return false;
      if (dist != other__.dist) return false;
      if (err != other__.err) return false;
      if (ctrl_imp != other__.ctrl_imp) return false;
      if (rel_dir_x != other__.rel_dir_x) return false;
      if (rel_dir_y != other__.rel_dir_y) return false;
      if (rel_dir_z != other__.rel_dir_z) return false;
      if (err_x != other__.err_x) return false;
      if (err_y != other__.err_y) return false;
      if (err_z != other__.err_z) return false;
      if (rf_err_x != other__.rf_err_x) return false;
      if (rf_err_y != other__.rf_err_y) return false;
      if (rf_err_z != other__.rf_err_z) return false;
      if (rf_err_vx != other__.rf_err_vx) return false;
      if (rf_err_vy != other__.rf_err_vy) return false;
      if (rf_err_vz != other__.rf_err_vz) return false;
      if (ss_x != other__.ss_x) return false;
      if (ss_y != other__.ss_y) return false;
      if (ss_z != other__.ss_z) return false;
      if (virt_err_x != other__.virt_err_x) return false;
      if (virt_err_y != other__.virt_err_y) return false;
      if (virt_err_z != other__.virt_err_z) return false;
      return true;
    }

    int
    RelativeState::validate(void) const
    {
      return false;
    }

    uint8_t*
    RelativeState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(s_id, ptr__);
      ptr__ += IMC::serialize(dist, ptr__);
      ptr__ += IMC::serialize(err, ptr__);
      ptr__ += IMC::serialize(ctrl_imp, ptr__);
      ptr__ += IMC::serialize(rel_dir_x, ptr__);
      ptr__ += IMC::serialize(rel_dir_y, ptr__);
      ptr__ += IMC::serialize(rel_dir_z, ptr__);
      ptr__ += IMC::serialize(err_x, ptr__);
      ptr__ += IMC::serialize(err_y, ptr__);
      ptr__ += IMC::serialize(err_z, ptr__);
      ptr__ += IMC::serialize(rf_err_x, ptr__);
      ptr__ += IMC::serialize(rf_err_y, ptr__);
      ptr__ += IMC::serialize(rf_err_z, ptr__);
      ptr__ += IMC::serialize(rf_err_vx, ptr__);
      ptr__ += IMC::serialize(rf_err_vy, ptr__);
      ptr__ += IMC::serialize(rf_err_vz, ptr__);
      ptr__ += IMC::serialize(ss_x, ptr__);
      ptr__ += IMC::serialize(ss_y, ptr__);
      ptr__ += IMC::serialize(ss_z, ptr__);
      ptr__ += IMC::serialize(virt_err_x, ptr__);
      ptr__ += IMC::serialize(virt_err_y, ptr__);
      ptr__ += IMC::serialize(virt_err_z, ptr__);
      return ptr__;
    }

    uint16_t
    RelativeState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(s_id, bfr__, size__);
      bfr__ += IMC::deserialize(dist, bfr__, size__);
      bfr__ += IMC::deserialize(err, bfr__, size__);
      bfr__ += IMC::deserialize(ctrl_imp, bfr__, size__);
      bfr__ += IMC::deserialize(rel_dir_x, bfr__, size__);
      bfr__ += IMC::deserialize(rel_dir_y, bfr__, size__);
      bfr__ += IMC::deserialize(rel_dir_z, bfr__, size__);
      bfr__ += IMC::deserialize(err_x, bfr__, size__);
      bfr__ += IMC::deserialize(err_y, bfr__, size__);
      bfr__ += IMC::deserialize(err_z, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_x, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_y, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_z, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_vx, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_vy, bfr__, size__);
      bfr__ += IMC::deserialize(rf_err_vz, bfr__, size__);
      bfr__ += IMC::deserialize(ss_x, bfr__, size__);
      bfr__ += IMC::deserialize(ss_y, bfr__, size__);
      bfr__ += IMC::deserialize(ss_z, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_x, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_y, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RelativeState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(s_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(dist, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(err, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ctrl_imp, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rel_dir_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rel_dir_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rel_dir_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(err_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(err_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(err_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_vx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_vy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rf_err_vz, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RelativeState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "s_id", s_id, nindent__);
      IMC::toJSON(os__, "dist", dist, nindent__);
      IMC::toJSON(os__, "err", err, nindent__);
      IMC::toJSON(os__, "ctrl_imp", ctrl_imp, nindent__);
      IMC::toJSON(os__, "rel_dir_x", rel_dir_x, nindent__);
      IMC::toJSON(os__, "rel_dir_y", rel_dir_y, nindent__);
      IMC::toJSON(os__, "rel_dir_z", rel_dir_z, nindent__);
      IMC::toJSON(os__, "err_x", err_x, nindent__);
      IMC::toJSON(os__, "err_y", err_y, nindent__);
      IMC::toJSON(os__, "err_z", err_z, nindent__);
      IMC::toJSON(os__, "rf_err_x", rf_err_x, nindent__);
      IMC::toJSON(os__, "rf_err_y", rf_err_y, nindent__);
      IMC::toJSON(os__, "rf_err_z", rf_err_z, nindent__);
      IMC::toJSON(os__, "rf_err_vx", rf_err_vx, nindent__);
      IMC::toJSON(os__, "rf_err_vy", rf_err_vy, nindent__);
      IMC::toJSON(os__, "rf_err_vz", rf_err_vz, nindent__);
      IMC::toJSON(os__, "ss_x", ss_x, nindent__);
      IMC::toJSON(os__, "ss_y", ss_y, nindent__);
      IMC::toJSON(os__, "ss_z", ss_z, nindent__);
      IMC::toJSON(os__, "virt_err_x", virt_err_x, nindent__);
      IMC::toJSON(os__, "virt_err_y", virt_err_y, nindent__);
      IMC::toJSON(os__, "virt_err_z", virt_err_z, nindent__);
    }

    FormationMonitor::FormationMonitor(void)
    {
      m_header.mgid = 481;
      clear();
      rel_state.setParent(this);
    }

    void
    FormationMonitor::clear(void)
    {
      ax_cmd = 0;
      ay_cmd = 0;
      az_cmd = 0;
      ax_des = 0;
      ay_des = 0;
      az_des = 0;
      virt_err_x = 0;
      virt_err_y = 0;
      virt_err_z = 0;
      surf_fdbk_x = 0;
      surf_fdbk_y = 0;
      surf_fdbk_z = 0;
      surf_unkn_x = 0;
      surf_unkn_y = 0;
      surf_unkn_z = 0;
      ss_x = 0;
      ss_y = 0;
      ss_z = 0;
      rel_state.clear();
    }

    bool
    FormationMonitor::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormationMonitor& other__ = static_cast<const FormationMonitor&>(msg__);
      if (ax_cmd != other__.ax_cmd) return false;
      if (ay_cmd != other__.ay_cmd) return false;
      if (az_cmd != other__.az_cmd) return false;
      if (ax_des != other__.ax_des) return false;
      if (ay_des != other__.ay_des) return false;
      if (az_des != other__.az_des) return false;
      if (virt_err_x != other__.virt_err_x) return false;
      if (virt_err_y != other__.virt_err_y) return false;
      if (virt_err_z != other__.virt_err_z) return false;
      if (surf_fdbk_x != other__.surf_fdbk_x) return false;
      if (surf_fdbk_y != other__.surf_fdbk_y) return false;
      if (surf_fdbk_z != other__.surf_fdbk_z) return false;
      if (surf_unkn_x != other__.surf_unkn_x) return false;
      if (surf_unkn_y != other__.surf_unkn_y) return false;
      if (surf_unkn_z != other__.surf_unkn_z) return false;
      if (ss_x != other__.ss_x) return false;
      if (ss_y != other__.ss_y) return false;
      if (ss_z != other__.ss_z) return false;
      if (rel_state != other__.rel_state) return false;
      return true;
    }

    int
    FormationMonitor::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormationMonitor::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(ax_cmd, ptr__);
      ptr__ += IMC::serialize(ay_cmd, ptr__);
      ptr__ += IMC::serialize(az_cmd, ptr__);
      ptr__ += IMC::serialize(ax_des, ptr__);
      ptr__ += IMC::serialize(ay_des, ptr__);
      ptr__ += IMC::serialize(az_des, ptr__);
      ptr__ += IMC::serialize(virt_err_x, ptr__);
      ptr__ += IMC::serialize(virt_err_y, ptr__);
      ptr__ += IMC::serialize(virt_err_z, ptr__);
      ptr__ += IMC::serialize(surf_fdbk_x, ptr__);
      ptr__ += IMC::serialize(surf_fdbk_y, ptr__);
      ptr__ += IMC::serialize(surf_fdbk_z, ptr__);
      ptr__ += IMC::serialize(surf_unkn_x, ptr__);
      ptr__ += IMC::serialize(surf_unkn_y, ptr__);
      ptr__ += IMC::serialize(surf_unkn_z, ptr__);
      ptr__ += IMC::serialize(ss_x, ptr__);
      ptr__ += IMC::serialize(ss_y, ptr__);
      ptr__ += IMC::serialize(ss_z, ptr__);
      ptr__ += rel_state.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    FormationMonitor::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(ax_cmd, bfr__, size__);
      bfr__ += IMC::deserialize(ay_cmd, bfr__, size__);
      bfr__ += IMC::deserialize(az_cmd, bfr__, size__);
      bfr__ += IMC::deserialize(ax_des, bfr__, size__);
      bfr__ += IMC::deserialize(ay_des, bfr__, size__);
      bfr__ += IMC::deserialize(az_des, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_x, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_y, bfr__, size__);
      bfr__ += IMC::deserialize(virt_err_z, bfr__, size__);
      bfr__ += IMC::deserialize(surf_fdbk_x, bfr__, size__);
      bfr__ += IMC::deserialize(surf_fdbk_y, bfr__, size__);
      bfr__ += IMC::deserialize(surf_fdbk_z, bfr__, size__);
      bfr__ += IMC::deserialize(surf_unkn_x, bfr__, size__);
      bfr__ += IMC::deserialize(surf_unkn_y, bfr__, size__);
      bfr__ += IMC::deserialize(surf_unkn_z, bfr__, size__);
      bfr__ += IMC::deserialize(ss_x, bfr__, size__);
      bfr__ += IMC::deserialize(ss_y, bfr__, size__);
      bfr__ += IMC::deserialize(ss_z, bfr__, size__);
      bfr__ += rel_state.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormationMonitor::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(ax_cmd, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ay_cmd, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(az_cmd, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ax_des, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ay_des, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(az_des, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(virt_err_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_fdbk_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_fdbk_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_fdbk_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_unkn_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_unkn_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(surf_unkn_z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(ss_z, bfr__, size__);
      bfr__ += rel_state.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormationMonitor::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "ax_cmd", ax_cmd, nindent__);
      IMC::toJSON(os__, "ay_cmd", ay_cmd, nindent__);
      IMC::toJSON(os__, "az_cmd", az_cmd, nindent__);
      IMC::toJSON(os__, "ax_des", ax_des, nindent__);
      IMC::toJSON(os__, "ay_des", ay_des, nindent__);
      IMC::toJSON(os__, "az_des", az_des, nindent__);
      IMC::toJSON(os__, "virt_err_x", virt_err_x, nindent__);
      IMC::toJSON(os__, "virt_err_y", virt_err_y, nindent__);
      IMC::toJSON(os__, "virt_err_z", virt_err_z, nindent__);
      IMC::toJSON(os__, "surf_fdbk_x", surf_fdbk_x, nindent__);
      IMC::toJSON(os__, "surf_fdbk_y", surf_fdbk_y, nindent__);
      IMC::toJSON(os__, "surf_fdbk_z", surf_fdbk_z, nindent__);
      IMC::toJSON(os__, "surf_unkn_x", surf_unkn_x, nindent__);
      IMC::toJSON(os__, "surf_unkn_y", surf_unkn_y, nindent__);
      IMC::toJSON(os__, "surf_unkn_z", surf_unkn_z, nindent__);
      IMC::toJSON(os__, "ss_x", ss_x, nindent__);
      IMC::toJSON(os__, "ss_y", ss_y, nindent__);
      IMC::toJSON(os__, "ss_z", ss_z, nindent__);
      rel_state.toJSON(os__, "rel_state", nindent__);
    }

    void
    FormationMonitor::setTimeStampNested(double value__)
    {
      rel_state.setTimeStamp(value__);
    }

    void
    FormationMonitor::setSourceNested(uint16_t value__)
    {
      rel_state.setSource(value__);
    }

    void
    FormationMonitor::setSourceEntityNested(uint8_t value__)
    {
      rel_state.setSourceEntity(value__);
    }

    void
    FormationMonitor::setDestinationNested(uint16_t value__)
    {
      rel_state.setDestination(value__);
    }

    void
    FormationMonitor::setDestinationEntityNested(uint8_t value__)
    {
      rel_state.setDestinationEntity(value__);
    }

    Dislodge::Dislodge(void)
    {
      m_header.mgid = 483;
      clear();
    }

    void
    Dislodge::clear(void)
    {
      timeout = 0;
      rpm = 0;
      direction = 0;
      custom.clear();
    }

    bool
    Dislodge::fieldsEqual(const Message& msg__) const
    {
      const IMC::Dislodge& other__ = static_cast<const Dislodge&>(msg__);
      if (timeout != other__.timeout) return false;
      if (rpm != other__.rpm) return false;
      if (direction != other__.direction) return false;
      if (custom != other__.custom) return false;
      return true;
    }

    int
    Dislodge::validate(void) const
    {
      return false;
    }

    uint8_t*
    Dislodge::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      ptr__ += IMC::serialize(rpm, ptr__);
      ptr__ += IMC::serialize(direction, ptr__);
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    uint16_t
    Dislodge::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      bfr__ += IMC::deserialize(rpm, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Dislodge::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rpm, bfr__, size__);
      bfr__ += IMC::deserialize(direction, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Dislodge::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
      IMC::toJSON(os__, "rpm", rpm, nindent__);
      IMC::toJSON(os__, "direction", direction, nindent__);
      IMC::toJSON(os__, "custom", custom, nindent__);
    }

    VehicleState::VehicleState(void)
    {
      m_header.mgid = 500;
      clear();
    }

    void
    VehicleState::clear(void)
    {
      op_mode = 0;
      error_count = 0;
      error_ents.clear();
      maneuver_type = 0;
      maneuver_stime = 0;
      maneuver_eta = 0;
      control_loops = 0;
      flags = 0;
      last_error.clear();
      last_error_time = 0;
    }

    bool
    VehicleState::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleState& other__ = static_cast<const VehicleState&>(msg__);
      if (op_mode != other__.op_mode) return false;
      if (error_count != other__.error_count) return false;
      if (error_ents != other__.error_ents) return false;
      if (maneuver_type != other__.maneuver_type) return false;
      if (maneuver_stime != other__.maneuver_stime) return false;
      if (maneuver_eta != other__.maneuver_eta) return false;
      if (control_loops != other__.control_loops) return false;
      if (flags != other__.flags) return false;
      if (last_error != other__.last_error) return false;
      if (last_error_time != other__.last_error_time) return false;
      return true;
    }

    int
    VehicleState::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op_mode, ptr__);
      ptr__ += IMC::serialize(error_count, ptr__);
      ptr__ += IMC::serialize(error_ents, ptr__);
      ptr__ += IMC::serialize(maneuver_type, ptr__);
      ptr__ += IMC::serialize(maneuver_stime, ptr__);
      ptr__ += IMC::serialize(maneuver_eta, ptr__);
      ptr__ += IMC::serialize(control_loops, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(last_error, ptr__);
      ptr__ += IMC::serialize(last_error_time, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op_mode, bfr__, size__);
      bfr__ += IMC::deserialize(error_count, bfr__, size__);
      bfr__ += IMC::deserialize(error_ents, bfr__, size__);
      bfr__ += IMC::deserialize(maneuver_type, bfr__, size__);
      bfr__ += IMC::deserialize(maneuver_stime, bfr__, size__);
      bfr__ += IMC::deserialize(maneuver_eta, bfr__, size__);
      bfr__ += IMC::deserialize(control_loops, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(last_error, bfr__, size__);
      bfr__ += IMC::deserialize(last_error_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op_mode, bfr__, size__);
      bfr__ += IMC::deserialize(error_count, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(error_ents, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(maneuver_type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(maneuver_stime, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(maneuver_eta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(control_loops, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(last_error, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(last_error_time, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op_mode", op_mode, nindent__);
      IMC::toJSON(os__, "error_count", error_count, nindent__);
      IMC::toJSON(os__, "error_ents", error_ents, nindent__);
      IMC::toJSON(os__, "maneuver_type", maneuver_type, nindent__);
      IMC::toJSON(os__, "maneuver_stime", maneuver_stime, nindent__);
      IMC::toJSON(os__, "maneuver_eta", maneuver_eta, nindent__);
      IMC::toJSON(os__, "control_loops", control_loops, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "last_error", last_error, nindent__);
      IMC::toJSON(os__, "last_error_time", last_error_time, nindent__);
    }

    VehicleCommand::VehicleCommand(void)
    {
      m_header.mgid = 501;
      clear();
      maneuver.setParent(this);
    }

    void
    VehicleCommand::clear(void)
    {
      type = 0;
      request_id = 0;
      command = 0;
      maneuver.clear();
      calib_time = 0;
      info.clear();
    }

    bool
    VehicleCommand::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleCommand& other__ = static_cast<const VehicleCommand&>(msg__);
      if (type != other__.type) return false;
      if (request_id != other__.request_id) return false;
      if (command != other__.command) return false;
      if (maneuver != other__.maneuver) return false;
      if (calib_time != other__.calib_time) return false;
      if (info != other__.info) return false;
      return true;
    }

    int
    VehicleCommand::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleCommand::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(request_id, ptr__);
      ptr__ += IMC::serialize(command, ptr__);
      ptr__ += maneuver.serialize(ptr__);
      ptr__ += IMC::serialize(calib_time, ptr__);
      ptr__ += IMC::serialize(info, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleCommand::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(request_id, bfr__, size__);
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += maneuver.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(calib_time, bfr__, size__);
      bfr__ += IMC::deserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleCommand::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(request_id, bfr__, size__);
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += maneuver.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(calib_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleCommand::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "request_id", request_id, nindent__);
      IMC::toJSON(os__, "command", command, nindent__);
      maneuver.toJSON(os__, "maneuver", nindent__);
      IMC::toJSON(os__, "calib_time", calib_time, nindent__);
      IMC::toJSON(os__, "info", info, nindent__);
    }

    void
    VehicleCommand::setTimeStampNested(double value__)
    {
      if (!maneuver.isNull())
      {
        maneuver.get()->setTimeStamp(value__);
      }
    }

    void
    VehicleCommand::setSourceNested(uint16_t value__)
    {
      if (!maneuver.isNull())
      {
        maneuver.get()->setSource(value__);
      }
    }

    void
    VehicleCommand::setSourceEntityNested(uint8_t value__)
    {
      if (!maneuver.isNull())
      {
        maneuver.get()->setSourceEntity(value__);
      }
    }

    void
    VehicleCommand::setDestinationNested(uint16_t value__)
    {
      if (!maneuver.isNull())
      {
        maneuver.get()->setDestination(value__);
      }
    }

    void
    VehicleCommand::setDestinationEntityNested(uint8_t value__)
    {
      if (!maneuver.isNull())
      {
        maneuver.get()->setDestinationEntity(value__);
      }
    }

    MonitorEntityState::MonitorEntityState(void)
    {
      m_header.mgid = 502;
      clear();
    }

    void
    MonitorEntityState::clear(void)
    {
      command = 0;
      entities.clear();
    }

    bool
    MonitorEntityState::fieldsEqual(const Message& msg__) const
    {
      const IMC::MonitorEntityState& other__ = static_cast<const MonitorEntityState&>(msg__);
      if (command != other__.command) return false;
      if (entities != other__.entities) return false;
      return true;
    }

    int
    MonitorEntityState::validate(void) const
    {
      return false;
    }

    uint8_t*
    MonitorEntityState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(command, ptr__);
      ptr__ += IMC::serialize(entities, ptr__);
      return ptr__;
    }

    uint16_t
    MonitorEntityState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::deserialize(entities, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MonitorEntityState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(entities, bfr__, size__);
      return bfr__ - start__;
    }

    void
    MonitorEntityState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "command", command, nindent__);
      IMC::toJSON(os__, "entities", entities, nindent__);
    }

    EntityMonitoringState::EntityMonitoringState(void)
    {
      m_header.mgid = 503;
      clear();
    }

    void
    EntityMonitoringState::clear(void)
    {
      mcount = 0;
      mnames.clear();
      ecount = 0;
      enames.clear();
      ccount = 0;
      cnames.clear();
      last_error.clear();
      last_error_time = 0;
    }

    bool
    EntityMonitoringState::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityMonitoringState& other__ = static_cast<const EntityMonitoringState&>(msg__);
      if (mcount != other__.mcount) return false;
      if (mnames != other__.mnames) return false;
      if (ecount != other__.ecount) return false;
      if (enames != other__.enames) return false;
      if (ccount != other__.ccount) return false;
      if (cnames != other__.cnames) return false;
      if (last_error != other__.last_error) return false;
      if (last_error_time != other__.last_error_time) return false;
      return true;
    }

    int
    EntityMonitoringState::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityMonitoringState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(mcount, ptr__);
      ptr__ += IMC::serialize(mnames, ptr__);
      ptr__ += IMC::serialize(ecount, ptr__);
      ptr__ += IMC::serialize(enames, ptr__);
      ptr__ += IMC::serialize(ccount, ptr__);
      ptr__ += IMC::serialize(cnames, ptr__);
      ptr__ += IMC::serialize(last_error, ptr__);
      ptr__ += IMC::serialize(last_error_time, ptr__);
      return ptr__;
    }

    uint16_t
    EntityMonitoringState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(mcount, bfr__, size__);
      bfr__ += IMC::deserialize(mnames, bfr__, size__);
      bfr__ += IMC::deserialize(ecount, bfr__, size__);
      bfr__ += IMC::deserialize(enames, bfr__, size__);
      bfr__ += IMC::deserialize(ccount, bfr__, size__);
      bfr__ += IMC::deserialize(cnames, bfr__, size__);
      bfr__ += IMC::deserialize(last_error, bfr__, size__);
      bfr__ += IMC::deserialize(last_error_time, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityMonitoringState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(mcount, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(mnames, bfr__, size__);
      bfr__ += IMC::deserialize(ecount, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(enames, bfr__, size__);
      bfr__ += IMC::deserialize(ccount, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cnames, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(last_error, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(last_error_time, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityMonitoringState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "mcount", mcount, nindent__);
      IMC::toJSON(os__, "mnames", mnames, nindent__);
      IMC::toJSON(os__, "ecount", ecount, nindent__);
      IMC::toJSON(os__, "enames", enames, nindent__);
      IMC::toJSON(os__, "ccount", ccount, nindent__);
      IMC::toJSON(os__, "cnames", cnames, nindent__);
      IMC::toJSON(os__, "last_error", last_error, nindent__);
      IMC::toJSON(os__, "last_error_time", last_error_time, nindent__);
    }

    OperationalLimits::OperationalLimits(void)
    {
      m_header.mgid = 504;
      clear();
    }

    void
    OperationalLimits::clear(void)
    {
      mask = 0;
      max_depth = 0;
      min_altitude = 0;
      max_altitude = 0;
      min_speed = 0;
      max_speed = 0;
      max_vrate = 0;
      lat = 0;
      lon = 0;
      orientation = 0;
      width = 0;
      length = 0;
    }

    bool
    OperationalLimits::fieldsEqual(const Message& msg__) const
    {
      const IMC::OperationalLimits& other__ = static_cast<const OperationalLimits&>(msg__);
      if (mask != other__.mask) return false;
      if (max_depth != other__.max_depth) return false;
      if (min_altitude != other__.min_altitude) return false;
      if (max_altitude != other__.max_altitude) return false;
      if (min_speed != other__.min_speed) return false;
      if (max_speed != other__.max_speed) return false;
      if (max_vrate != other__.max_vrate) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (orientation != other__.orientation) return false;
      if (width != other__.width) return false;
      if (length != other__.length) return false;
      return true;
    }

    int
    OperationalLimits::validate(void) const
    {
      return false;
    }

    uint8_t*
    OperationalLimits::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(mask, ptr__);
      ptr__ += IMC::serialize(max_depth, ptr__);
      ptr__ += IMC::serialize(min_altitude, ptr__);
      ptr__ += IMC::serialize(max_altitude, ptr__);
      ptr__ += IMC::serialize(min_speed, ptr__);
      ptr__ += IMC::serialize(max_speed, ptr__);
      ptr__ += IMC::serialize(max_vrate, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(orientation, ptr__);
      ptr__ += IMC::serialize(width, ptr__);
      ptr__ += IMC::serialize(length, ptr__);
      return ptr__;
    }

    uint16_t
    OperationalLimits::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(mask, bfr__, size__);
      bfr__ += IMC::deserialize(max_depth, bfr__, size__);
      bfr__ += IMC::deserialize(min_altitude, bfr__, size__);
      bfr__ += IMC::deserialize(max_altitude, bfr__, size__);
      bfr__ += IMC::deserialize(min_speed, bfr__, size__);
      bfr__ += IMC::deserialize(max_speed, bfr__, size__);
      bfr__ += IMC::deserialize(max_vrate, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(orientation, bfr__, size__);
      bfr__ += IMC::deserialize(width, bfr__, size__);
      bfr__ += IMC::deserialize(length, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    OperationalLimits::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(mask, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max_depth, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(min_altitude, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max_altitude, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(min_speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max_speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max_vrate, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(orientation, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(width, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(length, bfr__, size__);
      return bfr__ - start__;
    }

    void
    OperationalLimits::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "mask", mask, nindent__);
      IMC::toJSON(os__, "max_depth", max_depth, nindent__);
      IMC::toJSON(os__, "min_altitude", min_altitude, nindent__);
      IMC::toJSON(os__, "max_altitude", max_altitude, nindent__);
      IMC::toJSON(os__, "min_speed", min_speed, nindent__);
      IMC::toJSON(os__, "max_speed", max_speed, nindent__);
      IMC::toJSON(os__, "max_vrate", max_vrate, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "orientation", orientation, nindent__);
      IMC::toJSON(os__, "width", width, nindent__);
      IMC::toJSON(os__, "length", length, nindent__);
    }

    GetOperationalLimits::GetOperationalLimits(void)
    {
      m_header.mgid = 505;
      clear();
    }

    void
    GetOperationalLimits::clear(void)
    {
    }

    int
    GetOperationalLimits::validate(void) const
    {
      return false;
    }

    uint8_t*
    GetOperationalLimits::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    GetOperationalLimits::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    GetOperationalLimits::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    Calibration::Calibration(void)
    {
      m_header.mgid = 506;
      clear();
    }

    void
    Calibration::clear(void)
    {
      duration = 0;
    }

    bool
    Calibration::fieldsEqual(const Message& msg__) const
    {
      const IMC::Calibration& other__ = static_cast<const Calibration&>(msg__);
      if (duration != other__.duration) return false;
      return true;
    }

    int
    Calibration::validate(void) const
    {
      return false;
    }

    uint8_t*
    Calibration::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(duration, ptr__);
      return ptr__;
    }

    uint16_t
    Calibration::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(duration, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Calibration::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(duration, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Calibration::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "duration", duration, nindent__);
    }

    ControlLoops::ControlLoops(void)
    {
      m_header.mgid = 507;
      clear();
    }

    void
    ControlLoops::clear(void)
    {
      enable = 0;
      mask = 0;
      scope_ref = 0;
    }

    bool
    ControlLoops::fieldsEqual(const Message& msg__) const
    {
      const IMC::ControlLoops& other__ = static_cast<const ControlLoops&>(msg__);
      if (enable != other__.enable) return false;
      if (mask != other__.mask) return false;
      if (scope_ref != other__.scope_ref) return false;
      return true;
    }

    int
    ControlLoops::validate(void) const
    {
      return false;
    }

    uint8_t*
    ControlLoops::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(enable, ptr__);
      ptr__ += IMC::serialize(mask, ptr__);
      ptr__ += IMC::serialize(scope_ref, ptr__);
      return ptr__;
    }

    uint16_t
    ControlLoops::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(enable, bfr__, size__);
      bfr__ += IMC::deserialize(mask, bfr__, size__);
      bfr__ += IMC::deserialize(scope_ref, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ControlLoops::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(enable, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(mask, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(scope_ref, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ControlLoops::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "enable", enable, nindent__);
      IMC::toJSON(os__, "mask", mask, nindent__);
      IMC::toJSON(os__, "scope_ref", scope_ref, nindent__);
    }

    VehicleMedium::VehicleMedium(void)
    {
      m_header.mgid = 508;
      clear();
    }

    void
    VehicleMedium::clear(void)
    {
      medium = 0;
    }

    bool
    VehicleMedium::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleMedium& other__ = static_cast<const VehicleMedium&>(msg__);
      if (medium != other__.medium) return false;
      return true;
    }

    int
    VehicleMedium::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleMedium::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(medium, ptr__);
      return ptr__;
    }

    uint16_t
    VehicleMedium::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(medium, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleMedium::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(medium, bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleMedium::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "medium", medium, nindent__);
    }

    Collision::Collision(void)
    {
      m_header.mgid = 509;
      clear();
    }

    void
    Collision::clear(void)
    {
      value = 0;
      type = 0;
    }

    bool
    Collision::fieldsEqual(const Message& msg__) const
    {
      const IMC::Collision& other__ = static_cast<const Collision&>(msg__);
      if (value != other__.value) return false;
      if (type != other__.type) return false;
      return true;
    }

    int
    Collision::validate(void) const
    {
      return false;
    }

    uint8_t*
    Collision::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(type, ptr__);
      return ptr__;
    }

    uint16_t
    Collision::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Collision::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    Collision::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    Collision::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    Collision::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "type", type, nindent__);
    }

    FormState::FormState(void)
    {
      m_header.mgid = 510;
      clear();
    }

    void
    FormState::clear(void)
    {
      possimerr = 0;
      converg = 0;
      turbulence = 0;
      possimmon = 0;
      commmon = 0;
      convergmon = 0;
    }

    bool
    FormState::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormState& other__ = static_cast<const FormState&>(msg__);
      if (possimerr != other__.possimerr) return false;
      if (converg != other__.converg) return false;
      if (turbulence != other__.turbulence) return false;
      if (possimmon != other__.possimmon) return false;
      if (commmon != other__.commmon) return false;
      if (convergmon != other__.convergmon) return false;
      return true;
    }

    int
    FormState::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(possimerr, ptr__);
      ptr__ += IMC::serialize(converg, ptr__);
      ptr__ += IMC::serialize(turbulence, ptr__);
      ptr__ += IMC::serialize(possimmon, ptr__);
      ptr__ += IMC::serialize(commmon, ptr__);
      ptr__ += IMC::serialize(convergmon, ptr__);
      return ptr__;
    }

    uint16_t
    FormState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(possimerr, bfr__, size__);
      bfr__ += IMC::deserialize(converg, bfr__, size__);
      bfr__ += IMC::deserialize(turbulence, bfr__, size__);
      bfr__ += IMC::deserialize(possimmon, bfr__, size__);
      bfr__ += IMC::deserialize(commmon, bfr__, size__);
      bfr__ += IMC::deserialize(convergmon, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(possimerr, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(converg, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(turbulence, bfr__, size__);
      bfr__ += IMC::deserialize(possimmon, bfr__, size__);
      bfr__ += IMC::deserialize(commmon, bfr__, size__);
      bfr__ += IMC::deserialize(convergmon, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "possimerr", possimerr, nindent__);
      IMC::toJSON(os__, "converg", converg, nindent__);
      IMC::toJSON(os__, "turbulence", turbulence, nindent__);
      IMC::toJSON(os__, "possimmon", possimmon, nindent__);
      IMC::toJSON(os__, "commmon", commmon, nindent__);
      IMC::toJSON(os__, "convergmon", convergmon, nindent__);
    }

    AutopilotMode::AutopilotMode(void)
    {
      m_header.mgid = 511;
      clear();
    }

    void
    AutopilotMode::clear(void)
    {
      autonomy = 0;
      mode.clear();
    }

    bool
    AutopilotMode::fieldsEqual(const Message& msg__) const
    {
      const IMC::AutopilotMode& other__ = static_cast<const AutopilotMode&>(msg__);
      if (autonomy != other__.autonomy) return false;
      if (mode != other__.mode) return false;
      return true;
    }

    int
    AutopilotMode::validate(void) const
    {
      return false;
    }

    uint8_t*
    AutopilotMode::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(autonomy, ptr__);
      ptr__ += IMC::serialize(mode, ptr__);
      return ptr__;
    }

    uint16_t
    AutopilotMode::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(autonomy, bfr__, size__);
      bfr__ += IMC::deserialize(mode, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    AutopilotMode::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(autonomy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(mode, bfr__, size__);
      return bfr__ - start__;
    }

    void
    AutopilotMode::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "autonomy", autonomy, nindent__);
      IMC::toJSON(os__, "mode", mode, nindent__);
    }

    Abort::Abort(void)
    {
      m_header.mgid = 550;
      clear();
    }

    void
    Abort::clear(void)
    {
    }

    int
    Abort::validate(void) const
    {
      return false;
    }

    uint8_t*
    Abort::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    Abort::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    Abort::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    PlanVariable::PlanVariable(void)
    {
      m_header.mgid = 561;
      clear();
    }

    void
    PlanVariable::clear(void)
    {
      name.clear();
      value.clear();
      type = 0;
      access = 0;
    }

    bool
    PlanVariable::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanVariable& other__ = static_cast<const PlanVariable&>(msg__);
      if (name != other__.name) return false;
      if (value != other__.value) return false;
      if (type != other__.type) return false;
      if (access != other__.access) return false;
      return true;
    }

    int
    PlanVariable::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanVariable::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(access, ptr__);
      return ptr__;
    }

    uint16_t
    PlanVariable::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(access, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanVariable::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(access, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanVariable::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "access", access, nindent__);
    }

    PlanManeuver::PlanManeuver(void)
    {
      m_header.mgid = 552;
      clear();
      data.setParent(this);
      start_actions.setParent(this);
      end_actions.setParent(this);
    }

    void
    PlanManeuver::clear(void)
    {
      maneuver_id.clear();
      data.clear();
      start_actions.clear();
      end_actions.clear();
    }

    bool
    PlanManeuver::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanManeuver& other__ = static_cast<const PlanManeuver&>(msg__);
      if (maneuver_id != other__.maneuver_id) return false;
      if (data != other__.data) return false;
      if (start_actions != other__.start_actions) return false;
      if (end_actions != other__.end_actions) return false;
      return true;
    }

    int
    PlanManeuver::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanManeuver::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(maneuver_id, ptr__);
      ptr__ += data.serialize(ptr__);
      ptr__ += start_actions.serialize(ptr__);
      ptr__ += end_actions.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    PlanManeuver::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(maneuver_id, bfr__, size__);
      bfr__ += data.deserialize(bfr__, size__);
      bfr__ += start_actions.deserialize(bfr__, size__);
      bfr__ += end_actions.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanManeuver::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(maneuver_id, bfr__, size__);
      bfr__ += data.reverseDeserialize(bfr__, size__);
      bfr__ += start_actions.reverseDeserialize(bfr__, size__);
      bfr__ += end_actions.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanManeuver::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "maneuver_id", maneuver_id, nindent__);
      data.toJSON(os__, "data", nindent__);
      start_actions.toJSON(os__, "start_actions", nindent__);
      end_actions.toJSON(os__, "end_actions", nindent__);
    }

    void
    PlanManeuver::setTimeStampNested(double value__)
    {
      if (!data.isNull())
      {
        data.get()->setTimeStamp(value__);
      }

      start_actions.setTimeStamp(value__);

      end_actions.setTimeStamp(value__);
    }

    void
    PlanManeuver::setSourceNested(uint16_t value__)
    {
      if (!data.isNull())
      {
        data.get()->setSource(value__);
      }

      start_actions.setSource(value__);

      end_actions.setSource(value__);
    }

    void
    PlanManeuver::setSourceEntityNested(uint8_t value__)
    {
      if (!data.isNull())
      {
        data.get()->setSourceEntity(value__);
      }

      start_actions.setSourceEntity(value__);

      end_actions.setSourceEntity(value__);
    }

    void
    PlanManeuver::setDestinationNested(uint16_t value__)
    {
      if (!data.isNull())
      {
        data.get()->setDestination(value__);
      }

      start_actions.setDestination(value__);

      end_actions.setDestination(value__);
    }

    void
    PlanManeuver::setDestinationEntityNested(uint8_t value__)
    {
      if (!data.isNull())
      {
        data.get()->setDestinationEntity(value__);
      }

      start_actions.setDestinationEntity(value__);

      end_actions.setDestinationEntity(value__);
    }

    PlanTransition::PlanTransition(void)
    {
      m_header.mgid = 553;
      clear();
      actions.setParent(this);
    }

    void
    PlanTransition::clear(void)
    {
      source_man.clear();
      dest_man.clear();
      conditions.clear();
      actions.clear();
    }

    bool
    PlanTransition::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanTransition& other__ = static_cast<const PlanTransition&>(msg__);
      if (source_man != other__.source_man) return false;
      if (dest_man != other__.dest_man) return false;
      if (conditions != other__.conditions) return false;
      if (actions != other__.actions) return false;
      return true;
    }

    int
    PlanTransition::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanTransition::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(source_man, ptr__);
      ptr__ += IMC::serialize(dest_man, ptr__);
      ptr__ += IMC::serialize(conditions, ptr__);
      ptr__ += actions.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    PlanTransition::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(source_man, bfr__, size__);
      bfr__ += IMC::deserialize(dest_man, bfr__, size__);
      bfr__ += IMC::deserialize(conditions, bfr__, size__);
      bfr__ += actions.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanTransition::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(source_man, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(dest_man, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(conditions, bfr__, size__);
      bfr__ += actions.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanTransition::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "source_man", source_man, nindent__);
      IMC::toJSON(os__, "dest_man", dest_man, nindent__);
      IMC::toJSON(os__, "conditions", conditions, nindent__);
      actions.toJSON(os__, "actions", nindent__);
    }

    void
    PlanTransition::setTimeStampNested(double value__)
    {
      actions.setTimeStamp(value__);
    }

    void
    PlanTransition::setSourceNested(uint16_t value__)
    {
      actions.setSource(value__);
    }

    void
    PlanTransition::setSourceEntityNested(uint8_t value__)
    {
      actions.setSourceEntity(value__);
    }

    void
    PlanTransition::setDestinationNested(uint16_t value__)
    {
      actions.setDestination(value__);
    }

    void
    PlanTransition::setDestinationEntityNested(uint8_t value__)
    {
      actions.setDestinationEntity(value__);
    }

    PlanSpecification::PlanSpecification(void)
    {
      m_header.mgid = 551;
      clear();
      variables.setParent(this);
      maneuvers.setParent(this);
      transitions.setParent(this);
      start_actions.setParent(this);
      end_actions.setParent(this);
    }

    void
    PlanSpecification::clear(void)
    {
      plan_id.clear();
      description.clear();
      vnamespace.clear();
      variables.clear();
      start_man_id.clear();
      maneuvers.clear();
      transitions.clear();
      start_actions.clear();
      end_actions.clear();
    }

    bool
    PlanSpecification::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanSpecification& other__ = static_cast<const PlanSpecification&>(msg__);
      if (plan_id != other__.plan_id) return false;
      if (description != other__.description) return false;
      if (vnamespace != other__.vnamespace) return false;
      if (variables != other__.variables) return false;
      if (start_man_id != other__.start_man_id) return false;
      if (maneuvers != other__.maneuvers) return false;
      if (transitions != other__.transitions) return false;
      if (start_actions != other__.start_actions) return false;
      if (end_actions != other__.end_actions) return false;
      return true;
    }

    int
    PlanSpecification::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanSpecification::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(description, ptr__);
      ptr__ += IMC::serialize(vnamespace, ptr__);
      ptr__ += variables.serialize(ptr__);
      ptr__ += IMC::serialize(start_man_id, ptr__);
      ptr__ += maneuvers.serialize(ptr__);
      ptr__ += transitions.serialize(ptr__);
      ptr__ += start_actions.serialize(ptr__);
      ptr__ += end_actions.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    PlanSpecification::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(description, bfr__, size__);
      bfr__ += IMC::deserialize(vnamespace, bfr__, size__);
      bfr__ += variables.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(start_man_id, bfr__, size__);
      bfr__ += maneuvers.deserialize(bfr__, size__);
      bfr__ += transitions.deserialize(bfr__, size__);
      bfr__ += start_actions.deserialize(bfr__, size__);
      bfr__ += end_actions.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanSpecification::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(description, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vnamespace, bfr__, size__);
      bfr__ += variables.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(start_man_id, bfr__, size__);
      bfr__ += maneuvers.reverseDeserialize(bfr__, size__);
      bfr__ += transitions.reverseDeserialize(bfr__, size__);
      bfr__ += start_actions.reverseDeserialize(bfr__, size__);
      bfr__ += end_actions.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanSpecification::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "description", description, nindent__);
      IMC::toJSON(os__, "vnamespace", vnamespace, nindent__);
      variables.toJSON(os__, "variables", nindent__);
      IMC::toJSON(os__, "start_man_id", start_man_id, nindent__);
      maneuvers.toJSON(os__, "maneuvers", nindent__);
      transitions.toJSON(os__, "transitions", nindent__);
      start_actions.toJSON(os__, "start_actions", nindent__);
      end_actions.toJSON(os__, "end_actions", nindent__);
    }

    void
    PlanSpecification::setTimeStampNested(double value__)
    {
      variables.setTimeStamp(value__);

      maneuvers.setTimeStamp(value__);

      transitions.setTimeStamp(value__);

      start_actions.setTimeStamp(value__);

      end_actions.setTimeStamp(value__);
    }

    void
    PlanSpecification::setSourceNested(uint16_t value__)
    {
      variables.setSource(value__);

      maneuvers.setSource(value__);

      transitions.setSource(value__);

      start_actions.setSource(value__);

      end_actions.setSource(value__);
    }

    void
    PlanSpecification::setSourceEntityNested(uint8_t value__)
    {
      variables.setSourceEntity(value__);

      maneuvers.setSourceEntity(value__);

      transitions.setSourceEntity(value__);

      start_actions.setSourceEntity(value__);

      end_actions.setSourceEntity(value__);
    }

    void
    PlanSpecification::setDestinationNested(uint16_t value__)
    {
      variables.setDestination(value__);

      maneuvers.setDestination(value__);

      transitions.setDestination(value__);

      start_actions.setDestination(value__);

      end_actions.setDestination(value__);
    }

    void
    PlanSpecification::setDestinationEntityNested(uint8_t value__)
    {
      variables.setDestinationEntity(value__);

      maneuvers.setDestinationEntity(value__);

      transitions.setDestinationEntity(value__);

      start_actions.setDestinationEntity(value__);

      end_actions.setDestinationEntity(value__);
    }

    EmergencyControl::EmergencyControl(void)
    {
      m_header.mgid = 554;
      clear();
      plan.setParent(this);
    }

    void
    EmergencyControl::clear(void)
    {
      command = 0;
      plan.clear();
    }

    bool
    EmergencyControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::EmergencyControl& other__ = static_cast<const EmergencyControl&>(msg__);
      if (command != other__.command) return false;
      if (plan != other__.plan) return false;
      return true;
    }

    int
    EmergencyControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    EmergencyControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(command, ptr__);
      ptr__ += plan.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    EmergencyControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += plan.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EmergencyControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += plan.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    EmergencyControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "command", command, nindent__);
      plan.toJSON(os__, "plan", nindent__);
    }

    void
    EmergencyControl::setTimeStampNested(double value__)
    {
      if (!plan.isNull())
      {
        plan.get()->setTimeStamp(value__);
      }
    }

    void
    EmergencyControl::setSourceNested(uint16_t value__)
    {
      if (!plan.isNull())
      {
        plan.get()->setSource(value__);
      }
    }

    void
    EmergencyControl::setSourceEntityNested(uint8_t value__)
    {
      if (!plan.isNull())
      {
        plan.get()->setSourceEntity(value__);
      }
    }

    void
    EmergencyControl::setDestinationNested(uint16_t value__)
    {
      if (!plan.isNull())
      {
        plan.get()->setDestination(value__);
      }
    }

    void
    EmergencyControl::setDestinationEntityNested(uint8_t value__)
    {
      if (!plan.isNull())
      {
        plan.get()->setDestinationEntity(value__);
      }
    }

    EmergencyControlState::EmergencyControlState(void)
    {
      m_header.mgid = 555;
      clear();
    }

    void
    EmergencyControlState::clear(void)
    {
      state = 0;
      plan_id.clear();
      comm_level = 0;
    }

    bool
    EmergencyControlState::fieldsEqual(const Message& msg__) const
    {
      const IMC::EmergencyControlState& other__ = static_cast<const EmergencyControlState&>(msg__);
      if (state != other__.state) return false;
      if (plan_id != other__.plan_id) return false;
      if (comm_level != other__.comm_level) return false;
      return true;
    }

    int
    EmergencyControlState::validate(void) const
    {
      return false;
    }

    uint8_t*
    EmergencyControlState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(comm_level, ptr__);
      return ptr__;
    }

    uint16_t
    EmergencyControlState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(comm_level, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EmergencyControlState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(comm_level, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EmergencyControlState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "comm_level", comm_level, nindent__);
    }

    PlanDB::PlanDB(void)
    {
      m_header.mgid = 556;
      clear();
      arg.setParent(this);
    }

    void
    PlanDB::clear(void)
    {
      type = 0;
      op = 0;
      request_id = 0;
      plan_id.clear();
      arg.clear();
      info.clear();
    }

    bool
    PlanDB::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanDB& other__ = static_cast<const PlanDB&>(msg__);
      if (type != other__.type) return false;
      if (op != other__.op) return false;
      if (request_id != other__.request_id) return false;
      if (plan_id != other__.plan_id) return false;
      if (arg != other__.arg) return false;
      if (info != other__.info) return false;
      return true;
    }

    int
    PlanDB::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanDB::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(request_id, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += arg.serialize(ptr__);
      ptr__ += IMC::serialize(info, ptr__);
      return ptr__;
    }

    uint16_t
    PlanDB::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(request_id, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += arg.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanDB::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(request_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += arg.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanDB::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "request_id", request_id, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      arg.toJSON(os__, "arg", nindent__);
      IMC::toJSON(os__, "info", info, nindent__);
    }

    void
    PlanDB::setTimeStampNested(double value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setTimeStamp(value__);
      }
    }

    void
    PlanDB::setSourceNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSource(value__);
      }
    }

    void
    PlanDB::setSourceEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSourceEntity(value__);
      }
    }

    void
    PlanDB::setDestinationNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestination(value__);
      }
    }

    void
    PlanDB::setDestinationEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestinationEntity(value__);
      }
    }

    PlanDBInformation::PlanDBInformation(void)
    {
      m_header.mgid = 558;
      clear();
    }

    void
    PlanDBInformation::clear(void)
    {
      plan_id.clear();
      plan_size = 0;
      change_time = 0;
      change_sid = 0;
      change_sname.clear();
      md5.clear();
    }

    bool
    PlanDBInformation::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanDBInformation& other__ = static_cast<const PlanDBInformation&>(msg__);
      if (plan_id != other__.plan_id) return false;
      if (plan_size != other__.plan_size) return false;
      if (change_time != other__.change_time) return false;
      if (change_sid != other__.change_sid) return false;
      if (change_sname != other__.change_sname) return false;
      if (md5 != other__.md5) return false;
      return true;
    }

    int
    PlanDBInformation::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanDBInformation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(plan_size, ptr__);
      ptr__ += IMC::serialize(change_time, ptr__);
      ptr__ += IMC::serialize(change_sid, ptr__);
      ptr__ += IMC::serialize(change_sname, ptr__);
      ptr__ += IMC::serialize(md5, ptr__);
      return ptr__;
    }

    uint16_t
    PlanDBInformation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(plan_size, bfr__, size__);
      bfr__ += IMC::deserialize(change_time, bfr__, size__);
      bfr__ += IMC::deserialize(change_sid, bfr__, size__);
      bfr__ += IMC::deserialize(change_sname, bfr__, size__);
      bfr__ += IMC::deserialize(md5, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanDBInformation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_size, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_sid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_sname, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(md5, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanDBInformation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "plan_size", plan_size, nindent__);
      IMC::toJSON(os__, "change_time", change_time, nindent__);
      IMC::toJSON(os__, "change_sid", change_sid, nindent__);
      IMC::toJSON(os__, "change_sname", change_sname, nindent__);
      IMC::toJSON(os__, "md5", md5, nindent__);
    }

    PlanDBState::PlanDBState(void)
    {
      m_header.mgid = 557;
      clear();
      plans_info.setParent(this);
    }

    void
    PlanDBState::clear(void)
    {
      plan_count = 0;
      plan_size = 0;
      change_time = 0;
      change_sid = 0;
      change_sname.clear();
      md5.clear();
      plans_info.clear();
    }

    bool
    PlanDBState::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanDBState& other__ = static_cast<const PlanDBState&>(msg__);
      if (plan_count != other__.plan_count) return false;
      if (plan_size != other__.plan_size) return false;
      if (change_time != other__.change_time) return false;
      if (change_sid != other__.change_sid) return false;
      if (change_sname != other__.change_sname) return false;
      if (md5 != other__.md5) return false;
      if (plans_info != other__.plans_info) return false;
      return true;
    }

    int
    PlanDBState::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanDBState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(plan_count, ptr__);
      ptr__ += IMC::serialize(plan_size, ptr__);
      ptr__ += IMC::serialize(change_time, ptr__);
      ptr__ += IMC::serialize(change_sid, ptr__);
      ptr__ += IMC::serialize(change_sname, ptr__);
      ptr__ += IMC::serialize(md5, ptr__);
      ptr__ += plans_info.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    PlanDBState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(plan_count, bfr__, size__);
      bfr__ += IMC::deserialize(plan_size, bfr__, size__);
      bfr__ += IMC::deserialize(change_time, bfr__, size__);
      bfr__ += IMC::deserialize(change_sid, bfr__, size__);
      bfr__ += IMC::deserialize(change_sname, bfr__, size__);
      bfr__ += IMC::deserialize(md5, bfr__, size__);
      bfr__ += plans_info.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanDBState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(plan_count, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_size, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_sid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(change_sname, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(md5, bfr__, size__);
      bfr__ += plans_info.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanDBState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "plan_count", plan_count, nindent__);
      IMC::toJSON(os__, "plan_size", plan_size, nindent__);
      IMC::toJSON(os__, "change_time", change_time, nindent__);
      IMC::toJSON(os__, "change_sid", change_sid, nindent__);
      IMC::toJSON(os__, "change_sname", change_sname, nindent__);
      IMC::toJSON(os__, "md5", md5, nindent__);
      plans_info.toJSON(os__, "plans_info", nindent__);
    }

    void
    PlanDBState::setTimeStampNested(double value__)
    {
      plans_info.setTimeStamp(value__);
    }

    void
    PlanDBState::setSourceNested(uint16_t value__)
    {
      plans_info.setSource(value__);
    }

    void
    PlanDBState::setSourceEntityNested(uint8_t value__)
    {
      plans_info.setSourceEntity(value__);
    }

    void
    PlanDBState::setDestinationNested(uint16_t value__)
    {
      plans_info.setDestination(value__);
    }

    void
    PlanDBState::setDestinationEntityNested(uint8_t value__)
    {
      plans_info.setDestinationEntity(value__);
    }

    PlanControl::PlanControl(void)
    {
      m_header.mgid = 559;
      clear();
      arg.setParent(this);
    }

    void
    PlanControl::clear(void)
    {
      type = 0;
      op = 0;
      request_id = 0;
      plan_id.clear();
      flags = 0;
      arg.clear();
      info.clear();
    }

    bool
    PlanControl::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanControl& other__ = static_cast<const PlanControl&>(msg__);
      if (type != other__.type) return false;
      if (op != other__.op) return false;
      if (request_id != other__.request_id) return false;
      if (plan_id != other__.plan_id) return false;
      if (flags != other__.flags) return false;
      if (arg != other__.arg) return false;
      if (info != other__.info) return false;
      return true;
    }

    int
    PlanControl::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanControl::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(request_id, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += arg.serialize(ptr__);
      ptr__ += IMC::serialize(info, ptr__);
      return ptr__;
    }

    uint16_t
    PlanControl::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(request_id, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += arg.deserialize(bfr__, size__);
      bfr__ += IMC::deserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanControl::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(request_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(flags, bfr__, size__);
      bfr__ += arg.reverseDeserialize(bfr__, size__);
      bfr__ += IMC::reverseDeserialize(info, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanControl::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "request_id", request_id, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      arg.toJSON(os__, "arg", nindent__);
      IMC::toJSON(os__, "info", info, nindent__);
    }

    void
    PlanControl::setTimeStampNested(double value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setTimeStamp(value__);
      }
    }

    void
    PlanControl::setSourceNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSource(value__);
      }
    }

    void
    PlanControl::setSourceEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSourceEntity(value__);
      }
    }

    void
    PlanControl::setDestinationNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestination(value__);
      }
    }

    void
    PlanControl::setDestinationEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestinationEntity(value__);
      }
    }

    PlanControlState::PlanControlState(void)
    {
      m_header.mgid = 560;
      clear();
    }

    void
    PlanControlState::clear(void)
    {
      state = 0;
      plan_id.clear();
      plan_eta = 0;
      plan_progress = 0;
      man_id.clear();
      man_type = 0;
      man_eta = 0;
      last_outcome = 0;
    }

    bool
    PlanControlState::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanControlState& other__ = static_cast<const PlanControlState&>(msg__);
      if (state != other__.state) return false;
      if (plan_id != other__.plan_id) return false;
      if (plan_eta != other__.plan_eta) return false;
      if (plan_progress != other__.plan_progress) return false;
      if (man_id != other__.man_id) return false;
      if (man_type != other__.man_type) return false;
      if (man_eta != other__.man_eta) return false;
      if (last_outcome != other__.last_outcome) return false;
      return true;
    }

    int
    PlanControlState::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanControlState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(plan_eta, ptr__);
      ptr__ += IMC::serialize(plan_progress, ptr__);
      ptr__ += IMC::serialize(man_id, ptr__);
      ptr__ += IMC::serialize(man_type, ptr__);
      ptr__ += IMC::serialize(man_eta, ptr__);
      ptr__ += IMC::serialize(last_outcome, ptr__);
      return ptr__;
    }

    uint16_t
    PlanControlState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(plan_eta, bfr__, size__);
      bfr__ += IMC::deserialize(plan_progress, bfr__, size__);
      bfr__ += IMC::deserialize(man_id, bfr__, size__);
      bfr__ += IMC::deserialize(man_type, bfr__, size__);
      bfr__ += IMC::deserialize(man_eta, bfr__, size__);
      bfr__ += IMC::deserialize(last_outcome, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanControlState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_eta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_progress, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(man_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(man_type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(man_eta, bfr__, size__);
      bfr__ += IMC::deserialize(last_outcome, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanControlState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "plan_eta", plan_eta, nindent__);
      IMC::toJSON(os__, "plan_progress", plan_progress, nindent__);
      IMC::toJSON(os__, "man_id", man_id, nindent__);
      IMC::toJSON(os__, "man_type", man_type, nindent__);
      IMC::toJSON(os__, "man_eta", man_eta, nindent__);
      IMC::toJSON(os__, "last_outcome", last_outcome, nindent__);
    }

    PlanGeneration::PlanGeneration(void)
    {
      m_header.mgid = 562;
      clear();
    }

    void
    PlanGeneration::clear(void)
    {
      cmd = 0;
      op = 0;
      plan_id.clear();
      params.clear();
    }

    bool
    PlanGeneration::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanGeneration& other__ = static_cast<const PlanGeneration&>(msg__);
      if (cmd != other__.cmd) return false;
      if (op != other__.op) return false;
      if (plan_id != other__.plan_id) return false;
      if (params != other__.params) return false;
      return true;
    }

    int
    PlanGeneration::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanGeneration::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(cmd, ptr__);
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(params, ptr__);
      return ptr__;
    }

    uint16_t
    PlanGeneration::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(cmd, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(params, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanGeneration::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(cmd, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(params, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanGeneration::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "cmd", cmd, nindent__);
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "params", params, nindent__);
    }

    LeaderState::LeaderState(void)
    {
      m_header.mgid = 563;
      clear();
    }

    void
    LeaderState::clear(void)
    {
      group_name.clear();
      op = 0;
      lat = 0;
      lon = 0;
      height = 0;
      x = 0;
      y = 0;
      z = 0;
      phi = 0;
      theta = 0;
      psi = 0;
      vx = 0;
      vy = 0;
      vz = 0;
      p = 0;
      q = 0;
      r = 0;
      svx = 0;
      svy = 0;
      svz = 0;
    }

    bool
    LeaderState::fieldsEqual(const Message& msg__) const
    {
      const IMC::LeaderState& other__ = static_cast<const LeaderState&>(msg__);
      if (group_name != other__.group_name) return false;
      if (op != other__.op) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (height != other__.height) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      if (phi != other__.phi) return false;
      if (theta != other__.theta) return false;
      if (psi != other__.psi) return false;
      if (vx != other__.vx) return false;
      if (vy != other__.vy) return false;
      if (vz != other__.vz) return false;
      if (p != other__.p) return false;
      if (q != other__.q) return false;
      if (r != other__.r) return false;
      if (svx != other__.svx) return false;
      if (svy != other__.svy) return false;
      if (svz != other__.svz) return false;
      return true;
    }

    int
    LeaderState::validate(void) const
    {
      return false;
    }

    uint8_t*
    LeaderState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(group_name, ptr__);
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(height, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(phi, ptr__);
      ptr__ += IMC::serialize(theta, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      ptr__ += IMC::serialize(vx, ptr__);
      ptr__ += IMC::serialize(vy, ptr__);
      ptr__ += IMC::serialize(vz, ptr__);
      ptr__ += IMC::serialize(p, ptr__);
      ptr__ += IMC::serialize(q, ptr__);
      ptr__ += IMC::serialize(r, ptr__);
      ptr__ += IMC::serialize(svx, ptr__);
      ptr__ += IMC::serialize(svy, ptr__);
      ptr__ += IMC::serialize(svz, ptr__);
      return ptr__;
    }

    uint16_t
    LeaderState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(group_name, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(height, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(phi, bfr__, size__);
      bfr__ += IMC::deserialize(theta, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      bfr__ += IMC::deserialize(vx, bfr__, size__);
      bfr__ += IMC::deserialize(vy, bfr__, size__);
      bfr__ += IMC::deserialize(vz, bfr__, size__);
      bfr__ += IMC::deserialize(p, bfr__, size__);
      bfr__ += IMC::deserialize(q, bfr__, size__);
      bfr__ += IMC::deserialize(r, bfr__, size__);
      bfr__ += IMC::deserialize(svx, bfr__, size__);
      bfr__ += IMC::deserialize(svy, bfr__, size__);
      bfr__ += IMC::deserialize(svz, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    LeaderState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(group_name, bfr__, size__);
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(height, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(phi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(theta, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(vz, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(p, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(q, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(r, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svx, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svy, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(svz, bfr__, size__);
      return bfr__ - start__;
    }

    void
    LeaderState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "group_name", group_name, nindent__);
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "height", height, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "phi", phi, nindent__);
      IMC::toJSON(os__, "theta", theta, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
      IMC::toJSON(os__, "vx", vx, nindent__);
      IMC::toJSON(os__, "vy", vy, nindent__);
      IMC::toJSON(os__, "vz", vz, nindent__);
      IMC::toJSON(os__, "p", p, nindent__);
      IMC::toJSON(os__, "q", q, nindent__);
      IMC::toJSON(os__, "r", r, nindent__);
      IMC::toJSON(os__, "svx", svx, nindent__);
      IMC::toJSON(os__, "svy", svy, nindent__);
      IMC::toJSON(os__, "svz", svz, nindent__);
    }

    PlanStatistics::PlanStatistics(void)
    {
      m_header.mgid = 564;
      clear();
    }

    void
    PlanStatistics::clear(void)
    {
      plan_id.clear();
      type = 0;
      properties = 0;
      durations.clear();
      distances.clear();
      actions.clear();
      fuel.clear();
    }

    bool
    PlanStatistics::fieldsEqual(const Message& msg__) const
    {
      const IMC::PlanStatistics& other__ = static_cast<const PlanStatistics&>(msg__);
      if (plan_id != other__.plan_id) return false;
      if (type != other__.type) return false;
      if (properties != other__.properties) return false;
      if (durations != other__.durations) return false;
      if (distances != other__.distances) return false;
      if (actions != other__.actions) return false;
      if (fuel != other__.fuel) return false;
      return true;
    }

    int
    PlanStatistics::validate(void) const
    {
      return false;
    }

    uint8_t*
    PlanStatistics::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(plan_id, ptr__);
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(properties, ptr__);
      ptr__ += IMC::serialize(durations, ptr__);
      ptr__ += IMC::serialize(distances, ptr__);
      ptr__ += IMC::serialize(actions, ptr__);
      ptr__ += IMC::serialize(fuel, ptr__);
      return ptr__;
    }

    uint16_t
    PlanStatistics::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(properties, bfr__, size__);
      bfr__ += IMC::deserialize(durations, bfr__, size__);
      bfr__ += IMC::deserialize(distances, bfr__, size__);
      bfr__ += IMC::deserialize(actions, bfr__, size__);
      bfr__ += IMC::deserialize(fuel, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PlanStatistics::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(plan_id, bfr__, size__);
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(properties, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(durations, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(distances, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(actions, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(fuel, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PlanStatistics::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "plan_id", plan_id, nindent__);
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "properties", properties, nindent__);
      IMC::toJSON(os__, "durations", durations, nindent__);
      IMC::toJSON(os__, "distances", distances, nindent__);
      IMC::toJSON(os__, "actions", actions, nindent__);
      IMC::toJSON(os__, "fuel", fuel, nindent__);
    }

    ReportedState::ReportedState(void)
    {
      m_header.mgid = 600;
      clear();
    }

    void
    ReportedState::clear(void)
    {
      lat = 0;
      lon = 0;
      depth = 0;
      roll = 0;
      pitch = 0;
      yaw = 0;
      rcp_time = 0;
      sid.clear();
      s_type = 0;
    }

    bool
    ReportedState::fieldsEqual(const Message& msg__) const
    {
      const IMC::ReportedState& other__ = static_cast<const ReportedState&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (depth != other__.depth) return false;
      if (roll != other__.roll) return false;
      if (pitch != other__.pitch) return false;
      if (yaw != other__.yaw) return false;
      if (rcp_time != other__.rcp_time) return false;
      if (sid != other__.sid) return false;
      if (s_type != other__.s_type) return false;
      return true;
    }

    int
    ReportedState::validate(void) const
    {
      return false;
    }

    uint8_t*
    ReportedState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(depth, ptr__);
      ptr__ += IMC::serialize(roll, ptr__);
      ptr__ += IMC::serialize(pitch, ptr__);
      ptr__ += IMC::serialize(yaw, ptr__);
      ptr__ += IMC::serialize(rcp_time, ptr__);
      ptr__ += IMC::serialize(sid, ptr__);
      ptr__ += IMC::serialize(s_type, ptr__);
      return ptr__;
    }

    uint16_t
    ReportedState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(depth, bfr__, size__);
      bfr__ += IMC::deserialize(roll, bfr__, size__);
      bfr__ += IMC::deserialize(pitch, bfr__, size__);
      bfr__ += IMC::deserialize(yaw, bfr__, size__);
      bfr__ += IMC::deserialize(rcp_time, bfr__, size__);
      bfr__ += IMC::deserialize(sid, bfr__, size__);
      bfr__ += IMC::deserialize(s_type, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ReportedState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(depth, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(roll, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(pitch, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(yaw, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(rcp_time, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sid, bfr__, size__);
      bfr__ += IMC::deserialize(s_type, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ReportedState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "depth", depth, nindent__);
      IMC::toJSON(os__, "roll", roll, nindent__);
      IMC::toJSON(os__, "pitch", pitch, nindent__);
      IMC::toJSON(os__, "yaw", yaw, nindent__);
      IMC::toJSON(os__, "rcp_time", rcp_time, nindent__);
      IMC::toJSON(os__, "sid", sid, nindent__);
      IMC::toJSON(os__, "s_type", s_type, nindent__);
    }

    RemoteSensorInfo::RemoteSensorInfo(void)
    {
      m_header.mgid = 601;
      clear();
    }

    void
    RemoteSensorInfo::clear(void)
    {
      id.clear();
      sensor_class.clear();
      lat = 0;
      lon = 0;
      alt = 0;
      heading = 0;
      data.clear();
    }

    bool
    RemoteSensorInfo::fieldsEqual(const Message& msg__) const
    {
      const IMC::RemoteSensorInfo& other__ = static_cast<const RemoteSensorInfo&>(msg__);
      if (id != other__.id) return false;
      if (sensor_class != other__.sensor_class) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (alt != other__.alt) return false;
      if (heading != other__.heading) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    RemoteSensorInfo::validate(void) const
    {
      return false;
    }

    uint8_t*
    RemoteSensorInfo::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(sensor_class, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(alt, ptr__);
      ptr__ += IMC::serialize(heading, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    RemoteSensorInfo::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(sensor_class, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(alt, bfr__, size__);
      bfr__ += IMC::deserialize(heading, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RemoteSensorInfo::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sensor_class, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(alt, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(heading, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RemoteSensorInfo::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "sensor_class", sensor_class, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "alt", alt, nindent__);
      IMC::toJSON(os__, "heading", heading, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    MapPoint::MapPoint(void)
    {
      m_header.mgid = 604;
      clear();
    }

    void
    MapPoint::clear(void)
    {
      lat = 0;
      lon = 0;
      alt = 0;
    }

    bool
    MapPoint::fieldsEqual(const Message& msg__) const
    {
      const IMC::MapPoint& other__ = static_cast<const MapPoint&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (alt != other__.alt) return false;
      return true;
    }

    int
    MapPoint::validate(void) const
    {
      return false;
    }

    uint8_t*
    MapPoint::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(alt, ptr__);
      return ptr__;
    }

    uint16_t
    MapPoint::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(alt, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MapPoint::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(alt, bfr__, size__);
      return bfr__ - start__;
    }

    void
    MapPoint::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "alt", alt, nindent__);
    }

    MapFeature::MapFeature(void)
    {
      m_header.mgid = 603;
      clear();
      feature.setParent(this);
    }

    void
    MapFeature::clear(void)
    {
      id.clear();
      feature_type = 0;
      rgb_red = 0;
      rgb_green = 0;
      rgb_blue = 0;
      feature.clear();
    }

    bool
    MapFeature::fieldsEqual(const Message& msg__) const
    {
      const IMC::MapFeature& other__ = static_cast<const MapFeature&>(msg__);
      if (id != other__.id) return false;
      if (feature_type != other__.feature_type) return false;
      if (rgb_red != other__.rgb_red) return false;
      if (rgb_green != other__.rgb_green) return false;
      if (rgb_blue != other__.rgb_blue) return false;
      if (feature != other__.feature) return false;
      return true;
    }

    int
    MapFeature::validate(void) const
    {
      return false;
    }

    uint8_t*
    MapFeature::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(feature_type, ptr__);
      ptr__ += IMC::serialize(rgb_red, ptr__);
      ptr__ += IMC::serialize(rgb_green, ptr__);
      ptr__ += IMC::serialize(rgb_blue, ptr__);
      ptr__ += feature.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    MapFeature::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(feature_type, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_red, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_green, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_blue, bfr__, size__);
      bfr__ += feature.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MapFeature::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(feature_type, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_red, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_green, bfr__, size__);
      bfr__ += IMC::deserialize(rgb_blue, bfr__, size__);
      bfr__ += feature.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    MapFeature::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "feature_type", feature_type, nindent__);
      IMC::toJSON(os__, "rgb_red", rgb_red, nindent__);
      IMC::toJSON(os__, "rgb_green", rgb_green, nindent__);
      IMC::toJSON(os__, "rgb_blue", rgb_blue, nindent__);
      feature.toJSON(os__, "feature", nindent__);
    }

    void
    MapFeature::setTimeStampNested(double value__)
    {
      feature.setTimeStamp(value__);
    }

    void
    MapFeature::setSourceNested(uint16_t value__)
    {
      feature.setSource(value__);
    }

    void
    MapFeature::setSourceEntityNested(uint8_t value__)
    {
      feature.setSourceEntity(value__);
    }

    void
    MapFeature::setDestinationNested(uint16_t value__)
    {
      feature.setDestination(value__);
    }

    void
    MapFeature::setDestinationEntityNested(uint8_t value__)
    {
      feature.setDestinationEntity(value__);
    }

    Map::Map(void)
    {
      m_header.mgid = 602;
      clear();
      features.setParent(this);
    }

    void
    Map::clear(void)
    {
      id.clear();
      features.clear();
    }

    bool
    Map::fieldsEqual(const Message& msg__) const
    {
      const IMC::Map& other__ = static_cast<const Map&>(msg__);
      if (id != other__.id) return false;
      if (features != other__.features) return false;
      return true;
    }

    int
    Map::validate(void) const
    {
      return false;
    }

    uint8_t*
    Map::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += features.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    Map::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += features.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Map::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(id, bfr__, size__);
      bfr__ += features.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    Map::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      features.toJSON(os__, "features", nindent__);
    }

    void
    Map::setTimeStampNested(double value__)
    {
      features.setTimeStamp(value__);
    }

    void
    Map::setSourceNested(uint16_t value__)
    {
      features.setSource(value__);
    }

    void
    Map::setSourceEntityNested(uint8_t value__)
    {
      features.setSourceEntity(value__);
    }

    void
    Map::setDestinationNested(uint16_t value__)
    {
      features.setDestination(value__);
    }

    void
    Map::setDestinationEntityNested(uint8_t value__)
    {
      features.setDestinationEntity(value__);
    }

    CcuEvent::CcuEvent(void)
    {
      m_header.mgid = 606;
      clear();
      arg.setParent(this);
    }

    void
    CcuEvent::clear(void)
    {
      type = 0;
      id.clear();
      arg.clear();
    }

    bool
    CcuEvent::fieldsEqual(const Message& msg__) const
    {
      const IMC::CcuEvent& other__ = static_cast<const CcuEvent&>(msg__);
      if (type != other__.type) return false;
      if (id != other__.id) return false;
      if (arg != other__.arg) return false;
      return true;
    }

    int
    CcuEvent::validate(void) const
    {
      return false;
    }

    uint8_t*
    CcuEvent::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += arg.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    CcuEvent::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += arg.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CcuEvent::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(id, bfr__, size__);
      bfr__ += arg.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    CcuEvent::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "id", id, nindent__);
      arg.toJSON(os__, "arg", nindent__);
    }

    void
    CcuEvent::setTimeStampNested(double value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setTimeStamp(value__);
      }
    }

    void
    CcuEvent::setSourceNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSource(value__);
      }
    }

    void
    CcuEvent::setSourceEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setSourceEntity(value__);
      }
    }

    void
    CcuEvent::setDestinationNested(uint16_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestination(value__);
      }
    }

    void
    CcuEvent::setDestinationEntityNested(uint8_t value__)
    {
      if (!arg.isNull())
      {
        arg.get()->setDestinationEntity(value__);
      }
    }

    VehicleLinks::VehicleLinks(void)
    {
      m_header.mgid = 650;
      clear();
      links.setParent(this);
    }

    void
    VehicleLinks::clear(void)
    {
      localname.clear();
      links.clear();
    }

    bool
    VehicleLinks::fieldsEqual(const Message& msg__) const
    {
      const IMC::VehicleLinks& other__ = static_cast<const VehicleLinks&>(msg__);
      if (localname != other__.localname) return false;
      if (links != other__.links) return false;
      return true;
    }

    int
    VehicleLinks::validate(void) const
    {
      return false;
    }

    uint8_t*
    VehicleLinks::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(localname, ptr__);
      ptr__ += links.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    VehicleLinks::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(localname, bfr__, size__);
      bfr__ += links.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    VehicleLinks::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(localname, bfr__, size__);
      bfr__ += links.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    VehicleLinks::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "localname", localname, nindent__);
      links.toJSON(os__, "links", nindent__);
    }

    void
    VehicleLinks::setTimeStampNested(double value__)
    {
      links.setTimeStamp(value__);
    }

    void
    VehicleLinks::setSourceNested(uint16_t value__)
    {
      links.setSource(value__);
    }

    void
    VehicleLinks::setSourceEntityNested(uint8_t value__)
    {
      links.setSourceEntity(value__);
    }

    void
    VehicleLinks::setDestinationNested(uint16_t value__)
    {
      links.setDestination(value__);
    }

    void
    VehicleLinks::setDestinationEntityNested(uint8_t value__)
    {
      links.setDestinationEntity(value__);
    }

    TrexObservation::TrexObservation(void)
    {
      m_header.mgid = 651;
      clear();
    }

    void
    TrexObservation::clear(void)
    {
      timeline.clear();
      predicate.clear();
      attributes.clear();
    }

    bool
    TrexObservation::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexObservation& other__ = static_cast<const TrexObservation&>(msg__);
      if (timeline != other__.timeline) return false;
      if (predicate != other__.predicate) return false;
      if (attributes != other__.attributes) return false;
      return true;
    }

    int
    TrexObservation::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexObservation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeline, ptr__);
      ptr__ += IMC::serialize(predicate, ptr__);
      ptr__ += IMC::serialize(attributes, ptr__);
      return ptr__;
    }

    uint16_t
    TrexObservation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeline, bfr__, size__);
      bfr__ += IMC::deserialize(predicate, bfr__, size__);
      bfr__ += IMC::deserialize(attributes, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexObservation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeline, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(predicate, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(attributes, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexObservation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeline", timeline, nindent__);
      IMC::toJSON(os__, "predicate", predicate, nindent__);
      IMC::toJSON(os__, "attributes", attributes, nindent__);
    }

    TrexCommand::TrexCommand(void)
    {
      m_header.mgid = 652;
      clear();
    }

    void
    TrexCommand::clear(void)
    {
      command = 0;
      goal_id.clear();
      goal_xml.clear();
    }

    bool
    TrexCommand::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexCommand& other__ = static_cast<const TrexCommand&>(msg__);
      if (command != other__.command) return false;
      if (goal_id != other__.goal_id) return false;
      if (goal_xml != other__.goal_xml) return false;
      return true;
    }

    int
    TrexCommand::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexCommand::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(command, ptr__);
      ptr__ += IMC::serialize(goal_id, ptr__);
      ptr__ += IMC::serialize(goal_xml, ptr__);
      return ptr__;
    }

    uint16_t
    TrexCommand::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::deserialize(goal_id, bfr__, size__);
      bfr__ += IMC::deserialize(goal_xml, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexCommand::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(command, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(goal_id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(goal_xml, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexCommand::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "command", command, nindent__);
      IMC::toJSON(os__, "goal_id", goal_id, nindent__);
      IMC::toJSON(os__, "goal_xml", goal_xml, nindent__);
    }

    TrexAttribute::TrexAttribute(void)
    {
      m_header.mgid = 656;
      clear();
    }

    void
    TrexAttribute::clear(void)
    {
      name.clear();
      attr_type = 0;
      min.clear();
      max.clear();
    }

    bool
    TrexAttribute::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexAttribute& other__ = static_cast<const TrexAttribute&>(msg__);
      if (name != other__.name) return false;
      if (attr_type != other__.attr_type) return false;
      if (min != other__.min) return false;
      if (max != other__.max) return false;
      return true;
    }

    int
    TrexAttribute::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexAttribute::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(attr_type, ptr__);
      ptr__ += IMC::serialize(min, ptr__);
      ptr__ += IMC::serialize(max, ptr__);
      return ptr__;
    }

    uint16_t
    TrexAttribute::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(attr_type, bfr__, size__);
      bfr__ += IMC::deserialize(min, bfr__, size__);
      bfr__ += IMC::deserialize(max, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexAttribute::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(attr_type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(min, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(max, bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexAttribute::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "attr_type", attr_type, nindent__);
      IMC::toJSON(os__, "min", min, nindent__);
      IMC::toJSON(os__, "max", max, nindent__);
    }

    TrexToken::TrexToken(void)
    {
      m_header.mgid = 657;
      clear();
      attributes.setParent(this);
    }

    void
    TrexToken::clear(void)
    {
      timeline.clear();
      predicate.clear();
      attributes.clear();
    }

    bool
    TrexToken::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexToken& other__ = static_cast<const TrexToken&>(msg__);
      if (timeline != other__.timeline) return false;
      if (predicate != other__.predicate) return false;
      if (attributes != other__.attributes) return false;
      return true;
    }

    int
    TrexToken::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexToken::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeline, ptr__);
      ptr__ += IMC::serialize(predicate, ptr__);
      ptr__ += attributes.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    TrexToken::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeline, bfr__, size__);
      bfr__ += IMC::deserialize(predicate, bfr__, size__);
      bfr__ += attributes.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexToken::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeline, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(predicate, bfr__, size__);
      bfr__ += attributes.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexToken::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeline", timeline, nindent__);
      IMC::toJSON(os__, "predicate", predicate, nindent__);
      attributes.toJSON(os__, "attributes", nindent__);
    }

    void
    TrexToken::setTimeStampNested(double value__)
    {
      attributes.setTimeStamp(value__);
    }

    void
    TrexToken::setSourceNested(uint16_t value__)
    {
      attributes.setSource(value__);
    }

    void
    TrexToken::setSourceEntityNested(uint8_t value__)
    {
      attributes.setSourceEntity(value__);
    }

    void
    TrexToken::setDestinationNested(uint16_t value__)
    {
      attributes.setDestination(value__);
    }

    void
    TrexToken::setDestinationEntityNested(uint8_t value__)
    {
      attributes.setDestinationEntity(value__);
    }

    TrexOperation::TrexOperation(void)
    {
      m_header.mgid = 655;
      clear();
      token.setParent(this);
    }

    void
    TrexOperation::clear(void)
    {
      op = 0;
      goal_id.clear();
      token.clear();
    }

    bool
    TrexOperation::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexOperation& other__ = static_cast<const TrexOperation&>(msg__);
      if (op != other__.op) return false;
      if (goal_id != other__.goal_id) return false;
      if (token != other__.token) return false;
      return true;
    }

    int
    TrexOperation::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexOperation::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(op, ptr__);
      ptr__ += IMC::serialize(goal_id, ptr__);
      ptr__ += token.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    TrexOperation::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::deserialize(goal_id, bfr__, size__);
      bfr__ += token.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexOperation::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(op, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(goal_id, bfr__, size__);
      bfr__ += token.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexOperation::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "op", op, nindent__);
      IMC::toJSON(os__, "goal_id", goal_id, nindent__);
      token.toJSON(os__, "token", nindent__);
    }

    void
    TrexOperation::setTimeStampNested(double value__)
    {
      if (!token.isNull())
      {
        token.get()->setTimeStamp(value__);
      }
    }

    void
    TrexOperation::setSourceNested(uint16_t value__)
    {
      if (!token.isNull())
      {
        token.get()->setSource(value__);
      }
    }

    void
    TrexOperation::setSourceEntityNested(uint8_t value__)
    {
      if (!token.isNull())
      {
        token.get()->setSourceEntity(value__);
      }
    }

    void
    TrexOperation::setDestinationNested(uint16_t value__)
    {
      if (!token.isNull())
      {
        token.get()->setDestination(value__);
      }
    }

    void
    TrexOperation::setDestinationEntityNested(uint8_t value__)
    {
      if (!token.isNull())
      {
        token.get()->setDestinationEntity(value__);
      }
    }

    TrexPlan::TrexPlan(void)
    {
      m_header.mgid = 658;
      clear();
      tokens.setParent(this);
    }

    void
    TrexPlan::clear(void)
    {
      reactor.clear();
      tokens.clear();
    }

    bool
    TrexPlan::fieldsEqual(const Message& msg__) const
    {
      const IMC::TrexPlan& other__ = static_cast<const TrexPlan&>(msg__);
      if (reactor != other__.reactor) return false;
      if (tokens != other__.tokens) return false;
      return true;
    }

    int
    TrexPlan::validate(void) const
    {
      return false;
    }

    uint8_t*
    TrexPlan::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(reactor, ptr__);
      ptr__ += tokens.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    TrexPlan::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(reactor, bfr__, size__);
      bfr__ += tokens.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    TrexPlan::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(reactor, bfr__, size__);
      bfr__ += tokens.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    TrexPlan::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "reactor", reactor, nindent__);
      tokens.toJSON(os__, "tokens", nindent__);
    }

    void
    TrexPlan::setTimeStampNested(double value__)
    {
      tokens.setTimeStamp(value__);
    }

    void
    TrexPlan::setSourceNested(uint16_t value__)
    {
      tokens.setSource(value__);
    }

    void
    TrexPlan::setSourceEntityNested(uint8_t value__)
    {
      tokens.setSourceEntity(value__);
    }

    void
    TrexPlan::setDestinationNested(uint16_t value__)
    {
      tokens.setDestination(value__);
    }

    void
    TrexPlan::setDestinationEntityNested(uint8_t value__)
    {
      tokens.setDestinationEntity(value__);
    }

    Event::Event(void)
    {
      m_header.mgid = 660;
      clear();
    }

    void
    Event::clear(void)
    {
      topic.clear();
      data.clear();
    }

    bool
    Event::fieldsEqual(const Message& msg__) const
    {
      const IMC::Event& other__ = static_cast<const Event&>(msg__);
      if (topic != other__.topic) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    Event::validate(void) const
    {
      return false;
    }

    uint8_t*
    Event::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(topic, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    Event::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(topic, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Event::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(topic, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Event::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "topic", topic, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    CompressedImage::CompressedImage(void)
    {
      m_header.mgid = 702;
      clear();
    }

    void
    CompressedImage::clear(void)
    {
      frameid = 0;
      data.clear();
    }

    bool
    CompressedImage::fieldsEqual(const Message& msg__) const
    {
      const IMC::CompressedImage& other__ = static_cast<const CompressedImage&>(msg__);
      if (frameid != other__.frameid) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    CompressedImage::validate(void) const
    {
      return false;
    }

    uint8_t*
    CompressedImage::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(frameid, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    CompressedImage::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(frameid, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CompressedImage::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(frameid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CompressedImage::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "frameid", frameid, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    ImageTxSettings::ImageTxSettings(void)
    {
      m_header.mgid = 703;
      clear();
    }

    void
    ImageTxSettings::clear(void)
    {
      fps = 0;
      quality = 0;
      reps = 0;
      tsize = 0;
    }

    bool
    ImageTxSettings::fieldsEqual(const Message& msg__) const
    {
      const IMC::ImageTxSettings& other__ = static_cast<const ImageTxSettings&>(msg__);
      if (fps != other__.fps) return false;
      if (quality != other__.quality) return false;
      if (reps != other__.reps) return false;
      if (tsize != other__.tsize) return false;
      return true;
    }

    int
    ImageTxSettings::validate(void) const
    {
      return false;
    }

    uint8_t*
    ImageTxSettings::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(fps, ptr__);
      ptr__ += IMC::serialize(quality, ptr__);
      ptr__ += IMC::serialize(reps, ptr__);
      ptr__ += IMC::serialize(tsize, ptr__);
      return ptr__;
    }

    uint16_t
    ImageTxSettings::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(fps, bfr__, size__);
      bfr__ += IMC::deserialize(quality, bfr__, size__);
      bfr__ += IMC::deserialize(reps, bfr__, size__);
      bfr__ += IMC::deserialize(tsize, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    ImageTxSettings::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(fps, bfr__, size__);
      bfr__ += IMC::deserialize(quality, bfr__, size__);
      bfr__ += IMC::deserialize(reps, bfr__, size__);
      bfr__ += IMC::deserialize(tsize, bfr__, size__);
      return bfr__ - start__;
    }

    void
    ImageTxSettings::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "fps", fps, nindent__);
      IMC::toJSON(os__, "quality", quality, nindent__);
      IMC::toJSON(os__, "reps", reps, nindent__);
      IMC::toJSON(os__, "tsize", tsize, nindent__);
    }

    RemoteState::RemoteState(void)
    {
      m_header.mgid = 750;
      clear();
    }

    void
    RemoteState::clear(void)
    {
      lat = 0;
      lon = 0;
      depth = 0;
      speed = 0;
      psi = 0;
    }

    bool
    RemoteState::fieldsEqual(const Message& msg__) const
    {
      const IMC::RemoteState& other__ = static_cast<const RemoteState&>(msg__);
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (depth != other__.depth) return false;
      if (speed != other__.speed) return false;
      if (psi != other__.psi) return false;
      return true;
    }

    int
    RemoteState::validate(void) const
    {
      return false;
    }

    uint8_t*
    RemoteState::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(depth, ptr__);
      ptr__ += IMC::serialize(speed, ptr__);
      ptr__ += IMC::serialize(psi, ptr__);
      return ptr__;
    }

    uint16_t
    RemoteState::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(depth, bfr__, size__);
      bfr__ += IMC::deserialize(speed, bfr__, size__);
      bfr__ += IMC::deserialize(psi, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    RemoteState::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(depth, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(speed, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(psi, bfr__, size__);
      return bfr__ - start__;
    }

    void
    RemoteState::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "depth", depth, nindent__);
      IMC::toJSON(os__, "speed", speed, nindent__);
      IMC::toJSON(os__, "psi", psi, nindent__);
    }

    Target::Target(void)
    {
      m_header.mgid = 800;
      clear();
    }

    void
    Target::clear(void)
    {
      label.clear();
      lat = 0;
      lon = 0;
      z = 0;
      z_units = 0;
      cog = 0;
      sog = 0;
    }

    bool
    Target::fieldsEqual(const Message& msg__) const
    {
      const IMC::Target& other__ = static_cast<const Target&>(msg__);
      if (label != other__.label) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z != other__.z) return false;
      if (z_units != other__.z_units) return false;
      if (cog != other__.cog) return false;
      if (sog != other__.sog) return false;
      return true;
    }

    int
    Target::validate(void) const
    {
      return false;
    }

    uint8_t*
    Target::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(label, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(cog, ptr__);
      ptr__ += IMC::serialize(sog, ptr__);
      return ptr__;
    }

    uint16_t
    Target::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(label, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(cog, bfr__, size__);
      bfr__ += IMC::deserialize(sog, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    Target::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(label, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(cog, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sog, bfr__, size__);
      return bfr__ - start__;
    }

    void
    Target::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "label", label, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "cog", cog, nindent__);
      IMC::toJSON(os__, "sog", sog, nindent__);
    }

    EntityParameter::EntityParameter(void)
    {
      m_header.mgid = 801;
      clear();
    }

    void
    EntityParameter::clear(void)
    {
      name.clear();
      value.clear();
    }

    bool
    EntityParameter::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityParameter& other__ = static_cast<const EntityParameter&>(msg__);
      if (name != other__.name) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    EntityParameter::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityParameter::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    EntityParameter::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityParameter::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityParameter::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    EntityParameters::EntityParameters(void)
    {
      m_header.mgid = 802;
      clear();
      params.setParent(this);
    }

    void
    EntityParameters::clear(void)
    {
      name.clear();
      params.clear();
    }

    bool
    EntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::EntityParameters& other__ = static_cast<const EntityParameters&>(msg__);
      if (name != other__.name) return false;
      if (params != other__.params) return false;
      return true;
    }

    int
    EntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    EntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += params.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    EntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += params.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    EntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += params.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    EntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      params.toJSON(os__, "params", nindent__);
    }

    void
    EntityParameters::setTimeStampNested(double value__)
    {
      params.setTimeStamp(value__);
    }

    void
    EntityParameters::setSourceNested(uint16_t value__)
    {
      params.setSource(value__);
    }

    void
    EntityParameters::setSourceEntityNested(uint8_t value__)
    {
      params.setSourceEntity(value__);
    }

    void
    EntityParameters::setDestinationNested(uint16_t value__)
    {
      params.setDestination(value__);
    }

    void
    EntityParameters::setDestinationEntityNested(uint8_t value__)
    {
      params.setDestinationEntity(value__);
    }

    QueryEntityParameters::QueryEntityParameters(void)
    {
      m_header.mgid = 803;
      clear();
    }

    void
    QueryEntityParameters::clear(void)
    {
      name.clear();
      visibility.clear();
      scope.clear();
    }

    bool
    QueryEntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::QueryEntityParameters& other__ = static_cast<const QueryEntityParameters&>(msg__);
      if (name != other__.name) return false;
      if (visibility != other__.visibility) return false;
      if (scope != other__.scope) return false;
      return true;
    }

    int
    QueryEntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    QueryEntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += IMC::serialize(visibility, ptr__);
      ptr__ += IMC::serialize(scope, ptr__);
      return ptr__;
    }

    uint16_t
    QueryEntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += IMC::deserialize(visibility, bfr__, size__);
      bfr__ += IMC::deserialize(scope, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    QueryEntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(visibility, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(scope, bfr__, size__);
      return bfr__ - start__;
    }

    void
    QueryEntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      IMC::toJSON(os__, "visibility", visibility, nindent__);
      IMC::toJSON(os__, "scope", scope, nindent__);
    }

    SetEntityParameters::SetEntityParameters(void)
    {
      m_header.mgid = 804;
      clear();
      params.setParent(this);
    }

    void
    SetEntityParameters::clear(void)
    {
      name.clear();
      params.clear();
    }

    bool
    SetEntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::SetEntityParameters& other__ = static_cast<const SetEntityParameters&>(msg__);
      if (name != other__.name) return false;
      if (params != other__.params) return false;
      return true;
    }

    int
    SetEntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    SetEntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      ptr__ += params.serialize(ptr__);
      return ptr__;
    }

    uint16_t
    SetEntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      bfr__ += params.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SetEntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      bfr__ += params.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    void
    SetEntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
      params.toJSON(os__, "params", nindent__);
    }

    void
    SetEntityParameters::setTimeStampNested(double value__)
    {
      params.setTimeStamp(value__);
    }

    void
    SetEntityParameters::setSourceNested(uint16_t value__)
    {
      params.setSource(value__);
    }

    void
    SetEntityParameters::setSourceEntityNested(uint8_t value__)
    {
      params.setSourceEntity(value__);
    }

    void
    SetEntityParameters::setDestinationNested(uint16_t value__)
    {
      params.setDestination(value__);
    }

    void
    SetEntityParameters::setDestinationEntityNested(uint8_t value__)
    {
      params.setDestinationEntity(value__);
    }

    SaveEntityParameters::SaveEntityParameters(void)
    {
      m_header.mgid = 805;
      clear();
    }

    void
    SaveEntityParameters::clear(void)
    {
      name.clear();
    }

    bool
    SaveEntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::SaveEntityParameters& other__ = static_cast<const SaveEntityParameters&>(msg__);
      if (name != other__.name) return false;
      return true;
    }

    int
    SaveEntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    SaveEntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      return ptr__;
    }

    uint16_t
    SaveEntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SaveEntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SaveEntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
    }

    CreateSession::CreateSession(void)
    {
      m_header.mgid = 806;
      clear();
    }

    void
    CreateSession::clear(void)
    {
      timeout = 0;
    }

    bool
    CreateSession::fieldsEqual(const Message& msg__) const
    {
      const IMC::CreateSession& other__ = static_cast<const CreateSession&>(msg__);
      if (timeout != other__.timeout) return false;
      return true;
    }

    int
    CreateSession::validate(void) const
    {
      return false;
    }

    uint8_t*
    CreateSession::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(timeout, ptr__);
      return ptr__;
    }

    uint16_t
    CreateSession::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(timeout, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CreateSession::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(timeout, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CreateSession::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "timeout", timeout, nindent__);
    }

    CloseSession::CloseSession(void)
    {
      m_header.mgid = 807;
      clear();
    }

    void
    CloseSession::clear(void)
    {
      sessid = 0;
    }

    bool
    CloseSession::fieldsEqual(const Message& msg__) const
    {
      const IMC::CloseSession& other__ = static_cast<const CloseSession&>(msg__);
      if (sessid != other__.sessid) return false;
      return true;
    }

    int
    CloseSession::validate(void) const
    {
      return false;
    }

    uint8_t*
    CloseSession::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sessid, ptr__);
      return ptr__;
    }

    uint16_t
    CloseSession::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    CloseSession::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    void
    CloseSession::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sessid", sessid, nindent__);
    }

    SessionSubscription::SessionSubscription(void)
    {
      m_header.mgid = 808;
      clear();
    }

    void
    SessionSubscription::clear(void)
    {
      sessid = 0;
      messages.clear();
    }

    bool
    SessionSubscription::fieldsEqual(const Message& msg__) const
    {
      const IMC::SessionSubscription& other__ = static_cast<const SessionSubscription&>(msg__);
      if (sessid != other__.sessid) return false;
      if (messages != other__.messages) return false;
      return true;
    }

    int
    SessionSubscription::validate(void) const
    {
      return false;
    }

    uint8_t*
    SessionSubscription::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sessid, ptr__);
      ptr__ += IMC::serialize(messages, ptr__);
      return ptr__;
    }

    uint16_t
    SessionSubscription::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sessid, bfr__, size__);
      bfr__ += IMC::deserialize(messages, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SessionSubscription::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sessid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(messages, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SessionSubscription::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sessid", sessid, nindent__);
      IMC::toJSON(os__, "messages", messages, nindent__);
    }

    SessionKeepAlive::SessionKeepAlive(void)
    {
      m_header.mgid = 809;
      clear();
    }

    void
    SessionKeepAlive::clear(void)
    {
      sessid = 0;
    }

    bool
    SessionKeepAlive::fieldsEqual(const Message& msg__) const
    {
      const IMC::SessionKeepAlive& other__ = static_cast<const SessionKeepAlive&>(msg__);
      if (sessid != other__.sessid) return false;
      return true;
    }

    int
    SessionKeepAlive::validate(void) const
    {
      return false;
    }

    uint8_t*
    SessionKeepAlive::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sessid, ptr__);
      return ptr__;
    }

    uint16_t
    SessionKeepAlive::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SessionKeepAlive::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SessionKeepAlive::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sessid", sessid, nindent__);
    }

    SessionStatus::SessionStatus(void)
    {
      m_header.mgid = 810;
      clear();
    }

    void
    SessionStatus::clear(void)
    {
      sessid = 0;
      status = 0;
    }

    bool
    SessionStatus::fieldsEqual(const Message& msg__) const
    {
      const IMC::SessionStatus& other__ = static_cast<const SessionStatus&>(msg__);
      if (sessid != other__.sessid) return false;
      if (status != other__.status) return false;
      return true;
    }

    int
    SessionStatus::validate(void) const
    {
      return false;
    }

    uint8_t*
    SessionStatus::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sessid, ptr__);
      ptr__ += IMC::serialize(status, ptr__);
      return ptr__;
    }

    uint16_t
    SessionStatus::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sessid, bfr__, size__);
      bfr__ += IMC::deserialize(status, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    SessionStatus::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sessid, bfr__, size__);
      bfr__ += IMC::deserialize(status, bfr__, size__);
      return bfr__ - start__;
    }

    void
    SessionStatus::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sessid", sessid, nindent__);
      IMC::toJSON(os__, "status", status, nindent__);
    }

    PushEntityParameters::PushEntityParameters(void)
    {
      m_header.mgid = 811;
      clear();
    }

    void
    PushEntityParameters::clear(void)
    {
      name.clear();
    }

    bool
    PushEntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::PushEntityParameters& other__ = static_cast<const PushEntityParameters&>(msg__);
      if (name != other__.name) return false;
      return true;
    }

    int
    PushEntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    PushEntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      return ptr__;
    }

    uint16_t
    PushEntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PushEntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PushEntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
    }

    PopEntityParameters::PopEntityParameters(void)
    {
      m_header.mgid = 812;
      clear();
    }

    void
    PopEntityParameters::clear(void)
    {
      name.clear();
    }

    bool
    PopEntityParameters::fieldsEqual(const Message& msg__) const
    {
      const IMC::PopEntityParameters& other__ = static_cast<const PopEntityParameters&>(msg__);
      if (name != other__.name) return false;
      return true;
    }

    int
    PopEntityParameters::validate(void) const
    {
      return false;
    }

    uint8_t*
    PopEntityParameters::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(name, ptr__);
      return ptr__;
    }

    uint16_t
    PopEntityParameters::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    PopEntityParameters::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(name, bfr__, size__);
      return bfr__ - start__;
    }

    void
    PopEntityParameters::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "name", name, nindent__);
    }

    IoEvent::IoEvent(void)
    {
      m_header.mgid = 813;
      clear();
    }

    void
    IoEvent::clear(void)
    {
      type = 0;
      error.clear();
    }

    bool
    IoEvent::fieldsEqual(const Message& msg__) const
    {
      const IMC::IoEvent& other__ = static_cast<const IoEvent&>(msg__);
      if (type != other__.type) return false;
      if (error != other__.error) return false;
      return true;
    }

    int
    IoEvent::validate(void) const
    {
      return false;
    }

    uint8_t*
    IoEvent::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(type, ptr__);
      ptr__ += IMC::serialize(error, ptr__);
      return ptr__;
    }

    uint16_t
    IoEvent::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::deserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    IoEvent::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    void
    IoEvent::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "type", type, nindent__);
      IMC::toJSON(os__, "error", error, nindent__);
    }

    UamTxFrame::UamTxFrame(void)
    {
      m_header.mgid = 814;
      clear();
    }

    void
    UamTxFrame::clear(void)
    {
      seq = 0;
      sys_dst.clear();
      flags = 0;
      data.clear();
    }

    bool
    UamTxFrame::fieldsEqual(const Message& msg__) const
    {
      const IMC::UamTxFrame& other__ = static_cast<const UamTxFrame&>(msg__);
      if (seq != other__.seq) return false;
      if (sys_dst != other__.sys_dst) return false;
      if (flags != other__.flags) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    UamTxFrame::validate(void) const
    {
      return false;
    }

    uint8_t*
    UamTxFrame::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(sys_dst, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    UamTxFrame::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(sys_dst, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UamTxFrame::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys_dst, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UamTxFrame::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "sys_dst", sys_dst, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    UamRxFrame::UamRxFrame(void)
    {
      m_header.mgid = 815;
      clear();
    }

    void
    UamRxFrame::clear(void)
    {
      sys_src.clear();
      sys_dst.clear();
      flags = 0;
      data.clear();
    }

    bool
    UamRxFrame::fieldsEqual(const Message& msg__) const
    {
      const IMC::UamRxFrame& other__ = static_cast<const UamRxFrame&>(msg__);
      if (sys_src != other__.sys_src) return false;
      if (sys_dst != other__.sys_dst) return false;
      if (flags != other__.flags) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    UamRxFrame::validate(void) const
    {
      return false;
    }

    uint8_t*
    UamRxFrame::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sys_src, ptr__);
      ptr__ += IMC::serialize(sys_dst, ptr__);
      ptr__ += IMC::serialize(flags, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    UamRxFrame::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sys_src, bfr__, size__);
      bfr__ += IMC::deserialize(sys_dst, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UamRxFrame::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sys_src, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys_dst, bfr__, size__);
      bfr__ += IMC::deserialize(flags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UamRxFrame::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sys_src", sys_src, nindent__);
      IMC::toJSON(os__, "sys_dst", sys_dst, nindent__);
      IMC::toJSON(os__, "flags", flags, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    UamTxStatus::UamTxStatus(void)
    {
      m_header.mgid = 816;
      clear();
    }

    void
    UamTxStatus::clear(void)
    {
      seq = 0;
      value = 0;
      error.clear();
    }

    bool
    UamTxStatus::fieldsEqual(const Message& msg__) const
    {
      const IMC::UamTxStatus& other__ = static_cast<const UamTxStatus&>(msg__);
      if (seq != other__.seq) return false;
      if (value != other__.value) return false;
      if (error != other__.error) return false;
      return true;
    }

    int
    UamTxStatus::validate(void) const
    {
      return false;
    }

    uint8_t*
    UamTxStatus::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(error, ptr__);
      return ptr__;
    }

    uint16_t
    UamTxStatus::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UamTxStatus::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(error, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    UamTxStatus::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    UamTxStatus::setValueFP(fp64_t val)
    {
      value = static_cast<uint8_t>(val);
    }

    void
    UamTxStatus::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "error", error, nindent__);
    }

    UamRxRange::UamRxRange(void)
    {
      m_header.mgid = 817;
      clear();
    }

    void
    UamRxRange::clear(void)
    {
      seq = 0;
      sys.clear();
      value = 0;
    }

    bool
    UamRxRange::fieldsEqual(const Message& msg__) const
    {
      const IMC::UamRxRange& other__ = static_cast<const UamRxRange&>(msg__);
      if (seq != other__.seq) return false;
      if (sys != other__.sys) return false;
      if (value != other__.value) return false;
      return true;
    }

    int
    UamRxRange::validate(void) const
    {
      return false;
    }

    uint8_t*
    UamRxRange::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(sys, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    uint16_t
    UamRxRange::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(sys, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UamRxRange::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    fp64_t
    UamRxRange::getValueFP(void) const
    {
      return static_cast<fp64_t>(value);
    }

    void
    UamRxRange::setValueFP(fp64_t val)
    {
      value = static_cast<fp32_t>(val);
    }

    void
    UamRxRange::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "sys", sys, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }

    FormCtrlParam::FormCtrlParam(void)
    {
      m_header.mgid = 820;
      clear();
    }

    void
    FormCtrlParam::clear(void)
    {
      action = 0;
      longain = 0;
      latgain = 0;
      bondthick = 0;
      leadgain = 0;
      deconflgain = 0;
    }

    bool
    FormCtrlParam::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormCtrlParam& other__ = static_cast<const FormCtrlParam&>(msg__);
      if (action != other__.action) return false;
      if (longain != other__.longain) return false;
      if (latgain != other__.latgain) return false;
      if (bondthick != other__.bondthick) return false;
      if (leadgain != other__.leadgain) return false;
      if (deconflgain != other__.deconflgain) return false;
      return true;
    }

    int
    FormCtrlParam::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormCtrlParam::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(action, ptr__);
      ptr__ += IMC::serialize(longain, ptr__);
      ptr__ += IMC::serialize(latgain, ptr__);
      ptr__ += IMC::serialize(bondthick, ptr__);
      ptr__ += IMC::serialize(leadgain, ptr__);
      ptr__ += IMC::serialize(deconflgain, ptr__);
      return ptr__;
    }

    uint16_t
    FormCtrlParam::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(action, bfr__, size__);
      bfr__ += IMC::deserialize(longain, bfr__, size__);
      bfr__ += IMC::deserialize(latgain, bfr__, size__);
      bfr__ += IMC::deserialize(bondthick, bfr__, size__);
      bfr__ += IMC::deserialize(leadgain, bfr__, size__);
      bfr__ += IMC::deserialize(deconflgain, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormCtrlParam::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(action, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(longain, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(latgain, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bondthick, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(leadgain, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(deconflgain, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormCtrlParam::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "action", action, nindent__);
      IMC::toJSON(os__, "longain", longain, nindent__);
      IMC::toJSON(os__, "latgain", latgain, nindent__);
      IMC::toJSON(os__, "bondthick", bondthick, nindent__);
      IMC::toJSON(os__, "leadgain", leadgain, nindent__);
      IMC::toJSON(os__, "deconflgain", deconflgain, nindent__);
    }

    FormationEval::FormationEval(void)
    {
      m_header.mgid = 821;
      clear();
    }

    void
    FormationEval::clear(void)
    {
      err_mean = 0;
      dist_min_abs = 0;
      dist_min_mean = 0;
    }

    bool
    FormationEval::fieldsEqual(const Message& msg__) const
    {
      const IMC::FormationEval& other__ = static_cast<const FormationEval&>(msg__);
      if (err_mean != other__.err_mean) return false;
      if (dist_min_abs != other__.dist_min_abs) return false;
      if (dist_min_mean != other__.dist_min_mean) return false;
      return true;
    }

    int
    FormationEval::validate(void) const
    {
      return false;
    }

    uint8_t*
    FormationEval::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(err_mean, ptr__);
      ptr__ += IMC::serialize(dist_min_abs, ptr__);
      ptr__ += IMC::serialize(dist_min_mean, ptr__);
      return ptr__;
    }

    uint16_t
    FormationEval::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(err_mean, bfr__, size__);
      bfr__ += IMC::deserialize(dist_min_abs, bfr__, size__);
      bfr__ += IMC::deserialize(dist_min_mean, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    FormationEval::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(err_mean, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(dist_min_abs, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(dist_min_mean, bfr__, size__);
      return bfr__ - start__;
    }

    void
    FormationEval::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "err_mean", err_mean, nindent__);
      IMC::toJSON(os__, "dist_min_abs", dist_min_abs, nindent__);
      IMC::toJSON(os__, "dist_min_mean", dist_min_mean, nindent__);
    }

    MessagePart::MessagePart(void)
    {
      m_header.mgid = 877;
      clear();
    }

    void
    MessagePart::clear(void)
    {
      uid = 0;
      frag_number = 0;
      num_frags = 0;
      data.clear();
    }

    bool
    MessagePart::fieldsEqual(const Message& msg__) const
    {
      const IMC::MessagePart& other__ = static_cast<const MessagePart&>(msg__);
      if (uid != other__.uid) return false;
      if (frag_number != other__.frag_number) return false;
      if (num_frags != other__.num_frags) return false;
      if (data != other__.data) return false;
      return true;
    }

    int
    MessagePart::validate(void) const
    {
      return false;
    }

    uint8_t*
    MessagePart::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(uid, ptr__);
      ptr__ += IMC::serialize(frag_number, ptr__);
      ptr__ += IMC::serialize(num_frags, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    uint16_t
    MessagePart::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(uid, bfr__, size__);
      bfr__ += IMC::deserialize(frag_number, bfr__, size__);
      bfr__ += IMC::deserialize(num_frags, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    MessagePart::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(uid, bfr__, size__);
      bfr__ += IMC::deserialize(frag_number, bfr__, size__);
      bfr__ += IMC::deserialize(num_frags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    void
    MessagePart::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "uid", uid, nindent__);
      IMC::toJSON(os__, "frag_number", frag_number, nindent__);
      IMC::toJSON(os__, "num_frags", num_frags, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }

    NeptusBlob::NeptusBlob(void)
    {
      m_header.mgid = 888;
      clear();
    }

    void
    NeptusBlob::clear(void)
    {
      content_type.clear();
      content.clear();
    }

    bool
    NeptusBlob::fieldsEqual(const Message& msg__) const
    {
      const IMC::NeptusBlob& other__ = static_cast<const NeptusBlob&>(msg__);
      if (content_type != other__.content_type) return false;
      if (content != other__.content) return false;
      return true;
    }

    int
    NeptusBlob::validate(void) const
    {
      return false;
    }

    uint8_t*
    NeptusBlob::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(content_type, ptr__);
      ptr__ += IMC::serialize(content, ptr__);
      return ptr__;
    }

    uint16_t
    NeptusBlob::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(content_type, bfr__, size__);
      bfr__ += IMC::deserialize(content, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    NeptusBlob::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(content_type, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(content, bfr__, size__);
      return bfr__ - start__;
    }

    void
    NeptusBlob::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "content_type", content_type, nindent__);
      IMC::toJSON(os__, "content", content, nindent__);
    }

    Aborted::Aborted(void)
    {
      m_header.mgid = 889;
      clear();
    }

    void
    Aborted::clear(void)
    {
    }

    int
    Aborted::validate(void) const
    {
      return false;
    }

    uint8_t*
    Aborted::serializeFields(uint8_t* bfr__) const
    {
      return bfr__;
    }

    uint16_t
    Aborted::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    uint16_t
    Aborted::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      (void)bfr__;
      (void)size__;
      return 0;
    }

    UsblAngles::UsblAngles(void)
    {
      m_header.mgid = 890;
      clear();
    }

    void
    UsblAngles::clear(void)
    {
      target = 0;
      bearing = 0;
      elevation = 0;
    }

    bool
    UsblAngles::fieldsEqual(const Message& msg__) const
    {
      const IMC::UsblAngles& other__ = static_cast<const UsblAngles&>(msg__);
      if (target != other__.target) return false;
      if (bearing != other__.bearing) return false;
      if (elevation != other__.elevation) return false;
      return true;
    }

    int
    UsblAngles::validate(void) const
    {
      return false;
    }

    uint8_t*
    UsblAngles::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(target, ptr__);
      ptr__ += IMC::serialize(bearing, ptr__);
      ptr__ += IMC::serialize(elevation, ptr__);
      return ptr__;
    }

    uint16_t
    UsblAngles::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(target, bfr__, size__);
      bfr__ += IMC::deserialize(bearing, bfr__, size__);
      bfr__ += IMC::deserialize(elevation, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UsblAngles::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(target, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(bearing, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(elevation, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UsblAngles::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "target", target, nindent__);
      IMC::toJSON(os__, "bearing", bearing, nindent__);
      IMC::toJSON(os__, "elevation", elevation, nindent__);
    }

    UsblPosition::UsblPosition(void)
    {
      m_header.mgid = 891;
      clear();
    }

    void
    UsblPosition::clear(void)
    {
      target = 0;
      x = 0;
      y = 0;
      z = 0;
    }

    bool
    UsblPosition::fieldsEqual(const Message& msg__) const
    {
      const IMC::UsblPosition& other__ = static_cast<const UsblPosition&>(msg__);
      if (target != other__.target) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    UsblPosition::validate(void) const
    {
      return false;
    }

    uint8_t*
    UsblPosition::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(target, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    UsblPosition::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(target, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UsblPosition::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(target, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UsblPosition::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "target", target, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }

    UsblFix::UsblFix(void)
    {
      m_header.mgid = 892;
      clear();
    }

    void
    UsblFix::clear(void)
    {
      target = 0;
      lat = 0;
      lon = 0;
      z_units = 0;
      z = 0;
    }

    bool
    UsblFix::fieldsEqual(const Message& msg__) const
    {
      const IMC::UsblFix& other__ = static_cast<const UsblFix&>(msg__);
      if (target != other__.target) return false;
      if (lat != other__.lat) return false;
      if (lon != other__.lon) return false;
      if (z_units != other__.z_units) return false;
      if (z != other__.z) return false;
      return true;
    }

    int
    UsblFix::validate(void) const
    {
      return false;
    }

    uint8_t*
    UsblFix::serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(target, ptr__);
      ptr__ += IMC::serialize(lat, ptr__);
      ptr__ += IMC::serialize(lon, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      ptr__ += IMC::serialize(z, ptr__);
      return ptr__;
    }

    uint16_t
    UsblFix::deserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(target, bfr__, size__);
      bfr__ += IMC::deserialize(lat, bfr__, size__);
      bfr__ += IMC::deserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::deserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    UsblFix::reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(target, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(lon, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(z, bfr__, size__);
      return bfr__ - start__;
    }

    void
    UsblFix::fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "target", target, nindent__);
      IMC::toJSON(os__, "lat", lat, nindent__);
      IMC::toJSON(os__, "lon", lon, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
      IMC::toJSON(os__, "z", z, nindent__);
    }
  }
}
