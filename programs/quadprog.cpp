//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: quadprog.cpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

using namespace DUNE::Math;

int
main(int argc, char** argv)
{
  --argc; ++argv;

  if (argc < 3)
  {
    std::cerr << "Usage: quadprog vars constraints file1 ... filen" << std::endl;
    return 1;
  }

  int n_var = atoi(argv[0]);
  int n_constr = atoi(argv[1]);
  argv += 2;
  double tot_time = 0;
  for (; *argv; ++argv)
  {
    std::ifstream ifs(*argv);

    // Base problem vars
    Matrix H(n_var, n_var);
    Matrix f(n_var, 1);

    // Inequality constraints
    Matrix A(n_constr, n_var);
    Matrix b(n_constr, 1);

    ifs >> H >> f >> A >> b;

    ifs.close();

    //std::cout << n_var << ' ' << n_constr << std::endl;
    //std::cout << "H : " <<  H << std::endl;
    //std::cout << "f : " <<  f << std::endl;
    //std::cout << "A : " <<  A << std::endl;
    //std::cout << "b : " <<  b << std::endl;

    try
    {
      double t = Clock::get();
      Matrix x;
      double v = QPSolver::solve(H, f, A, b, x);
      tot_time += Clock::get() - t;
      std::cout << "> " << *argv << " <" << std::endl;
      std::cout << "X: " << std::endl << x;
      std::cout << "f(X):" << v << std::endl;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "Error: " << e.what() << std::endl;
      return 1;
    }
  }
  std::cerr << "Time in QPSolver (s): " << tot_time << " - Per data set: " << ' ' << tot_time / (argc - 2) << std::endl;
  return 0;
}
