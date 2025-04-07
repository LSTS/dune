//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licenstd::sing terms, conditions, and further      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// Local headers.
#include <DUNE/Control/FilterEstimator.hpp>
#include <DUNE/Math.hpp>

#define MAX_NUM_FILTER_TAPS 1000

namespace DUNE
{
  namespace Control
  {

    //! Constructor.
    FilterEstimator::FilterEstimator(void):
      m_filt_t(),
      m_freq_sampl(0.0),
      m_freq_cutoff(0.0),
      m_num_taps(0),
      m_lambda(0.0),
      m_freq_high(0.0)
      {}

    //! Destructor.
    FilterEstimator::~FilterEstimator()
    {
    }

    //! Free allocated memory.
    void
    FilterEstimator::freeMem(void)
    {
      if(m_taps != NULL) free(m_taps);
      if(m_sr != NULL) free(m_sr);
    }

    // Low-pass, High-pass and Notch Filters.
    void
    FilterEstimator::build(std::string filt_t, int num_taps, double freq_sampl, double freq_cutoff)
    {
      m_filt_t = filt_t;
      m_freq_sampl = freq_sampl;
      m_freq_cutoff = freq_cutoff;
      m_num_taps = num_taps;
      m_lambda = M_PI * freq_cutoff / (freq_sampl/2);
      
      //printf("taps:%d\n",m_num_taps);
      //printf("lambda:%f\n",m_lambda);
      //printf("freq_cutoff:%f\n",m_freq_cutoff);
      //printf("freq_sampl:%f\n",m_freq_sampl);

      if(m_num_taps > MAX_NUM_FILTER_TAPS) m_num_taps = MAX_NUM_FILTER_TAPS;

      m_taps = m_sr = NULL;
      m_taps = (double*)malloc( m_num_taps * sizeof(double) );
      m_sr = (double*)malloc( m_num_taps * sizeof(double) );

      if(m_filt_t.compare("LPF") == 0) LPF();
      else if(m_filt_t.compare("HPF") == 0) HPF();
      else if(m_filt_t.compare("NF") == 0) NF();

      init();

    }

    // Band-pass and Band-stop Filters.
    void
    FilterEstimator::build(std::string filt_t, int num_taps, double freq_sampl, double freq_low, double freq_high)
    {
      m_filt_t = filt_t;
      m_freq_sampl = freq_sampl;
      m_freq_high = freq_high;
      m_freq_cutoff = freq_low;
      m_num_taps = num_taps;

      if(m_num_taps > MAX_NUM_FILTER_TAPS) m_num_taps = MAX_NUM_FILTER_TAPS;

      m_taps = m_sr = NULL;
      m_taps = (double*)malloc( m_num_taps * sizeof(double) );
      m_sr = (double*)malloc( m_num_taps * sizeof(double) );

      m_lambda = M_PI * m_freq_cutoff / (freq_sampl/2);
      m_phi = M_PI * m_freq_high / (freq_sampl/2);

      if(m_filt_t.compare("BPF") == 0) BPF();
      else if(m_filt_t.compare("BSF") == 0) BSF();

      init();
    }

    void 
    FilterEstimator::init()
    {
      int i;

      for(i = 0; i < m_num_taps; i++) m_sr[i] = 0;
  
      return;
    }

    void
    FilterEstimator::LPF()
    {
      int n;
      double mm;

      for(n = 0; n < m_num_taps; n++)
      {
        mm = n - (m_num_taps - 1.0) / 2.0;
        if(mm == 0.0)
        {
          m_taps[n] = m_lambda / M_PI;
          //printf("coeff0:%f\n",m_taps[n]);
        }
        else 
        {
          m_taps[n] = std::sin(mm * m_lambda) / (mm * M_PI);
          //printf("coeff_others:%f\n",m_taps[n]);
        }
      }

      return;
    }


    void 
    FilterEstimator::HPF()
    {
      int n;
      double mm;

      for(n = 0; n < m_num_taps; n++)
      {
        mm = n - (m_num_taps - 1.0) / 2.0;
        if( mm == 0.0 ) m_taps[n] = 1.0 - m_lambda / M_PI;
        else m_taps[n] = -std::sin(mm * m_lambda) / (mm * M_PI);
      }

      return;
    }


    void 
    FilterEstimator::NF()
    {
      int n;
      double mm;

      for(n = 0; n < m_num_taps; n++)
      {
        mm = n - (m_num_taps - 1.0) / 2.0;
        if( mm == 0.0 ) m_taps[n] = 1.0 - m_lambda / M_PI;
        else m_taps[n] = 2*std::sin(mm * m_lambda) / (mm * M_PI);
      }

      return;
    }

    void
    FilterEstimator::BPF()
    {
      int n;
      double mm;

      for(n = 0; n < m_num_taps; n++)
      {
        mm = n - (m_num_taps - 1.0) / 2.0;
        if( mm == 0.0 ) m_taps[n] = (m_phi - m_lambda) / M_PI;
        else m_taps[n] = (std::sin(mm * m_phi) - std::sin(mm * m_lambda)) / (mm * M_PI);
      }

      return;
    }

    void
    FilterEstimator::BSF()
    {
      int n;
      double mm;

      for(n = 0; n < m_num_taps; n++)
      {
        mm = n - (m_num_taps - 1.0) / 2.0;
        if( mm == 0.0 ) m_taps[n] = (1-(m_phi - m_lambda)) / M_PI;
        else m_taps[n] = (std::sin(mm * m_phi) - std::sin(mm * m_lambda)) / (mm * M_PI);
      }

      return;
    }

    double 
    FilterEstimator::step(double data_sample)
    {
      int i;
      double result;

      for(i = m_num_taps - 1; i >= 1; i--)
      {
        m_sr[i] = m_sr[i-1];
      } 
      m_sr[0] = data_sample;

      result = 0;
      for(i = 0; i < m_num_taps; i++) result += m_sr[i] * m_taps[i];

      //printf("RESULT:%f\n",result);
      return result;      
    }
  }
}