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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_CONTROL_COARSE_ALTITUDE_HPP_INCLUDED_
#define DUNE_CONTROL_COARSE_ALTITUDE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/MultiMovingAverage.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/IMC.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CoarseAltitude;

    class CoarseAltitude
    {
    public:
      struct Arguments
      {
        //! True if coarse altitude control is enabled
        bool enabled;
        //! Vector of window sizes for the moving averages
        std::vector<unsigned> wsizes;
        //! Size of the upper part of the corridor
        std::vector<float> upper_gap;
        //! Period for checking time spent outside the corridor
        float period;
        //! Percentage of time outside the corridor to change corridor size
        float max_outside;
        //! Limit of a fixed number of incoming samples per second
        unsigned sample_limit;
      };

      //! Constructor.
      CoarseAltitude(const Arguments* args);

      //! Destructor.
      ~CoarseAltitude(void);

      //! Reset variables
      void
      reset(void);

      //! Activate coarse altitude control
      void
      activate(void);

      //! Deactivate coarse altitude control
      void
      deactivate(void);

      //! Get current corridor number
      inline unsigned
      getCorridor(void)
      {
        return m_corridor;
      };

      //! Update object with new depth value
      //! @param[in] timestep time elapsed since last measurement was received
      //! @param[in] depth new depth value
      //! @param[in] desired_depth current depth reference
      //! @return depth value to be used as a reference
      float
      update(float timestep, float depth, float desired_depth);

      //! Log parcels with coarse altitude data
      //! @param[out] parcel ControlParcel message to use
      //! @param[in] desired_depth current untreated depth reference for comparison
      void
      logParcel(IMC::ControlParcel& parcel, float desired_depth);

    private:
      //! Size of the lower gap of a corridor
      //! @param[in] corridor index of corridor to compute
      //! @return size of the lower gap
      float
      lowerGapSize(unsigned corridor)
      {
        return m_args->upper_gap[corridor] / 2.0f;
      }

      //! Check if the vehicle is inside one of the corridors
      //! @param[in] depth new depth value
      //! @param[in] desired_depth current depth reference
      //! @param[in] corridor index of corridor to test
      //! @return true if inside, false otherwise
      bool
      isInCorridor(float depth, float desired_depth, unsigned corridor);

      //! Check if the vehicle is inside the current corridor
      //! @param[in] depth new depth value
      //! @param[in] desired_depth current depth reference
      //! @return true if inside, false otherwise
      bool
      isInCorridor(float depth, float desired_depth)
      {
        return isInCorridor(depth, desired_depth, m_corridor);
      }

      //! Measure performace using current corridor and change it if necessary
      void
      measurePerformance(void);

      //! True if coarse altitude control is active
      bool m_active;
      //! Arguments
      const Arguments* m_args;
      //! Tracking flag (true if already tracking)
      bool m_tracking;
      //! Number of corridor being used right now
      unsigned m_corridor;
      //! Multiple moving averages to filter the signal
      Math::MultiMovingAverage<float>* m_mmav;
      //! Time since last corridor check
      float m_last_check;
      //! Accumulated time outside the current corridor
      float m_toutside_curr;
      //! Accumulated time outside tighter corridor
      float m_toutside_tighter;
      //! Time since last used sample
      float m_since_last;
      //! Last value given for desired depth
      float m_depth_ref;
    };
  }
}

#endif
