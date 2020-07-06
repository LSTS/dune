//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#include <DUNE/DUNE.hpp>

using namespace DUNE;
using namespace DUNE::Network;
using namespace DUNE::Time;

static void
sendMsg(Address const& dest, int port, IMC::Message& msg, UDPSocket& socket)
{
  Utils::ByteBuffer bb;
  msg.setTimeStamp();
  IMC::Packet::serialize(&msg, bb);

  socket.write((const std::uint8_t*) bb.getBuffer(), msg.getSerializationSize(),
               dest, port);
  msg.toText(std::cout);
}

namespace
{
  struct Arguments
  {
    std::string config_path;
    Address host;
    std::uint16_t port;
    bool gps_fix = false;
    bool lbl_config = false;
    bool just_load = false;
    bool no_calibrate = false;
    bool load_from_db = false;
    bool no_clear_maneuvers = false;
  };
} // namespace

static void
printArguments(Arguments const& args, std::ostream& os)
{
#define PRINT_OPTION(field) \
  #field ": " << args.field << '\n'

#define PRINT_BOOL(field) \
  #field ": " << (args.field ? "yes" : "no") << '\n'

  os << "Command line arguments: \n"
     << PRINT_OPTION(config_path)
     << PRINT_OPTION(host)
     << PRINT_OPTION(port)
     << PRINT_BOOL(gps_fix)
     << PRINT_BOOL(lbl_config)
     << PRINT_BOOL(just_load)
     << PRINT_BOOL(no_calibrate)
     << PRINT_BOOL(load_from_db)
     << PRINT_BOOL(no_clear_maneuvers)
     << std::endl;

#undef PRINT_OPTION
#undef PRINT_BOOL
}

static Arguments
parseCommandLine(int argc, char** argv)
{
  Utils::OptionParser parser;
  parser.program("testPlan")
  .executable(argv[0])
  .arch(DUNE_SYSTEM_NAME)
  .copyright(DUNE_COPYRIGHT)
  .date(getCompileDate())
  .description("Send a PlanControl request to a system.")
  .email(DUNE_CONTACT)
  .version(getFullVersion())
  .add("-c", "--config-file", "Path to plan configuration file", "CONFIG")
  .add("-p", "--port", "Destination port", "PORT")
  .add("-d", "--host", "Destination host", "HOST")
  .add("-g", "--gps-fix", "Send GPSFix message before PlanControl")
  .add("-l", "--lbl-config", "Send LblConfig message before PlanControl")
  .add("-L", "--just-load", "Send PC_LOAD request (default is PC_START)")
  .add("-n", "--no-calibrate", "Don't set FLG_CALIBRATE")
  .add("-D", "--load-from-db", "Don't send inline PlanSpecification")
  .add("-C", "--no-clear-maneuvers", "Set FLG_NO_CLEAR_MANEUVERS");

  parser.parse(argc, argv);

  if (parser.bad())
  {
    std::cerr << "Error parsing command line: " << parser.error() << std::endl;
    parser.usage();
    std::exit(1);
  }

  Arguments args;

  args.config_path = parser.value("--config-file");

  if (args.config_path.empty())
  {
    std::cerr << "You must specify a configuration file." << std::endl;
    std::exit(1);
  }

  std::string const& host_str = parser.value("--host");

  if (host_str.empty())
  {
    std::cerr << "You must specify a destination host." << std::endl;
    std::exit(1);
  }

  args.host = Address(host_str.c_str());

  std::string const& port_str = parser.value("--port");

  if (port_str.empty())
  {
    std::cerr << "You must specify a destination port." << std::endl;
    std::exit(1);
  }

  int port = std::atoi(port_str.c_str());

  if (port <= 0 || port > UINT16_MAX)
  {
    std::cerr << "Invalid destination port \'" << port_str << "\'."
              << std::endl;
    std::exit(1);
  }

  args.port = static_cast<std::uint16_t>(port);

  // Handle boolean options
#define SET_BOOLEAN_OPT(opt, field)                                            \
  do                                                                           \
  {                                                                            \
    if (!parser.value(opt).empty())                                            \
      args.field = true;                                                       \
  } while (0)

  SET_BOOLEAN_OPT("--lbl-config", lbl_config);
  SET_BOOLEAN_OPT("--gps-fix", gps_fix);
  SET_BOOLEAN_OPT("--just-load", just_load);
  SET_BOOLEAN_OPT("--no-calibrate", no_calibrate);
  SET_BOOLEAN_OPT("--load-from-db", load_from_db);
  SET_BOOLEAN_OPT("--no-clear-maneuvers", no_clear_maneuvers);

#undef SET_BOOLEAN_OPT

  printArguments(args, std::cerr);

  return args;
}

