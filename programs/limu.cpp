#include <cstdio>
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;
#include <Transports/Leviathan/Filters/LIMU.hpp>

int
main(int argc, char** argv)
{
  char bfr[1024];
  Transports::Leviathan::LIMU limu;

  SerialPort port(argv[1], 230400);

  while (1)
  {
    size_t rv = port.read(bfr, sizeof(bfr));
    for (size_t i = 0; i < rv; ++i)
    {
      limu.filter(0, bfr[i], NULL);
    }
  }

  return 0;
}
