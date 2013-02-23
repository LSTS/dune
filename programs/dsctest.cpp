//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: dsctest.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Control/DSC.hpp>

using DUNE_NAMESPACES;

Matrix
MatrixJ(float roll, float pitch, float yaw)
{
  double cx_elements[9] =
  {
    1, 0,               0,
    0, std::cos(roll),  std::sin(roll),
    0, -std::sin(roll), std::cos(roll)
  };

  double cy_elements[9] =
  {
    std::cos(pitch), 0, -std::sin(pitch),
    0,               1, 0,
    std::sin(pitch), 0, std::cos(pitch)
  };

  double cz_elements[9] =
  {
    std::cos(yaw),  std::sin(yaw), 0,
    -std::sin(yaw), std::cos(yaw), 0,
    0,              0,             1
  };

  Matrix J1 = transpose(Matrix(cz_elements, 3, 3)) * transpose(Matrix(cy_elements, 3, 3)) * transpose(Matrix(cx_elements, 3, 3));

  double j2_elements[9] =
  {
    1, std::sin(roll) * std::tan(pitch), std::cos(roll) * std::tan(pitch),
    0, std::cos(roll)                  , -std::sin(roll),
    0, std::sin(roll) / std::cos(pitch), std::cos(roll) / std::cos(pitch)
  };

  J1.vertCat(Matrix(3, 3, 0.0));
  Matrix cols456 = Matrix(3, 3, 0.0);
  cols456.vertCat(Matrix(j2_elements, 3, 3));
  J1.horzCat(cols456);

  return J1;
}

int
main(int argc, char** argv)
{
  // DEFINE A MODEL FOR THE AUV

  double cog[3] = {0.0, 0.0, 0.01};
  double addedmass[6] = {-1, -16, -16, 0, 0, 0};
  double inertia[3] = {0.04, 2.1, 2.1};
  double lindrag[10] = {-2.4, -23.0, -23.0, -0.3, -9.7, -9.7, 11.5, -11.5, 3.1, -3.1};
  double quadrag[10] = {-2.4, -80.0, -80.0, -0.0006, -9.1, -9.1, 0.3, -0.3, 1.5, -1.5};
  double liftcoef[8] = {-20.6, -20.6, -1.53, -1.53, 3.84, -3.84, -6, 6};
  // double liftcoef[8] = {0.0, 0.0, -1.53, -1.53, 0.0, 0.0, -6, 6};
  double fincoef[5] = {9.6, -9.6, 1.82, -3.84, -3.84};

  DUNE::Control::ModelParameters prmtrs;
  prmtrs.mass = 18.0;
  prmtrs.density = 1020;
  prmtrs.volume = 0.0177;
  prmtrs.motor_friction = 0.06;
  prmtrs.max_thrust = 1.0;
  prmtrs.cog = Matrix(cog, 3, 1);
  prmtrs.addedmass = Matrix(addedmass, 6, 1);
  prmtrs.inertia = Matrix(inertia, 3, 1);
  prmtrs.linear_drag = Matrix(lindrag, 10, 1);
  prmtrs.quadratic_drag = Matrix(quadrag, 10, 1);
  prmtrs.lift = Matrix(liftcoef, 8, 1);
  prmtrs.fin_lift = Matrix(fincoef, 5, 1);

  AUVModel* a = new AUVModel(prmtrs);

  // Initial conditions
  double elements_nu[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  double elements_eta[6] = {10.0, 10.0, 0.0, 0.0, 0.0, 1.5};
  Matrix nu(elements_nu, 6, 1);
  Matrix eta(elements_eta, 6, 1);

  // DEFINE A DYN SM CONTROLLER
  Matrix Lambda = Matrix(3, 3, 0.0);
  Lambda(0, 0) = 0.5;
  // Lambda(1,1) = 20;
  // Lambda(2,2) = 4;
  Lambda(1, 1) = 0.5;
  Lambda(2, 2) = 0.5;

  Matrix Kd = Matrix(3, 3, 0.0);
  Kd(0, 0) = 0.1;
  Kd(1, 1) = 1;
  Kd(2, 2) = 1;

  // Matrix Ksigma = Matrix(3)*0.5;
  Matrix Ksigma = Matrix(3) * 0.0;
  Ksigma(0, 0) = 0.0;
  float sigma = 0.2;

  Matrix T = Matrix(3) * 0.4;

  DSC* d = new DSC(Lambda, Kd, Ksigma, sigma, T, *a);
  d->setOutputLimits(-45 * Math::c_pi / 180, 45 * Math::c_pi / 180);

  // open file to save data in
  std::ofstream log("Data_log.txt");

  // file format: timestamp x y z roll pitch yaw
  log << "timestamp" << " | "
      << "x" << " | "
      << "y" << " | "
      << "z" << " | "
      << "phi" << " | "
      << "theta" << " | "
      << "psi" << " | "
      << "u" << " | "
      << "v" << " | "
      << "w" << " | "
      << "p" << " | "
      << "q" << " | "
      << "r" << " | "
      << "X" << " | "
      << "Y" << " | "
      << "Z" << " | "
      << "K" << " | "
      << "M" << " | "
      << "N" << " | "
      << "s1_phi" << " | "
      << "s1_theta" << " | "
      << "s1_psi" << " | "
      << "s2_p" << " | "
      << "s2_q" << " | "
      << "s2_r" << " | "
      << std::endl;

  double timestamp = 0.0;
  double timestep = 0.1;
  unsigned maxsteps = 2000;

  // initial tau if necessary
  double elements_tau[6] = {5.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  Matrix tau(elements_tau, 6, 1);

  // body fixed acceleration
  Matrix nu_dot(6, 1, 0.0);

  // Begin the simulation
  for (unsigned i = 0; i < maxsteps; i++)
  {
    if (0)
    {
      std::cout << "------------" << std::endl;
      std::cout << "Step " << i << std::endl;
      std::cout << "------------" << std::endl;
    }

    timestamp += timestep;

    // nu_dot = a->step_inv(tau, nu, eta);
    nu_dot = a->stepInv(tau.get(0, 2, 0, 0), tau.get(3, 5, 0, 0), nu, eta);

    Matrix control = d->step(DSC::StepParam(eta, nu, nu_dot, 0.0, 0.0, 0.0, timestep));

    tau.set(3, 5, 0, 0, control);

    Matrix s1 = d->getControlSurfaces();

    nu += nu_dot * timestep;

    eta += MatrixJ(eta(3), eta(4), eta(5)) * nu * timestep;
    eta(5) = Angles::normalizeRadian(eta(5));

    log << timestamp << ", "
        << eta(0) << ", "
        << eta(1) << ", "
        << eta(2) << ", "
        << eta(3) << ", "
        << eta(4) << ", "
        << eta(5) << ", "
        << nu(0) << ", "
        << nu(1) << ", "
        << nu(2) << ", "
        << nu(3) << ", "
        << nu(4) << ", "
        << nu(5) << ", "
        << tau(0) << ", "
        << tau(1) << ", "
        << tau(2) << ", "
        << tau(3) << ", "
        << tau(4) << ", "
        << tau(5) << ", "
        << s1(0) << ", "
        << s1(1) << ", "
        << s1(2) << ", "
        << s1(3) << ", "
        << s1(4) << ", "
        << s1(5) << ", "
        << std::endl;
  }

  log.close();

  if (d)
    delete d;

  if (a)
    delete a;

  return 0;
}
