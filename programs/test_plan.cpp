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

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

using namespace DUNE::IMC;
using namespace DUNE::Parsers;

static
void
usage(void)
{
  std::cerr << "== Usage == "
            << std::endl
            << std::endl
            << " testPlan [options] someplanfile.ini host port"
            << std::endl
            << std::endl
            << "== Options =="
            << std::endl
            << std::endl
            << " -a: all settings for a custom APDL setup (implies '-h -l -s')"
            << std::endl
            << " -n: *no* calibration step for plan startup"
            << std::endl
            << " -l: send a sample LBL config for APDL"
            << std::endl
            << " -L: just load plan, do not start it"
            << std::endl
            << " -p: do not parse plan (assumed it's been stored before)"
            << std::endl
            << " -s: send GpsFix (APDL)"
            << std::endl
            << " -i: set ignore errors bit"
            << std::endl
            << " -d: request DataBase state"
            << std::endl
            << " -D: delete plan"
            << std::endl
            << " -G: get plan"
            << std::endl
            << " -C: clear database"
            << std::endl
            << std::endl
            << std::endl;
}

static void
sendMsg(IMC::Message& msg, UDPSocket& sock, Address& dest, int port)
{
  DUNE::Utils::ByteBuffer bb;
  msg.setTimeStamp();
  IMC::Packet::serialize(&msg, bb);
  sock.write((const uint8_t*)bb.getBuffer(), msg.getSerializationSize(), dest, port);
  msg.toText(std::cout);
}

template <typename T>
static void
getAndSend(Parsers::Config& parser, std::string section, UDPSocket& sock, Address dest, int port)
{
  T msg;
  PlanConfigParser::parse(parser, section, msg);
  sendMsg(msg, sock, dest, port);
}

