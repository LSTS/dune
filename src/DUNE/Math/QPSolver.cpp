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
// Author: Eduardo Marques (port)                                           *
//***************************************************************************
// --------------------------------------------------------------------------
// The QPSolver class is a port of the Quadprog++ library by Luca Di Gaspero
// http://sourceforge.net/projects/quadprog/
// Reference version: 1.2
// --------------------------------------------------------------------------
// PORTING NOTE (Eduardo Marques - Aug. 31, 2010)
//
// - When equality and inequality matrixes are accessed, the indexes swapped
// when compared to the original implementation, e.g.
//  A(i,j) rather than A(j,i)
// The original formulation was on transposed equality/inequality matrixes,
// i.e. A'x <= b and Aeq' x = beq rather than A x <= b and Aeq x = beq.
// The latter is more natural and saves the caller from  matrix
// transposition steps.
// --------------------------------------------------------------------------

#include "QPSolver.hpp"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>
#include <sstream>
#include <stdexcept>

//#define __QPDBG__
namespace DUNE
{
  namespace Math
  {
    // Template class just to encapsulate operator() in access to a std::vector
    // (for pedantic syntactic sugar in consistencty with DUNE::Math::Matrix
    //  and DUNE::Math::Matrix)
    template <typename T>
    class tvector: public std::vector<T>
    {
    public:
      tvector(size_t n):
        std::vector<T>(n)
      { }

      inline T&
      operator()(size_t index)
      {
        return std::vector<T>::operator[](index);
      }

      inline const T&
      operator()(size_t index) const
      {
        return std::vector<T>::operator[](index);
      }
    };

    // Utility functions
    static void
    compute_d(Matrix& d, const Matrix& J, const Matrix& np);

    static void
    update_z(Matrix& z, const Matrix& J, const Matrix& d, int iq);

    static void
    update_r(const Matrix& R, Matrix& r, const Matrix& d, int iq);

    static bool
    add_constraint(Matrix& R, Matrix& J, Matrix& d, int& iq, double& rnorm);

    static void
    delete_constraint(Matrix& R, Matrix& J, tvector<int>& A, Matrix& u, int n, int p, int& iq, int l);

    static void
    cholesky_decomposition(Matrix& A);

    static void
    cholesky_solve(const Matrix& L, Matrix& x, const Matrix& b);

    static void
    forward_elimination(const Matrix& L, Matrix& y, const Matrix& b);

    static void
    backward_elimination(const Matrix& U, Matrix& x, const Matrix& y);

    static double
    distance(double a, double b);

#ifdef __QPDBG__
    // Utility functions for printing vectors and matrices
    static void
    print_matrix(const char* name, const Matrix& A, int n = -1, int m = -1);

    template <typename T>
    static void
    print_vector(const char* name, const tvector<T>& v, int n = -1);

    static void
    print_vector(const char* name, const Matrix& v, int n = -1)
    {
      std::cout << name << ": " << v << std::endl;
    }

#endif

    double
    QPSolver::solve(const Matrix& H, const Matrix& f, const Matrix& A, const Matrix& b, Matrix& x)
    {
      // Zero-size matrix and vector
      Matrix Aeq;
      Matrix beq;
      return solve(H, f, Aeq, beq, A, b, x);
    }

