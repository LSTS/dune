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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined (DUNE_SYS_HAS_SIGNAL_H)
#  include <signal.h>
#endif

using DUNE_NAMESPACES;

UDPSocket g_sock;
Address g_addr;
uint16_t g_port = 6002;
uint8_t g_buffer[4096];
bool g_stop = false;

// POSIX implementation.
#if defined(DUNE_OS_POSIX)
extern "C" void
handleTerminate(int signo)
{
  switch (signo)
  {
    case SIGINT:
    case SIGTERM:
      g_stop = true;
  }
}

#endif

void
sendMessage(IMC::Message& msg)
{
  uint16_t rv = IMC::Packet::serialize(&msg, g_buffer, sizeof(g_buffer));
  g_sock.write(g_buffer, rv, g_addr, g_port);
  msg.toText(std::cerr);
}

void
setLog(const char* log_name)
{
  IMC::LoggingControl lc;
  lc.setTimeStamp();
  lc.op = IMC::LoggingControl::COP_REQUEST_START;
  lc.name = log_name;
  sendMessage(lc);
}

void
setThrust(double value)
{
  IMC::SetThrusterActuation tc;
  tc.setTimeStamp();
  tc.value = value;
  sendMessage(tc);
}

void
setFin(unsigned id, double value)
{
  IMC::SetServoPosition sc;
  sc.setTimeStamp();
  sc.id = id;
  sc.value = Angles::radians(value);
  sendMessage(sc);
}

void
onTerminate(void)
{
  setThrust(0);

  for (unsigned i = 0; i < 4; ++i)
    setFin(i, 0);
}

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable("dune-test-tail")
  .program(DUNE_SHORT_NAME)
  .copyright(DUNE_COPYRIGHT)
  .email(DUNE_CONTACT)
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .add("-i", "--address",
       "Vehicle's IP address", "ADDRESS")
  .add("-w", "--wait",
       "Wait DELAY seconds before starting test", "DELAY")
  .add("-d", "--duration",
       "Test duration in seconds", "DURATION")
  .add("-s", "--speed",
       "Speed in percentage", "SPEED")
  .add("-t", "--angle",
       "Angle in degrees", "ANGLE");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Set destination address.
  if (options.value("--address") == "")
    g_addr = "127.0.0.1";
  else
    g_addr = options.value("--address").c_str();

  // Set start delay.
  double sdelay = 0;
  if (options.value("--wait") == "")
    sdelay = 0;
  else
    sdelay = castLexical<double>(options.value("--wait"));

  // Set duration.
  double duration = 0;
  if (options.value("--duration") == "")
    duration = 0;
  else
    duration = castLexical<double>(options.value("--duration"));

  // Set speed.
  double speed = 0;
  if (options.value("--speed") == "")
    speed = 0;
  else
  {
    speed = castLexical<double>(options.value("--speed"));
    speed /= 100.0;
  }

  // Set Angle
  double angle = 0;
  if (options.value("--angle") == "")
    angle = 0;
  else
    angle = castLexical<double>(options.value("--angle"));

  // POSIX implementation.
#if defined(DUNE_SYS_HAS_SIGACTION)
  struct sigaction actions;
  std::memset(&actions, 0, sizeof(actions));
  sigemptyset(&actions.sa_mask);
  actions.sa_flags = 0;
  actions.sa_handler = handleTerminate;
  sigaction(SIGALRM, &actions, 0);
  sigaction(SIGHUP, &actions, 0);
  sigaction(SIGINT, &actions, 0);
  sigaction(SIGQUIT, &actions, 0);
  sigaction(SIGTERM, &actions, 0);
  sigaction(SIGCHLD, &actions, 0);
  sigaction(SIGCONT, &actions, 0);
#endif

  setThrust(0);
  Delay::wait(sdelay);

  setLog("mcrt_endurance");
  Delay::wait(2.0);

  double deadline = Clock::get() + duration;
  setThrust(speed);

  while ((Clock::get() < deadline) && !g_stop)
  {
    setFin(0, -angle);
    setFin(1, -angle);
    setFin(2, -angle);
    setFin(3, -angle);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);

    setFin(0, angle);
    setFin(1, angle);
    setFin(2, angle);
    setFin(3, angle);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);

    if (!g_stop)
      Delay::wait(1.0);
  }

  // Change log.
  Delay::wait(2.0);
  setLog("idle");

  onTerminate();

  return 0;
}
