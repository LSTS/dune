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
// Author: Mauro Brandão                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

//! Test if the string is able to encode in base64
std::string
test_encode_base64(std::string str){
  try {
    std::string e_std;
    e_std=Base64::encode(str);
    std::cout << "string encode passed the test!\n";
    return e_std;
  }
  catch(const std::exception& e)
  {
    std::cerr << "string encode failed the test!\n";
    return 0;
  }
}

//! Test if the string is able to decode in base64
std::string
test_decode_base64(std::string str){
  try {
    std::string d_std;
    d_std=Base64::decode(str);
    std::cout << "string decode passed the test!\n";
    return d_std;
  }
  catch(const std::exception& e)
  {
    std::cerr << "string decode failed the test!\n";
    return 0;
  }
}

int
main(void)
{
  std::string test_encode_base64(std::string);
  std::string test_decode_base64(std::string);

  // RFC 4648 Strings Test

  // Space -> String: "" - ""
  std::string test_std_0 = "", result_en_0, result_de_0;
  std::cout << test_std_0 << "\n";
  result_en_0=test_encode_base64(test_std_0);
  result_de_0=test_decode_base64(result_en_0);

  printf("*\n*\n");

  // String: f - Zg==
  std::string test_std_1 = "f", result_en_1, result_de_1;
  std::cout << test_std_1 << "\n";
  result_en_1=test_encode_base64(test_std_1);
  result_de_1=test_decode_base64(result_en_1);

  printf("*\n*\n");

  // String: fo - Zm8=
  std::string test_std_2 = "fo", result_en_2, result_de_2;
  std::cout << test_std_2 << "\n";
  result_en_2=test_encode_base64(test_std_2);
  result_de_2=test_decode_base64(result_en_2);

  printf("*\n*\n");

  // String: foo - Zm9v
  std::string test_std_3 = "foo", result_en_3, result_de_3;
  std::cout << test_std_3 << "\n";
  result_en_3=test_encode_base64(test_std_3);
  result_de_3=test_decode_base64(result_en_3);

  printf("*\n*\n");

  // String: foob - Zm9vYg==
  std::string test_std_4 = "foob", result_en_4, result_de_4;
  std::cout << test_std_4 << "\n";
  result_en_4=test_encode_base64(test_std_4);
  result_de_4=test_decode_base64(result_en_4);

  printf("*\n*\n");

  // String: fooba - Zm9vYmE=
  std::string test_std_5 = "fooba", result_en_5, result_de_5;
  std::cout << test_std_5 << "\n";
  result_en_5=test_encode_base64(test_std_5);
  result_de_5=test_decode_base64(result_en_5);

  printf("*\n*\n");

  // String: foobar - Zm9vYmFy
  std::string test_std_6 = "foobar", result_en_6, result_de_6;
  std::cout << test_std_6 << "\n";
  result_en_6=test_encode_base64(test_std_6);
  result_de_6=test_decode_base64(result_en_6);

  printf("*\n*\n");

  // RFC 2045 Strings Test

  // String: "*" - "Kg=="
  std::string test_std_7 = "*", result_en_7, result_de_7;
  std::cout << test_std_7 << "\n";
  result_en_7=test_encode_base64(test_std_7);
  result_de_7=test_decode_base64(result_en_7);

  printf("*\n*\n");

  // String: "Hello World!" - "SGVsbG8gV29ybGQh"
  std::string test_std_8 = "Hello World!", result_en_8, result_de_8;
  std::cout << test_std_8 << "\n";
  result_en_8=test_encode_base64(test_std_8);
  result_de_8=test_decode_base64(result_en_8);

  printf("*\n*\n");

  return 0;
}