    double
    QPSolver::solve(const Matrix& H, const Matrix& f, const Matrix& Aeq, const Matrix& beq, const Matrix& A, const Matrix& b, Matrix& x)
    {
      // Validate parameter dimensions
      // n: number of vars
      // p: number of equality constraints
      // m: number of inequality constraints
      int n = H.columns();
      int p = Aeq.rows();
      int m = A.rows();

      if (!H.isSquare())
        throw Error("'H' is not a square matrix");

      if (A.columns() != n)
        throw Error("'A' has an invalid number of rows");

      if (!b.isColumnVector(m))
        throw Error("'b' has an invalid size");

      if (p > 0)
      {
        if (Aeq.columns() != n)
          throw Error("'Aeq' has an invalid number of rows");
        if (!beq.isColumnVector(p))
          throw Error("'beq' has an invalid size");
      }

      // Resize output vector
      x.resize(n, 1);

      // Working variables
      int i, j, k, l, ip;
      Matrix R(n, n), J(n, n);
      Matrix s(m + p, 1), z(n, 1), r(m + p, 1), d(n, 1), np(n, 1), u(m + p, 1), x_old(n, 1), u_old(m + p, 1);
      double f_value, psi, c1, c2, sum, ss, R_norm;
      double inf = std::numeric_limits<double>::has_infinity ?
                   std::numeric_limits<double>::infinity() : 1.0E300;

      double t, t1, t2; /* t is the step lenght, which is the minimum of the partial step length t1
      * and the full step length t2 */

      tvector<int> Aset(m + p), Aset_old(m + p), iai(m + p);
      int iq;
      int iter = 0;
      tvector<uint8_t> iaexcl(m + p);

#ifdef __QPDBG__
      std::cout << std::endl << "Starting solve_quadprog" << std::endl;
      print_matrix("H", H);
      print_vector("f", f);
      print_matrix("Aeq", Aeq);
      print_vector("beq", beq);
      print_matrix("A", A);
      print_vector("b", b);
#endif

      /*
       * Preprocessing phase
       */

      /* compute the trace of the original matrix G */
      Matrix H0(H);
      c1 = 0.0;
      for (i = 0; i < n; i++)
        c1 += H0(i, i);

      /* decompose the matrix H0 in the form L^T L */
      cholesky_decomposition(H0);
#ifdef __QPDBG__
      print_matrix("H0", H0);
#endif
      /* initialize the matrix R */
      d.fill(0);
      R.fill(0);
      R_norm = 1.0; /* this variable will hold the norm of the matrix R */
      /* compute the inverse of the factorized matrix G^-1, this is the initial value for H */
      c2 = 0.0;
      for (i = 0; i < n; i++)
      {
        d(i) = 1.0;
        forward_elimination(H0, z, d);
        for (j = 0; j < n; j++)
          J(i, j) = z(j);
        c2 += z(i);
        d(i) = 0.0;
      }
#ifdef __QPDBG__
      print_matrix("J", J);
#endif

      /* c1 * c2 is an estimate for cond(H0) */

      /*
        * Find the unconstrained minimizer of the quadratic form 0.5 * x G x + f x
       * this is a feasible point in the dual space
       * x = G^-1 * f
       */
      cholesky_solve(H0, x, f);
      for (i = 0; i < n; i++)
        x(i) = -x(i);
      /* and compute the current solution value */
      f_value = 0.5 * Matrix::dot(f, x);
#ifdef __QPDBG__
      std::cout << "Unconstrained solution: " << f_value << std::endl;
      print_vector("x", x);
#endif

      /* Add equality constraints to the working set A */
      iq = 0;
      for (i = 0; i < p; i++)
      {
        for (j = 0; j < n; j++)
          np(j) = Aeq(i, j);
        compute_d(d, J, np);
        update_z(z, J, d, iq);
        update_r(R, r, d, iq);
    #ifdef __QPDBG__
        print_matrix("R", R, n, iq);
        print_vector("z", z);
        print_vector("r", r, iq);
        print_vector("d", d);
    #endif

        /* compute full step length t2: i.e., the minimum step in primal space s.t. the contraint
          becomes feasible */
        t2 = 0.0;
        if (std::fabs(Matrix::dot(z, z)) > std::numeric_limits<double>::epsilon()) // i.e. z != 0
          t2 = (-Matrix::dot(np, x) - beq(i)) / Matrix::dot(z, np);

        /* set x = x + t2 * z */
        for (k = 0; k < n; k++)
          x(k) += t2 * z(k);

        /* set u = u+ */
        u(iq) = t2;
        for (k = 0; k < iq; k++)
          u(k) -= t2 * r(k);

        /* compute the new solution value */
        f_value += 0.5 * (t2 * t2) * Matrix::dot(z, np);
        Aset(i) = -i - 1;

        if (!add_constraint(R, J, d, iq, R_norm))
          // Equality constraints are linearly dependent
          throw Error("Constraints are linearly dependent");
      }

      /* set iai = K \ A */
      for (i = 0; i < m; i++)
        iai(i) = i;

l1:  iter++;
    #ifdef __QPDBG__
      print_vector("x", x);
    #endif
      /* step 1: choose a violated constraint */
      for (i = p; i < iq; i++)
      {
        ip = Aset(i);
        iai(ip) = -1;
      }

      /* compute s(x) = A^T * x + b for all elements of K \ A */
      ss = 0.0;
      psi = 0.0; /* this value will contain the sum of all infeasibilities */
      ip = 0; /* ip will be the index of the chosen violated constraint */
      for (i = 0; i < m; i++)
      {
        iaexcl(i) = true;
        sum = 0.0;
        for (j = 0; j < n; j++)
          sum += A(i, j) * x(j);
        sum += b(i);
        s(i) = sum;
        psi += std::min(0.0, sum);
      }
    #ifdef __QPDBG__
      print_vector("s", s, m);
    #endif

      if (std::fabs(psi) <= m * std::numeric_limits<double>::epsilon() * c1 * c2 * 100.0)
      {
        /* numerically there are not infeasibilities anymore */
        return f_value;
      }

      /* save old values for u and A */
      for (i = 0; i < iq; i++)
      {
        u_old(i) = u(i);
        Aset_old(i) = Aset(i);
      }
      /* and for x */
      x_old = x;

l2:     /* Step 2: check for feasibility and determine a new S-pair */
      for (i = 0; i < m; i++)
      {
        if (s(i) < ss && iai(i) != -1 && iaexcl(i))
        {
          ss = s(i);
          ip = i;
        }
      }
      if (ss >= 0.0)
      {
        return f_value;
      }

      /* set np = n(ip) */
      for (i = 0; i < n; i++)
        np(i) = A(ip, i);
      /* set u = (u 0)^T */
      u(iq) = 0.0;
      /* add ip to the active set A */
      Aset(iq) = ip;

    #ifdef __QPDBG__
      std::cout << "Trying with constraint " << ip << std::endl;
      print_vector("np", np);
    #endif

l2a:    /* Step 2a: determine step direction */
        /* compute z = H np: the step direction in the primal space (through J, see the paper) */
      compute_d(d, J, np);
      update_z(z, J, d, iq);
      /* compute N* np (if q > 0): the negative of the step direction in the dual space */
      update_r(R, r, d, iq);
    #ifdef __QPDBG__
      std::cout << "Step direction z" << std::endl;
      print_vector("z", z);
      print_vector("d", d);
    #endif

      /* Step 2b: compute step length */
      l = 0;
      /* Compute t1: partial step length (maximum step in dual space without violating dual feasibility */
      t1 = inf; /* +inf */
      /* find the index l s.t. it reaches the minimum of u+(x) / r */
      for (k = p; k < iq; k++)
      {
        if (r(k) > 0.0)
        {
          if (u(k) / r(k) < t1)
          {
            t1 = u(k) / r(k);
            l = Aset(k);
          }
        }
      }
      /* Compute t2: full step length (minimum step in primal space such that the constraint ip becomes feasible */
      if (std::fabs(Matrix::dot(z, z)) > std::numeric_limits<double>::epsilon())  // i.e. z != 0
        t2 = -s(ip) / Matrix::dot(z, np);
      else
        t2 = inf;  /* +inf */

      /* the step is chosen as the minimum of t1 and t2 */
      t = std::min(t1, t2);
    #ifdef __QPDBG__
      std::cout << "Step sizes: " << t << " (t1 = " << t1 << ", t2 = " << t2 << ") ";
    #endif

      /* Step 2c: determine new S-pair and take step: */

      /* case (i): no step in primal or dual space */
      if (t >= inf)
      {
        /* QPP is infeasible */
        // FIXME: unbounded to raise
        throw Error("Problem is unfeasible");
      }

      /* case (ii): step in dual space */
      if (t2 >= inf)
      {
        /* set u = u +  t * (-r 1) and drop constraint l from the active set A */
        for (k = 0; k < iq; k++)
          u(k) -= t * r(k);
        u(iq) += t;
        iai(l) = l;
        delete_constraint(R, J, Aset, u, n, p, iq, l);
    #ifdef __QPDBG__
        std::cout << " in dual space: "
                  << f_value << std::endl;
        print_vector("x", x);
        print_vector("z", z);
        print_vector("Aset", Aset, iq + 1);
    #endif
        goto l2a;
      }

      /* case (iii): step in primal and dual space */

      /* set x = x + t * z */
      for (k = 0; k < n; k++)
        x(k) += t * z(k);
      /* update the solution value */
      f_value += t * Matrix::dot(z, np) * (0.5 * t + u(iq));
      /* u = u + t * (-r 1) */
      for (k = 0; k < iq; k++)
        u(k) -= t * r(k);
      u(iq) += t;
    #ifdef __QPDBG__
      std::cout << " in both spaces: "
                << f_value << std::endl;
      print_vector("x", x);
      print_vector("u", u, iq + 1);
      print_vector("r", r, iq + 1);
      print_vector("Aset", Aset, iq + 1);
    #endif

      if (std::fabs(t - t2) < std::numeric_limits<double>::epsilon())
      {
    #ifdef __QPDBG__
        std::cout << "Full step has taken " << t << std::endl;
        print_vector("x", x);
    #endif
        /* full step has taken */
        /* add constraint ip to the active set*/
        if (!add_constraint(R, J, d, iq, R_norm))
        {
          std::cout << "not iaexcl " << ip << std::endl;
          iaexcl(ip) = false;
          delete_constraint(R, J, Aset, u, n, p, iq, ip);
    #ifdef __QPDBG__
          print_matrix("R", R);
          print_vector("Aset", Aset, iq);
          print_vector("iai", iai);
    #endif
          for (i = 0; i < m; i++)
            iai(i) = i;
          for (i = p; i < iq; i++)
          {
            Aset(i) = Aset_old(i);
            u(i) = u_old(i);
            iai(Aset(i)) = -1;
          }
          x = x_old;
          goto l2; /* go to step 2 */
        }
        else
          iai(ip) = -1;
    #ifdef __QPDBG__
        print_matrix("R", R);
        print_vector("Aset", Aset, iq);
        print_vector("iai", iai);
    #endif
        goto l1;
      }

      /* a patial step has taken */
    #ifdef __QPDBG__
      std::cout << "Partial step has taken " << t << std::endl;
      print_vector("x", x);
    #endif
      /* drop constraint l */
      iai(l) = l;
      delete_constraint(R, J, Aset, u, n, p, iq, l);
    #ifdef __QPDBG__
      print_matrix("R", R);
      print_vector("Aset", Aset, iq);
    #endif

      /* update s(ip) = A * x + b */
      sum = 0.0;
      for (k = 0; k < n; k++)
        sum += A(ip, k) * x(k);
      s(ip) = sum + b(ip);

    #ifdef __QPDBG__
      print_vector("s", s, m);
    #endif
      goto l2a;
    }

