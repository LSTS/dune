//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Obstacles
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      unsigned fdist_avg_samples;
      float dist_close;
      float dist_too_close;
      float z_tol;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Forward distance moving average.
      MovingAverage<float>* m_fdist_avg;
      //! Sonar is configured flag
      bool m_sonar_conf;
      //! Forward distance entity id
      unsigned m_fdist_eid;
      //! Echo Sounder beam width
      float m_beam_width;
      //! Last received estimated state
      IMC::EstimatedState m_estate;
      //! Last computed forward distance
      float m_last_fdist;
      //! Last computed validity
      unsigned m_last_validity;
      //! Debug purposed variable of forward distance
      IMC::Distance m_mydistance;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_fdist_avg(NULL),
        m_sonar_conf(false),
        m_last_fdist(std::numeric_limits<float>::infinity()),
        m_last_validity(IMC::Distance::DV_INVALID)
      {
        param("Forward Distance Moving Average Samples", m_args.fdist_avg_samples)
        .defaultValue("5")
        .description("Number of samples used by the moving average filter applied to forward distance");

        param("Close Distance Threshold", m_args.dist_close)
        .defaultValue("10.0")
        .units(Units::Meter)
        .description("Distance value below which the vehicle is close to obstacle");

        param("Too Close Distance Threshold", m_args.dist_too_close)
        .defaultValue("5.0")
        .units(Units::Meter)
        .description("Distance value below which the vehicle is too close to obstacle");

        param("Depth Altitude Tolerance", m_args.z_tol)
        .defaultValue("0.5")
        .units(Units::Meter)
        .description("Tolerance in depth or altitude to consider when filtering bottom and surface measurements of echo sounder");

        // Register listeners.
        bind<IMC::Distance>(this);
        bind<IMC::EstimatedState>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceInitialization(void)
      {
        deactivate();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fdist_avg);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // cannot be active without estimated state
        if (!isActive())
        {
          activate();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        m_estate = *msg;
      }

      void
      consume(const IMC::Distance* msg)
      {
        if (!m_sonar_conf)
        {
          // check if sonar points forward and is an echo sounder
          if (msg->location.size())
          {
            // checking first in the list only
            if ((std::fabs((*msg->location.begin())->psi) < 0.1) &&
                (std::fabs((*msg->location.begin())->theta) < 0.1) &&
                msg->beam_config.size())
            {
              m_beam_width = (*msg->beam_config.begin())->beam_width;
              m_sonar_conf = true;
              m_fdist_eid = msg->getSourceEntity();

              if (msg->validity == IMC::Distance::DV_VALID)
              {
                if (m_fdist_avg != NULL)
                  m_fdist_avg->clear();
                else
                  m_fdist_avg = new MovingAverage<float>(m_args.fdist_avg_samples);

                m_fdist_avg->update(msg->value);
              }
            }
          }
        }
        else if ((m_fdist_eid == msg->getSourceEntity()) && isActive())
        {
          if (m_fdist_avg == NULL)
          {
            if (msg->validity == IMC::Distance::DV_VALID)
              m_fdist_avg = new MovingAverage<float>(m_args.fdist_avg_samples);
            else
              return;
          }

          // if the measurement is not valid then return previous one as valid
          // check the usability of taken measure according to estimated state
          // and check sanity
          if ((msg->validity != IMC::Distance::DV_VALID) ||
              (!isFDistUsable(msg->value)))
          {
            dispatchMeasure(m_last_fdist, m_last_validity);
            return;
          }

          float fdist;

          fdist = m_fdist_avg->update(msg->value);

          // if the measure is bottom or surface then do not check possible collisions
          if (isBottomOrSurface(fdist))
          {
            dispatchMeasure(fdist, IMC::Distance::DV_INVALID);
            return;
          }

          // test if we're headed for a collision
          if (fdist < m_args.dist_too_close)
            setEntityState(IMC::EntityState::ESTA_ERROR,
                           DTR("vehicle is too close to forward object"));
          else if (fdist < m_args.dist_close)
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           DTR("vehicle is heading towards an obstacle"));
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          dispatchMeasure(fdist);
        }
      }

      //! Test whether the forward distance received value can be used
      //! by taking into account depth and value
      bool
      isFDistUsable(double value)
      {
        // if not deep enough then forget about the measures
        if (m_estate.depth <= 0.0)
          return false;

        // if close to zero than it is most likely to be an acoustic dropout
        if (value <= 0.1)
          return false;

        return true;
      }

      //! Test whether the measure refers to bottom and/or surface
      //! Assume altitude as filtered and attitude compensated
      bool
      isBottomOrSurface(double value)
      {
        // since the sonar apperture is 10deg wide
        // compute the upper and lower coordinates of the end of the connical beam
        // for the sensed range
        float lower_end = value * std::sin(m_estate.theta - m_beam_width / 2.0);
        float upper_end = value * std::sin(m_estate.theta + m_beam_width / 2.0);

        // do this part only if altitude is available
        if (m_estate.alt >= 0.0)
        {
          // can the sensed point be the bottom
          if (m_estate.alt + lower_end < m_args.z_tol)
            return true;
        }

        // can the sensed point be the surface
        if (m_estate.depth - upper_end < m_args.z_tol)
          return true;

        return false;
      }

      //! Simply dispatch the new filtered measure to the bus
      //! and save the value for future use
      inline void
      dispatchMeasure(double value, unsigned validity = IMC::Distance::DV_VALID)
      {
        m_mydistance.validity = validity;
        m_mydistance.value = value;
        dispatch(m_mydistance);

        m_last_fdist = value;
        m_last_validity = validity;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
