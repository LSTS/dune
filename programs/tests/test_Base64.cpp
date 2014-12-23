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
  //RFC 4648 Strings Test
  
  //Space -> String: "" - ""
  std::string test_std = ""; 
  std::cout << "String: " << test_std << "\n";
  
  std::string result_std;
  result_std=Base64::encode(test_std);
  printf("Base64::encode - %s\n",result_std.c_str());
  
  std::string ini_std;
  ini_std=Base64::decode(result_std);
  printf("Base64::decode - %s\n",ini_std.c_str());

  printf("*\n*\n");
  
  //String: f - Zg==
  std::string test_std_1 = "f"; 
  std::cout << "String: " << test_std_1 << "\n";
  
  std::string result_std_1;
  result_std_1=Base64::encode(test_std_1);
  printf("Base64::encode - %s\n",result_std_1.c_str());
  
  std::string ini_std_1;
  ini_std_1=Base64::decode(result_std_1);
  printf("Base64::decode - %s\n",ini_std_1.c_str());

  printf("*\n*\n");
  
  //String: fo - Zm8=
  std::string test_std_2 = "fo"; 
  std::cout << "String: " << test_std_2 << "\n";
  
  std::string result_std_2;
  result_std_2=Base64::encode(test_std_2);
  printf("Base64::encode - %s\n",result_std_2.c_str());
  
  std::string ini_std_2;
  ini_std_2=Base64::decode(result_std_2);
  printf("Base64::decode - %s\n",ini_std_2.c_str());

  printf("*\n*\n");
  
  //String: foo - Zm9v
  std::string test_std_3 = "foo"; 
  std::cout << "String:" << test_std_3 << "\n";
  
  std::string result_std_3;
  result_std_3=Base64::encode(test_std_3);
  printf("Base64::encode - %s\n",result_std_3.c_str());
  
  std::string ini_std_3;
  ini_std_3=Base64::decode(result_std_3);
  printf("Base64::decode - %s\n",ini_std_3.c_str());

  printf("*\n*\n");
  
  //String: foob - Zm9vYg==
  std::string test_std_4 = "foob"; 
  std::cout << "String: " << test_std_4 << "\n";
  
  std::string result_std_4;
  result_std_4=Base64::encode(test_std_4);
  printf("Base64::encode - %s\n",result_std_4.c_str());
  
  std::string ini_std_4;
  ini_std_4=Base64::decode(result_std_4);
  printf("Base64::decode - %s\n",ini_std_4.c_str());

  printf("*\n*\n");
  
  //String: fooba - Zm9vYmE=
  std::string test_std_5 = "fooba"; 
  std::cout << "String: " << test_std_5 << "\n";
  
  std::string result_std_5;
  result_std_5=Base64::encode(test_std_5);
  printf("Base64::encode - %s\n",result_std_5.c_str());
  
  std::string ini_std_5;
  ini_std_5=Base64::decode(result_std_5);
  printf("Base64::decode - %s\n",ini_std_5.c_str());

  printf("*\n*\n");
  
  //String: foobar - Zm9vYmFy
  std::string test_std_6 = "foobar"; 
  std::cout << "String: " << test_std_6 << "\n";
  
  std::string result_std_6;
  result_std_6=Base64::encode(test_std_6);
  printf("Base64::encode - %s\n",result_std_6.c_str());
  
  std::string ini_std_6;
  ini_std_6=Base64::decode(result_std_6);
  printf("Base64::decode - %s\n",ini_std_6.c_str());

  printf("*\n*\n");
  
  //RFC 2045 Strings Test
  
  //String: "*" - "Kg=="
  std::string test_std_7 = "*"; 
  std::cout << "String: " << test_std_7 << "\n";
  
  std::string result_std_7;
  result_std_7=Base64::encode(test_std_7);
  printf("Base64::encode - %s\n",result_std_7.c_str());
  
  std::string ini_std_7;
  ini_std_7=Base64::decode(result_std_7);
  printf("Base64::decode - %s\n",ini_std_7.c_str());

  printf("*\n*\n");
  
  //String: "Hello World!" - "SGVsbG8gV29ybGQh"
  std::string test_std_8 = "Hello World!"; 
  std::cout << "String: " << test_std_8 << "\n";
  
  std::string result_std_8;
  result_std_8=Base64::encode(test_std_8);
  printf("Base64::encode - %s\n",result_std_8.c_str());
  
  std::string ini_std_8;
  ini_std_8=Base64::decode(result_std_8);
  printf("Base64::decode - %s\n",ini_std_8.c_str());

  printf("*\n*\n");
 
  return 0;
}