    static void
    compute_d(Matrix& d, const Matrix& J, const Matrix& np)
    {
      int i, j, n = d.rows();
      double sum;

      /* compute d = H^T * np */
      for (i = 0; i < n; i++)
      {
        sum = 0.0;
        for (j = 0; j < n; j++)
          sum += J(j, i) * np(j);
        d(i) = sum;
      }
    }

    static void
    update_z(Matrix& z, const Matrix& J, const Matrix& d, int iq)
    {
      int i, j, n = z.rows();

      /* setting of z = H * d */
      for (i = 0; i < n; i++)
      {
        z(i) = 0.0;
        for (j = iq; j < n; j++)
          z(i) += J(i, j) * d(j);
      }
    }

    static void
    update_r(const Matrix& R, Matrix& r, const Matrix& d, int iq)
    {
      int i, j; /*, n = d.size();*/
      double sum;

      /* setting of r = R^-1 d */
      for (i = iq - 1; i >= 0; i--)
      {
        sum = 0.0;
        for (j = i + 1; j < iq; j++)
          sum += R(i, j) * r(j);
        r(i) = (d(i) - sum) / R(i, i);
      }
    }

    static bool
    add_constraint(Matrix& R, Matrix& J, Matrix& d, int& iq, double& R_norm)
    {
      int n = d.rows();
    #ifdef __QPDBG__
      std::cout << "Add constraint " << iq << '/';
    #endif
      int i, j, k;
      double cc, ss, h, t1, t2, xny;

      /* we have to find the Givens rotation which will reduce the element
        d(j) to zero.
        if it is already zero we don't have to do anything, except of
        decreasing j */
      for (j = n - 1; j >= iq + 1; j--)
      {
        /* The Givens rotation is done with the matrix (cc cs, cs -cc).
        If cc is one, then element (j) of d is zero compared with element
        (j - 1). Hence we don't have to do anything.
        If cc is zero, then we just have to switch column (j) and column (j - 1)
        of J. Since we only switch columns in J, we have to be careful how we
        update d depending on the sign of gs.
        Otherwise we have to apply the Givens rotation to these columns.
        The i - 1 element of d has to be updated to h. */
        cc = d(j - 1);
        ss = d(j);
        h = distance(cc, ss);
        if (std::fabs(h) < std::numeric_limits<double>::epsilon()) // h == 0
          continue;
        d(j) = 0.0;
        ss = ss / h;
        cc = cc / h;
        if (cc < 0.0)
        {
          cc = -cc;
          ss = -ss;
          d(j - 1) = -h;
        }
        else
          d(j - 1) = h;
        xny = ss / (1.0 + cc);
        for (k = 0; k < n; k++)
        {
          t1 = J(k, j - 1);
          t2 = J(k, j);
          J(k, j - 1) = t1 * cc + t2 * ss;
          J(k, j) = xny * (t1 + J(k, j - 1)) - t2;
        }
      }
      /* update the number of constraints added*/
      iq++;
      /* To update R we have to put the iq components of the d vector
        into column iq - 1 of R
        */
      for (i = 0; i < iq; i++)
        R(i, iq - 1) = d(i);
    #ifdef __QPDBG__
      std::cout << iq << std::endl;
      print_matrix("R", R, iq, iq);
      print_matrix("J", J);
      print_vector("d", d, iq);
    #endif

      if (std::fabs(d(iq - 1)) <= std::numeric_limits<double>::epsilon() * R_norm)
      {
        // problem degenerate
        return false;
      }
      R_norm = std::max<double>(R_norm, std::fabs(d(iq - 1)));
      return true;
    }

