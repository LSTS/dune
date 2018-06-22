#include <DUNE/DUNE.hpp>

// Local headers.
#include "../pmc/gliderAPI.hpp"

int
main(int argc, char** argv)
{
  // Command Bus with glider.
  DUNE::Hardware::SerialPort* m_uart = new DUNE::Hardware::SerialPort("/dev/ttyS5", 115200);

  DUNE::Time::Counter<double> timer_run(60.0);
  while (!timer_run.overflow())
  {
    uint8_t bfr[255];
    if (DUNE::IO::Poll::poll(*m_uart, 1.0))
    {
      size_t rv = m_uart->read(bfr, sizeof(bfr));
      for (size_t i = 0; i < rv; ++i)
        std::fprintf(stderr, "%02X\n", bfr[i]);
    }
  }

  DUNE::Memory::clear(m_uart);

  return 0;
}
