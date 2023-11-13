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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 86c7ceace2a6f6239ea89a0e5bc64a3f                            *
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
//! CpuUsage identification number.
#define DUNE_IMC_CPUUSAGE 7
//! TransportBindings identification number.
#define DUNE_IMC_TRANSPORTBINDINGS 8
//! RestartSystem identification number.
#define DUNE_IMC_RESTARTSYSTEM 9
//! DevCalibrationControl identification number.
#define DUNE_IMC_DEVCALIBRATIONCONTROL 12
//! DevCalibrationState identification number.
#define DUNE_IMC_DEVCALIBRATIONSTATE 13
//! EntityActivationState identification number.
#define DUNE_IMC_ENTITYACTIVATIONSTATE 14
//! QueryEntityActivationState identification number.
#define DUNE_IMC_QUERYENTITYACTIVATIONSTATE 15
//! VehicleOperationalLimits identification number.
#define DUNE_IMC_VEHICLEOPERATIONALLIMITS 16
//! MsgList identification number.
#define DUNE_IMC_MSGLIST 20
//! SimulatedState identification number.
#define DUNE_IMC_SIMULATEDSTATE 50
//! LeakSimulation identification number.
#define DUNE_IMC_LEAKSIMULATION 51
//! UASimulation identification number.
#define DUNE_IMC_UASIMULATION 52
//! DynamicsSimParam identification number.
#define DUNE_IMC_DYNAMICSSIMPARAM 53
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
//! HistoricCTD identification number.
#define DUNE_IMC_HISTORICCTD 107
//! HistoricTelemetry identification number.
#define DUNE_IMC_HISTORICTELEMETRY 108
//! HistoricSonarData identification number.
#define DUNE_IMC_HISTORICSONARDATA 109
//! HistoricEvent identification number.
#define DUNE_IMC_HISTORICEVENT 110
//! VerticalProfile identification number.
#define DUNE_IMC_VERTICALPROFILE 111
//! ProfileSample identification number.
#define DUNE_IMC_PROFILESAMPLE 112
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
//! SmsTx identification number.
#define DUNE_IMC_SMSTX 157
//! SmsRx identification number.
#define DUNE_IMC_SMSRX 158
//! SmsState identification number.
#define DUNE_IMC_SMSSTATE 159
//! TextMessage identification number.
#define DUNE_IMC_TEXTMESSAGE 160
//! IridiumMsgRx identification number.
#define DUNE_IMC_IRIDIUMMSGRX 170
//! IridiumMsgTx identification number.
#define DUNE_IMC_IRIDIUMMSGTX 171
//! IridiumTxStatus identification number.
#define DUNE_IMC_IRIDIUMTXSTATUS 172
//! GroupMembershipState identification number.
#define DUNE_IMC_GROUPMEMBERSHIPSTATE 180
//! SystemGroup identification number.
#define DUNE_IMC_SYSTEMGROUP 181
//! LinkLatency identification number.
#define DUNE_IMC_LINKLATENCY 182
//! ExtendedRSSI identification number.
#define DUNE_IMC_EXTENDEDRSSI 183
//! HistoricData identification number.
#define DUNE_IMC_HISTORICDATA 184
//! CompressedHistory identification number.
#define DUNE_IMC_COMPRESSEDHISTORY 185
//! HistoricSample identification number.
#define DUNE_IMC_HISTORICSAMPLE 186
//! HistoricDataQuery identification number.
#define DUNE_IMC_HISTORICDATAQUERY 187
//! RemoteCommand identification number.
#define DUNE_IMC_REMOTECOMMAND 188
//! CommSystemsQuery identification number.
#define DUNE_IMC_COMMSYSTEMSQUERY 189
//! TelemetryMsg identification number.
#define DUNE_IMC_TELEMETRYMSG 190
//! LblRange identification number.
#define DUNE_IMC_LBLRANGE 200
//! LblBeacon identification number.
#define DUNE_IMC_LBLBEACON 202
//! LblConfig identification number.
#define DUNE_IMC_LBLCONFIG 203
//! AcousticMessage identification number.
#define DUNE_IMC_ACOUSTICMESSAGE 206
//! SimAcousticMessage identification number.
#define DUNE_IMC_SIMACOUSTICMESSAGE 207
//! AcousticOperation identification number.
#define DUNE_IMC_ACOUSTICOPERATION 211
//! AcousticSystemsQuery identification number.
#define DUNE_IMC_ACOUSTICSYSTEMSQUERY 212
//! AcousticSystems identification number.
#define DUNE_IMC_ACOUSTICSYSTEMS 213
//! AcousticLink identification number.
#define DUNE_IMC_ACOUSTICLINK 214
//! AcousticRequest identification number.
#define DUNE_IMC_ACOUSTICREQUEST 215
//! AcousticStatus identification number.
#define DUNE_IMC_ACOUSTICSTATUS 216
//! AcousticRelease identification number.
#define DUNE_IMC_ACOUSTICRELEASE 217
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
//! Force identification number.
#define DUNE_IMC_FORCE 275
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
//! DataSanity identification number.
#define DUNE_IMC_DATASANITY 284
//! RhodamineDye identification number.
#define DUNE_IMC_RHODAMINEDYE 285
//! CrudeOil identification number.
#define DUNE_IMC_CRUDEOIL 286
//! FineOil identification number.
#define DUNE_IMC_FINEOIL 287
//! Turbidity identification number.
#define DUNE_IMC_TURBIDITY 288
//! Chlorophyll identification number.
#define DUNE_IMC_CHLOROPHYLL 289
//! Fluorescein identification number.
#define DUNE_IMC_FLUORESCEIN 290
//! Phycocyanin identification number.
#define DUNE_IMC_PHYCOCYANIN 291
//! Phycoerythrin identification number.
#define DUNE_IMC_PHYCOERYTHRIN 292
//! GpsFixRtk identification number.
#define DUNE_IMC_GPSFIXRTK 293
//! ExternalNavData identification number.
#define DUNE_IMC_EXTERNALNAVDATA 294
//! DissolvedOxygen identification number.
#define DUNE_IMC_DISSOLVEDOXYGEN 295
//! AirSaturation identification number.
#define DUNE_IMC_AIRSATURATION 296
//! Throttle identification number.
#define DUNE_IMC_THROTTLE 297
//! PH identification number.
#define DUNE_IMC_PH 298
//! Redox identification number.
#define DUNE_IMC_REDOX 299
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
//! LedBrightness identification number.
#define DUNE_IMC_LEDBRIGHTNESS 312
//! QueryLedBrightness identification number.
#define DUNE_IMC_QUERYLEDBRIGHTNESS 313
//! SetLedBrightness identification number.
#define DUNE_IMC_SETLEDBRIGHTNESS 314
//! SetPWM identification number.
#define DUNE_IMC_SETPWM 315
//! PWM identification number.
#define DUNE_IMC_PWM 316
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
//! LblEstimate identification number.
#define DUNE_IMC_LBLESTIMATE 360
//! AlignmentState identification number.
#define DUNE_IMC_ALIGNMENTSTATE 361
//! GroupStreamVelocity identification number.
#define DUNE_IMC_GROUPSTREAMVELOCITY 362
//! Airflow identification number.
#define DUNE_IMC_AIRFLOW 363
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
//! DesiredLinearState identification number.
#define DUNE_IMC_DESIREDLINEARSTATE 414
//! DesiredThrottle identification number.
#define DUNE_IMC_DESIREDTHROTTLE 415
//! PeekDesiredPath identification number.
#define DUNE_IMC_PEEKDESIREDPATH 420
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
//! FormationParameters identification number.
#define DUNE_IMC_FORMATIONPARAMETERS 476
//! FormationPlanExecution identification number.
#define DUNE_IMC_FORMATIONPLANEXECUTION 477
//! FollowReference identification number.
#define DUNE_IMC_FOLLOWREFERENCE 478
//! Reference identification number.
#define DUNE_IMC_REFERENCE 479
//! FollowRefState identification number.
#define DUNE_IMC_FOLLOWREFSTATE 480
//! FormationMonitor identification number.
#define DUNE_IMC_FORMATIONMONITOR 481
//! RelativeState identification number.
#define DUNE_IMC_RELATIVESTATE 482
//! Dislodge identification number.
#define DUNE_IMC_DISLODGE 483
//! Formation identification number.
#define DUNE_IMC_FORMATION 484
//! Launch identification number.
#define DUNE_IMC_LAUNCH 485
//! Drop identification number.
#define DUNE_IMC_DROP 486
//! ScheduledGoto identification number.
#define DUNE_IMC_SCHEDULEDGOTO 487
//! RowsCoverage identification number.
#define DUNE_IMC_ROWSCOVERAGE 488
//! Sample identification number.
#define DUNE_IMC_SAMPLE 489
//! ImageTracking identification number.
#define DUNE_IMC_IMAGETRACKING 490
//! Takeoff identification number.
#define DUNE_IMC_TAKEOFF 491
//! Land identification number.
#define DUNE_IMC_LAND 492
//! AutonomousSection identification number.
#define DUNE_IMC_AUTONOMOUSSECTION 493
//! FollowPoint identification number.
#define DUNE_IMC_FOLLOWPOINT 494
//! Alignment identification number.
#define DUNE_IMC_ALIGNMENT 495
//! StationKeepingExtended identification number.
#define DUNE_IMC_STATIONKEEPINGEXTENDED 496
//! ManeuverDone identification number.
#define DUNE_IMC_MANEUVERDONE 497
//! PeekManeuver identification number.
#define DUNE_IMC_PEEKMANEUVER 498
//! Magnetometer identification number.
#define DUNE_IMC_MAGNETOMETER 499
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
//! Collision identification number.
#define DUNE_IMC_COLLISION 509
//! FormState identification number.
#define DUNE_IMC_FORMSTATE 510
//! AutopilotMode identification number.
#define DUNE_IMC_AUTOPILOTMODE 511
//! FormationState identification number.
#define DUNE_IMC_FORMATIONSTATE 512
//! ReportControl identification number.
#define DUNE_IMC_REPORTCONTROL 513
//! StateReport identification number.
#define DUNE_IMC_STATEREPORT 514
//! TransmissionRequest identification number.
#define DUNE_IMC_TRANSMISSIONREQUEST 515
//! TransmissionStatus identification number.
#define DUNE_IMC_TRANSMISSIONSTATUS 516
//! SmsRequest identification number.
#define DUNE_IMC_SMSREQUEST 517
//! SmsStatus identification number.
#define DUNE_IMC_SMSSTATUS 518
//! VtolState identification number.
#define DUNE_IMC_VTOLSTATE 519
//! ArmingState identification number.
#define DUNE_IMC_ARMINGSTATE 520
//! TCPRequest identification number.
#define DUNE_IMC_TCPREQUEST 521
//! TCPStatus identification number.
#define DUNE_IMC_TCPSTATUS 522
//! AssetReport identification number.
#define DUNE_IMC_ASSETREPORT 525
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
//! LeaderState identification number.
#define DUNE_IMC_LEADERSTATE 563
//! PlanStatistics identification number.
#define DUNE_IMC_PLANSTATISTICS 564
//! ReportedState identification number.
#define DUNE_IMC_REPORTEDSTATE 600
//! RemoteSensorInfo identification number.
#define DUNE_IMC_REMOTESENSORINFO 601
//! AisInfo identification number.
#define DUNE_IMC_AISINFO 607
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
//! TrexOperation identification number.
#define DUNE_IMC_TREXOPERATION 655
//! TrexAttribute identification number.
#define DUNE_IMC_TREXATTRIBUTE 656
//! TrexToken identification number.
#define DUNE_IMC_TREXTOKEN 657
//! TrexPlan identification number.
#define DUNE_IMC_TREXPLAN 658
//! Event identification number.
#define DUNE_IMC_EVENT 660
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
//! PushEntityParameters identification number.
#define DUNE_IMC_PUSHENTITYPARAMETERS 811
//! PopEntityParameters identification number.
#define DUNE_IMC_POPENTITYPARAMETERS 812
//! IoEvent identification number.
#define DUNE_IMC_IOEVENT 813
//! UamTxFrame identification number.
#define DUNE_IMC_UAMTXFRAME 814
//! UamRxFrame identification number.
#define DUNE_IMC_UAMRXFRAME 815
//! UamTxStatus identification number.
#define DUNE_IMC_UAMTXSTATUS 816
//! UamRxRange identification number.
#define DUNE_IMC_UAMRXRANGE 817
//! UamTxRange identification number.
#define DUNE_IMC_UAMTXRANGE 818
//! FormCtrlParam identification number.
#define DUNE_IMC_FORMCTRLPARAM 820
//! FormationEval identification number.
#define DUNE_IMC_FORMATIONEVAL 821
//! FormationControlParams identification number.
#define DUNE_IMC_FORMATIONCONTROLPARAMS 822
//! FormationEvaluation identification number.
#define DUNE_IMC_FORMATIONEVALUATION 823
//! SoiWaypoint identification number.
#define DUNE_IMC_SOIWAYPOINT 850
//! SoiPlan identification number.
#define DUNE_IMC_SOIPLAN 851
//! SoiCommand identification number.
#define DUNE_IMC_SOICOMMAND 852
//! SoiState identification number.
#define DUNE_IMC_SOISTATE 853
//! MessagePart identification number.
#define DUNE_IMC_MESSAGEPART 877
//! NeptusBlob identification number.
#define DUNE_IMC_NEPTUSBLOB 888
//! Aborted identification number.
#define DUNE_IMC_ABORTED 889
//! UsblAngles identification number.
#define DUNE_IMC_USBLANGLES 890
//! UsblPosition identification number.
#define DUNE_IMC_USBLPOSITION 891
//! UsblFix identification number.
#define DUNE_IMC_USBLFIX 892
//! ParametersXml identification number.
#define DUNE_IMC_PARAMETERSXML 893
//! GetParametersXml identification number.
#define DUNE_IMC_GETPARAMETERSXML 894
//! SetImageCoords identification number.
#define DUNE_IMC_SETIMAGECOORDS 895
//! GetImageCoords identification number.
#define DUNE_IMC_GETIMAGECOORDS 896
//! GetWorldCoordinates identification number.
#define DUNE_IMC_GETWORLDCOORDINATES 897
//! UsblAnglesExtended identification number.
#define DUNE_IMC_USBLANGLESEXTENDED 898
//! UsblPositionExtended identification number.
#define DUNE_IMC_USBLPOSITIONEXTENDED 899
//! UsblFixExtended identification number.
#define DUNE_IMC_USBLFIXEXTENDED 900
//! UsblModem identification number.
#define DUNE_IMC_USBLMODEM 901
//! UsblConfig identification number.
#define DUNE_IMC_USBLCONFIG 902
//! DissolvedOrganicMatter identification number.
#define DUNE_IMC_DISSOLVEDORGANICMATTER 903
//! OpticalBackscatter identification number.
#define DUNE_IMC_OPTICALBACKSCATTER 904
//! Tachograph identification number.
#define DUNE_IMC_TACHOGRAPH 905
//! ApmStatus identification number.
#define DUNE_IMC_APMSTATUS 906
//! SadcReadings identification number.
#define DUNE_IMC_SADCREADINGS 907
//! DmsDetection identification number.
#define DUNE_IMC_DMSDETECTION 908
//! HomePosition identification number.
#define DUNE_IMC_HOMEPOSITION 909
//! GpioState identification number.
#define DUNE_IMC_GPIOSTATE 2000
//! GpioStateGet identification number.
#define DUNE_IMC_GPIOSTATEGET 2001
//! GpioStateSet identification number.
#define DUNE_IMC_GPIOSTATESET 2002
//! ColoredDissolvedOrganicMatter identification number.
#define DUNE_IMC_COLOREDDISSOLVEDORGANICMATTER 2003
//! FluorescentDissolvedOrganicMatter identification number.
#define DUNE_IMC_FLUORESCENTDISSOLVEDORGANICMATTER 2004
//! WaveProfile identification number.
#define DUNE_IMC_WAVEPROFILE 2005
//! TotalMagIntensity identification number.
#define DUNE_IMC_TOTALMAGINTENSITY 2006
//! Power identification number.
#define DUNE_IMC_POWER 910
//! EstimatedFreq identification number.
#define DUNE_IMC_ESTIMATEDFREQ 911
//! RelayState identification number.
#define DUNE_IMC_RELAYSTATE 912
//! RelativeWind identification number.
#define DUNE_IMC_RELATIVEWIND 914
//! AbsoluteWind identification number.
#define DUNE_IMC_ABSOLUTEWIND 919
//! CurrentVelocity identification number.
#define DUNE_IMC_CURRENTVELOCITY 915
//! CollisionAvoidance identification number.
#define DUNE_IMC_COLLISIONAVOIDANCE 916
//! ENCAwareness identification number.
#define DUNE_IMC_ENCAWARENESS 917
//! Heave identification number.
#define DUNE_IMC_HEAVE 918
//! AcousticBackscatter identification number.
#define DUNE_IMC_ACOUSTICBACKSCATTER 1011
//! Correlation identification number.
#define DUNE_IMC_CORRELATION 1012
//! CurrentProfileCell identification number.
#define DUNE_IMC_CURRENTPROFILECELL 1014
//! CurrentProfile identification number.
#define DUNE_IMC_CURRENTPROFILE 1015
//! ADCPBeam identification number.
#define DUNE_IMC_ADCPBEAM 1016
//! TBRFishTag identification number.
#define DUNE_IMC_TBRFISHTAG 2007
//! TBRSensor identification number.
#define DUNE_IMC_TBRSENSOR 2008
//! IridiumReport identification number.
#define DUNE_IMC_IRIDIUMREPORT 2009
//! CommRestriction identification number.
#define DUNE_IMC_COMMRESTRICTION 2010
//! ScienceSensors identification number.
#define DUNE_IMC_SCIENCESENSORS 2011
//! ScienceSensorsReply identification number.
#define DUNE_IMC_SCIENCESENSORSREPLY 2012
//! PAR identification number.
#define DUNE_IMC_PAR 2013
//! SingleCurrentCell identification number.
#define DUNE_IMC_SINGLECURRENTCELL 2014
//! Gamma identification number.
#define DUNE_IMC_GAMMA 2015
//! Imu identification number.
#define DUNE_IMC_IMU 1310
//! UbxDOP identification number.
#define DUNE_IMC_UBXDOP 1311
//! UbxSvIn identification number.
#define DUNE_IMC_UBXSVIN 1312
//! UbxStatus identification number.
#define DUNE_IMC_UBXSTATUS 1313
//! gnssSignal identification number.
#define DUNE_IMC_GNSSSIGNAL 1314
//! UbxSig identification number.
#define DUNE_IMC_UBXSIG 1315
//! gnssSatellite identification number.
#define DUNE_IMC_GNSSSATELLITE 1316
//! UbxSat identification number.
#define DUNE_IMC_UBXSAT 1317
//! UbxRelPosNED identification number.
#define DUNE_IMC_UBXRELPOSNED 1318
//! DynObsVec identification number.
#define DUNE_IMC_DYNOBSVEC 1000
//! NegotiationData identification number.
#define DUNE_IMC_NEGOTIATIONDATA 1010

#endif