static IMC::GpsFix
makeGpsFix(void)
{
  IMC::GpsFix origin;
  origin.lat = Angles::radians(41.185781);
  origin.lon = Angles::radians(-8.70606486);
  origin.height = 0;
  origin.validity = IMC::GpsFix::GFV_VALID_POS | IMC::GpsFix::GFV_VALID_HDOP;

  return origin;
}

static IMC::LblConfig
makeLblConfig(void)
{
  IMC::LblBeacon b0;
  IMC::LblBeacon b1;

  b0.beacon = "b0";
  b0.lat = Angles::radians(41.18482);
  b0.lon = Angles::radians(-8.70450);
  b0.depth = 2;

  b1.beacon = "b1";
  b1.lat = Angles::radians(41.18607);
  b1.lon = Angles::radians(-8.70588);
  b1.depth = 2;

  IMC::LblConfig lbl_config;
  lbl_config.beacons.push_back(b0);
  lbl_config.beacons.push_back(b1);

  return lbl_config;
}

int
main(int argc, char** argv)
{
  Arguments const args = parseCommandLine(argc, argv);

  UDPSocket socket;

  if (args.gps_fix)
  {
    IMC::GpsFix msg = makeGpsFix();
    sendMsg(args.host, args.port, msg, socket);
  }

  if (args.lbl_config)
  {
    IMC::LblConfig msg = makeLblConfig();
    sendMsg(args.host, args.port, msg, socket);
  }

  if (args.gps_fix || args.lbl_config)
  {
    std::cerr << "Giving some time for navigation to eventually stabilize (7s)"
              << std::endl;
    Delay::wait(7);
  }

  IMC::PlanControl cmd;
  cmd.type = IMC::PlanControl::PC_REQUEST;
  cmd.op
  = args.just_load ? IMC::PlanControl::PC_LOAD : IMC::PlanControl::PC_START;

  if (!args.no_calibrate)
    cmd.flags |= IMC::PlanControl::FLG_CALIBRATE;
  if (args.no_clear_maneuvers)
    cmd.flags |= IMC::PlanControl::FLG_NO_CLEAR_MANEUVERS;

  cmd.request_id = 0;

  Parsers::Config config(args.config_path.c_str());

  if (!args.load_from_db)
  {
    IMC::PlanSpecification mission_spec;
    Parsers::PlanConfigParser::parse(config, mission_spec);
    mission_spec.toText(std::cerr);
    cmd.arg.set(mission_spec);
    cmd.plan_id = mission_spec.plan_id;

    IMC::OperationalLimits op;

    for (auto const& section : config.sections())
    {
      if (section != "Operational Limits")
        continue;

      config.get("Operational Limits", "Minimum Altitude", "0.0",
                 op.min_altitude);
      config.get("Operational Limits", "Maximum Depth", "5.0", op.max_depth);
      op.mask = IMC::OPL_MAX_DEPTH | IMC::OPL_MIN_ALT;

      sendMsg(args.host, args.port, op, socket);
    }
  }
  else
  {
    config.get("Plan Configuration", "Plan ID", "", cmd.plan_id);
  }

  sendMsg(args.host, args.port, cmd, socket);

  return 0;
}
