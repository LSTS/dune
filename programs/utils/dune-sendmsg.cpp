//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 9 headers.
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <math.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;
using namespace std;

void recursive(IMC::TransmissionRequest* tmsg, int count)
{
  if(count == 0){
    IMC::Abort* abort = new IMC::Abort;
    tmsg->msg_data.set(abort->clone());
  }
  else{
    tmsg->msg_data.set(tmsg->clone());
    recursive((IMC::TransmissionRequest*)tmsg->msg_data.get(),--count);
  }

}

void createRandomMsg(IMC::TransmissionRequest* tmsg)
{

  int type = rand() % 6;

  switch (type)
  {
    case 0:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_GSM;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_TEXT;
      tmsg->txt_data = "Pos";
      tmsg->destination = "+351912037728";

      break;

    case 1:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_ABORT;

      break;
    case 2:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_RANGE;

      break;
    case 3:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;

      recursive(tmsg, (rand() % 5));

      break;
    case 4:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_WIFI;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;

      recursive(tmsg, (rand() % 5));

      break;
    case 5:
      tmsg->comm_mean = IMC::TransmissionRequest::CMEAN_GSM;
      tmsg->data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
      tmsg->destination = "+351912037728";
      recursive(tmsg, (rand() % 5));

      break;

  }

}

void logMsg(char ** argv, int argc)
{
   fprintf(stdout, "Processing message width %d arguments:",argc);
   fprintf(stdout, "\n system host ip                 -> %s",argv[1]);
   fprintf(stdout, "\n system host port               -> %s",argv[2]);
   fprintf(stdout, "\n message / test                 -> %s",argv[3]);
}

void logSystemDuneID(unsigned short& sh,char ** argv)
{
  sh = (unsigned short) strtoul(argv[4], NULL, 0);
  fprintf(stdout, "\n system host dune ID            -> %d",sh);
}

void logNumberOfMessages(unsigned short& count, char ** argv, int argc){
  if(argc >=7){
    try
    {
      count = (unsigned short)strtoul(argv[6], NULL, 0);
    }
    catch (std::runtime_error& e)
    {
    }

  }
  fprintf(stdout, "\n number of messages to transmit -> %d",count);

}

