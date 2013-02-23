//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: evousbl.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#define TYPE1 fp64_t
#define TYPE2 fp64_t
#define TYPE3 uint16_t
#define TYPE4 fp32_t
#define TYPE5 fp32_t
#define TYPE6 fp32_t
#define TYPE7 fp32_t
#define TYPE8 fp32_t
#define TYPE9 fp32_t
#define TYPE10 fp32_t
#define TYPE11 fp32_t
#define TYPE12 fp32_t
#define TYPE13 uint16_t
#define TYPE14 int16_t
#define TYPE15 uint16_t
#define TYPE16 fp32_t

#define FIELD1 timestamp
#define FIELD2 measurement_time
#define FIELD3 remote_address
#define FIELD4 x
#define FIELD5 y
#define FIELD6 z
#define FIELD7 e
#define FIELD8 n
#define FIELD9 u
#define FIELD10 roll
#define FIELD11 pitch
#define FIELD12 yaw
#define FIELD13 prop_time
#define FIELD14 rssi
#define FIELD15 integrity
#define FIELD16 accuracy

#define CASTFIELD(name)                                 \
  {                                                     \
    if (!castLexical(fields[name], msg.FIELD ## name))  \
      return false;                                     \
  }

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __FILE__ ":" TOSTRING(__LINE__)

using DUNE_NAMESPACES;

const unsigned c_num_fields = 17;

struct USBLMessage
{
  TYPE1 FIELD1;
  TYPE2 FIELD2;
  TYPE3 FIELD3;
  TYPE4 FIELD4;
  TYPE5 FIELD5;
  TYPE6 FIELD6;
  TYPE7 FIELD7;
  TYPE8 FIELD8;
  TYPE9 FIELD9;
  TYPE10 FIELD10;
  TYPE11 FIELD11;
  TYPE12 FIELD12;
  TYPE13 FIELD13;
  TYPE14 FIELD14;
  TYPE15 FIELD15;
  TYPE16 FIELD16;
};

bool
castMessage(std::vector<USBLMessage> &list, const std::string str)
{
  std::vector<std::string> fields;
  Utils::String::split(str, ",", fields);

  if (fields.size() != c_num_fields)
  {
    std::cerr << "badly sized line: size is " << fields.size() << std::endl;
    return false;
  }

  USBLMessage msg;

  CASTFIELD(1)
  CASTFIELD(2)
  CASTFIELD(3)
  CASTFIELD(4)
  CASTFIELD(5)
  CASTFIELD(6)
  CASTFIELD(7)
  CASTFIELD(8)
  CASTFIELD(9)
  CASTFIELD(10)
  CASTFIELD(11)
  CASTFIELD(12)
  CASTFIELD(13)
  CASTFIELD(14)
  CASTFIELD(15)
  CASTFIELD(16)

  list.push_back(msg);
}

void
printLine(std::ostream& os, USBLMessage* msg)
{
  os << msg->FIELD1 << "\t"
     << 65535 << "\t"
     << 255 << "\t"
     << 65535 << "\t"
     << 255 << "\t"
     << msg->FIELD2 << "\t"
     << msg->FIELD3 << "\t"
     << msg->FIELD4 << "\t"
     << msg->FIELD5 << "\t"
     << msg->FIELD6 << "\t"
     << msg->FIELD7 << "\t"
     << msg->FIELD8 << "\t"
     << msg->FIELD9 << "\t"
     << msg->FIELD10 << "\t"
     << msg->FIELD11 << "\t"
     << msg->FIELD12 << "\t"
     << msg->FIELD13 << "\t"
     << msg->FIELD14 << "\t"
     << msg->FIELD15 << "\t"
     << msg->FIELD16
     << std::endl;
}

int
main(int argc, char** argv)
{
  // Parse command line arguments.
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0]
              << " <path_to_file>"
              << std::endl;
    return 1;
  }

  std::ifstream ifs(argv[1], std::ifstream::in);

  if (!ifs.good())
  {
    std::cerr << "failed to open file" << std::endl;
    return 1;
  }

  std::vector<USBLMessage> list;

  while (1)
  {
    std::string str;

    ifs >> str;

    if (!castMessage(list, str))
    {
      std::cerr << "failed conversion" << std::endl;
      return 1;
    }
    else
    {
      std::cerr << "Converted this line:" << std::endl;
      std::cerr << str << std::endl;

      char c;
      ifs >> c;

      if (!ifs.good())
      {
        std::cerr << "finished conversion" << std::endl;
        std::cerr << "list size is " << list.size() << std::endl;
        break;
      }

      ifs.putback(c);
    }
  }

  std::ostream* os = &std::cout;

  *os << "#LLF1" << std::endl
      << "#generator: " << argv[0] << std::endl
      << "#standard: " << "None" << std::endl
      << "#version: 0.0.0" << std::endl
      << "#name: " << "Usbl" << std::endl
      << "#startTime: " << 0.0 << std::endl
      << "#types: "
      << TOSTRING(TYPE1) << "\t"
      << "uint16_t" << "\t"
      << "uint8_t" << "\t"
      << "uint16_t" << "\t"
      << "uint8_t" << "\t"
      << TOSTRING(TYPE2) << "\t"
      << TOSTRING(TYPE3) << "\t"
      << TOSTRING(TYPE4) << "\t"
      << TOSTRING(TYPE5) << "\t"
      << TOSTRING(TYPE6) << "\t"
      << TOSTRING(TYPE7) << "\t"
      << TOSTRING(TYPE8) << "\t"
      << TOSTRING(TYPE9) << "\t"
      << TOSTRING(TYPE10) << "\t"
      << TOSTRING(TYPE11) << "\t"
      << TOSTRING(TYPE12) << "\t"
      << TOSTRING(TYPE13) << "\t"
      << TOSTRING(TYPE14) << "\t"
      << TOSTRING(TYPE15) << "\t"
      << TOSTRING(TYPE16)
      << std::endl;

  *os << TOSTRING(FIELD1) << "\t"
      << "src" << "\t"
      << "src_ent" << "\t"
      << "dst" << "\t"
      << "dst_ent" << "\t"
      << TOSTRING(FIELD2) << "\t"
      << TOSTRING(FIELD3) << "\t"
      << TOSTRING(FIELD4) << "\t"
      << TOSTRING(FIELD5) << "\t"
      << TOSTRING(FIELD6) << "\t"
      << TOSTRING(FIELD7) << "\t"
      << TOSTRING(FIELD8) << "\t"
      << TOSTRING(FIELD9) << "\t"
      << TOSTRING(FIELD10) << "\t"
      << TOSTRING(FIELD11) << "\t"
      << TOSTRING(FIELD12) << "\t"
      << TOSTRING(FIELD13) << "\t"
      << TOSTRING(FIELD14) << "\t"
      << TOSTRING(FIELD15) << "\t"
      << TOSTRING(FIELD16)
      << std::endl;

  for (std::vector<USBLMessage>::iterator itr = list.begin(); itr != list.end(); ++itr)
    printLine(*os, &*itr);

  return 0;
}