    static void
    delete_constraint(Matrix& R, Matrix& J, tvector<int>& Aset, Matrix& u, int n, int p, int& iq, int l)
    {
    #ifdef __QPDBG__
      std::cout << "Delete constraint " << l << ' ' << iq;
    #endif
      int i, j, k, qq = -1; // just to prevent warnings from smart compilers
      double cc, ss, h, xny, t1, t2;

      /* Find the index qq for active constraint l to be removed */
      for (i = p; i < iq; i++)
        if (Aset(i) == l)
        {
          qq = i;
          break;
        }

      /* remove the constraint from the active set and the duals */
      for (i = qq; i < iq - 1; i++)
      {
        Aset(i) = Aset(i + 1);
        u(i) = u(i + 1);
        for (j = 0; j < n; j++)
          R(j, i) = R(j, i + 1);
      }

      Aset(iq - 1) = Aset(iq);
      u(iq - 1) = u(iq);
      Aset(iq) = 0;
      u(iq) = 0.0;
      for (j = 0; j < iq; j++)
        R(j, iq - 1) = 0.0;
      /* constraint has been fully removed */
      iq--;
    #ifdef __QPDBG__
      std::cout << '/' << iq << std::endl;
    #endif

      if (iq == 0)
        return;

      for (j = qq; j < iq; j++)
      {
        cc = R(j, j);
        ss = R(j + 1, j);
        h = distance(cc, ss);
        if (std::fabs(h) < std::numeric_limits<double>::epsilon()) // h == 0
          continue;
        cc = cc / h;
        ss = ss / h;
        R(j + 1, j) = 0.0;
        if (cc < 0.0)
        {
          R(j, j) = -h;
          cc = -cc;
          ss = -ss;
        }
        else
          R(j, j) = h;

        xny = ss / (1.0 + cc);
        for (k = j + 1; k < iq; k++)
        {
          t1 = R(j, k);
          t2 = R(j + 1, k);
          R(j, k) = t1 * cc + t2 * ss;
          R(j + 1, k) = xny * (t1 + R(j, k)) - t2;
        }
        for (k = 0; k < n; k++)
        {
          t1 = J(k, j);
          t2 = J(k, j + 1);
          J(k, j) = t1 * cc + t2 * ss;
          J(k, j + 1) = xny * (J(k, j) + t1) - t2;
        }
      }
    }

