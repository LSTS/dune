//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// Copyright 2018 OceanScan - Marine Systems & Technology, Lda.             *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_BEAM_FILTER_HPP_INCLUDED_
#define DUNE_NAVIGATION_BEAM_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <vector>

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Maximum distance value to check dropout.
    static const float c_max = 1.0;
    //! Minimum distance for previous measurement.
    static const float c_min = 3.0;
    //! Number of position and orientation axes.
    static const unsigned c_axis = 3;
    //! Number of DVL beams.
    static const unsigned c_dvl_beams = 4;
    //! Minimum number of valid beams required.
    static const unsigned c_min_valid = 3;

    //! %BeamFilter is responsible to gather beam
    //! distance values from a DVL unit and compute
    //! one local distance output.
    //!
    //! @author José Braga
    class BeamFilter
    {
    public:
      //! Filter spacing.
      enum Spacing
      {
        CLOCKWISE,
        ANTICLOCKWISE,
        CROSSED
      };

      //! Constructor.
      //! @param[in] task pointer to parent task.
      BeamFilter(Tasks::Task* task):
        m_task(task),
        m_info(false)
      {
        m_size = c_dvl_beams;
        clear();
      }

      //! Constructor.
      //! @param[in] task pointer to parent task.
      //! @param[in] size number of device beams.
      BeamFilter(Tasks::Task* task, size_t size):
        m_task(task),
        m_info(false)
      {
        m_size = size;
        clear();
      }

      //! Constructor.
      //! @param[in] task pointer to parent task.
      //! @param[in] size number of device beams.
      //! @param[in] width beam width.
      //! @param[in] offset beam offset from center of device.
      //! @param[in] off_ang beam angle offset.
      //! @param[in] pos device position.
      //! @param[in] ang device orientation.
      //! @param[in] type type of beam disposition.
      BeamFilter(Tasks::Task* task, size_t size, float width, float offset, float off_ang,
                 std::vector<float>& pos, std::vector<float>& ang, Spacing type):
        m_task(task),
        m_info(true)
      {
        m_size = size;
        m_width = width;
        m_offset = offset;
        m_offang = off_ang;
        m_type = type;

        // Set position and orientation.
        if (pos.size() == c_axis && ang.size() == c_axis)
        {
          for (unsigned i = 0; i < c_axis; ++i)
          {
            m_position[i] = pos[i];
            m_orientation[i] = ang[i];
          }
        }

        clear();
      }

      //! Update beam index with new measurement.
      //! @param[in] index beam index.
      //! @param[in] value distance measurement.
      void
      update(size_t index, float value)
      {
        if (index >= m_size)
          return;

        m_list[index].value = value;
      }

      //! Get distance using current beam data.
      //! @return distance.
      float
      get(void)
      {
        float dist = 0.0;
        unsigned valid = 0;

        for (unsigned i = 0; i < m_list.size(); i++)
        {
          if (m_list[i].value > 0 && m_list[i].validity == IMC::Distance::DV_VALID)
          {
            valid++;
            dist += m_list[i].value;
          }
        }

        if (valid < c_min_valid)
          return -1;

        dist /= valid;

        if (dist < c_max)
        {
          if (m_prev > c_min)
          {
            float aux = dist;
            dist = m_prev;
            m_prev = aux;
            return dist;
          }
        }

        m_prev = dist;
        return dist;
      }

      //! Set beam distance validity.
      //! @param[in] index beam index.
      //! @param[in] val distance validity.
      void
      setValidity(size_t index, IMC::Distance::ValidityEnum val)
      {
        if (index >= m_size)
          return;

        m_list[index].validity = val;
      }

      //! Set source entities ids.
      //! @param[in] entities list of entity ids.
      void
      setSourceEntities(std::vector<unsigned>& entities)
      {
        if (entities.size() != m_list.size())
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
          m_list[i].setSourceEntity(entities[i]);
      }

      //! Dispatch Distance messages to bus.
      void
      dispatch(void)
      {
        for (unsigned i = 0; i < m_list.size(); ++i)
          m_task->dispatch(m_list[i], Tasks::DF_KEEP_TIME);
      }

      //! Set timestamp and dispatch Distance messages to bus.
      //! @param[in] tstamp timestamp value.
      void
      dispatch(double tstamp)
      {
        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          m_list[i].setTimeStamp(tstamp);
          m_task->dispatch(m_list[i], Tasks::DF_KEEP_TIME);
        }
      }

      //! Get reference to distance message.
      //! @param[in] index beam index.
      //! @return reference to distance.
      IMC::Distance&
      getAltitude(size_t index)
      {
        if (index >= m_size)
          throw std::runtime_error(DTR("invalid dimensions"));

        return m_list[index];
      }

    private:
      //! Clear data.
      void
      clear(void)
      {
        m_list.clear();
        m_prev = 0;

        for (unsigned i = 0; i < m_size; ++i)
        {
          IMC::Distance beam;
          beam.location.clear();
          beam.beam_config.clear();
          if (m_info)
          {
            IMC::BeamConfig bc;
            bc.beam_width = Math::Angles::radians(m_width);
            bc.beam_height = bc.beam_width;
            beam.beam_config.push_back(bc);
          }

          m_list.push_back(beam);
        }

        if (m_info && m_size == c_dvl_beams)
          setDeviceState();
      }

      //! Set device state.
      void
      setDeviceState(void)
      {
        IMC::DeviceState ds;

        // Beam 1.
        ds.phi = Math::Angles::radians(m_orientation[0]);
        ds.theta = Math::Angles::radians(m_orientation[1] + m_offang);
        ds.psi = Math::Angles::radians(m_orientation[2]);
        ds.x = m_position[0] + std::cos(ds.psi) * m_offset;
        ds.y = m_position[1] + std::sin(ds.psi) * m_offset;
        ds.z = m_position[2];
        m_list[0].location.push_back(ds);

        // Beam 2.
        if (m_type == CLOCKWISE)
          ds.psi += Math::Angles::radians(90.0);
        else if (m_type == ANTICLOCKWISE)
          ds.psi -= Math::Angles::radians(90.0);
        else
          ds.psi += Math::Angles::radians(180.0);
        ds.x = m_position[0] + std::cos(ds.psi) * m_offset;
        ds.y = m_position[1] + std::sin(ds.psi) * m_offset;
        m_list[1].location.push_back(ds);

        // Beam 3.
        if (m_type == CLOCKWISE)
          ds.psi += Math::Angles::radians(90.0);
        else
          ds.psi -= Math::Angles::radians(90.0);
        ds.x = m_position[0] + std::cos(ds.psi) * m_offset;
        ds.y = m_position[1] + std::sin(ds.psi) * m_offset;
        m_list[2].location.push_back(ds);

        // Beam 4.
        if (m_type == CLOCKWISE)
          ds.psi += Math::Angles::radians(90.0);
        else if (m_type == ANTICLOCKWISE)
          ds.psi -= Math::Angles::radians(90.0);
        else
          ds.psi -= Math::Angles::radians(180.0);
        ds.x = m_position[0] + std::cos(ds.psi) * m_offset;
        ds.y = m_position[1] + std::sin(ds.psi) * m_offset;
        m_list[3].location.push_back(ds);
      }

      //! Parent task.
      Tasks::Task* m_task;
      //! Array of distances.
      std::vector<IMC::Distance> m_list;
      //! True if we have position and orientation information.
      bool m_info;
      //! Beam width.
      float m_width;
      //! Beam offset position.
      float m_offset;
      //! Beam offset angle.
      float m_offang;
      //! Beam position.
      float m_position[c_axis];
      //! Beam orientation.
      float m_orientation[c_axis];
      //! Number of DVL beams.
      size_t m_size;
      //! Previous distance value.
      float m_prev;
      //! Beam spacing disposition.
      Spacing m_type;
    };
  }
}

#endif
