//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
//***************************************************************************
// Automatically generated                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <cstring>

// DUNE headers.
#include <DUNE/Tasks/Factory.hpp>

DUNE::Tasks::Task* createActuatorsAMCTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsBroomTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsFLIRPTUTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsLED4RTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsMCD4RTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsMicroCamDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsPWMTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsSCRTv4Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsSIMCT01Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsSingleSIMCT01Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createActuatorsTorqeedoTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createAutonomyOnEventTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createAutonomyTREXTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createAutonomyTextActionsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlASVHeadingAndSpeedTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlASVRemoteOperationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVAllocatorTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVAttitudeTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVDivingTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVLMITask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVRemoteOperationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAUVSpeedTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlAntennaTrackerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlPathHeightTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlPathILOSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlPathLOSnSMCTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlPathPurePursuitTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlPathVectorFieldTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlROVDepthTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlROVHorizontalPlaneTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlROVRemoteOperationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlUAVArdupilotTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlUAVLOSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlUAVPX4Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createControlUAVRemoteOperationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverCommsRelayTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverCompassCalibrationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverCoverAreaTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverFollowReferenceAUVTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverFollowReferenceUAVTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverFollowSystemTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverFollowTrajectoryTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverMultiplexerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverRowsCoverageTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverTeleoperationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createManeuverVehicleFormationSMCTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsClockTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsCollisionsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsEmergencyTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsEntitiesTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsFuelLevelTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsMantaFuelLevelTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsMediumTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsOperationalLimitsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createMonitorsServosTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createNavigationAUVNavigationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createNavigationAUVRangerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createNavigationGeneralGPSNavigationTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createNavigationGeneralLBLTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createNavigationGeneralROVTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPlanDBTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPlanEngineTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPlanGeneratorTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerAPDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerBATMANv2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerCPMBTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerCPMBHTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerCPMBv2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerDOAMv1Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerDOAMv2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerLUEMBTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerMCBv2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerOPCONTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerPCTLv2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createPowerPSIMARTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsAIM104MultiIOTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsAISTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsCyclopsC7Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsDMSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsDataStoreTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsEdgetech2205Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsEmulatedGPSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsGPSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsGenesysTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsGillWindObserverIITask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsIFOGTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsImagenex837BTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsImagenex852Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsImagenex872Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsImagenex881ATask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsKellerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsLIMUTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMLBLTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMLBLTrackerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMTiTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMetrecXTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMicrostrain3DMGX1Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMicrostrain3DMGX3Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsMiniSVSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsOEMXTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsOS4000Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsSADCTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsSCH311XTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsSW100Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsSonTekArgonautTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsThermalZoneTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsV104setupTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsVantagePro2Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsWifiRSSITask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsXR620CTDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSensorsXchangeSVTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsAcousticModemTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsCDC3Task(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsCTDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsDVLTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsDepthSensorTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsDockingTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsEnvironmentTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsGPSTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsGaussianTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsIMUTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsIridiumTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsLBLTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsLeaksTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsMotorTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsServosTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsStreamVelocityTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsTargetTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsUAVTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsUAVAutopilotTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsUSBLTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSimulatorsVSIMTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsAUVAssistTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsAUVLostCommsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsDelegatorTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsEntitiesTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsPowerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsPowerManagerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsReporterTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsSlaveCPUTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsStratoPIWatchdogTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsUAVLostCommsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createSupervisorsVehicleTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsAnnounceTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsCacheTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsCommManagerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsDataStoreTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsDiscoveryTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsEvologicsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsFTPTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsFragmentsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsGSMTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsHTTPTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsIridiumTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsIridiumSBDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsLogBookTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsLoggingTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsLoggingDigestTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsMobileInternetTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsRadioTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsReplayTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsSeatracTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsSerialTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsSerialOverTCPTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsTCPClientTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsTCPServerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsTCPOnDemandTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsUANTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTransportsUDPTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createTutorialPlanVisitTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createUserInterfacesButtonsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createUserInterfacesLCDTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createUserInterfacesLEDsTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createUserInterfacesMantaPanelTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionDFK51BG02HTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionFrameGrabberTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionLumeneraTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionPhotoTriggerTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionPointGreyTask(const std::string&, DUNE::Tasks::Context&);
DUNE::Tasks::Task* createVisionUAVCameraTask(const std::string&, DUNE::Tasks::Context&);


void
registerStaticTasks(void)
{
DUNE::Tasks::Factory::registerStaticTask("Actuators.AMC", createActuatorsAMCTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.Broom", createActuatorsBroomTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.FLIRPTU", createActuatorsFLIRPTUTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.LED4R", createActuatorsLED4RTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.MCD4R", createActuatorsMCD4RTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.MicroCamD", createActuatorsMicroCamDTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.PWM", createActuatorsPWMTask);
DUNE::Tasks::Factory::registerStaticTask("Actuators.SCRTv4", createActuatorsSCRTv4Task);
DUNE::Tasks::Factory::registerStaticTask("Actuators.SIMCT01", createActuatorsSIMCT01Task);
DUNE::Tasks::Factory::registerStaticTask("Actuators.SingleSIMCT01", createActuatorsSingleSIMCT01Task);
DUNE::Tasks::Factory::registerStaticTask("Actuators.Torqeedo", createActuatorsTorqeedoTask);
DUNE::Tasks::Factory::registerStaticTask("Autonomy.OnEvent", createAutonomyOnEventTask);
DUNE::Tasks::Factory::registerStaticTask("Autonomy.TREX", createAutonomyTREXTask);
DUNE::Tasks::Factory::registerStaticTask("Autonomy.TextActions", createAutonomyTextActionsTask);
DUNE::Tasks::Factory::registerStaticTask("Control.ASV.HeadingAndSpeed", createControlASVHeadingAndSpeedTask);
DUNE::Tasks::Factory::registerStaticTask("Control.ASV.RemoteOperation", createControlASVRemoteOperationTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.Allocator", createControlAUVAllocatorTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.Attitude", createControlAUVAttitudeTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.Diving", createControlAUVDivingTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.LMI", createControlAUVLMITask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.RemoteOperation", createControlAUVRemoteOperationTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AUV.Speed", createControlAUVSpeedTask);
DUNE::Tasks::Factory::registerStaticTask("Control.AntennaTracker", createControlAntennaTrackerTask);
DUNE::Tasks::Factory::registerStaticTask("Control.Path.Height", createControlPathHeightTask);
DUNE::Tasks::Factory::registerStaticTask("Control.Path.ILOS", createControlPathILOSTask);
DUNE::Tasks::Factory::registerStaticTask("Control.Path.LOSnSMC", createControlPathLOSnSMCTask);
DUNE::Tasks::Factory::registerStaticTask("Control.Path.PurePursuit", createControlPathPurePursuitTask);
DUNE::Tasks::Factory::registerStaticTask("Control.Path.VectorField", createControlPathVectorFieldTask);
DUNE::Tasks::Factory::registerStaticTask("Control.ROV.Depth", createControlROVDepthTask);
DUNE::Tasks::Factory::registerStaticTask("Control.ROV.HorizontalPlane", createControlROVHorizontalPlaneTask);
DUNE::Tasks::Factory::registerStaticTask("Control.ROV.RemoteOperation", createControlROVRemoteOperationTask);
DUNE::Tasks::Factory::registerStaticTask("Control.UAV.Ardupilot", createControlUAVArdupilotTask);
DUNE::Tasks::Factory::registerStaticTask("Control.UAV.LOS", createControlUAVLOSTask);
DUNE::Tasks::Factory::registerStaticTask("Control.UAV.PX4", createControlUAVPX4Task);
DUNE::Tasks::Factory::registerStaticTask("Control.UAV.RemoteOperation", createControlUAVRemoteOperationTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.CommsRelay", createManeuverCommsRelayTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.CompassCalibration", createManeuverCompassCalibrationTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.CoverArea", createManeuverCoverAreaTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.FollowReference.AUV", createManeuverFollowReferenceAUVTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.FollowReference.UAV", createManeuverFollowReferenceUAVTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.FollowSystem", createManeuverFollowSystemTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.FollowTrajectory", createManeuverFollowTrajectoryTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.Multiplexer", createManeuverMultiplexerTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.RowsCoverage", createManeuverRowsCoverageTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.Teleoperation", createManeuverTeleoperationTask);
DUNE::Tasks::Factory::registerStaticTask("Maneuver.VehicleFormation.SMC", createManeuverVehicleFormationSMCTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Clock", createMonitorsClockTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Collisions", createMonitorsCollisionsTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Emergency", createMonitorsEmergencyTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Entities", createMonitorsEntitiesTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.FuelLevel", createMonitorsFuelLevelTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.MantaFuelLevel", createMonitorsMantaFuelLevelTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Medium", createMonitorsMediumTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.OperationalLimits", createMonitorsOperationalLimitsTask);
DUNE::Tasks::Factory::registerStaticTask("Monitors.Servos", createMonitorsServosTask);
DUNE::Tasks::Factory::registerStaticTask("Navigation.AUV.Navigation", createNavigationAUVNavigationTask);
DUNE::Tasks::Factory::registerStaticTask("Navigation.AUV.Ranger", createNavigationAUVRangerTask);
DUNE::Tasks::Factory::registerStaticTask("Navigation.General.GPSNavigation", createNavigationGeneralGPSNavigationTask);
DUNE::Tasks::Factory::registerStaticTask("Navigation.General.LBL", createNavigationGeneralLBLTask);
DUNE::Tasks::Factory::registerStaticTask("Navigation.General.ROV", createNavigationGeneralROVTask);
DUNE::Tasks::Factory::registerStaticTask("Plan.DB", createPlanDBTask);
DUNE::Tasks::Factory::registerStaticTask("Plan.Engine", createPlanEngineTask);
DUNE::Tasks::Factory::registerStaticTask("Plan.Generator", createPlanGeneratorTask);
DUNE::Tasks::Factory::registerStaticTask("Power.APD", createPowerAPDTask);
DUNE::Tasks::Factory::registerStaticTask("Power.BATMANv2", createPowerBATMANv2Task);
DUNE::Tasks::Factory::registerStaticTask("Power.CPMB", createPowerCPMBTask);
DUNE::Tasks::Factory::registerStaticTask("Power.CPMBH", createPowerCPMBHTask);
DUNE::Tasks::Factory::registerStaticTask("Power.CPMBv2", createPowerCPMBv2Task);
DUNE::Tasks::Factory::registerStaticTask("Power.DOAMv1", createPowerDOAMv1Task);
DUNE::Tasks::Factory::registerStaticTask("Power.DOAMv2", createPowerDOAMv2Task);
DUNE::Tasks::Factory::registerStaticTask("Power.LUEMB", createPowerLUEMBTask);
DUNE::Tasks::Factory::registerStaticTask("Power.MCBv2", createPowerMCBv2Task);
DUNE::Tasks::Factory::registerStaticTask("Power.OPCON", createPowerOPCONTask);
DUNE::Tasks::Factory::registerStaticTask("Power.PCTLv2", createPowerPCTLv2Task);
DUNE::Tasks::Factory::registerStaticTask("Power.PSIMAR", createPowerPSIMARTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.AIM104MultiIO", createSensorsAIM104MultiIOTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.AIS", createSensorsAISTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.CyclopsC7", createSensorsCyclopsC7Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.DMS", createSensorsDMSTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.DataStore", createSensorsDataStoreTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Edgetech2205", createSensorsEdgetech2205Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.EmulatedGPS", createSensorsEmulatedGPSTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.GPS", createSensorsGPSTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Genesys", createSensorsGenesysTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.GillWindObserverII", createSensorsGillWindObserverIITask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.IFOG", createSensorsIFOGTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Imagenex837B", createSensorsImagenex837BTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Imagenex852", createSensorsImagenex852Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Imagenex872", createSensorsImagenex872Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Imagenex881A", createSensorsImagenex881ATask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Keller", createSensorsKellerTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.LIMU", createSensorsLIMUTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.MLBL", createSensorsMLBLTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.MLBLTracker", createSensorsMLBLTrackerTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.MTi", createSensorsMTiTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.MetrecX", createSensorsMetrecXTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Microstrain3DMGX1", createSensorsMicrostrain3DMGX1Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.Microstrain3DMGX3", createSensorsMicrostrain3DMGX3Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.MiniSVS", createSensorsMiniSVSTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.OEMX", createSensorsOEMXTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.OS4000", createSensorsOS4000Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.SADC", createSensorsSADCTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.SCH311X", createSensorsSCH311XTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.SW100", createSensorsSW100Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.SonTekArgonaut", createSensorsSonTekArgonautTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.ThermalZone", createSensorsThermalZoneTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.V104setup", createSensorsV104setupTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.VantagePro2", createSensorsVantagePro2Task);
DUNE::Tasks::Factory::registerStaticTask("Sensors.WifiRSSI", createSensorsWifiRSSITask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.XR620CTD", createSensorsXR620CTDTask);
DUNE::Tasks::Factory::registerStaticTask("Sensors.XchangeSV", createSensorsXchangeSVTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.AcousticModem", createSimulatorsAcousticModemTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.CDC3", createSimulatorsCDC3Task);
DUNE::Tasks::Factory::registerStaticTask("Simulators.CTD", createSimulatorsCTDTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.DVL", createSimulatorsDVLTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.DepthSensor", createSimulatorsDepthSensorTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Docking", createSimulatorsDockingTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Environment", createSimulatorsEnvironmentTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.GPS", createSimulatorsGPSTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Gaussian", createSimulatorsGaussianTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.IMU", createSimulatorsIMUTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Iridium", createSimulatorsIridiumTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.LBL", createSimulatorsLBLTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Leaks", createSimulatorsLeaksTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Motor", createSimulatorsMotorTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Servos", createSimulatorsServosTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.StreamVelocity", createSimulatorsStreamVelocityTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.Target", createSimulatorsTargetTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.UAV", createSimulatorsUAVTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.UAVAutopilot", createSimulatorsUAVAutopilotTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.USBL", createSimulatorsUSBLTask);
DUNE::Tasks::Factory::registerStaticTask("Simulators.VSIM", createSimulatorsVSIMTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.AUV.Assist", createSupervisorsAUVAssistTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.AUV.LostComms", createSupervisorsAUVLostCommsTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.Delegator", createSupervisorsDelegatorTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.Entities", createSupervisorsEntitiesTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.Power", createSupervisorsPowerTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.PowerManager", createSupervisorsPowerManagerTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.Reporter", createSupervisorsReporterTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.SlaveCPU", createSupervisorsSlaveCPUTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.StratoPIWatchdog", createSupervisorsStratoPIWatchdogTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.UAV.LostComms", createSupervisorsUAVLostCommsTask);
DUNE::Tasks::Factory::registerStaticTask("Supervisors.Vehicle", createSupervisorsVehicleTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Announce", createTransportsAnnounceTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Cache", createTransportsCacheTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.CommManager", createTransportsCommManagerTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.DataStore", createTransportsDataStoreTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Discovery", createTransportsDiscoveryTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Evologics", createTransportsEvologicsTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.FTP", createTransportsFTPTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Fragments", createTransportsFragmentsTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.GSM", createTransportsGSMTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.HTTP", createTransportsHTTPTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Iridium", createTransportsIridiumTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.IridiumSBD", createTransportsIridiumSBDTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.LogBook", createTransportsLogBookTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Logging", createTransportsLoggingTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.LoggingDigest", createTransportsLoggingDigestTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.MobileInternet", createTransportsMobileInternetTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Radio", createTransportsRadioTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Replay", createTransportsReplayTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Seatrac", createTransportsSeatracTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.Serial", createTransportsSerialTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.SerialOverTCP", createTransportsSerialOverTCPTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.TCP.Client", createTransportsTCPClientTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.TCP.Server", createTransportsTCPServerTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.TCPOnDemand", createTransportsTCPOnDemandTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.UAN", createTransportsUANTask);
DUNE::Tasks::Factory::registerStaticTask("Transports.UDP", createTransportsUDPTask);
DUNE::Tasks::Factory::registerStaticTask("Tutorial.PlanVisit", createTutorialPlanVisitTask);
DUNE::Tasks::Factory::registerStaticTask("UserInterfaces.Buttons", createUserInterfacesButtonsTask);
DUNE::Tasks::Factory::registerStaticTask("UserInterfaces.LCD", createUserInterfacesLCDTask);
DUNE::Tasks::Factory::registerStaticTask("UserInterfaces.LEDs", createUserInterfacesLEDsTask);
DUNE::Tasks::Factory::registerStaticTask("UserInterfaces.MantaPanel", createUserInterfacesMantaPanelTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.DFK51BG02H", createVisionDFK51BG02HTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.FrameGrabber", createVisionFrameGrabberTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.Lumenera", createVisionLumeneraTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.PhotoTrigger", createVisionPhotoTriggerTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.PointGrey", createVisionPointGreyTask);
DUNE::Tasks::Factory::registerStaticTask("Vision.UAVCamera", createVisionUAVCameraTask);

}