    double
    distance(double a, double b)
    {
      double a1, b1, t;
      a1 = std::fabs(a);
      b1 = std::fabs(b);
      if (a1 > b1)
      {
        t = (b1 / a1);
        return a1 * ::std::sqrt(1.0 + t * t);
      }
      else if (b1 > a1)
      {
        t = (a1 / b1);
        return b1 * ::std::sqrt(1.0 + t * t);
      }
      return a1 * ::std::sqrt(2.0);
    }

    static void
    cholesky_decomposition(Matrix& A)
    {
      int i, j, k, n = A.rows();
      double sum;

      for (i = 0; i < n; i++)
      {
        for (j = i; j < n; j++)
        {
          sum = A(j, i);
          for (k = i - 1; k >= 0; k--)
            sum -= A(k, i) * A(k, j);
          if (i == j)
          {
            if (sum <= 0.0)
              throw QPSolver::Error("error in Cholesky decomposition");
            A(i, i) = ::std::sqrt(sum);
          }
          else
          {
            A(i, j) = sum / A(i, i);
          }
        }
        for (k = i + 1; k < n; k++)
          A(k, i) = A(i, k);
      }
    }

    static void
    cholesky_solve(const Matrix& L, Matrix& x, const Matrix& b)
    {
      Matrix y(L.rows(), 1);

      /* Solve L * y = b */
      forward_elimination(L, y, b);
      /* Solve L^T * x = y */
      backward_elimination(L, x, y);
    }

