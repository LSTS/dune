//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_PARSERS_PLANCONFIGPARSER_HPP_INCLUDED_
#define DUNE_PARSERS_PLANCONFIGPARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PlanConfigParser;

    //! Utility class to parse simple plans from DUNE's .ini format.
    class PlanConfigParser
    {
    public:
#ifdef DUNE_IMC_GOTO
      //! Parse a Goto maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Goto& maneuver);
#endif
#ifdef DUNE_IMC_STATIONKEEPING
      //! Parse a StationKeeping maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::StationKeeping& maneuver);
#endif
#ifdef DUNE_IMC_LOITER
      //! Parse a Loiter maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Loiter& maneuver);
#endif
#ifdef DUNE_IMC_POPUP
      //! Parse a Popup maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::PopUp& maneuver);
#endif
#ifdef DUNE_IMC_TELEOPERATION
      //! Parse a Teleoperation maneuver specification from plan
      //! definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Teleoperation& maneuver);
#endif
#ifdef DUNE_IMC_IDLEMANEUVER
      //! Parse an Idle Maneuver specification.
      //! @param parser configuration parser handle.
      //! @param section  section that contains the maneuver specification.
      //! @param maneuver output maneuver.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::IdleManeuver& maneuver);
#endif
#ifdef DUNE_IMC_FOLLOWPATH
      //! Parse a FollowPath specification.
      //! @param parser configuration parser handle.
      //! @param section  section that contains the maneuver specification.
      //! @param maneuver output maneuver.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::FollowPath& maneuver);
#endif

#ifdef DUNE_IMC_ROWS
      //! Parse a Rows maneuver specification.
      //! @param parser configuration parser handle.
      //! @param section  section that contains the maneuver specification.
      //! @param maneuver output maneuver.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Rows& maneuver);
#endif

#ifdef DUNE_IMC_LBLBEACONSETUP
      //! Parse a LBL Beacon setup entry.
      //! @param parser configuration parser handle.
      //! @param section section that contains the beacon setup.
      //! @param lbl_bs  output LBL beacon setup.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::LblBeaconSetup& lbl_bs);
#endif

#ifdef DUNE_IMC_YOYO
      //! Parse a Yoyo maneuver specification.
      //! @param parser configuration parser handle
      //! @param section section that contais the maneuver specification
      //! @param maneuver output maneuver
      static void
      parse(Parsers::Config& parser, std::string section, IMC::YoYo& maneuver);
#endif

#ifdef DUNE_IMC_ELEVATOR
      //! Parse an Elevator maneuver specification.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Elevator& maneuver);
#endif

#ifdef DUNE_IMC_DUBIN
      //! Parse a Dubin maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::Dubin& maneuver);
#endif

#ifdef DUNE_IMC_COMPASSCALIBRATION
      //! Parse a CompassCalibration maneuver specification from plan definition file.
      //! @param parser configuration parser handle.
      //! @param section section that contains the maneuver specification.
      //! @param maneuver output maneuver specification.
      static void
      parse(Parsers::Config& parser, std::string section, IMC::CompassCalibration& maneuver);
#endif

      //! Parse plan parameters (utility text format).
      //! @param parser configuration parser handle.
      //! @param plan plan parameters.
      static void
      parse(Parsers::Config& parser, IMC::PlanSpecification& plan);

      //! Parse speed and speed units for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section section configuration section.
      //! @param man destination maneuver.
      template <typename T>
      static void
      parseSpeed(Parsers::Config& parser, std::string section, T& man)
      {
        std::string u;
        parser.get(section, "Speed", "100.0", man.speed);
        parser.get(section, "Speed Units", "%", u);
        if (u == "m/s")
          man.speed_units = IMC::SUNITS_METERS_PS;
        else if (u == "rpm")
          man.speed_units = IMC::SUNITS_RPM;
        else
          man.speed_units = IMC::SUNITS_PERCENTAGE;
      }

      //! Parse latitute/longitude specification for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param msg destination message.
      template <typename T>
      inline static void
      parseCoordinate(Parsers::Config& parser, std::string section, T& msg)
      {
        std::string ref;

        parser.get(section, "Reference", section, ref);
        parseAngle(parser, ref, "Latitude (degrees)", msg.lat, 0.0);
        parseAngle(parser, ref, "Longitude (degrees)", msg.lon, 0.0);

        // See if there are N-E offsets
        double n, e;

        parser.get(section, "Offset North (meters)", "0.0", n);
        parser.get(section, "Offset East (meters)", "0.0", e);

        Coordinates::WGS84::displace(n, e, &msg.lat, &msg.lon);
      }

      //! Parse angle.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param key configuration key.
      //! @param value value reference.
      //! @param dfl default value.
      template <typename T>
      inline static void
      parseAngle(Parsers::Config& parser, std::string section, std::string key, T& value, T dfl)
      {
        parser.get(section, key, DUNE::uncastLexical(dfl), value);
        value = Math::Angles::radians(value);
      }

      //! Parse timeout specification for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param man destination maneuver.
      template <typename T>
      inline static void
      parseTimeout(Parsers::Config& parser, std::string section, T& man)
      {
        parser.get(section, "Timeout (seconds)", "0", man.timeout);
      }

      //! Parse duration specification for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param man destination maneuver.
      template <typename T>
      inline static void
      parseDuration(Parsers::Config& parser, std::string section, T& man)
      {
        parser.get(section, "Duration (seconds)", "0", man.duration);
      }

      //! Parse depth specification for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param man destination maneuver.
      template <typename T>
      inline static void
      parseZ(Parsers::Config& parser, std::string section, T& man)
      {
        parser.get(section, "Z (meters)", "1.0", man.z);
      }

      //! Parse z units specification for a maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param[in,out] zunits destination variable.
      //! @param label label.
      inline static void
      parseZUnits(Parsers::Config& parser, std::string section, uint8_t& zunits, std::string label = "Z Units")
      {
        std::string z_str;
        parser.get(section, label, "DEPTH", z_str);

        if (std::strcmp(z_str.c_str(), "NONE") == 0)
          zunits = IMC::Z_NONE;
        else if (std::strcmp(z_str.c_str(), "DEPTH") == 0)
          zunits = IMC::Z_DEPTH;
        else if (std::strcmp(z_str.c_str(), "ALTITUDE") == 0)
          zunits = IMC::Z_ALTITUDE;
        else if (std::strcmp(z_str.c_str(), "HEIGHT") == 0)
          zunits = IMC::Z_HEIGHT;
        else
          throw std::runtime_error(Utils::String::str(DTR("invalid z unit: %s"), z_str.c_str()));
      }

      //! Parse z units specification for maneuver.
      //! @param parser configuration parser handle.
      //! @param section configuration section.
      //! @param man destination maneuver.
      //! @param label label.
      template <typename Type>
      inline static void
      parseZUnits(Parsers::Config& parser, std::string section, Type& man, std::string label = "Z Units")
      {
        parseZUnits(parser, section, man.z_units, label);
      }
    };
  }
}

#endif
