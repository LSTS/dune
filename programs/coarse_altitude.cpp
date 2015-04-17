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
// Utility to test coarse altitude control using LSF log files.             *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Control/CoarseAltitude.hpp>

using DUNE_NAMESPACES;

void
createCA(DUNE::Control::CoarseAltitude::Arguments* args)
{
  args->wsizes.push_back(10);
  args->wsizes.push_back(20);
  args->wsizes.push_back(40);
  args->wsizes.push_back(80);

  args->upper_gap.push_back(0.4);
  args->upper_gap.push_back(0.8);
  args->upper_gap.push_back(1.0);
  args->upper_gap.push_back(1.5);

  args->period = 20.0;

  args->max_outside = 20.0;

  args->sample_limit = 2;
}

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  IMC::Message* msg = NULL;

  std::ofstream lsf("Data.lsf", std::ios::binary);

  DUNE::Utils::ByteBuffer buffer;

  float bottom_follow_depth = -1.0;
  float vertical_ref = -1.0;

  // Control parcel for debug
  IMC::ControlParcel parcel;

  // Last EstimatedState
  IMC::EstimatedState last_state;
  bool got_state = false;

  // Coarse altitude control
  DUNE::Control::CoarseAltitude::Arguments args;
  createCA(&args);
  DUNE::Control::CoarseAltitude ca(&args);

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
      {
        IMC::EstimatedState* state = static_cast<IMC::EstimatedState*>(msg);

        if (!got_state)
        {
          last_state = *state;
          got_state = true;
        }
        else
        {
          IMC::Packet::serialize(state, buffer);
          lsf.write(buffer.getBufferSigned(), buffer.getSize());
          buffer.resetBuffer();

          if (bottom_follow_depth > 0.0)
          {
            bottom_follow_depth = state->depth + (state->alt - vertical_ref);
            parcel.p = bottom_follow_depth;
            parcel.i = ca.update(state->getTimeStamp() - last_state.getTimeStamp(),
                                 state->depth, bottom_follow_depth);
            parcel.d = state->depth - bottom_follow_depth;
            // parcel.a = state->depth - parcel.i;
            parcel.a = ca.getCorridor();

            parcel.setTimeStamp(state->getTimeStamp());

            IMC::Packet::serialize(&parcel, buffer);
            lsf.write(buffer.getBufferSigned(), buffer.getSize());
            buffer.resetBuffer();
          }

          last_state = *state;
        }
      }
      else if (msg->getId() == DUNE_IMC_DESIREDZ)
      {
        IMC::DesiredZ* ptr = static_cast<IMC::DesiredZ*>(msg);

        if (ptr->z_units == IMC::Z_ALTITUDE)
        {
          vertical_ref = ptr->value;
          bottom_follow_depth = last_state.depth;
        }

        IMC::Packet::serialize(ptr, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
        buffer.resetBuffer();
      }
      else if (msg->getId() == DUNE_IMC_LOGGINGCONTROL)
      {
        IMC::LoggingControl* ptr = static_cast<IMC::LoggingControl*>(msg);
        IMC::Packet::serialize(ptr, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
        buffer.resetBuffer();
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  lsf.close();

  delete is;

  return 0;
}
