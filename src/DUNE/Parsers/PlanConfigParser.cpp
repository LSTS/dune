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
// Author: Pedro Calado (added some maneuvers)                              *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Parsers/PlanConfigParser.hpp>
#include <DUNE/Math/Matrix.hpp>

namespace DUNE
{
  namespace Parsers
  {
    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::IdleManeuver& man)
    {
      parseDuration(cfg, id, man);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::PopUp& man)
    {
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseTimeout(cfg, id, man);
      parseDuration(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);
      cfg.get(id, "Radius (meters)", "15.0", man.radius);
      cfg.get(id, "Flags", "0x00", man.flags);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::Goto& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseTimeout(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::StationKeeping& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);
      parseDuration(cfg, id, man);
      cfg.get(id, "Radius (meters)", "15.0", man.radius);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::Loiter& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseTimeout(cfg, id, man);
      parseDuration(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);

      int8_t type;
      cfg.get(id, "Loiter Type", "0", type);

      switch (type)
      {
        case 1:
          man.type = IMC::Loiter::LT_RACETRACK; break;
        case 2:
          man.type = IMC::Loiter::LT_HOVER; break;
        case 3:
          man.type = IMC::Loiter::LT_EIGHT; break;
        case 0:
        default:
          man.type = IMC::Loiter::LT_CIRCULAR; break;
      }

      std::string ldir;
      cfg.get(id, "Loiter Direction", "Clock", ldir);

      if (ldir == "Clockwise")
        man.direction = IMC::Loiter::LD_CLOCKW;
      else
        man.direction = IMC::Loiter::LD_CCLOCKW;

      cfg.get(id, "Radius (meters)", "50", man.radius);
      parseAngle(cfg, id, "Bearing (degrees)", man.bearing, 0.0);
      cfg.get(id, "Length (meters)", "100", man.length);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::FollowPath& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseTimeout(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);

      int n_points;

      cfg.get(id, "Number of Points", "0", n_points);

      Math::Matrix W(n_points, 3);

      W.readFromConfig(cfg, id, "Points");

      IMC::MessageList<IMC::PathPoint>* list = &man.points;

      for (int i = 0; i < W.rows(); ++i)
      {
        IMC::PathPoint* p = new IMC::PathPoint;
        p->x = W(i, 0);
        p->y = W(i, 1);
        p->z = W(i, 2);

        list->push_back(*p);
      }
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::Rows& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);
      parseAngle(cfg, id, "Bearing (degrees)", man.bearing, 0.0);
      parseAngle(cfg, id, "Cross Angle (degrees)", man.cross_angle, 0.0);
      cfg.get(id, "Width (meters)", "150", man.width);
      cfg.get(id, "Length (meters)", "100", man.length);
      cfg.get(id, "Curve Offset (meters)", "15", man.coff);
      cfg.get(id, "Alternation (%)", "100", man.alternation);
      cfg.get(id, "Horizontal Step (meters)", "30", man.hstep);
      cfg.get(id, "Flags", "3", man.flags);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::Teleoperation& man)
    {
      cfg.get(id, "Custom Settings", "", man.custom);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string section, IMC::YoYo& man)
    {
      parseCoordinate(cfg, section, man);
      parseZ(cfg, section, man);
      parseZUnits(cfg, section, man);
      cfg.get(section, "Amplitude (meters)", "0.0", man.amplitude);
      parseAngle(cfg, section, "Pitch (degrees)", man.pitch, (fp32_t)15.0);
      parseSpeed(cfg, section, man);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string section, IMC::Elevator& man)
    {
      parseSpeed(cfg, section, man);
      parseCoordinate(cfg, section, man);
      cfg.get(section, "Flags", "0x00", man.flags);
      parseZUnits(cfg, section, man.start_z_units, "Start Z Units");
      parseZUnits(cfg, section, man.end_z_units, "End Z Units");
      cfg.get(section, "Start Z (meters)", "0.0", man.start_z);
      cfg.get(section, "End Z (meters)", "0.0", man.end_z);
      cfg.get(section, "Radius (meters)", "15.0", man.radius);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, std::string id, IMC::CompassCalibration& man)
    {
      // Get configurable parameters
      parseCoordinate(cfg, id, man);
      parseSpeed(cfg, id, man);
      parseTimeout(cfg, id, man);
      parseDuration(cfg, id, man);
      parseZ(cfg, id, man);
      parseZUnits(cfg, id, man);

      std::string ldir;
      cfg.get(id, "Loiter Direction", "Clock", ldir);

      if (ldir == "Clockwise")
        man.direction = IMC::Loiter::LD_CLOCKW;
      else
        man.direction = IMC::Loiter::LD_CCLOCKW;

      cfg.get(id, "Radius (meters)", "50", man.radius);
      cfg.get(id, "Amplitude (meters)", "1", man.amplitude);
      parseAngle(cfg, id, "Pitch (degrees)", man.pitch, (fp32_t)0.0);
    }

    void
    PlanConfigParser::parse(Parsers::Config& cfg, IMC::PlanSpecification& plan)
    {
      cfg.get("Plan Configuration", "Plan ID", "", plan.plan_id);

      // Parse plan actions
      std::vector<std::string> plan_start_actions;
      std::vector<std::string> plan_end_actions;

      cfg.get("Plan Configuration", "Start Actions", "", plan_start_actions);
      cfg.get("Plan Configuration", "End Actions", "", plan_end_actions);
      parseActions(cfg, plan_start_actions, plan.start_actions);
      parseActions(cfg, plan_end_actions, plan.end_actions);

      std::vector<std::string> ids;

      cfg.get("Plan Configuration", "Maneuvers", "", ids);

      for (unsigned i = 0; i < ids.size(); i++)
      {
        std::string id = ids[i];

        IMC::PlanManeuver pman;
        pman.maneuver_id = id;

        std::string type;
        cfg.get(id, "Type", "!!unknown!!", type);

        if (type == "PopUp")
        {
          IMC::PopUp popup;
          parse(cfg, id, popup);
          pman.data.set(popup);
        }
        else if (type == "Goto")
        {
          IMC::Goto goto_man;
          parse(cfg, id, goto_man);
          pman.data.set(goto_man);
        }
        else if (type == "StationKeeping")
        {
          IMC::StationKeeping sk_man;
          parse(cfg, id, sk_man);
          pman.data.set(sk_man);
        }
        else if (type == "Idle")
        {
          IMC::IdleManeuver idle;
          parse(cfg, id, idle);
          pman.data.set(idle);
        }
        else if (type == "Loiter")
        {
          IMC::Loiter loiter;
          parse(cfg, id, loiter);
          pman.data.set(loiter);
        }
        else if (type == "FollowPath")
        {
          IMC::FollowPath fp;
          parse(cfg, id, fp);
          pman.data.set(fp);

        }
        else if (type == "Rows")
        {
          IMC::Rows r;
          parse(cfg, id, r);
          pman.data.set(r);
          r.toText(std::cerr);
        }
        else if (type == "YoYo")
        {
          IMC::YoYo yoyo;
          parse(cfg, id, yoyo);
          pman.data.set(yoyo);
        }
        else if (type == "Elevator")
        {
          IMC::Elevator elev;
          parse(cfg, id, elev);
          pman.data.set(elev);
          elev.toText(std::cerr);
        }
        else if (type == "CompassCalibration")
        {
          IMC::CompassCalibration ccalib;
          parse(cfg, id, ccalib);
          pman.data.set(ccalib);
        }
        else
        {
          DUNE_ERR
          ("Plan Load", "Unknown or unsupported maneuver type: '" << type << '\'');
          return;
        }

        // Parse maneuver actions
        std::vector<std::string> man_start_actions;
        std::vector<std::string> man_end_actions;

        cfg.get(id, "Start Actions", "", man_start_actions);
        cfg.get(id, "End Actions", "", man_end_actions);
        parseActions(cfg, man_start_actions, pman.start_actions);
        parseActions(cfg, man_end_actions, pman.end_actions);

        plan.maneuvers.push_back(pman);

        if (plan.maneuvers.size() == 1)
        {
          plan.start_man_id = id;
        }
        else
        {
          // See maneuver sequence in graph terms
          IMC::PlanTransition ptransition;
          ptransition.source_man = ids[plan.maneuvers.size() - 2];
          ptransition.dest_man = id;
          plan.transitions.push_back(ptransition);
        }
      }
    }

    void
    PlanConfigParser::parseActions(Parsers::Config& cfg,
                                   const std::vector<std::string>& sections,
                                   IMC::MessageList<IMC::Message>& actions)
    {
      for (unsigned i = 0; i < sections.size(); ++i)
      {
        std::vector<std::string> options;
        options = cfg.options(sections[i]);

        IMC::SetEntityParameters sep;
        cfg.get(sections[i], "Name", "", sep.name);

        for (unsigned j = 0; j < options.size(); ++j)
        {
          if (options[j] == "Name")
            continue;

          IMC::EntityParameter ent_par;
          ent_par.name = options[j];
          cfg.get(sections[i], ent_par.name, "", ent_par.value);

          sep.params.push_back(ent_par);
        }

        actions.push_back(sep);
      }
    }
  }
}
