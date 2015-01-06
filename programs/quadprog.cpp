//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
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
