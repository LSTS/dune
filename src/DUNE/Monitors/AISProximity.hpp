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

#ifndef DUNE_MONITORS_AIS_PROXIMITY_HPP_INCLUDED_
#define DUNE_MONITORS_AIS_PROXIMITY_HPP_INCLUDED_

#include <unordered_set>

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Units.hpp>

namespace DUNE
{
  namespace Monitors
  {
    using namespace DUNE::Coordinates;
    using namespace DUNE::Units;

    struct AISPArguments
    {
      //! Method to calculate distance.
      std::string distance_method;
      //! Proximity distance in kilometers.
      unsigned proximity_distance;
      //! Timeout for discarding an AIS target.
      unsigned discard_ais;
    };

    struct AISTarget
    {
      //! Last update time.
      double last_update;
      //! Distance to the current position.
      double distance;
    };

    enum DistanceMethod : uint8_t
    {
      //! Use WGS84 latitude/longitude distance.
      DISTANCE_METHOD_LATLON = 0,
      //! Use AIS distance.
      DISTANCE_METHOD_AIS_DIST = 1,
      //! Use both methods.
      DISTANCE_METHOD_BOTH = 2
    };

    class AISProximity: public DUNE::Tasks::Periodic
    {
    public:
      //! Constructor.
      AISProximity(const std::string& name, DUNE::Tasks::Context& ctx):
        Periodic(name, ctx),
        m_lat(0.0f),
        m_lon(0.0f),
        m_last_estate(0.0f)
      {
        param("Distance Method", m_aisp_args.distance_method)
        .defaultValue("")
        .values("latlon,ais_dist,both")
        .description("Method to determine distance to AIS targets. "
                     "Options: latlon (WGS84), ais_dist (from AIS message), both (use both methods). "
                     "When using 'both', if distance from AIS message is <= 0, use WGS84 calculation.");

        param("Proximity Distance", m_aisp_args.proximity_distance)
        .minimumValue("0")
        .defaultValue("0")
        .units(DUNE::Units::Kilometer)
        .description("Distance in kilometers to consider an AIS target as in proximity.");

        param("Discard AIS Timeout", m_aisp_args.discard_ais)
        .minimumValue("0")
        .defaultValue("60")
        .units(DUNE::Units::Second)
        .description("Timeout in seconds to discard an AIS target that is not updated.");

        bind<IMC::AisInfo>(this);
        bind<IMC::EstimatedState>(this);
      }

      //! Destructor.
      virtual
      ~AISProximity(void);
      
      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_aisp_args.distance_method))
          m_method = (m_aisp_args.distance_method == "latlon") ? DISTANCE_METHOD_LATLON :
                     (m_aisp_args.distance_method == "ais_dist") ? DISTANCE_METHOD_AIS_DIST :
                     DISTANCE_METHOD_BOTH;

        if (paramChanged(m_aisp_args.proximity_distance))
          updateAISTargets();
      }

      void virtual
      consume(const IMC::AisInfo* msg);

      void virtual
      consume(const IMC::EstimatedState* msg);

    protected:
      inline double
      getLatitude(void) const
      {
        return m_lat;
      }

      inline double
      getLongitude(void) const
      {
        return m_lon;
      }

      inline bool
      targetsInProximity(void) const
      {
        return !m_ais_in_proximity.empty();
      }
    
    private:
      //! Task arguments.
      AISPArguments m_aisp_args;
      //! Method to calculate distance.
      DistanceMethod m_method;
      //! Current latitude.
      double m_lat;
      //! Current longitude.
      double m_lon;
      //! Last estimated state message timestamp.
      double m_last_estate;
      //! Map of AIS targets <MMSI, AISTarget>.
      std::map<std::string, AISTarget> m_ais_targets;
      //! AIS targets in proximity.
      std::unordered_set<std::string> m_ais_in_proximity;

      void virtual
      onTargetsInProximity(void);

      void virtual
      onNoTargetsInProximity(void);

      void virtual
      updateAISTargets(void);

      //! Task to be executed on each cycle.
      void
      task(void) override
      {
        updateAISTargets();
      }
    };
  }
}

#endif
