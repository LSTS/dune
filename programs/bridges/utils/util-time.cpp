#include <cstdlib>
#include <DUNE/DUNE.hpp>

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cout << "Usage: " << argv[0] << " <time since epoch>" << std::endl;
    return 0;
  }

  try
  {
    DUNE::Time::Clock::set(std::atoi(argv[1]));
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "exception: " << e.what() << std::endl;
  }

  if (std::system("hwclock -w") == -1)
    std::cerr << "failed to execute clock sync command" << std::endl;
  else
    std::cerr << "success" << std::endl;

  return 0;
}
