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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

#ifndef DUNE_CONTROL_FILTER_HPP_INCLUDED_
#define DUNE_CONTROL_FILTER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM FilterEstimator;

    //enum filterType {LPF, HPF, BPF, BSF, NOTCH};

    class FilterEstimator
    {
    public:
      //! Constructor.
      FilterEstimator(void);

      //! Destructor.
      ~FilterEstimator(void);

      //! Free allocated memory.
      void freeMem(void);

      //! Build Filter.
      void build(std::string filt_t, int num_taps, double freq_sampl, double freq_cutoff);
      void build(std::string filt_t, int num_taps, double freq_sampl, double freq_low, double freq_high);

      //! Initialize.
      void init();

      //! Low-pass filter.
      void LPF();
      //! High-pass filter.
      void HPF();
	    //! Band-pass filter.
	    void BPF();
	    //! Band-stop filter.
	    void BSF();
	    //! Notch filter.
	    void NF();

      //! Filter Data.
      double
      step(double sample);

      //! Reset filter variables
      //void
      //reset(void);

    private:
    	//! Filter Type.
    	std::string m_filt_t;
    	//! Data Sampling Frequency (Hz).
    	double m_freq_sampl;
    	//! Filter cutoff frequency (Hz).
    	double m_freq_cutoff;
    	//! Number of taps.
    	int m_num_taps;
      //! Lambda.
      double m_lambda;
      //! phi.
      double m_phi;
      
      double *m_taps;
      double *m_sr;
    	//! Highest Frequency to be included (Hz).
    	double m_freq_high;
    };
  }
}

#endif