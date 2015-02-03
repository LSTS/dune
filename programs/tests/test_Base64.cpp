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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

int
main(void)
{
  Test test("Algorithms::Base64");

  /* RFC 4648 Strings Test */

  // String: f - Zg==
  std::string str = "f";
  test.boolean("encode(f) == 'Zg=='", Base64::encode(str) == "Zg==");
  test.boolean("decode(Zg==) == 'f'", Base64::decode(Base64::encode(str)) == "f");

  // String: fo - Zm8=
  str = "fo";
  test.boolean("encode(fo) == 'Zm8='", Base64::encode(str) == "Zm8=");
  test.boolean("decode(Zm8=) == 'fo'", Base64::decode(Base64::encode(str)) == "fo");

  // String: foo - Zm9v
  str = "foo";
  test.boolean("encode(foo) == 'Zm9v'", Base64::encode(str) == "Zm9v");
  test.boolean("decode(Zm9v) == 'foo'", Base64::decode(Base64::encode(str)) == "foo");

  // String: foob - Zm9vYg==
  str = "foob";
  test.boolean("encode(foob) == 'Zm9vYg=='", Base64::encode(str) == "Zm9vYg==");
  test.boolean("decode(Zm9vYg==) == 'foob'", Base64::decode(Base64::encode(str)) == "foob");

  // String: fooba - Zm9vYmE=
  str = "fooba";
  test.boolean("encode(fooba) == 'Zm9vYmE='", Base64::encode(str) == "Zm9vYmE=");
  test.boolean("decode(Zm9vYmE=) == 'fooba'", Base64::decode(Base64::encode(str)) == "fooba");

  // String: foobar - Zm9vYmFy
  str = "foobar";
  test.boolean("encode(foobar) == 'Zm9vYmFy'", Base64::encode(str) == "Zm9vYmFy");
  test.boolean("decode(Zm9vYmFy) == 'foobar'", Base64::decode(Base64::encode(str)) == "foobar");

  /* RFC 2045 Strings Test */

  // String: "*" - "Kg=="
  str = "*";
  test.boolean("encode(*) == 'Kg=='", Base64::encode(str) == "Kg==");
  test.boolean("decode(Kg==) == '*'", Base64::decode(Base64::encode(str)) == "*");

  // String: "Hello World!" - "SGVsbG8gV29ybGQh"
  str = "Hello World!";
  test.boolean("encode(Hello World!) == 'SGVsbG8gV29ybGQh'", Base64::encode(str) == "SGVsbG8gV29ybGQh");
  test.boolean("decode(SGVsbG8gV29ybGQh) == 'Hello World!'", Base64::decode(Base64::encode(str)) == "Hello World!")
;
  return 0;
}