int
main(int argc, char** argv)
{
  if (argc < 4)
  {
    fprintf(stderr, "DUNE message sender\n\n");

    if (argc == 2 && (!strcmp(argv[1], "-l") || !strcmp(argv[1], "--list")))
    {
      fprintf(stdout, "Available Messages:\n");
      fprintf(stdout, "  [A]: Abort, AcousticMessage, AcousticOperation, AcousticSystemsQuery\n");
      fprintf(stdout, "  [B]: Brake, ButtonEvent\n");
      fprintf(stdout, "  [C]: CacheControl, Calibration, ClockControl, ControlLoops\n");
      fprintf(stdout, "  [D]: DataSanity, DesiredControl, DesiredHeading, DesiredHeadingRate, DesiredPitch,\n");
      fprintf(stdout, "       DesiredSpeed, DesiredRoll, DesiredZ, DevCalibrationControl, DevDataText\n");
      fprintf(stdout, "  [E]: EmergencyControl, EntityList, EntityState, EntityActivationState, EstimatedState\n");
      fprintf(stdout, "  [F]: FuelLevel\n");
      fprintf(stdout, "  [G]: GpsFix, GpsFixRtk\n");
      fprintf(stdout, "  [H]: Heartbeat\n");
      fprintf(stdout, "  [I]: IridiumMsgTx\n");
      fprintf(stdout, "  [L]: LblConfig, LblRange, LeaderState, LeakSimulation, LogBookControl, LogBookEntry,\n");
      fprintf(stdout, "       LoggingControl\n");
      fprintf(stdout, "  [M]: MagneticField, MonitorEntityState\n");
      fprintf(stdout, "  [O]: OperationalLimits\n");
      fprintf(stdout, "  [P]: PlanControl, PlanGeneration, PopEntityParameters, PowerChannelControl,\n");
      fprintf(stdout, "       PowerChannelState, PushEntityParameters\n");
      fprintf(stdout, "  [Q]: QueryEntityInfo, QueryEntityParameters\n");
      fprintf(stdout, "  [R]: RegisterManeuver, RemoteActions, RemoteActionsRequest, ReplayControl, ReportControl,\n");
      fprintf(stdout, "       RestartSystem\n");
      fprintf(stdout, "  [S]: SaveEntityParameters, SetEntityParameters, SetLedBrightness, SetServoPosition,\n");
      fprintf(stdout, "       SetThrusterActuation, Sms, SoundSpeed\n");
      fprintf(stdout, "  [T]: Target, TeleoperationDone, Temperature, TextMessage, TransmissionRequest, TrexCommand\n");
      fprintf(stdout, "  [U]: UASimulation\n");
      fprintf(stdout, "  [V]: VehicleCommand, VehicleMedium\n");
      fprintf(stdout, "\n");
      fprintf(stdout, "Available Scaled Tests:\n");
      fprintf(stdout, "  [T]: teste_abort, teste_any, teste_random, teste_range, teste_sms, teste_wifi_1\n");

      return 1;
    }

    fprintf(stderr, "Usage:\n");
    fprintf(stderr, "  %s <destination host> <destination port> <abbrev> [arguments]\n\n", argv[0]);
    fprintf(stderr, "Options:\n");
    fprintf(stderr, "  -l, --list                            Print list of acceptable messages\n\n\n");
    return 1;
  }

  Address dest(argv[1]);

  // Parse port.
  unsigned port = 0;
  if (!castLexical(argv[2], port))
  {
    fprintf(stderr, "ERROR: invalid port '%s'\n", argv[2]);
    return 1;
  }

  if (port > 65535)
  {
    fprintf(stderr, "ERROR: invalid port '%s'\n", argv[2]);
    return 1;
  }

  IMC::Message* msg = NULL;
  std::list<IMC::Message*>* msg_list = new std::list<IMC::Message*>();


  if (strcmp(argv[3], "Abort") == 0)
  {
    msg = new IMC::Abort;

    if (argc == 5)
      msg->setDestination(atoi(argv[4]));
  }

  if (strcmp(argv[3], "AcousticMessage") == 0)
  {
    IMC::AcousticMessage* tmsg = new IMC::AcousticMessage;
    msg = tmsg;
    IMC::Message* imsg = IMC::Factory::produce(atoi(argv[4]));
    tmsg->message.set(*imsg);
    delete imsg;
  }

  if (strcmp(argv[3], "AcousticOperation") == 0)
  {
    IMC::AcousticOperation* tmsg = new IMC::AcousticOperation;
    msg = tmsg;
    tmsg->op = IMC::AcousticOperation::AOP_RANGE_RECVED;
    tmsg->system = argv[4];
    tmsg->range = atoi(argv[5]);
  }

  if (strcmp(argv[3], "AcousticSystemsQuery") == 0)
  {
    IMC::AcousticSystemsQuery* tmsg = new IMC::AcousticSystemsQuery;
    msg = tmsg;
  }

  if (strcmp(argv[3], "Brake") == 0)
  {
    IMC::Brake* tmsg = new IMC::Brake;
    msg = tmsg;
    tmsg->op = atoi(argv[4]);
  }

  if (strcmp(argv[3], "ButtonEvent") == 0)
  {
    IMC::ButtonEvent* tmsg = new IMC::ButtonEvent;
    msg = tmsg;
    tmsg->button = atoi(argv[4]);
    tmsg->value = atoi(argv[5]);
  }

  if (strcmp(argv[3], "CacheControl") == 0)
  {
    IMC::CacheControl* tmsg = new IMC::CacheControl;
    msg = tmsg;
    tmsg->op = atoi(argv[4]);
  }

  if (strcmp(argv[3], "Calibration") == 0)
  {
    IMC::Calibration* tmsg = new IMC::Calibration;
    tmsg->duration = (uint16_t)(atof(argv[4]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "ClockControl") == 0)
  {
    IMC::ClockControl* tmsg = new IMC::ClockControl;
    tmsg->op = atoi(argv[4]);
    if (argc >= 6)
      tmsg->clock = atof(argv[5]);
    if (argc >= 7)
      tmsg->tz = atoi(argv[6]);
    msg = tmsg;
  }

  if (strcmp(argv[3], "ControlLoops") == 0)
  {
    IMC::ControlLoops* tmsg = new IMC::ControlLoops;
    msg = tmsg;
    tmsg->enable = atoi(argv[4]) ? 1 : 0;
    tmsg->mask = atoi(argv[5]);
    tmsg->scope_ref = atoi(argv[6]);
  }

  if (strcmp(argv[3], "DataSanity") == 0)
  {
    IMC::DataSanity* tmsg = new IMC::DataSanity;
    msg = tmsg;
    tmsg->setSourceEntity(atoi(argv[4]));
    tmsg->sane = atoi(argv[5]);
  }

  if (strcmp(argv[3], "DesiredControl") == 0)
  {
    IMC::DesiredControl* tmsg = new IMC::DesiredControl;
    tmsg->k = atof(argv[4]);
    tmsg->m = atof(argv[5]);
    tmsg->n = atof(argv[6]);
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredHeading") == 0)
  {
    IMC::DesiredHeading* tmsg = new IMC::DesiredHeading;
    tmsg->value = DUNE::Math::Angles::radians(atof(argv[4]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredHeadingRate") == 0)
  {
    IMC::DesiredHeadingRate* tmsg = new IMC::DesiredHeadingRate;
    tmsg->value = DUNE::Math::Angles::radians(atof(argv[4]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredPitch") == 0)
  {
    IMC::DesiredPitch* tmsg = new IMC::DesiredPitch;
    tmsg->value = DUNE::Math::Angles::radians(atof(argv[4]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredSpeed") == 0)
  {
    IMC::DesiredSpeed* tmsg = new IMC::DesiredSpeed;
    tmsg->value = atof(argv[4]);
    if (argc == 5)
      tmsg->speed_units = IMC::SUNITS_PERCENTAGE;
    else
      tmsg->speed_units = atoi(argv[5]);
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredRoll") == 0)
  {
    IMC::DesiredRoll* tmsg = new IMC::DesiredRoll;
    tmsg->value = DUNE::Math::Angles::radians(atof(argv[4]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "DesiredZ") == 0)
  {
    IMC::DesiredZ* tmsg = new IMC::DesiredZ;
    tmsg->value = atof(argv[4]);
    if (argc == 5)
      tmsg->z_units = static_cast<IMC::ZUnits>(3);
    else
      tmsg->z_units = static_cast<IMC::ZUnits>(atoi(argv[5]));
    msg = tmsg;
  }

  if (strcmp(argv[3], "DevCalibrationControl") == 0)
  {
    IMC::DevCalibrationControl * tmsg = new IMC::DevCalibrationControl;
    msg = tmsg;
    tmsg->setDestinationEntity(atoi(argv[4]));
    tmsg->op = atoi(argv[5]);
  }

  if (strcmp(argv[3], "DevDataText") == 0)
  {
    IMC::DevDataText * tmsg = new IMC::DevDataText;
    msg = tmsg;
    tmsg->value = argv[4];
  }

  if (strcmp(argv[3], "EmergencyControl") == 0)
  {
    IMC::EmergencyControl* tmsg = new IMC::EmergencyControl;
    tmsg->command = atoi(argv[4]);
    msg = tmsg;
  }

  if (strcmp(argv[3], "EntityList") == 0)
  {
    IMC::EntityList* tmsg = new IMC::EntityList;
    msg = tmsg;
    tmsg->op = IMC::EntityList::OP_QUERY;
  }

  if (strcmp(argv[3], "EntityState") == 0)
  {
    IMC::EntityState* tmsg = new IMC::EntityState;
    msg = tmsg;
    tmsg->setSourceEntity(atoi(argv[4]));
    tmsg->state = atoi(argv[5]);
  }

  if (strcmp(argv[3], "EntityActivationState") == 0)
  {
    IMC::EntityActivationState* tmsg = new IMC::EntityActivationState;
    msg = tmsg;
    tmsg->setSourceEntity(atoi(argv[4]));
    tmsg->state = IMC::EntityActivationState::EAS_ACTIVE;
  }

  if (strcmp(argv[3], "EstimatedState") == 0)
  {
    IMC::EstimatedState* tmsg = new IMC::EstimatedState;
    msg = tmsg;
    tmsg->x = atof(argv[4]);
    tmsg->y = atof(argv[5]);
    tmsg->z = atof(argv[6]);
    tmsg->phi = 0.0;
    tmsg->theta = 0.0;
    tmsg->psi = 0.0;
    tmsg->u = 0.0;
    tmsg->v = 0.0;
    tmsg->w = 0.0;
    tmsg->p = 0.0;
    tmsg->q = 0.0;
    tmsg->r = 0.0;
    tmsg->lat = 0.0;
    tmsg->lon = 0.0;
    tmsg->depth = 0.0;
  }

  if (strcmp(argv[3], "FuelLevel") == 0)
  {
    IMC::FuelLevel* tmsg = new IMC::FuelLevel;
    msg = tmsg;
    tmsg->setSource(atof(argv[4]));
    tmsg->value = atof(argv[5]);
    tmsg->confidence = atof(argv[6]);
  }

  if (strcmp(argv[3], "GpsFix") == 0)
  {
    IMC::GpsFix* tmsg = new IMC::GpsFix;
    msg = tmsg;
    tmsg->type = IMC::GpsFix::GFT_DIFFERENTIAL;
    tmsg->satellites = 10;
    tmsg->validity = 0xFFFF;

    if (argc >= 5)
    {
      tmsg->lat = Angles::radians(atof(argv[4]));
      tmsg->lon = Angles::radians(atof(argv[5]));
    }
    else
    {
      // Leixões harbor location.
      tmsg->lat = 0.718803520085;
      tmsg->lon = -0.151951035032;
    }

    if (argc >= 7)
      tmsg->height = atof(argv[6]);
  }

  if (strcmp(argv[3], "GpsFixRtk") == 0)
  {
    IMC::GpsFixRtk* tmsg = new IMC::GpsFixRtk;
    msg = tmsg;
    tmsg->type = IMC::GpsFixRtk::RTK_FIXED;
    tmsg->satellites = 10;
    tmsg->iar_hyp = 1;
    tmsg->setSource(0x2c01);

    if (argc >= 5)
      tmsg->setSource(tmsg->getSource() + atoi(argv[4]));

    if (argc >= 6)
    {
      if (!strcmp(argv[5], "Float"))
      {
        tmsg->type = IMC::GpsFixRtk::RTK_FLOAT;
      }
      else if (!strcmp(argv[5], "Obs"))
      {
        tmsg->type = IMC::GpsFixRtk::RTK_OBS;
      }
      else if (!strcmp(argv[5], "None"))
      {
        tmsg->type = IMC::GpsFixRtk::RTK_NONE;
      }
      else
      {
        tmsg->type = IMC::GpsFixRtk::RTK_FIXED;
      }
    }
    if (argc >= 9)
    {
      tmsg->n = atof(argv[6]);
      tmsg->e = atof(argv[7]);
      tmsg->d = atof(argv[8]);

    }
    else
    {
      // Default location
      tmsg->n = 4.0;
      tmsg->e = 3.0;
      tmsg->d = -2.0;
    }

    if (argc == 7)
    {
      tmsg->iar_hyp = atoi(argv[6]);
    }
  }

  if (strcmp(argv[3], "Heartbeat") == 0)
  {
    IMC::Heartbeat* tmsg = new IMC::Heartbeat;

    if (argc > 4)
      tmsg->setSource(atoi(argv[4]));

    if (argc > 5)
      tmsg->setDestination(atoi(argv[5]));

    msg = tmsg;
  }

  if (strcmp(argv[3], "IridiumMsgTx") == 0)
  {
    IMC::IridiumMsgTx* tmsg = new IMC::IridiumMsgTx;
    msg = tmsg;
    tmsg->req_id = atoi(argv[4]);
    tmsg->ttl = atoi(argv[5]);
    std::string hex = String::fromHex(argv[6]);
    tmsg->data.assign(hex.begin(), hex.end());
  }

  if (strcmp(argv[3], "LblConfig") == 0)
  {
    IMC::LblConfig* tmsg = new IMC::LblConfig;
    msg = tmsg;
    tmsg->op = IMC::LblConfig::OP_SET_CFG;

    IMC::LblBeacon bc;
    bc.beacon = "benthos2";
    bc.lat = 0.71883274;
    bc.lon = -0.15194732;
    bc.depth = 3;
    tmsg->beacons.push_back(bc);
    bc.beacon = "benthos3";
    bc.lat = 0.71881068;
    bc.lon = -0.15192335;
    tmsg->beacons.push_back(bc);
  }

  if (strcmp(argv[3], "LblRange") == 0)
  {
    IMC::LblRange* tmsg = new IMC::LblRange;
    msg = tmsg;
    tmsg->id = atoi(argv[4]);
    tmsg->range = atoi(argv[5]);
  }

  if (strcmp(argv[3], "LeaderState") == 0)
  {
    IMC::LeaderState* tmsg = new IMC::LeaderState;
    msg = tmsg;
    tmsg->lat = Angles::radians(atof(argv[4]));
    tmsg->lon = Angles::radians(atof(argv[5]));
    tmsg->height = atof(argv[6]);
  }

  if (strcmp(argv[3], "LeakSimulation") == 0)
  {
    IMC::LeakSimulation* tmsg = new IMC::LeakSimulation;
    tmsg->op = atoi(argv[4]);
    if (argc >= 6)
      tmsg->entities = argv[5];
    msg = tmsg;
  }

  if (strcmp(argv[3], "LogBookControl") == 0)
  {
    IMC::LogBookControl* tmsg = new IMC::LogBookControl;
    tmsg->command = atoi(argv[4]);
    if (argc >= 6)
      tmsg->htime = Time::Clock::getSinceEpoch() - atof(argv[5]);
    else
      tmsg->htime = -1;
    msg = tmsg;
  }

  if (strcmp(argv[3], "LogBookEntry") == 0)
  {
    IMC::LogBookEntry* tmsg = new IMC::LogBookEntry;
    msg = tmsg;
    tmsg->context = argv[4];
    tmsg->text = argv[5];
    tmsg->htime = Time::Clock::getSinceEpoch();
    if (argc > 6)
      tmsg->type = atoi(argv[6]);
    else
      tmsg->type = IMC::LogBookEntry::LBET_WARNING;
  }

  if (strcmp(argv[3], "LoggingControl") == 0)
  {
    IMC::LoggingControl* tmsg = new IMC::LoggingControl;
    msg = tmsg;
    tmsg->op = atoi(argv[4]);
    tmsg->name = argv[5];
  }

  if (strcmp(argv[3], "MagneticField") == 0)
  {
    IMC::MagneticField* tmsg = new IMC::MagneticField;
    msg = tmsg;
    tmsg->setDestinationEntity(atoi(argv[4]));
    tmsg->x = atof(argv[5]);
    tmsg->y = atof(argv[6]);
    tmsg->z = atof(argv[7]);
  }

  if (strcmp(argv[3], "MonitorEntityState") == 0)
  {
    IMC::MonitorEntityState* tmsg = new IMC::MonitorEntityState;
    msg = tmsg;
    tmsg->command = atoi(argv[4]);
    if (argc >= 6)
      tmsg->entities = argv[5];
  }

  if (strcmp(argv[3], "OperationalLimits") == 0)
  {
    IMC::OperationalLimits* tmsg = new IMC::OperationalLimits;
    tmsg->mask = IMC::OPL_AREA;
    tmsg->lat = DUNE::Math::Angles::radians(atof(argv[4]));
    tmsg->lon = DUNE::Math::Angles::radians(atof(argv[5]));
    tmsg->orientation = DUNE::Math::Angles::radians(atof(argv[6]));
    tmsg->width = atof(argv[7]);
    tmsg->length = atof(argv[8]);
    msg = tmsg;
  }

  if (strcmp(argv[3], "PlanControl") == 0)
  {
    IMC::PlanControl* tmsg = new IMC::PlanControl;
    tmsg->type = IMC::PlanControl::PC_REQUEST;
    tmsg->op = atoi(argv[4]);
    tmsg->plan_id = argv[5];
    if (argc >= 7)
      tmsg->flags = atoi(argv[6]);

    if (argc >= 8)
      tmsg->arg.set(IMC::Factory::produce(argv[7]));

    msg = tmsg;
  }

  if (strcmp(argv[3], "PlanGeneration") == 0)
  {
    IMC::PlanGeneration* tmsg = new IMC::PlanGeneration;
    msg = tmsg;
    tmsg->cmd = atoi(argv[4]);
    tmsg->op = atoi(argv[5]);
    tmsg->plan_id = argv[6];

    if (argc >= 8)
      tmsg->params = argv[7];
  }

  if (strcmp(argv[3], "PopEntityParameters") == 0)
  {
    IMC::PopEntityParameters* tmsg = new IMC::PopEntityParameters;
    msg = tmsg;
    tmsg->name = argv[4];
  }

  if (strcmp(argv[3], "PowerChannelControl") == 0)
  {
    IMC::PowerChannelControl* tmsg = new IMC::PowerChannelControl;
    msg = tmsg;
    tmsg->name = argv[4];
    tmsg->op = atoi(argv[5]);
  }

  if (strcmp(argv[3], "PowerChannelState") == 0)
  {
    IMC::PowerChannelState* tmsg = new IMC::PowerChannelState;
    msg = tmsg;
    tmsg->name = argv[4];
    tmsg->state = atoi(argv[5]);
  }

  if (strcmp(argv[3], "PushEntityParameters") == 0)
  {
    IMC::PushEntityParameters* tmsg = new IMC::PushEntityParameters;
    msg = tmsg;
    tmsg->name = argv[4];
  }

  if (strcmp(argv[3], "QueryEntityInfo") == 0)
  {
    IMC::QueryEntityInfo* tmsg = new IMC::QueryEntityInfo;
    msg = tmsg;
    tmsg->id = atoi(argv[4]);
  }

  if (strcmp(argv[3], "QueryEntityParameters") == 0)
  {
    IMC::QueryEntityParameters* tmsg = new IMC::QueryEntityParameters;
    msg = tmsg;
    tmsg->name = argv[4];
  }

  if (strcmp(argv[3], "RegisterManeuver") == 0)
  {
    IMC::RegisterManeuver* tmsg = new IMC::RegisterManeuver;
    msg = tmsg;
    tmsg->mid = atoi(argv[4]);
  }

  if (strcmp(argv[3], "RemoteActions") == 0)
  {
    IMC::RemoteActions* tmsg = new IMC::RemoteActions;
    msg = tmsg;
    tmsg->actions = argv[4];
  }

  if (strcmp(argv[3], "RemoteActionsRequest") == 0)
  {
    IMC::RemoteActionsRequest* tmsg = new IMC::RemoteActionsRequest;
    msg = tmsg;
    tmsg->op = IMC::RemoteActionsRequest::OP_QUERY;
  }

  if (strcmp(argv[3], "ReplayControl") == 0)
  {
    IMC::ReplayControl* tmsg = new IMC::ReplayControl;
    tmsg->op = atoi(argv[4]);
    if (tmsg->op == IMC::ReplayControl::ROP_START)
      tmsg->file = argv[5];
    msg = tmsg;
  }

  if (strcmp(argv[3], "ReportControl") == 0)
  {
    IMC::ReportControl* tmsg = new IMC::ReportControl;
    tmsg->op = atoi(argv[4]);
    tmsg->comm_interface = atoi(argv[5]);
    tmsg->period = atoi(argv[6]);
    tmsg->sys_dst = argv[7];
    msg = tmsg;
  }

  if (strcmp(argv[3], "RestartSystem") == 0)
  {
    IMC::RestartSystem* tmsg = new IMC::RestartSystem;
    msg = tmsg;
  }

  if (strcmp(argv[3], "SaveEntityParameters") == 0)
  {
    IMC::SaveEntityParameters* tmsg = new IMC::SaveEntityParameters;
    msg = tmsg;
    tmsg->name = argv[4];
  }

  if (strcmp(argv[3], "SetEntityParameters") == 0)
  {
    IMC::SetEntityParameters* tmsg = new IMC::SetEntityParameters;
    msg = tmsg;
    tmsg->name = argv[4];

    IMC::EntityParameter param;

    unsigned i = 4;

    while (1)
    {
      if (argc >= (int)i + 2)
      {
        ++i;
        param.name = argv[i];
        ++i;
        param.value = argv[i];

        tmsg->params.push_back(param);
      }
      else
      {
        break;
      }
    }
  }

  if (strcmp(argv[3], "SetLedBrightness") == 0)
  {
    IMC::SetLedBrightness* tmsg = new IMC::SetLedBrightness;
    msg = tmsg;
    tmsg->name = argv[4];
    tmsg->value = atoi(argv[5]);
  }

  if (strcmp(argv[3], "SetServoPosition") == 0)
  {
    IMC::SetServoPosition* tmsg = new IMC::SetServoPosition;
    msg = tmsg;
    tmsg->id = atoi(argv[4]);
    tmsg->value = atof(argv[5]);
  }

  if (strcmp(argv[3], "SetThrusterActuation") == 0)
  {
    IMC::SetThrusterActuation* tmsg = new IMC::SetThrusterActuation;
    msg = tmsg;
    tmsg->id = atoi(argv[4]);
    tmsg->value = atof(argv[5]);
  }

  if (strcmp(argv[3], "Sms") == 0)
  {
    IMC::Sms* tmsg = new IMC::Sms;
    tmsg->number = argv[4];
    tmsg->timeout = atoi(argv[5]);
    tmsg->contents = argv[6];
    msg = tmsg;
  }

  if (strcmp(argv[3], "SoundSpeed") == 0)
  {
    IMC::SoundSpeed* tmsg = new IMC::SoundSpeed;
    msg = tmsg;
    tmsg->value = atoi(argv[4]);
  }

  if (strcmp(argv[3], "Target") == 0)
  {
    IMC::Target* tmsg = new IMC::Target;
    msg = tmsg;
    tmsg->label = "dune-sendmsg";
    tmsg->lat = Angles::radians(atof(argv[4]));
    tmsg->lon = Angles::radians(atof(argv[5]));
    tmsg->z = atof(argv[6]);

    if (argc > 7)
    {
      if (!strcmp(argv[7], "DEP") || !strcmp(argv[7], "dep"))
        tmsg->z_units = IMC::Z_DEPTH;
      else if (!strcmp(argv[7], "ALT") || !strcmp(argv[7], "alt"))
        tmsg->z_units = IMC::Z_ALTITUDE;
      else if (!strcmp(argv[7], "HEI") || !strcmp(argv[7], "hei"))
        tmsg->z_units = IMC::Z_HEIGHT;
    }

    if (argc > 9)
    {
      tmsg->cog = Angles::normalizeRadian(Angles::radians(atof(argv[8])));
      tmsg->sog = atof(argv[9]);
    }
  }

  if (strcmp(argv[3], "Temperature") == 0)
  {
    IMC::Temperature* tmsg = new IMC::Temperature;
    msg = tmsg;
    tmsg->value = atof(argv[4]);
  }

  if (strcmp(argv[3], "TeleoperationDone") == 0)
  {
    msg = new IMC::TeleoperationDone;
  }

  if (strcmp(argv[3], "TextMessage") == 0)
  {
    IMC::TextMessage* tmsg = new IMC::TextMessage;
    msg = tmsg;
    if (argc >= 6) {
      tmsg->origin = argv[4];
      tmsg->text = argv[5];
    }
    else if (argc == 5)
    {
      tmsg->origin = "dune-sendmsg";
      tmsg->text = argv[4];
    }
  }

  if(strcmp(argv[3], "TransmissionRequest") == 0)
    {
      uint16_t id = 0;
      unsigned short sh = (unsigned short) strtoul(argv[4], NULL, 0);

      for(int i=0; i<1; i++){
        IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

        IMC::Abort* abort = new IMC::Abort;

        tmsg->setSource(sh);
        tmsg->setDestination(sh);
        tmsg->destination     = argv[5];
        tmsg->deadline        = Time::Clock::getSinceEpoch() + 200;
        tmsg->req_id          = id;
        id++;
        tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
        tmsg->data_mode       = IMC::TransmissionRequest::DMODE_INLINEMSG;

        recursive(tmsg,5);

        msg_list->push_back(tmsg);

      }

    }

  if (strcmp(argv[3], "TrexCommand") == 0)
  {
    IMC::TrexCommand* tmsg = new IMC::TrexCommand;
    msg = tmsg;
    if (strcmp(argv[4], "DISABLE") == 0 || strcmp(argv[4], "1") == 0 )
        tmsg->command = 1;
    else if (strcmp(argv[4], "ENABLE") == 0 || strcmp(argv[4], "2") == 0 )
        tmsg->command = 2;
  }

  if (strcmp(argv[3], "UASimulation") == 0)
  {
    IMC::UASimulation* tmsg = new IMC::UASimulation;
    tmsg->setSource(atoi(argv[4]));
    tmsg->setDestination(atoi(argv[5]));
    tmsg->speed = atoi(argv[6]);
    tmsg->type = IMC::UASimulation::UAS_DATA;
    tmsg->data.assign(atoi(argv[7]), '0');
    msg = tmsg;
  }

  if (strcmp(argv[3], "UsblConfig") == 0)
  {
    IMC::UsblConfig* tmsg = new IMC::UsblConfig;
    msg = tmsg;
    tmsg->op = IMC::UsblConfig::OP_SET_CFG;

    IMC::UsblModem modem;
    modem.name = argv[4];
    modem.lat = atof(argv[5]);
    modem.lon = atof(argv[6]);
    modem.z = atof(argv[7]);
    modem.z_units = static_cast<IMC::ZUnits>(1);
    tmsg->modems.push_back(modem);
  }

  if (strcmp(argv[3], "VehicleCommand") == 0)
  {
    IMC::VehicleCommand* tmsg = new IMC::VehicleCommand;
    msg = tmsg;
    tmsg->type = IMC::VehicleCommand::VC_REQUEST;
    tmsg->command = atoi(argv[4]);

    if (tmsg->command == IMC::VehicleCommand::VC_EXEC_MANEUVER)
      tmsg->maneuver.set(static_cast<IMC::Maneuver*>(IMC::Factory::produce(argv[5])));
  }

  if (strcmp(argv[3], "VehicleMedium") == 0)
  {
    IMC::VehicleMedium* tmsg = new IMC::VehicleMedium;
    msg = tmsg;
    tmsg->medium = atoi(argv[4]);
  }

  double delay=0;
  if(strcmp(argv[3], "teste_wifi_1") == 0)
  {
    if (argc < 6){
      fprintf(stderr, "Error: missing arguments...");
      fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
      fprintf(stderr, "\n arg2 : port (ex: 6002)");
      fprintf(stderr, "\n arg3 : testingmessage (ex: testewifi_1)");
      fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
      fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
      fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
      fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
      fprintf(stderr, "\n");

      return 0;
    }

    logMsg(argv,argc);

    uint16_t id = 0;

    unsigned short sh=0;
    logSystemDuneID(sh,argv);

    fprintf(stdout, "\n destination of message         -> %s",argv[5]);
    unsigned short count = 1;
    logNumberOfMessages(count,argv,argc);

    if(argc == 8){
      delay = -atof(argv[7]);
    }
    fprintf(stdout, "\n delay between transmissions    -> %lf",-delay);
    fprintf(stdout, "\n\n");

    for(int i=0; i<count; i++){
      IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

      IMC::Abort abort;

      tmsg->setSource(sh);
      tmsg->setDestination(sh);
      tmsg->destination     = argv[5];
      tmsg->deadline        = Time::Clock::getSinceEpoch() + (-delay * (i+1)) + 40;
      tmsg->req_id          = id;
      id++;
      tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_WIFI;
      tmsg->data_mode       = IMC::TransmissionRequest::DMODE_INLINEMSG;

      recursive(tmsg,3);

      msg_list->push_back(tmsg);

    }

  }

  if(strcmp(argv[3], "teste_any") == 0)
    {
      if (argc < 6){
        fprintf(stderr, "Error: missing arguments...");
        fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
        fprintf(stderr, "\n arg2 : port (ex: 6002)");
        fprintf(stderr, "\n arg3 : testingmessage (ex: testewifi_1)");
        fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
        fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
        fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
        fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
        fprintf(stderr, "\n");

        return 0;
      }

      logMsg(argv,argc);

      uint16_t id = 0;

      unsigned short sh=0;
      logSystemDuneID(sh,argv);

      fprintf(stdout, "\n destination of message         -> %s",argv[5]);
      unsigned short count = 1;
      logNumberOfMessages(count,argv,argc);

      if(argc == 8){
        delay = -atof(argv[7]);
      }
      fprintf(stdout, "\n delay between transmissions    -> %lf",-delay);
      fprintf(stdout, "\n\n");

      for(int i=0; i<count; i++){
        IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

        IMC::Abort abort;

        tmsg->setSource(sh);
        tmsg->setDestination(sh);
        tmsg->destination     = argv[5];
        tmsg->deadline        = Time::Clock::getSinceEpoch() + (-delay * (i+1)) + rand() % 15;
        tmsg->req_id          = id;
        id++;
        tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_ANY;
        tmsg->data_mode       = IMC::TransmissionRequest::DMODE_INLINEMSG;

        IMC::DevDataText tm;


        char numberstring[(((sizeof i) * CHAR_BIT) + 2)/3 + 2];
        sprintf(numberstring, "%d", i);

        tm.value = std::string("teste any: ") + numberstring;
        tmsg->msg_data.set(tm);

        msg_list->push_back(tmsg);

      }

    }

  if(strcmp(argv[3], "teste_range") == 0)
  {
    if (argc < 6){
      fprintf(stderr, "Error: missing arguments...");
      fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
      fprintf(stderr, "\n arg2 : port (ex: 6002)");
      fprintf(stderr, "\n arg3 : testingmessage (ex: teste_range)");
      fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
      fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
      fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
      fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
      fprintf(stderr, "\n");
      return 0;
    }
    logMsg(argv,argc);

    uint16_t id = 0;

    unsigned short sh=0;
    logSystemDuneID(sh,argv);

    fprintf(stdout, "\n destination of message         -> %s",argv[5]);
    unsigned short count = 1;
    logNumberOfMessages(count,argv,argc);

    if(argc == 8){
      delay = -atof(argv[7]);
    }
    fprintf(stdout, "\n delay between transmissions    -> %lf",-delay);
    fprintf(stdout, "\n\n");


    for(int i=0; i<count; i++){
      IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

      tmsg->setSource(sh);
      tmsg->setDestination(sh);
      tmsg->destination     = argv[5];
      tmsg->deadline        = Time::Clock::getSinceEpoch() + (-delay*(i+1)) +5;
      tmsg->req_id          = id;
      id++;
      tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
      tmsg->data_mode       = IMC::TransmissionRequest::DMODE_RANGE;

      msg_list->push_back(tmsg);

    }

  }
  if(strcmp(argv[3], "teste_abort") == 0)
  {
    if (argc < 6){
      fprintf(stderr, "Error: missing arguments...");
      fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
      fprintf(stderr, "\n arg2 : port (ex: 6002)");
      fprintf(stderr, "\n arg3 : testingmessage (ex: teste_abort)");
      fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
      fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
      fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
      fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
      fprintf(stderr, "\n");
      return 0;
    }
    logMsg(argv,argc);

    uint16_t id = 0;

    unsigned short sh=0;
    logSystemDuneID(sh,argv);

    fprintf(stdout, "\n destination of message         -> %s",argv[5]);
    unsigned short count = 1;
    logNumberOfMessages(count,argv,argc);

    if(argc == 8){
      delay = -atof(argv[7]);
    }
    fprintf(stdout, "\n delay between transmissions    -> %lf",-delay);
    fprintf(stdout, "\n\n");


    for(int i=0; i<count; i++){
      IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

      tmsg->setSource(sh);
      tmsg->setDestination(sh);
      tmsg->destination     = argv[5];
      tmsg->deadline        = Time::Clock::getSinceEpoch() + (-delay*(i+1)) +5;
      tmsg->req_id          = id;
      id++;
      tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
      tmsg->data_mode       = IMC::TransmissionRequest::DMODE_ABORT;

      msg_list->push_back(tmsg);

    }

  }
  if(strcmp(argv[3], "teste_sms") == 0)
    {
      if (argc < 6){
        fprintf(stderr, "Error: missing arguments...");
        fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
        fprintf(stderr, "\n arg2 : port (ex: 6002)");
        fprintf(stderr, "\n arg3 : testingmessage (ex: teste_sms)");
        fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
        fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
        fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
        fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
        fprintf(stderr, "\n");
        return 0;
      }
      logMsg(argv,argc);

      uint16_t id = 0;

      unsigned short sh=0;
      logSystemDuneID(sh,argv);

      fprintf(stdout, "\n destination of message         -> %s",argv[5]);
      unsigned short count = 1;
      logNumberOfMessages(count,argv,argc);

      if(argc == 8){
        delay = -atof(argv[7]);
      }
      fprintf(stdout, "\n delay between transmissions    -> %lf",-delay);
      fprintf(stdout, "\n\n");

      for(int i=0; i<count; i++){
        IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

        tmsg->setSource(sh);
        tmsg->setDestination(sh);
        tmsg->destination     = argv[5];
        tmsg->deadline        = Time::Clock::getSinceEpoch() + (-delay*(i+1)) +5;
        tmsg->req_id          = id;
        id++;
        tmsg->comm_mean       = IMC::TransmissionRequest::CMEAN_GSM;
        tmsg->data_mode       = IMC::TransmissionRequest::DMODE_TEXT;
        tmsg->txt_data        = "Pos";

        msg_list->push_back(tmsg);

      }

    }

  if(strcmp(argv[3], "teste_random") == 0){


    if (argc < 6){
      fprintf(stderr, "Error: missing arguments...");
      fprintf(stderr, "\n arg1 : ip (ex: 127.0.0.1)");
      fprintf(stderr, "\n arg2 : port (ex: 6002)");
      fprintf(stderr, "\n arg3 : testingmessage (ex: teste_random)");
      fprintf(stderr, "\n arg4 : system_receiver_id (ex: 26)");
      fprintf(stderr, "\n arg5 : system_destination_name (ex: lauv-noptilus-1)");
      fprintf(stderr, "\n arg6 (optional) : number_of_messages (ex: 5)");
      fprintf(stderr, "\n arg7 (optional) : set_delay_between_messages (ex: 3.5)");
      fprintf(stderr, "\n");
      return 0;
    }
    logMsg(argv,argc);

        uint16_t id = 0;

        unsigned short sh=0;
        logSystemDuneID(sh,argv);

        fprintf(stdout, "\n destination of message         -> %s",argv[5]);
        unsigned short count = 1;
        logNumberOfMessages(count,argv,argc);

        if(argc == 8){
          delay = atof(argv[7]);
        }
        fprintf(stdout, "\n delay between transmissions    -> %lf",delay);
        fprintf(stdout, "\n\n");


    for(int i=0; i<count; i++){

      IMC::TransmissionRequest* tmsg = new IMC::TransmissionRequest;

      tmsg->setSource(sh);
      tmsg->setDestination(sh);
      tmsg->destination     = argv[5];
      tmsg->deadline        = Time::Clock::getSinceEpoch() + (delay*(i+1)) +5;
      tmsg->req_id          = id;
      id++;
      createRandomMsg(tmsg);

      msg_list->push_back(tmsg);

    }

  }



  if (msg == NULL && msg_list->empty())
  {
    fprintf(stderr, "ERROR: unknown message '%s'\n", argv[3]);
    return 1;
  }

  if(!msg_list->empty()){
    int delay_copy = Math::round(delay * 1000);

    IMC::Message* aux;

    int list_size = msg_list->size();
    for(unsigned int i=0; i < (unsigned int)list_size; i++)
    {

      if(delay>0){
        int dl = rand() % delay_copy + 1;
        sleep(dl);
      }
      else{
        sleep(-delay);

      }

      aux=msg_list->front();
      msg_list->pop_front();

      aux->setTimeStamp();

      uint8_t bfr[1024] = {0};
      uint16_t rv = IMC::Packet::serialize(aux, bfr, sizeof(bfr));

      UDPSocket sock;
      try
      {
        sock.write(bfr, rv, dest, port);
        aux->toText(cerr);
      }
      catch (std::runtime_error& e)
      {
        std::cerr << "ERROR: " << e.what() << std::endl;
        return 1;
      }

      if (aux != NULL)
      {
        delete aux;
        aux = NULL;
      }

    }


    return 0;
  }


  msg->setTimeStamp();

  uint8_t bfr[1024] = {0};
  uint16_t rv = IMC::Packet::serialize(msg, bfr, sizeof(bfr));

  UDPSocket sock;
  try
  {
    sock.write(bfr, rv, dest, port);

    fprintf(stderr, "Raw:");
    for (int i = 0; i < rv; ++i)
      fprintf(stderr, " %02X", bfr[i]);
    fprintf(stderr, "\n");

    msg->toText(cerr);
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
    return 1;
  }

  if (msg != NULL)
  {
    delete msg;
    msg = NULL;
  }

  return 0;
}


