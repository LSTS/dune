//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Macros.hpp 12986 2013-02-21 16:45:23Z pdcalado                   $:*
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef DUNE_IMC_MACROS_HPP_INCLUDED_
#define DUNE_IMC_MACROS_HPP_INCLUDED_

//! EntityState identification number.
#define DUNE_IMC_ENTITYSTATE 1
//! QueryEntityState identification number.
#define DUNE_IMC_QUERYENTITYSTATE 2
//! EntityInfo identification number.
#define DUNE_IMC_ENTITYINFO 3
//! QueryEntityInfo identification number.
#define DUNE_IMC_QUERYENTITYINFO 4
//! EntityList identification number.
#define DUNE_IMC_ENTITYLIST 5
//! EntityControl identification number.
#define DUNE_IMC_ENTITYCONTROL 6
//! CpuUsage identification number.
#define DUNE_IMC_CPUUSAGE 7
//! TransportBindings identification number.
#define DUNE_IMC_TRANSPORTBINDINGS 8
//! RestartSystem identification number.
#define DUNE_IMC_RESTARTSYSTEM 9
//! Parameter identification number.
#define DUNE_IMC_PARAMETER 10
//! ParameterControl identification number.
#define DUNE_IMC_PARAMETERCONTROL 11
//! DevCalibrationControl identification number.
#define DUNE_IMC_DEVCALIBRATIONCONTROL 12
//! DevCalibrationState identification number.
#define DUNE_IMC_DEVCALIBRATIONSTATE 13
//! SimulatedState identification number.
#define DUNE_IMC_SIMULATEDSTATE 50
//! LeakSimulation identification number.
#define DUNE_IMC_LEAKSIMULATION 51
//! UASimulation identification number.
#define DUNE_IMC_UASIMULATION 52
//! StorageUsage identification number.
#define DUNE_IMC_STORAGEUSAGE 100
//! CacheControl identification number.
#define DUNE_IMC_CACHECONTROL 101
//! LoggingControl identification number.
#define DUNE_IMC_LOGGINGCONTROL 102
//! LogBookEntry identification number.
#define DUNE_IMC_LOGBOOKENTRY 103
//! LogBookControl identification number.
#define DUNE_IMC_LOGBOOKCONTROL 104
//! ReplayControl identification number.
#define DUNE_IMC_REPLAYCONTROL 105
//! ClockControl identification number.
#define DUNE_IMC_CLOCKCONTROL 106
//! Heartbeat identification number.
#define DUNE_IMC_HEARTBEAT 150
//! Announce identification number.
#define DUNE_IMC_ANNOUNCE 151
//! AnnounceService identification number.
#define DUNE_IMC_ANNOUNCESERVICE 152
//! RSSI identification number.
#define DUNE_IMC_RSSI 153
//! VSWR identification number.
#define DUNE_IMC_VSWR 154
//! LinkLevel identification number.
#define DUNE_IMC_LINKLEVEL 155
//! Sms identification number.
#define DUNE_IMC_SMS 156
//! LblRange identification number.
#define DUNE_IMC_LBLRANGE 200
//! LblDetection identification number.
#define DUNE_IMC_LBLDETECTION 201
//! LblBeacon identification number.
#define DUNE_IMC_LBLBEACON 202
//! LblConfig identification number.
#define DUNE_IMC_LBLCONFIG 203
//! AcousticRange identification number.
#define DUNE_IMC_ACOUSTICRANGE 204
//! AcousticRangeReply identification number.
#define DUNE_IMC_ACOUSTICRANGEREPLY 205
//! AcousticMessage identification number.
#define DUNE_IMC_ACOUSTICMESSAGE 206
//! AcousticDiagnostic identification number.
#define DUNE_IMC_ACOUSTICDIAGNOSTIC 207
//! AcousticNoise identification number.
#define DUNE_IMC_ACOUSTICNOISE 208
//! AcousticPing identification number.
#define DUNE_IMC_ACOUSTICPING 209
//! AcousticPingReply identification number.
#define DUNE_IMC_ACOUSTICPINGREPLY 210
//! AcousticOperation identification number.
#define DUNE_IMC_ACOUSTICOPERATION 211
//! AcousticSystemsQuery identification number.
#define DUNE_IMC_ACOUSTICSYSTEMSQUERY 212
//! AcousticSystems identification number.
#define DUNE_IMC_ACOUSTICSYSTEMS 213
//! Rpm identification number.
#define DUNE_IMC_RPM 250
//! Voltage identification number.
#define DUNE_IMC_VOLTAGE 251
//! Current identification number.
#define DUNE_IMC_CURRENT 252
//! GpsFix identification number.
#define DUNE_IMC_GPSFIX 253
//! EulerAngles identification number.
#define DUNE_IMC_EULERANGLES 254
//! EulerAnglesDelta identification number.
#define DUNE_IMC_EULERANGLESDELTA 255
//! AngularVelocity identification number.
#define DUNE_IMC_ANGULARVELOCITY 256
//! Acceleration identification number.
#define DUNE_IMC_ACCELERATION 257
//! MagneticField identification number.
#define DUNE_IMC_MAGNETICFIELD 258
//! GroundVelocity identification number.
#define DUNE_IMC_GROUNDVELOCITY 259
//! WaterVelocity identification number.
#define DUNE_IMC_WATERVELOCITY 260
//! VelocityDelta identification number.
#define DUNE_IMC_VELOCITYDELTA 261
//! Distance identification number.
#define DUNE_IMC_DISTANCE 262
//! Temperature identification number.
#define DUNE_IMC_TEMPERATURE 263
//! Pressure identification number.
#define DUNE_IMC_PRESSURE 264
//! Depth identification number.
#define DUNE_IMC_DEPTH 265
//! DepthOffset identification number.
#define DUNE_IMC_DEPTHOFFSET 266
//! SoundSpeed identification number.
#define DUNE_IMC_SOUNDSPEED 267
//! WaterDensity identification number.
#define DUNE_IMC_WATERDENSITY 268
//! Conductivity identification number.
#define DUNE_IMC_CONDUCTIVITY 269
//! Salinity identification number.
#define DUNE_IMC_SALINITY 270
//! WindSpeed identification number.
#define DUNE_IMC_WINDSPEED 271
//! RelativeHumidity identification number.
#define DUNE_IMC_RELATIVEHUMIDITY 272
//! DevDataText identification number.
#define DUNE_IMC_DEVDATATEXT 273
//! DevDataBinary identification number.
#define DUNE_IMC_DEVDATABINARY 274
//! SonarConfig identification number.
#define DUNE_IMC_SONARCONFIG 275
//! SonarData identification number.
#define DUNE_IMC_SONARDATA 276
//! Pulse identification number.
#define DUNE_IMC_PULSE 277
//! PulseDetectionControl identification number.
#define DUNE_IMC_PULSEDETECTIONCONTROL 278
//! FuelLevel identification number.
#define DUNE_IMC_FUELLEVEL 279
//! GpsNavData identification number.
#define DUNE_IMC_GPSNAVDATA 280
//! ServoPosition identification number.
#define DUNE_IMC_SERVOPOSITION 281
//! DeviceState identification number.
#define DUNE_IMC_DEVICESTATE 282
//! BeamConfig identification number.
#define DUNE_IMC_BEAMCONFIG 283
//! CameraZoom identification number.
#define DUNE_IMC_CAMERAZOOM 300
//! SetThrusterActuation identification number.
#define DUNE_IMC_SETTHRUSTERACTUATION 301
//! SetServoPosition identification number.
#define DUNE_IMC_SETSERVOPOSITION 302
//! SetControlSurfaceDeflection identification number.
#define DUNE_IMC_SETCONTROLSURFACEDEFLECTION 303
//! RemoteActionsRequest identification number.
#define DUNE_IMC_REMOTEACTIONSREQUEST 304
//! RemoteActions identification number.
#define DUNE_IMC_REMOTEACTIONS 305
//! ButtonEvent identification number.
#define DUNE_IMC_BUTTONEVENT 306
//! LcdControl identification number.
#define DUNE_IMC_LCDCONTROL 307
//! PowerOperation identification number.
#define DUNE_IMC_POWEROPERATION 308
//! PowerChannelControl identification number.
#define DUNE_IMC_POWERCHANNELCONTROL 309
//! QueryPowerChannelState identification number.
#define DUNE_IMC_QUERYPOWERCHANNELSTATE 310
//! PowerChannelState identification number.
#define DUNE_IMC_POWERCHANNELSTATE 311
//! LedControl identification number.
#define DUNE_IMC_LEDCONTROL 312
//! EstimatedState identification number.
#define DUNE_IMC_ESTIMATEDSTATE 350
//! EstimatedStreamVelocity identification number.
#define DUNE_IMC_ESTIMATEDSTREAMVELOCITY 351
//! IndicatedSpeed identification number.
#define DUNE_IMC_INDICATEDSPEED 352
//! TrueSpeed identification number.
#define DUNE_IMC_TRUESPEED 353
//! NavigationUncertainty identification number.
#define DUNE_IMC_NAVIGATIONUNCERTAINTY 354
//! NavigationData identification number.
#define DUNE_IMC_NAVIGATIONDATA 355
//! GpsFixRejection identification number.
#define DUNE_IMC_GPSFIXREJECTION 356
//! LblRangeAcceptance identification number.
#define DUNE_IMC_LBLRANGEACCEPTANCE 357
//! DvlRejection identification number.
#define DUNE_IMC_DVLREJECTION 358
//! NavigationReset identification number.
#define DUNE_IMC_NAVIGATIONRESET 359
//! LblEstimate identification number.
#define DUNE_IMC_LBLESTIMATE 360
//! DesiredHeading identification number.
#define DUNE_IMC_DESIREDHEADING 400
//! DesiredZ identification number.
#define DUNE_IMC_DESIREDZ 401
//! DesiredSpeed identification number.
#define DUNE_IMC_DESIREDSPEED 402
//! DesiredRoll identification number.
#define DUNE_IMC_DESIREDROLL 403
//! DesiredPitch identification number.
#define DUNE_IMC_DESIREDPITCH 404
//! DesiredVerticalRate identification number.
#define DUNE_IMC_DESIREDVERTICALRATE 405
//! DesiredPath identification number.
#define DUNE_IMC_DESIREDPATH 406
//! DesiredControl identification number.
#define DUNE_IMC_DESIREDCONTROL 407
//! DesiredHeadingRate identification number.
#define DUNE_IMC_DESIREDHEADINGRATE 408
//! DesiredVelocity identification number.
#define DUNE_IMC_DESIREDVELOCITY 409
//! PathControlState identification number.
#define DUNE_IMC_PATHCONTROLSTATE 410
//! AllocatedControlTorques identification number.
#define DUNE_IMC_ALLOCATEDCONTROLTORQUES 411
//! ControlParcel identification number.
#define DUNE_IMC_CONTROLPARCEL 412
//! Brake identification number.
#define DUNE_IMC_BRAKE 413
//! Goto identification number.
#define DUNE_IMC_GOTO 450
//! PopUp identification number.
#define DUNE_IMC_POPUP 451
//! Teleoperation identification number.
#define DUNE_IMC_TELEOPERATION 452
//! Loiter identification number.
#define DUNE_IMC_LOITER 453
//! IdleManeuver identification number.
#define DUNE_IMC_IDLEMANEUVER 454
//! LowLevelControl identification number.
#define DUNE_IMC_LOWLEVELCONTROL 455
//! Rows identification number.
#define DUNE_IMC_ROWS 456
//! FollowPath identification number.
#define DUNE_IMC_FOLLOWPATH 457
//! PathPoint identification number.
#define DUNE_IMC_PATHPOINT 458
//! YoYo identification number.
#define DUNE_IMC_YOYO 459
//! TeleoperationDone identification number.
#define DUNE_IMC_TELEOPERATIONDONE 460
//! StationKeeping identification number.
#define DUNE_IMC_STATIONKEEPING 461
//! Elevator identification number.
#define DUNE_IMC_ELEVATOR 462
//! FollowTrajectory identification number.
#define DUNE_IMC_FOLLOWTRAJECTORY 463
//! TrajectoryPoint identification number.
#define DUNE_IMC_TRAJECTORYPOINT 464
//! CustomManeuver identification number.
#define DUNE_IMC_CUSTOMMANEUVER 465
//! VehicleFormation identification number.
#define DUNE_IMC_VEHICLEFORMATION 466
//! VehicleFormationParticipant identification number.
#define DUNE_IMC_VEHICLEFORMATIONPARTICIPANT 467
//! StopManeuver identification number.
#define DUNE_IMC_STOPMANEUVER 468
//! RegisterManeuver identification number.
#define DUNE_IMC_REGISTERMANEUVER 469
//! ManeuverControlState identification number.
#define DUNE_IMC_MANEUVERCONTROLSTATE 470
//! FollowSystem identification number.
#define DUNE_IMC_FOLLOWSYSTEM 471
//! CommsRelay identification number.
#define DUNE_IMC_COMMSRELAY 472
//! CoverArea identification number.
#define DUNE_IMC_COVERAREA 473
//! PolygonVertex identification number.
#define DUNE_IMC_POLYGONVERTEX 474
//! CompassCalibration identification number.
#define DUNE_IMC_COMPASSCALIBRATION 475
//! FollowReference identification number.
#define DUNE_IMC_FOLLOWREFERENCE 478
//! Reference identification number.
#define DUNE_IMC_REFERENCE 479
//! VehicleState identification number.
#define DUNE_IMC_VEHICLESTATE 500
//! VehicleCommand identification number.
#define DUNE_IMC_VEHICLECOMMAND 501
//! MonitorEntityState identification number.
#define DUNE_IMC_MONITORENTITYSTATE 502
//! EntityMonitoringState identification number.
#define DUNE_IMC_ENTITYMONITORINGSTATE 503
//! OperationalLimits identification number.
#define DUNE_IMC_OPERATIONALLIMITS 504
//! GetOperationalLimits identification number.
#define DUNE_IMC_GETOPERATIONALLIMITS 505
//! Calibration identification number.
#define DUNE_IMC_CALIBRATION 506
//! ControlLoops identification number.
#define DUNE_IMC_CONTROLLOOPS 507
//! VehicleMedium identification number.
#define DUNE_IMC_VEHICLEMEDIUM 508
//! Abort identification number.
#define DUNE_IMC_ABORT 550
//! PlanSpecification identification number.
#define DUNE_IMC_PLANSPECIFICATION 551
//! PlanManeuver identification number.
#define DUNE_IMC_PLANMANEUVER 552
//! PlanTransition identification number.
#define DUNE_IMC_PLANTRANSITION 553
//! EmergencyControl identification number.
#define DUNE_IMC_EMERGENCYCONTROL 554
//! EmergencyControlState identification number.
#define DUNE_IMC_EMERGENCYCONTROLSTATE 555
//! PlanDB identification number.
#define DUNE_IMC_PLANDB 556
//! PlanDBState identification number.
#define DUNE_IMC_PLANDBSTATE 557
//! PlanDBInformation identification number.
#define DUNE_IMC_PLANDBINFORMATION 558
//! PlanControl identification number.
#define DUNE_IMC_PLANCONTROL 559
//! PlanControlState identification number.
#define DUNE_IMC_PLANCONTROLSTATE 560
//! PlanVariable identification number.
#define DUNE_IMC_PLANVARIABLE 561
//! PlanGeneration identification number.
#define DUNE_IMC_PLANGENERATION 562
//! ReportedState identification number.
#define DUNE_IMC_REPORTEDSTATE 600
//! RemoteSensorInfo identification number.
#define DUNE_IMC_REMOTESENSORINFO 601
//! Map identification number.
#define DUNE_IMC_MAP 602
//! MapFeature identification number.
#define DUNE_IMC_MAPFEATURE 603
//! MapPoint identification number.
#define DUNE_IMC_MAPPOINT 604
//! CcuEvent identification number.
#define DUNE_IMC_CCUEVENT 606
//! VehicleLinks identification number.
#define DUNE_IMC_VEHICLELINKS 650
//! TrexObservation identification number.
#define DUNE_IMC_TREXOBSERVATION 651
//! TrexCommand identification number.
#define DUNE_IMC_TREXCOMMAND 652
//! VideoData identification number.
#define DUNE_IMC_VIDEODATA 700
//! RawImage identification number.
#define DUNE_IMC_RAWIMAGE 701
//! CompressedImage identification number.
#define DUNE_IMC_COMPRESSEDIMAGE 702
//! ImageTxSettings identification number.
#define DUNE_IMC_IMAGETXSETTINGS 703
//! RemoteState identification number.
#define DUNE_IMC_REMOTESTATE 750
//! Target identification number.
#define DUNE_IMC_TARGET 800
//! EntityParameter identification number.
#define DUNE_IMC_ENTITYPARAMETER 801
//! EntityParameters identification number.
#define DUNE_IMC_ENTITYPARAMETERS 802
//! QueryEntityParameters identification number.
#define DUNE_IMC_QUERYENTITYPARAMETERS 803
//! SetEntityParameters identification number.
#define DUNE_IMC_SETENTITYPARAMETERS 804
//! SaveEntityParameters identification number.
#define DUNE_IMC_SAVEENTITYPARAMETERS 805
//! CreateSession identification number.
#define DUNE_IMC_CREATESESSION 806
//! CloseSession identification number.
#define DUNE_IMC_CLOSESESSION 807
//! SessionSubscription identification number.
#define DUNE_IMC_SESSIONSUBSCRIPTION 808
//! SessionKeepAlive identification number.
#define DUNE_IMC_SESSIONKEEPALIVE 809
//! SessionStatus identification number.
#define DUNE_IMC_SESSIONSTATUS 810

#endif
