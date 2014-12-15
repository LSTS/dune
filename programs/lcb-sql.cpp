#include <iostream>
#include <algorithm>

#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

#include <Transports/Leviathan/Filters/Ids.hpp>
#include <Transports/Leviathan/Filters/LIMU.hpp>

void
processLIMUData(const IMC::DevDataBinary* msg)
{
  int64_t msec;
  Transports::Leviathan::LIMU::Fields fields;

  const uint8_t* bfr__ = (const uint8_t*)&msg->value[0];
  uint16_t size__ = msg->value.size();

  bfr__ += IMC::deserialize(msec, bfr__, size__);
  bfr__ += IMC::deserialize(fields.temp, bfr__, size__);
  bfr__ += IMC::deserialize(fields.accl_x, bfr__, size__);
  bfr__ += IMC::deserialize(fields.accl_y, bfr__, size__);
  bfr__ += IMC::deserialize(fields.accl_z, bfr__, size__);
  bfr__ += IMC::deserialize(fields.avel_x, bfr__, size__);
  bfr__ += IMC::deserialize(fields.avel_y, bfr__, size__);
  bfr__ += IMC::deserialize(fields.avel_z, bfr__, size__);
  bfr__ += IMC::deserialize(fields.magn_x, bfr__, size__);
  bfr__ += IMC::deserialize(fields.magn_y, bfr__, size__);
  bfr__ += IMC::deserialize(fields.magn_z, bfr__, size__);
  bfr__ += IMC::deserialize(fields.phi, bfr__, size__);
  bfr__ += IMC::deserialize(fields.theta, bfr__, size__);
  bfr__ += IMC::deserialize(fields.psi, bfr__, size__);

  #if 0
  std::cout << "INSERT INTO limu_data VALUES ("
            << msec << ","
            << fields.temp << ","
            << fields.accl_x << ","
            << fields.accl_y << ","
            << fields.accl_z << ","
            << fields.avel_x << ","
            << fields.avel_y << ","
            << fields.avel_z << ","
            << fields.magn_x << ","
            << fields.magn_y << ","
            << fields.magn_z << ","
            << fields.phi << ","
            << fields.theta << ","
            << fields.psi
            << ");" << std::endl;
  #endif
}

void
processNovatelTime(const IMC::DevDataBinary* msg)
{
  int64_t msec;
  uint32_t utc_year;
  uint8_t utc_month;
  uint8_t utc_day;
  uint8_t utc_hour;
  uint8_t utc_min;
  uint32_t utc_sec;

  const uint8_t* bfr__ = (const uint8_t*)&msg->value[0];
  uint16_t size__ = msg->value.size();

  bfr__ += IMC::deserialize(msec, bfr__, size__);
  bfr__ += IMC::deserialize(utc_year, bfr__, size__);
  bfr__ += IMC::deserialize(utc_month, bfr__, size__);
  bfr__ += IMC::deserialize(utc_day, bfr__, size__);
  bfr__ += IMC::deserialize(utc_hour, bfr__, size__);
  bfr__ += IMC::deserialize(utc_min, bfr__, size__);
  bfr__ += IMC::deserialize(utc_sec, bfr__, size__);

  #if 0
  std::cout << "INSERT INTO novatel_time VALUES ("
            << msec << ","
            << utc_year << ","
            << (unsigned)utc_month << ","
            << (unsigned)utc_day << ","
            << (unsigned)utc_hour << ","
            << (unsigned)utc_min << ","
            << (unsigned)utc_sec
            << ");" << std::endl;

  #endif
}

void
processNovatelData(const IMC::DevDataBinary* msg)
{
  int64_t msec;
  std::vector<char> data;

  //std::cerr << msg->value.size() << std::endl;

  const uint8_t* bfr__ = (const uint8_t*)&msg->value[0];
  uint16_t size__ = msg->value.size();

  bfr__ += IMC::deserialize(msec, bfr__, size__);
  bfr__ += IMC::deserialize(data, bfr__, size__);

  std::cout << "INSERT INTO novatel_data VALUES ("
            << msec << ", "
            << "X'" << String::toHex(data) << "'"
            << ");" << std::endl;
}

void
toSQL(const Path& path)
{
  std::cerr << "* Processing " << path << std::endl;

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(path.c_str());
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(path.c_str(), std::ios::binary);
  else
    is = new Compression::FileInput(path.c_str(), method);

  DUNE::IMC::Message* msg = NULL;

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_DEVDATABINARY)
      {
        IMC::DevDataBinary* bin = static_cast<IMC::DevDataBinary*>(msg);
        switch (bin->getSourceEntity())
        {
          case Transports::Leviathan::ID_LIMU_DATA:
            processLIMUData(bin);
            break;
          case Transports::Leviathan::ID_NOVATEL_DATA:
            processNovatelData(bin);
            break;
          case Transports::Leviathan::ID_NOVATEL_TIME:
            processNovatelTime(bin);
            break;
        }
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;
}

int
main(int argc, char** argv)
{
  Directory dir(argv[1]);
  std::vector<std::string> paths;

  const char* entry = NULL;
  while ((entry = dir.readEntry(Directory::RD_FULL_NAME)))
  {
    if (String::endsWith(entry, ".gz"))
      paths.push_back(entry);
  }

  std::sort(paths.begin(), paths.end());
  for (size_t i = 0; i < paths.size(); ++i)
    toSQL(paths[i]);

  return 0;
}
