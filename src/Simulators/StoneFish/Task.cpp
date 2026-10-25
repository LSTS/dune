//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// C++ headers.
#include <cstdlib>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Engine.h"
#include "Recorder.h"
#include "Registry.h"
#include "Scenario.h"
#include "Sensors.h"
#include "Vehicle.h"

// Stonefish headers.
#include <Stonefish/core/NED.h>
#include <Stonefish/entities/forcefields/Ocean.h>

namespace Simulators
{
  //! Interface with the Stonefish simulation engine.
  //!
  //! Runs a Stonefish simulation, with or without graphical interface, from a
  //! scenario file. Each robot defined in the scenario replaces a real vehicle
  //! and is exposed to the IMC bus as a distinct system: the task translates
  //! IMC source/destination ids to and from the simulation, so several
  //! vehicles can be simulated at once.
  //!
  //! Every robot is bound to the IMC system that shares its name (the local
  //! vehicle to this node, or a remote one resolved by name / from the
  //! EntityList it announces). Each device of a robot ("lauv-1/imu") is then
  //! dispatched from that vehicle's system id and the entity id the vehicle
  //! reports for it.
  //!
  //! A robot whose name is not a known IMC system (see imc-addresses.ini) is
  //! still simulated, but none of its data is dispatched.
  //!
  //! When no robot is named after this system the task assumes it is running
  //! on a dedicated simulation node, simulating only remote vehicles. If a
  //! vehicle stack turns out to be co-located (this system reports a
  //! VehicleState), this node expected to be simulated and a warning flags
  //! the vehicle name mismatch between the configuration and the scenario
  //! file; actuator commands that cannot be routed to a robot are likewise
  //! reported once per source system.
  //!
  //! Per simulated vehicle the task dispatches:
  //! - SimulatedState with the ground truth state of the robot;
  //! - one IMC message stream per sensor of the scenario, each from an
  //!   entity labelled with the sensor name (e.g. "lauv-1/imu");
  //! - Rpm and ServoPosition as actuator feedback.
  //!
  //! And consumes:
  //! - SetThrusterActuation / SetServoPosition, routed to the robot whose
  //!   system id matches the command source; thrusters, propellers and pushers
  //!   (servos and rudders) are indexed by order of declaration in the
  //!   scenario;
  //! - EntityList, to learn the system and entity ids of each simulated
  //!   vehicle;
  //! - VehicleState, to detect a co-located vehicle stack absent from the
  //!   scenario.
  //!
  //! @author João Bogas
  namespace StoneFish
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Scenario file path.
      std::string scenario;
      //! Graphical interface resolution [px], as a {width, height} pair.
      std::vector<unsigned> graphics_resolution;
      //! Enable graphical interface.
      bool graphics;
      //! Simulation frequency.
      double frequency;
      //! Fixed time step per simulation update [s] (0 = real time).
      double time_step;
      //! Automatically start the simulation after initialization.
      bool auto_start;
      //! Automatically step the simulation.
      bool auto_step;
      //! Synchronize rendering to the display refresh rate (graphical only).
      bool vsync;
      //! Render quality of each graphical effect (Disabled/Low/Medium/High).
      std::string rq_shadows;
      std::string rq_ao;
      std::string rq_atmosphere;
      std::string rq_ocean;
      std::string rq_aa;
      std::string rq_ssr;
      //! Debug overlays drawn by the graphical interface.
      bool show_coord_sys;
      bool show_joints;
      bool show_actuators;
      bool show_sensors;
      bool show_fluid_dynamics;
      bool show_ocean_velocity;
      bool show_forces;
      bool show_bullet_debug;
      //! Actuator feedback frequency.
      double feedback_frequency;
      //! Period of the EntityList query sent to unbound vehicles [s].
      double equery_period;
      //! Dump per-link dynamics once, when the scenario is built.
      bool dump_dynamics;
      //! Linear speed above which the state is flagged as divergent (0 off).
      double max_speed;
      //! Angular speed above which the state is flagged as divergent (0 off).
      double max_rate;
      //! Step-trace logging rate (0 logs every step, -1 disable).
      double log_sim_hz;
      //! Apply the hull body-lift force/moment each physics step.
      bool body_lift;
      //! Apply the added-mass (Munk) coupling each physics step.
      bool munk;
    };

    //! Translate a configuration string to a Stonefish render quality level.
    //! Case-insensitive; throws on an unrecognized value.
    static sf::RenderQuality
    parseRenderQuality(const std::string& value)
    {
      std::string v = String::trim(value);
      String::toLowerCase(v);
      if (v == "disabled")
        return sf::RenderQuality::DISABLED;
      if (v == "low")
        return sf::RenderQuality::LOW;
      if (v == "medium")
        return sf::RenderQuality::MEDIUM;
      if (v == "high")
        return sf::RenderQuality::HIGH;

      throw std::runtime_error("invalid render quality '" + value
                               + "' (expected Disabled/Low/Medium/High)");
    }

    struct Task: public DUNE::Tasks::Task
    {
      //! Resolved path to the scenario file.
      Path m_scenario;
      //! Simulation engine.
      Engine* m_engine;
      //! Simulated vehicles and the IMC address of each of their devices.
      Registry m_registry;
      //! Systems whose commands could not be routed, reported once each.
      std::set<uint32_t> m_unrouted;
      //! True once the configuration/scenario name mismatch was reported.
      bool m_mismatch_warned;
      //! Translates Stonefish sensors into IMC messages.
      SensorBridge m_bridge;
      //! Geodetic origin of the scenario NED frame, set when it is built.
      double m_origin_lat;
      double m_origin_lon;
      double m_origin_height;
      //! Actuator feedback timer.
      Time::Counter<double> m_feedback_timer;
      //! EntityList query timer.
      Time::Counter<double> m_equery_timer;
      //! Resolved directory for the trace files.
      Path m_current_log;
      //! Writes the build snapshot and step trace.
      Recorder m_recorder;
      //! Flag to apply the hull body-lift force/moment each physics step.
      bool m_bodylift;
      //! Hull body-lift coefficients, resolved from m_args.body_lift_coef.
      Vehicle::BodyLift m_bodylift_coef;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_engine(nullptr),
        m_mismatch_warned(false),
        m_bridge(this, m_registry),
        m_origin_lat(0.0),
        m_origin_lon(0.0),
        m_origin_height(0.0),
        m_bodylift(false)
      {
        param("Scenario Path", m_args.scenario)
          .description("Relative path from the configuration directory to the scenario file to be "
                       "loaded in the simulation.");

        param("Enable Graphics", m_args.graphics)
          .defaultValue("true")
          .description("Enable graphical interface for the simulator.");

        param("Simulation Frequency", m_args.frequency)
          .defaultValue("100.0")
          .units(Units::Hertz)
          .description("Physics steps per second of simulated time.");

        param("Time Step", m_args.time_step)
          .defaultValue("0.0")
          .units(Units::Second)
          .description("Fixed time step advanced on each simulation update. "
                       "0 runs in real time.");

        param("Auto Start", m_args.auto_start)
          .defaultValue("true")
          .description("Start the simulation automatically after initialization.");

        param("Auto Step", m_args.auto_step)
          .defaultValue("true")
          .description("Step the simulation automatically.");

        // --- graphical only (ignored in console mode) ---
        param("Graphics Resolution", m_args.graphics_resolution)
          .defaultValue("1280, 720")
          .description("Window resolution of the graphical interface, as a "
                       "width, height pair in pixels. Ignored in console mode.");

        param("Vertical Sync", m_args.vsync)
          .defaultValue("false")
          .description("Synchronize rendering to the display refresh rate. "
                       "Graphical mode only.");

        param("Render Quality -- Shadows", m_args.rq_shadows)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Shadow rendering quality. Graphical mode only.");

        param("Render Quality -- Ambient Occlusion", m_args.rq_ao)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Ambient occlusion rendering quality. Graphical mode only.");

        param("Render Quality -- Atmosphere", m_args.rq_atmosphere)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Atmosphere rendering quality. Graphical mode only.");

        param("Render Quality -- Ocean", m_args.rq_ocean)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Ocean rendering quality. Graphical mode only.");

        param("Render Quality -- Anti-Aliasing", m_args.rq_aa)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Anti-aliasing rendering quality. Graphical mode only.");

        param("Render Quality -- SSR", m_args.rq_ssr)
          .defaultValue("Medium")
          .values("Disabled, Low, Medium, High")
          .description("Screen-space reflections quality. Graphical mode only.");

        // --- debug overlays (graphical only) ---
        param("Show Coordinate Systems", m_args.show_coord_sys)
          .defaultValue("false")
          .description("Draw coordinate system frames. Graphical mode only.");

        param("Show Joints", m_args.show_joints)
          .defaultValue("false")
          .description("Draw joint markers. Graphical mode only.");

        param("Show Actuators", m_args.show_actuators)
          .defaultValue("false")
          .description("Draw actuator markers. Graphical mode only.");

        param("Show Sensors", m_args.show_sensors)
          .defaultValue("false")
          .description("Draw sensor markers. Graphical mode only.");

        param("Show Fluid Dynamics", m_args.show_fluid_dynamics)
          .defaultValue("false")
          .description("Draw hydrodynamic force vectors. Graphical mode only.");

        param("Show Ocean Velocity Field", m_args.show_ocean_velocity)
          .defaultValue("false")
          .description("Draw the ocean current velocity field. Graphical mode only.");

        param("Show Forces", m_args.show_forces)
          .defaultValue("false")
          .description("Draw applied force vectors. Graphical mode only.");

        param("Show Bullet Debug Info", m_args.show_bullet_debug)
          .defaultValue("false")
          .description("Draw the Bullet physics debug overlay. Graphical mode only.");

        param("Feedback Frequency", m_args.feedback_frequency)
          .defaultValue("10.0")
          .units(Units::Hertz)
          .description("Frequency of actuator feedback (Rpm and ServoPosition).");

        param("Entity Query Period", m_args.equery_period)
          .defaultValue("5.0")
          .units(Units::Second)
          .description("Period of the EntityList query sent to simulated vehicles "
                       "that have not announced their entities yet, so vehicles "
                       "running on other DUNE nodes are bound without manual "
                       "action. 0 disables the query.");

        param("Dump Dynamics", m_args.dump_dynamics)
          .defaultValue("true")
          .description("Log the per-link mass, inertia, added mass, volume and "
                       "buoyancy computed by Stonefish once the scenario is built.");

        param("Hull Body Lift", m_args.body_lift)
          .defaultValue("true")
          .description("Apply a lifting-body force and moment to the hull each "
                       "physics step. Adds the sideslip-driven turning moment and "
                       "lateral lift that the mesh hydrodynamics miss; without it "
                       "the hull over-damps yaw and the vehicle skids through turns.");

        param("Hull Munk Moment", m_args.munk)
          .defaultValue("false")
          .description("Apply the added-mass (Munk) coupling force and moment each "
                       "physics step. Stonefish integrates one isotropic added mass, "
                       "so the destabilising Munk yaw/pitch moments of a slender "
                       "hull are otherwise absent. When enabled, 'Hull Body Lift "
                       "Coefficients' should carry only the viscous lift share.");

        param("Divergence - Maximum Speed", m_args.max_speed)
          .defaultValue("25.0")
          .units(Units::MeterPerSecond)
          .description("Linear speed above which the simulated state is reported "
                       "as divergent (numerical-instability guard). 0 disables.");

        param("Divergence - Maximum Rate", m_args.max_rate)
          .defaultValue("25.0")
          .units(Units::RadianPerSecond)
          .description("Angular speed above which the simulated state is reported "
                       "as divergent. 0 disables.");

        param("Simulation Logging - Frequency", m_args.log_sim_hz)
          .defaultValue("-1.0")
          .units(Units::Hertz)
          .description("Rate at which step records are appended to the trace. 0 logs every "
                       "physics step. -1 logging disabled");

        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::EntityList>(this);
        bind<IMC::VehicleState>(this);

        m_current_log = m_ctx.dir_log / getSystemName();
      }

      void
      validateScenario(void)
      {
        m_scenario = m_ctx.dir_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        m_scenario = m_ctx.dir_usr_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        throw RestartNeeded("Invalid parameter 'Scenario Path': " + m_args.scenario, 5);
      }

      void
      validateGraphics(void)
      {
        if (m_args.graphics_resolution.size() != 2)
          throw RestartNeeded("Invalid parameter 'Graphics Resolution': expected "
                              "two values (width, height)",
                              5);

        try
        {
          renderSettings();
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(std::string("Invalid parameter 'Render Quality': ") + e.what(), 5);
        }
      }

      void
      validateBodyLift(void)
      {
        Parsers::Config& cfg = m_ctx.config;

        std::string model;
        cfg.get("General", "Vehicle Type", "lauv", model);
        std::string section = "StoneFish/Model/" + model;

        bool has_bodylift =
          cfg.getList(section, "Hull Body Lift Coefficients", m_bodylift_coef.data, 8);
        m_bodylift = m_args.body_lift && has_bodylift;
        if (m_args.body_lift && !has_bodylift)
          war("no 8-value 'Hull Body Lift Coefficients' in [%s], body lift disabled",
              section.c_str());
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_feedback_timer.setTop(1.0 / m_args.feedback_frequency);
        m_equery_timer.setTop(m_args.equery_period);

        m_recorder.setFrequency(m_args.log_sim_hz);
        if (!m_recorder.isOpen())
          m_recorder.open(m_current_log, m_args.log_sim_hz);

        validateGraphics();
        validateBodyLift();
        validateScenario();

        // Stonefish consumes these once, at SimulationApp construction, and the
        // running simulation cannot be reconfigured (the GL window in
        // particular). Rebuild the engine cleanly if any of them changes.
        if (m_engine != nullptr
            && (paramChanged(m_args.graphics) || paramChanged(m_args.frequency)
                || paramChanged(m_args.time_step) || paramChanged(m_args.auto_start)
                || paramChanged(m_args.auto_step) || paramChanged(m_args.graphics_resolution)
                || paramChanged(m_args.vsync) || paramChanged(m_args.rq_shadows)
                || paramChanged(m_args.rq_ao) || paramChanged(m_args.rq_atmosphere)
                || paramChanged(m_args.rq_ocean) || paramChanged(m_args.rq_aa)
                || paramChanged(m_args.rq_ssr) || paramChanged(m_args.show_coord_sys)
                || paramChanged(m_args.show_joints) || paramChanged(m_args.show_actuators)
                || paramChanged(m_args.show_sensors) || paramChanged(m_args.show_fluid_dynamics)
                || paramChanged(m_args.show_ocean_velocity) || paramChanged(m_args.show_forces)
                || paramChanged(m_args.show_bullet_debug)))
          throw RestartNeeded("simulation settings changed, rebuilding", 1);
      }

      //! True if a scenario device belongs to this system, so its entity is
      //! reserved locally: a device of the robot named after this system, or
      //! a top-level device of the scenario. Devices of other robots are
      //! remote systems: their ids are learned from the EntityList they
      //! announce.
      bool
      isLocalDevice(const Scenario::Device& device) const
      {
        return device.robot.empty() || device.robot == getSystemName();
      }

      void
      reserveLocalEntity(const Scenario::Device& sensor)
      {
        try
        {
          Entities::StatefulEntity* entity = reserveEntity<Entities::StatefulEntity>(sensor.name);
          m_registry.setDevice(sensor.fullName(), { getSystemId(), entity->getId() });

          // TODO: Simulate state when dispatching data from device
          //? Add option to disable data device -> stop dispatching data -> state go idle
          // TODO: Dispatch date depending on device state (service, maneuver)
          entity->setState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
          entity->setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          debug("reserved system (%s) entity '%s' (%s)", sensor.robot.c_str(), sensor.name.c_str(),
                sensor.type.c_str());
        }
        catch (const std::exception& e)
        {
          war("failed to reserve entity '%s': %s", sensor.name.c_str(), e.what());
        }
      }

      //! Reserve one entity per local device declared in the scenario, so that
      //! each sensor and actuator dispatches from its own entity. Devices of
      //! other simulated vehicles are translated from their EntityList instead.
      void
      onEntityReservation(void)
      {
        std::vector<Scenario::Device> devices;
        try
        {
          devices = Scenario::scan(m_scenario.str());
        }
        catch (const std::exception& e)
        {
          war("scenario scan failed, devices will not be dispatched: %s", e.what());
          return;
        }

        for (const Scenario::Device& device : devices)
        {
          if (isLocalDevice(device))
          {
            reserveLocalEntity(device);
            continue;
          }

          // Remote vehicle: its entities live on another system. Seed the
          // system id (resolved by name now, e.g. from the address book) so
          // sensor data is at least attributed to the right vehicle; the
          // entity id is refined when the vehicle announces its EntityList.
          unsigned id = resolveSystemName(device.robot);
          if (!IMC::AddressResolver::isValid(id))
            continue;  // Reported once per robot, when the scenario is built.

          m_registry.setDevice(device.fullName(), { id, DUNE_IMC_CONST_UNK_EID });

          debug("device '%s' belongs to remote vehicle '%s', will translate "
                "from its EntityList",
                device.name.c_str(), device.robot.c_str());
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_engine);
      }

      void
      stopImpl(void)
      {
        Thread::stopImpl();

        if (m_engine != nullptr)
          m_engine->exit();
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {
          m_current_log = m_ctx.dir_log / msg->name;
          m_recorder.open(m_current_log, m_args.log_sim_hz);
        }
      }

      //! Resolve the simulated vehicle an inbound command is addressed to,
      //! from the source system id of the command: the robot that represents
      //! that system. Commands that cannot be routed are dropped; the first
      //! drop per system is reported, as commands from this very system mean
      //! the co-located stack expects to be simulated but no scenario robot
      //! is named after it — a configuration/scenario vehicle name mismatch.
      Vehicle*
      routeVehicle(uint32_t source)
      {
        SimVehicle* sv = m_registry.findBySystem(source);
        if (sv != nullptr)
          return sv->vehicle.get();

        // Commands queued before the scenario is built cannot be judged yet.
        if (m_registry.getVehicles().empty())
          return nullptr;

        if (m_unrouted.insert(source).second)
        {
          if (source == getSystemId())
            war("dropping actuator commands of this system: '%s' is not a "
                "robot of the scenario (robots: %s) — vehicle name mismatch "
                "between the configuration and the scenario file?",
                getSystemName(), m_registry.getNames().c_str());
          else
            trace("ignoring actuator commands from '%s': not a robot of the "
                  "scenario",
                  resolveSystemId(source));
        }

        return nullptr;
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        Vehicle* vehicle = routeVehicle(msg->getSource());
        if (vehicle != nullptr)
          vehicle->setThrust(msg->id, msg->value);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        Vehicle* vehicle = routeVehicle(msg->getSource());
        if (vehicle != nullptr)
          vehicle->setServo(msg->id, msg->value);
      }

      //! Detect a vehicle name mismatch between the configuration and the
      //! scenario file. A VehicleState from this very system means a vehicle
      //! supervisor is co-located with the simulator, so this system expects
      //! to be simulated — if no scenario robot is named after it, the
      //! scenario drives another vehicle and the local stack is left blind.
      //! A dedicated simulation node runs no supervisor and never warns.
      void
      consume(const IMC::VehicleState* msg)
      {
        if (m_mismatch_warned || msg->getSource() != getSystemId())
          return;

        if (m_registry.getVehicles().empty() || m_registry.getLocal() != nullptr)
          return;

        m_mismatch_warned = true;
        war("this system '%s' runs a vehicle stack but is not a robot of the "
            "scenario (robots: %s) — vehicle name mismatch between the "
            "configuration and the scenario file?",
            getSystemName(), m_registry.getNames().c_str());
      }

      //! Translate the ids a simulated vehicle announces into the dispatch
      //! mapping. Each of the vehicle's devices (robot/sensor) is bound to the
      //! vehicle's system id and the entity id it reports, so its sensor data
      //! is dispatched as coming from the vehicle itself (e.g. "lauv-1/imu" ->
      //! source lauv-1, the vehicle's imu entity). The system id is recorded so
      //! the vehicle's actuator commands route back to its robot.
      void
      consume(const IMC::EntityList* msg)
      {
        if (msg->getSource() == getSystemId())
          return;

        if (msg->op != IMC::EntityList::OP_REPORT)
          return;

        const SimVehicle* known = m_registry.findBySystem(msg->getSource());
        const bool first = known == nullptr || !known->bound;

        TupleList tuples(msg->list);
        SimVehicle* sv = m_registry.bindEntities(resolveSystemId(msg->getSource()),
                                                 msg->getSource(), tuples.getMap());
        if (sv != nullptr && first)
          inf("vehicle '%s' bound to system %u", sv->name.c_str(), sv->system_id);
      }

      //! Query the EntityList of simulated vehicles that have not announced
      //! their entities yet, so vehicles running on other DUNE nodes are
      //! bound without manual action: the Daemon of each vehicle answers
      //! with a report addressed back to this system.
      void
      queryEntities(void)
      {
        if (m_args.equery_period <= 0.0 || !m_equery_timer.overflow())
          return;

        m_equery_timer.reset();

        for (const std::unique_ptr<SimVehicle>& sv : m_registry.getVehicles())
        {
          if (sv->bound || !sv->hasSystem())
            continue;

          IMC::EntityList query;
          query.op = IMC::EntityList::OP_QUERY;
          query.setDestination(sv->system_id);
          dispatch(query);
          trace("querying entities of vehicle '%s'", sv->name.c_str());
        }
      }

      //! Register a robot of the scenario as a simulated vehicle. The robot
      //! named after this system is the local one; the others are remote
      //! systems, resolved by name from the address book and bound to their
      //! entities once they announce their EntityList. A robot whose name
      //! does not resolve is simulated, but none of its data is dispatched.
      void
      addVehicle(sf::Robot* robot)
      {
        const std::string name = robot->getName();
        const bool local = name == getSystemName();
        const unsigned id = local ? getSystemId() : resolveSystemName(name);

        SimVehicle& sv = m_registry.addVehicle(robot, id, local);
        sv.sstate.lat = Angles::radians(m_origin_lat);
        sv.sstate.lon = Angles::radians(m_origin_lon);
        sv.sstate.height = m_origin_height;

        if (sv.hasSystem())
          inf("simulating vehicle '%s'%s", name.c_str(), local ? " (local)" : "");
        else
          war("vehicle '%s' is not a known IMC system (imc-addresses.ini), "
              "its data will not be dispatched",
              name.c_str());
      }

      //! Collect the resources of the built scenario: the robot to
      //! control, the sensors to translate and the geodetic origin.
      //! Runs in the simulation thread, once, before the first step.
      void
      onBuild(sf::SimulationManager& sim)
      {
        consumeMessages();

        // The scenario NED origin is the geodetic reference of all
        // positions dispatched by this task.
        sf::Scalar lat, lon, height;
        sim.getNED()->Ned2Geodetic(0, 0, 0, lat, lon, height);
        m_origin_lat = lat;
        m_origin_lon = lon;
        m_origin_height = height;

        sf::Ocean* ocean = sim.getOcean();
        const double water_density = ocean != nullptr ? ocean->getLiquid().density : 1000.0;

        for (unsigned i = 0; sim.getRobot(i) != nullptr; i++)
          addVehicle(sim.getRobot(i));

        if (m_registry.getVehicles().empty())
          war("scenario has no robot, only sensors will be dispatched");
        else if (m_registry.getLocal() == nullptr)
          inf("this system is not a robot of the scenario (robots: %s); "
              "acting as a dedicated simulation node",
              m_registry.getNames().c_str());

        for (const std::unique_ptr<SimVehicle>& sv : m_registry.getVehicles())
        {
          if (m_args.dump_dynamics)
          {
            sv->vehicle->logDynamics(water_density);
            logBuild(*sv->vehicle, water_density, lat, lon, height);
          }
        }

        m_bridge.bind(sim);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      logBuild(const Vehicle& vehicle, double water_density, double lat, double lon, double height)
      {
        try
        {
          FileSystem::Path build_log = m_current_log / vehicle.getName() + ".json";
          m_recorder.logBuild(build_log, m_args.scenario, vehicle, water_density, lat, lon, height);
          inf("writing simulation trace to %s", build_log.c_str());
        }
        catch (const std::exception& e)
        {
          war("simulation trace disabled: %s", e.what());
        }
      }

      //! Exchange data with the simulation: apply pending actuator
      //! setpoints and dispatch the new state of the world.
      //! Runs in the simulation thread, after every physics step.
      void
      onStep(sf::SimulationManager& sim)
      {
        // The task thread is blocked running the simulation, so incoming
        // messages are consumed here, in the simulation thread.
        consumeMessages();

        m_bridge.poll();

        if (m_registry.getVehicles().empty())
          return;

        queryEntities();

        const bool feedback = m_feedback_timer.overflow();
        if (feedback)
          m_feedback_timer.reset();

        for (const std::unique_ptr<SimVehicle>& sv : m_registry.getVehicles())
        {
          sv->vehicle->applySetpoints();
          dispatchState(sim, *sv);
          if (feedback)
            dispatchFeedback(*sv);
        }

        SimVehicle* local = m_registry.getLocal();
        if (m_recorder.isOpen() && local != nullptr)
          m_recorder.logStep(sim.getSimulationTime(), *local->vehicle);
      }

      //! Apply the hull body-lift and added-mass (Munk) force/moment for
      //! the current state.
      //! Runs in the simulation thread, once per physics sub-step, before
      //! Bullet integrates it (see SimManager::PreTickCallback).
      void
      onPreTick(sf::SimulationManager&)
      {
        for (const std::unique_ptr<SimVehicle>& sv : m_registry.getVehicles())
        {
          if (m_bodylift)
            sv->vehicle->applyBodyLift(m_bodylift_coef);
          if (m_args.munk)
            sv->vehicle->applyMunk();
        }
      }

      //! Dispatch the ground truth state of the robot.
      //! True if any component of a vector is NaN or infinite.
      static bool
      isFinite(const sf::Vector3& v)
      {
        return std::isfinite(v.x()) && std::isfinite(v.y()) && std::isfinite(v.z());
      }

      //! Guard against numerical divergence: detect NaN/infinity or an
      //! implausibly large velocity in the robot state. On the first
      //! occurrence report the offending values and the simulation time and
      //! mark the entity in error. Returns false once the state is bad
      bool
      stateIsSane(SimVehicle& sv, const Vehicle::State& s, double t)
      {
        const double v = s.linearVelocity.length();
        const double w = s.angularVelocity.length();

        const bool finite = isFinite(s.position) && isFinite(s.orientation)
                            && isFinite(s.linearVelocity) && isFinite(s.angularVelocity);
        const bool fast = (m_args.max_speed > 0.0 && v > m_args.max_speed)
                          || (m_args.max_rate > 0.0 && w > m_args.max_rate);

        if (finite && !fast)
          return true;

        if (!sv.diverged)
        {
          sv.diverged = true;
          err("vehicle '%s' diverged at t=%.3f s: |v|=%g m/s, |w|=%g rad/s%s "
              "(position [%g, %g, %g])",
              sv.name.c_str(), t, v, w, finite ? "" : ", NaN/Inf", s.position.x(), s.position.y(),
              s.position.z());
          setEntityState(IMC::EntityState::ESTA_ERROR, "simulation diverged");
        }
        return false;
      }

      void
      dispatchState(sf::SimulationManager& sim, SimVehicle& sv)
      {
        const Vehicle::State state = sv.vehicle->getState();

        if (!stateIsSane(sv, state, sim.getSimulationTime()))
          return;

        // Not an IMC system: dispatching would mislabel the data.
        if (!sv.hasSystem())
          return;

        IMC::SimulatedState& ss = sv.sstate;

        // TODO: Update lat, lon if vehicle goes far from origin
        ss.x = state.position.x();
        ss.y = state.position.y();
        ss.z = state.position.z();

        ss.phi = Angles::normalizeRadian(state.orientation.x());
        ss.theta = Angles::normalizeRadian(state.orientation.y());
        ss.psi = Angles::normalizeRadian(state.orientation.z());

        ss.u = state.linearVelocity.x();
        ss.v = state.linearVelocity.y();
        ss.w = state.linearVelocity.z();

        ss.p = state.angularVelocity.x();
        ss.q = state.angularVelocity.y();
        ss.r = state.angularVelocity.z();

        sf::Ocean* ocean = sim.getOcean();
        if (ocean != nullptr)
        {
          const sf::Vector3 stream = ocean->GetFluidVelocity(state.position);
          ss.svx = stream.x();
          ss.svy = stream.y();
          ss.svz = stream.z();
        }

        ss.setSource(sv.system_id);
        ss.setSourceEntity(getEntityId());
        ss.setDestination(sv.system_id);
        dispatch(ss, Tasks::DF_KEEP_SRC_EID);
      }

      //! Dispatch actuator feedback for one vehicle: Rpm for each rotating
      //! thrust actuator and ServoPosition for each servo, stamped with the
      //! vehicle's system id.
      void
      dispatchFeedback(SimVehicle& sv)
      {
        Vehicle& vehicle = *sv.vehicle;

        for (size_t i = 0; i < vehicle.getThrusterCount(); i++)
        {
          double rpm;
          if (!vehicle.getThrusterRpm(i, rpm))
            continue;

          IMC::Rpm msg;
          msg.value = (int16_t)std::lround(rpm);

          DeviceInfo info;
          if (!m_registry.resolve(vehicle.getThrusterName(i), info))
            continue;

          msg.setSource(info.system_id);
          msg.setSourceEntity(info.entity_id);
          msg.setDestination(info.system_id);
          dispatch(msg, Tasks::DF_KEEP_SRC_EID);
        }

        for (size_t i = 0; i < vehicle.getServoCount(); i++)
        {
          IMC::ServoPosition msg;
          msg.id = i;
          msg.value = vehicle.getServoPosition(i);

          DeviceInfo info;
          if (!m_registry.resolve(vehicle.getServoName(i), info))
            continue;

          msg.setSource(info.system_id);
          msg.setSourceEntity(info.entity_id);
          msg.setDestination(info.system_id);
          dispatch(msg, Tasks::DF_KEEP_SRC_EID);
        }
      }

      //! Build the Stonefish render settings from the configuration.
      //! Only consumed in graphical mode.
      sf::RenderSettings
      renderSettings(void) const
      {
        sf::RenderSettings r;
        r.windowW = (GLint)m_args.graphics_resolution.at(0);
        r.windowH = (GLint)m_args.graphics_resolution.at(1);
        r.verticalSync = m_args.vsync;
        r.shadows = parseRenderQuality(m_args.rq_shadows);
        r.ao = parseRenderQuality(m_args.rq_ao);
        r.atmosphere = parseRenderQuality(m_args.rq_atmosphere);
        r.ocean = parseRenderQuality(m_args.rq_ocean);
        r.aa = parseRenderQuality(m_args.rq_aa);
        r.ssr = parseRenderQuality(m_args.rq_ssr);
        return r;
      }

      //! Build the Stonefish helper (debug overlay) settings from the
      //! configuration. Only consumed in graphical mode.
      sf::HelperSettings
      helperSettings(void) const
      {
        sf::HelperSettings h;
        h.showCoordSys = m_args.show_coord_sys;
        h.showJoints = m_args.show_joints;
        h.showActuators = m_args.show_actuators;
        h.showSensors = m_args.show_sensors;
        h.showFluidDynamics = m_args.show_fluid_dynamics;
        h.showOceanVelocityField = m_args.show_ocean_velocity;
        h.showForces = m_args.show_forces;
        h.showBulletDebugInfo = m_args.show_bullet_debug;
        return h;
      }

      //! Run the simulation until it terminates. Stonefish steps the
      //! physics in a dedicated thread and this thread runs the console
      //! or rendering loop, so this call only returns on shutdown.
      void
      runSim(void)
      {
        inf("using scenario file: %s", m_scenario.c_str());
        inf("graphics %s", m_args.graphics ? "enabled" : "disabled");

        SimMode mode = m_args.graphics ? SimMode::GRAPHICAL : SimMode::CONSOLE;
        simCallback onStepCb = std::bind(&Task::onStep, this, std::placeholders::_1);
        simCallback onBuildCb = std::bind(&Task::onBuild, this, std::placeholders::_1);
        simCallback onPreTickCb = std::bind(&Task::onPreTick, this, std::placeholders::_1);

        m_engine = new Engine(mode, m_scenario, m_args.frequency, renderSettings(),
                              helperSettings(), onStepCb, onBuildCb, onPreTickCb);
        m_engine->start(m_args.auto_step, m_args.time_step, m_args.auto_start);
      }

      //! Main loop.
      void
      onMain(void)
      {
        try
        {
          runSim();
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(e.what(), 10);
        }

        if (!stopping())
        {
          war("Stonefish simulation stopped! Stopping DUNE ...");
          raise(SIGTERM);
        }

        // wait for stop signal
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
