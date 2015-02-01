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
// Author: Tiago Oliveira                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowTarget
  {
    using DUNE_NAMESPACES;
    using namespace std;

    //! Loiter direction 1=left,-1=right.
    static const double c_loiter_dir = 1;
    //! Loiter vertical rate component.
    static const double c_loiter_gama = 0;
    //! Loiter normal x component.
    static const double c_loiter_v_x = 0;
    //! Loiter normal y component.
    static const double c_loiter_v_y = 0;
    //! Loiter normal z component.
    static const double c_loiter_v_z = 1;

    struct Arguments
    {
      //! Radius of the loiter.
      double radius;
      //! Heading gain.
      double g1;
      //! Lateral gain.
      double g2;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Task arguments.
      Arguments m_args;
      //! Output message for desired roll.
      IMC::DesiredRoll m_desired_roll;
      IMC::Target m_target;
      IMC::EstimatedState m_estate;
      IMC::EstimatedStreamVelocity m_svelocity;

      bool m_got_target;
      bool m_got_estate;
      bool m_got_svelocity;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_got_target(false),
        m_got_estate(false),
        m_got_svelocity(false)
      {
        param("Radius", m_args.radius)
        .units(Units::Meter)
        .defaultValue("200")
        .description("Radius of the path to be followed");

        param("Heading Gain", m_args.g1)
        .defaultValue("0.22")
        .description("Heading gain controlling heading convergence");

        param("Lateral Gain", m_args.g2)
        .defaultValue("0.00007")
        .description("Lateral gain controlling lateral convergence");

        bind<IMC::Target>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::EstimatedStreamVelocity>(this);
      }

      double
      minimumDistance(double r, double u, double x_0_c, double x_actual, double y_0_c, double y_actual)
      {
        double aux1 = (c_loiter_v_x * cos(c_loiter_dir * u) + c_loiter_v_y * sin(c_loiter_dir * u));
        double aux2 = (x_actual - (x_0_c + c_loiter_gama * c_loiter_dir * u * c_loiter_v_x + ((r * c_loiter_v_z) / sqrt(c_loiter_v_z * c_loiter_v_z + aux1 * aux1)) * cos(c_loiter_dir * u)));
        double aux3 = (c_loiter_v_x * cos(c_loiter_dir * u) + c_loiter_v_y * sin(c_loiter_dir * u));
        double aux4 = (y_actual - (y_0_c + c_loiter_gama * c_loiter_dir * u * c_loiter_v_y + ((r * c_loiter_v_z) / sqrt(c_loiter_v_z * c_loiter_v_z + aux3 * aux3)) * sin(c_loiter_dir * u)));
        return sqrt(aux2 * aux2 + aux4 * aux4);

      }

      double
      delta_x(double r, double u, double x_0_c, double x_actual)
      {
        return x_actual - (x_0_c + c_loiter_gama * c_loiter_dir * u * c_loiter_v_x
                           + ((r * c_loiter_v_z) / sqrt(pow(c_loiter_v_z,2) + pow((c_loiter_v_x * cos(c_loiter_dir * u) + c_loiter_v_y * sin(c_loiter_dir * u)),2))) * cos(c_loiter_dir * u));
      }

      double
      delta_y(double r, double u, double y_0_c, double y_actual)
      {
        return y_actual - (y_0_c + c_loiter_gama * c_loiter_dir * u * c_loiter_v_y + ((r * c_loiter_v_z) / sqrt(pow(c_loiter_v_z,2) + pow((c_loiter_v_x * cos(c_loiter_dir * u) + c_loiter_v_y * sin(c_loiter_dir * u)),2))) * sin(c_loiter_dir * u));
      }

      double
      x_path_derivative(double r, double u)
      {
        return c_loiter_dir * (c_loiter_gama * c_loiter_v_x *
                               pow((pow(c_loiter_v_x,2) - pow(c_loiter_v_y,2)) * pow((cos(c_loiter_dir * u)),2)
                                   + 2 * c_loiter_v_x * c_loiter_v_y * sin(c_loiter_dir * u) * cos(c_loiter_dir * u)
                                   + pow(c_loiter_v_y,2) + pow(c_loiter_v_z,2),(3 / 2.0))
                               - c_loiter_v_z * (c_loiter_v_x * c_loiter_v_y * cos(c_loiter_dir * u)
                                                 + (pow(c_loiter_v_y,2) + pow(c_loiter_v_z,2)) * sin(c_loiter_dir * u)) * r) /
        pow((pow(((c_loiter_v_x * c_loiter_v_x - c_loiter_v_y * c_loiter_v_y)
                  * cos(c_loiter_dir * u)),2) + 2 * c_loiter_v_x * c_loiter_v_y * sin(c_loiter_dir * u) * cos(c_loiter_dir * u)
             + c_loiter_v_y * c_loiter_v_y + c_loiter_v_z * c_loiter_v_z),(3 / 2.0));
      }

      double
      y_path_derivative(double r, double u)
      {
        return c_loiter_dir * (c_loiter_gama * c_loiter_v_y * pow(((c_loiter_v_x * c_loiter_v_x - c_loiter_v_y * c_loiter_v_y)
                                                                   * pow((cos(c_loiter_dir * u)),2) + 2 * c_loiter_v_x * c_loiter_v_y * sin(c_loiter_dir * u) * cos(c_loiter_dir * u)
                                                                   + c_loiter_v_y * c_loiter_v_y + c_loiter_v_z * c_loiter_v_z),(3 / 2.0))
                               + c_loiter_v_z * ((c_loiter_v_x * c_loiter_v_x + c_loiter_v_z * c_loiter_v_z)
                                                 * cos(c_loiter_dir * u) + c_loiter_v_x * c_loiter_v_y * sin(c_loiter_dir * u)) * r) /
        pow((pow(((c_loiter_v_x * c_loiter_v_x - c_loiter_v_y * c_loiter_v_y) * cos(c_loiter_dir * u)),2)
             + 2 * c_loiter_v_x * c_loiter_v_y * sin(c_loiter_dir * u) * cos(c_loiter_dir * u)
             + c_loiter_v_y * c_loiter_v_y + c_loiter_v_z * c_loiter_v_z),(3 / 2.0));
      }

      void
      consume(const IMC::Target*  msg)
      {
        m_target = *msg;
        m_got_target = true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
        m_got_estate = true;
      }

      void
      consume(const IMC::EstimatedStreamVelocity* msg)
      {

        m_svelocity = *msg;
        m_got_svelocity = true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if(m_got_estate && m_got_target && m_got_svelocity)

          {
            m_got_estate = false;
            m_got_target = false;
            m_got_svelocity = false;

            double x_actual = m_estate.y;
            double y_actual = m_estate.x;
            double psi_actual = atan2(m_estate.vy,m_estate.vx);
            double v = sqrt((m_estate.vx * m_estate.vx) + (m_estate.vy * m_estate.vy));
            double y_ref;
            double x_ref;

            double wx = -m_svelocity.y;
            double wy = -m_svelocity.x;

            WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height, m_target.lat, m_target.lon, m_target.z, &y_ref, &x_ref);

            double vx = m_target.sog * sin(m_target.cog);
            double vy = m_target.sog * cos(m_target.cog);
            double v_ref = m_target.sog;
            double psi_ref = m_target.cog;

            double w_ref = 0; //w_ref=x(13);
            double v_ref_dot = 0; //v_ref_dot=x(16);

            double x_0_c = x_ref;
            double y_0_c = y_ref;

            double r = m_args.radius;

            double i = 0.0;
            double minpath_actual = 10000.0;
            double u_dist_min = 0;

            while(i < 2 * c_pi)
            {
              double minpath = minimumDistance(r, i, x_0_c, x_actual, y_0_c, y_actual);

              if(minpath < minpath_actual)
              {
                u_dist_min = i;
                minpath_actual = minpath;
              }

              i += 0.01;

            }

            double delta_x_min = delta_x(r, u_dist_min, x_0_c, x_actual);
            double delta_y_min = delta_y(r, u_dist_min, y_0_c, y_actual);

            Matrix delta_xy_min;
            delta_xy_min(0,0) = delta_x_min;
            delta_xy_min(1,0) = delta_y_min;

            // Todo: Remove the following assignments once the variables are used.
            // this is just to avoid unused variables compilation warnings.
            (void)psi_actual;
            (void)v;
            (void)wx;
            (void)wy;
            (void)vx;
            (void)vy;
            (void)v_ref;
            (void)psi_ref;
            (void)w_ref;
            (void)v_ref_dot;
          }
        }
      }
    };
  }
}

DUNE_TASK
