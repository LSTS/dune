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

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

int
main(void)
{
  
  std::string test_std = "String em C++"; 
  std::cout << test_std << "\n";
  
  std::string result_std;
  result_std=Base64::encode(test_std);
  printf("Base64::encode - %s\n",result_std.c_str());
  
  std::string ini_std;
  ini_std=Base64::decode(result_std);
  printf("Base64::decode - %s\n",ini_std.c_str());

  printf("*\n*\n*\n*\n*\n*\n*\n*\n");
  
  char c_str[] = "Texto em C.";
  std::cout << c_str << "\n";
  
  std::string result_c_str;
  result_c_str=Base64::encode(c_str);
  printf("Base64::encode - %s\n",result_c_str.c_str());
  
  std::string ini_c_str;
  ini_c_str=Base64::decode(result_c_str);
  printf("Base64::decode - %s\n",ini_c_str.c_str());
  
  printf("*\n*\n*\n*\n*\n*\n*\n*\n");
 
  return 0;
}