int
main(int argc, char** argv)
{
  --argc; ++argv;
  bool lbl = false;
  bool start_point = false;
  bool calibrate = true;
  bool just_load = false;
  bool do_parse = true;
  bool ignore_errors = false;
  bool request_db_state = false;
  bool delete_plan = false;
  bool get_plan = false;
  bool clear_db = false;

  for (; *argv && **argv == '-'; ++argv, --argc)
  {
    // @todo Use DUNE's OptionParser, too lazy to do it now.
    char opt = argv[0][1];
    switch (opt)
    {
      case 'a':
        lbl = true;
        start_point = true;
        break;
      case 'l':
        lbl = true;
        break;
      case 'L':
        just_load = true;
        break;
      case 'p':
        do_parse = false;
        break;
      case 'n':
        calibrate = false;
        break;
      case 's':
        start_point = true;
        break;
      case 'i':
        ignore_errors = true;
        break;
      case 'd':
        request_db_state = true;
        break;
      case 'D':
        delete_plan = true;
        break;
      case 'G':
        get_plan = true;
        break;
      case 'C':
        clear_db = true;
        break;
      default:
        std::cerr << "Invalid option: '-" << opt << "'\n";
        usage();
        return 1;
    }
  }

  if (argc < 3)
  {
    usage();
    return 1;
  }

  Parsers::Config config(argv[0]);

  UDPSocket sock;
  Address dest(argv[1]);
  uint16_t port = atoi(argv[2]);

  if (start_point)
  {
    GpsFix origin;
    origin.type = IMC::GpsFix::GFT_MANUAL_INPUT;
    origin.lat = Angles::radians(41.185781);
    origin.lon = Angles::radians(-8.70606486);
    origin.height = 0;
    origin.validity = IMC::GpsFix::GFV_VALID_POS | IMC::GpsFix::GFV_VALID_HDOP;
    sendMsg(origin, sock, dest, port);
  }

  if (lbl)
  {
    LblBeacon b0;
    LblBeacon b1;

    b0.beacon = "b0";
    b0.lat = Angles::radians(41.18482);
    b0.lon = Angles::radians(-8.70450);
    b0.depth = 2;
    b0.query_channel = 4;
    b0.reply_channel = 1;
    b0.transponder_delay = 49.37;

    b1.beacon = "b1";
    b1.lat = Angles::radians(41.18607);
    b1.lon = Angles::radians(-8.70588);
    b1.depth = 2;
    b1.query_channel = 0;
    b1.reply_channel = 3;
    b1.transponder_delay = 49.50;

    LblConfig lbl_config;
    lbl_config.beacons.push_back(b0);
    lbl_config.beacons.push_back(b1);

    sendMsg(lbl_config, sock, dest, port);
  }

  if (start_point || lbl)
  {
    std::cerr << "Giving some time for navigation to eventually stabilize (7s)" << std::endl;
    Delay::wait(7);
  }

  PlanControl cmd;
  cmd.type = PlanControl::PC_REQUEST;
  cmd.op = just_load ? PlanControl::PC_LOAD : PlanControl::PC_START;

  cmd.flags = 0;

  if (calibrate)
    cmd.flags |= PlanControl::FLG_CALIBRATE;

  if (ignore_errors)
    cmd.flags |= PlanControl::FLG_IGNORE_ERRORS;

  cmd.request_id = 0;

  if (request_db_state)
  {
    IMC::PlanDB pdb;
    pdb.type = IMC::PlanDB::DBT_REQUEST;
    pdb.dt = IMC::PlanDB::DBDT_PLAN;
    pdb.op = IMC::PlanDB::DBOP_GET_STATE;
    sendMsg(pdb, sock, dest, port);

    IMC::PlanDB pdb_mem;
    pdb_mem.type = IMC::PlanDB::DBT_REQUEST;
    pdb_mem.dt = IMC::PlanDB::DBDT_MEMENTO;
    pdb_mem.op = IMC::PlanDB::DBOP_GET_STATE;
    sendMsg(pdb_mem, sock, dest, port);

    return 0;
  }

  if (get_plan)
  {
    IMC::PlanDB pdb_get;
    pdb_get.type = IMC::PlanDB::DBT_REQUEST;
    pdb_get.dt = IMC::PlanDB::DBDT_PLAN;
    pdb_get.op = IMC::PlanDB::DBOP_GET;
    pdb_get.object_id = "test_plan";
    sendMsg(pdb_get, sock, dest, port);

    return 0;
  }

  if (clear_db)
  {
    IMC::PlanDB pdb_clear;
    pdb_clear.type = IMC::PlanDB::DBT_REQUEST;
    pdb_clear.dt = IMC::PlanDB::DBDT_PLAN;
    pdb_clear.op = IMC::PlanDB::DBOP_CLEAR;
    sendMsg(pdb_clear, sock, dest, port);

    return 0;
  }

  if (delete_plan)
  {
    IMC::PlanDB pdb_del;
    pdb_del.type = IMC::PlanDB::DBT_REQUEST;
    pdb_del.dt = IMC::PlanDB::DBDT_PLAN;
    pdb_del.op = IMC::PlanDB::DBOP_DEL;
    pdb_del.object_id = "test_plan";
    sendMsg(pdb_del, sock, dest, port);

    return 0;
  }

  if (do_parse)
  {
    IMC::Message* msg;
    msg = PlanConfigParser::parse(config);

    if (msg->getId() == DUNE_IMC_PLANSPECIFICATION)
    {
      IMC::PlanSpecification mission_spec;
      mission_spec = *static_cast<IMC::PlanSpecification*>(msg);
      mission_spec.toText(std::cerr);
      cmd.arg.set(mission_spec);
      cmd.plan_id = mission_spec.plan_id;
    }
    else if (msg->getId() == DUNE_IMC_PLANMEMENTO)
    {
      IMC::PlanMemento pmem;
      pmem = *static_cast<IMC::PlanMemento*>(msg);
      pmem.toText(std::cerr);
      cmd.arg.set(pmem);
      cmd.plan_id = pmem.id;
    }

    OperationalLimits op;
    std::vector<std::string> sections = config.sections();

    for (std::vector<std::string>::iterator itr = sections.begin(); itr != sections.end(); ++itr)
    {
      if ((*itr) == "Operational Limits")
      {
        config.get("Operational Limits", "Minimum Altitude", "0.0", op.min_altitude);
        config.get("Operational Limits", "Maximum Depth", "5.0", op.max_depth);
        op.mask = IMC::OPL_MAX_DEPTH | IMC::OPL_MIN_ALT;

        sendMsg(op, sock, dest, port);
      }
    }

    delete msg;
  }
  else
  {
    config.get("Plan Configuration", "Plan ID", "", cmd.plan_id);
  }

  sendMsg(cmd, sock, dest, port);

  return 0;
}