    static void
    forward_elimination(const Matrix& L, Matrix& y, const Matrix& b)
    {
      int i, j, n = L.rows();

      y(0) = b(0) / L(0, 0);
      for (i = 1; i < n; i++)
      {
        y(i) = b(i);
        for (j = 0; j < i; j++)
          y(i) -= L(i, j) * y(j);
        y(i) = y(i) / L(i, i);
      }
    }

    static void
    backward_elimination(const Matrix& U, Matrix& x, const Matrix& y)
    {
      int i, j, n = U.rows();

      x(n - 1) = y(n - 1) / U(n - 1, n - 1);
      for (i = n - 2; i >= 0; i--)
      {
        x(i) = y(i);
        for (j = i + 1; j < n; j++)
          x(i) -= U(i, j) * x(j);
        x(i) = x(i) / U(i, i);
      }
    }

    #ifdef __QPDBG__
    static void
    print_matrix(const char* name, const Matrix& A, int n, int m)
    {
      std::ostringstream s;
      std::string t;
      if (n == -1)
        n = A.rows();
      if (m == -1)
        m = A.columns();

      s << name << ": " << std::endl;
      for (int i = 0; i < n; i++)
      {
        s << " ";
        for (int j = 0; j < m; j++)
          s << A(i, j) << ", ";
        s << std::endl;
      }
      t = s.str();
      t = t.substr(0, t.size() - 3); // To remove the trailing space, comma and newline

      std::cout << t << std::endl;
    }

    template <typename T>
    static void
    print_vector(const char* name, const tvector<T>& v, int n)
    {
      std::ostringstream s;
      std::string t;
      if (n == -1)
        n = v.size();

      s << name << ": " << std::endl << " ";
      for (int i = 0; i < n; i++)
      {
        s << v(i) << ", ";
      }
      t = s.str();
      t = t.substr(0, t.size() - 2); // To remove the trailing space and comma

      std::cout << t << std::endl;
    }

#endif
  }
}
