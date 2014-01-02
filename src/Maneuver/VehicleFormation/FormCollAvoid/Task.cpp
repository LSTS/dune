//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

DUNE_TASK_BEGIN

struct Arguments
{
  double klon,
                 klat,
                 kbound,
                 klead,
                 kdeconfl;
  int formframe;
  bool debug;
};

struct Task: public DUNE::Tasks::Task
{
  //! Task arguments
  Arguments m_args;

  Task(const std::string& name, Tasks::Environment& env):
    DUNE::Tasks::Task(name, env)
  {
    param("Formation Long Gain (klon)", m_args.klon)
    .defaultValue("0.5")
    .description("");

    param("Formation Lat Gain (klat)", m_args.klat)
    .defaultValue("0.8")
    .description("");

    param("Formation Boundary Layer (kbound)", m_args.kbound)
    .defaultValue("0.6")
    .description("");

    param("Formation Leader Gain (klead)", m_args.klead)
    .defaultValue("2.5")
    .description("");

    param("Formation Deconfliction Gain (kdeconfl)", m_args.kdeconfl)
    .defaultValue("5")
    .description("");

    param("Formation Reference Frame", m_args.formframe)
    .defaultValue("2")
    .description("Formation Reference Frame (0 - Earth; 1 - Path (no curvature); 2 - Path (with curvature)");

    param("Debug", m_args.debug)
    .defaultValue("false")
    .description("Enable or disable debug");
  }

  void
  onUpdateParameters(void)
  {
  }

  void
  onEntityResolution(void)
  {
  }

  void
  onResourceAcquisition(void)
  {
  }

  void
  onResourceRelease(void)
  {
  }

  void
  task(void)
  {
    //!===========================================
    //! Formation control
    //!===========================================

    //! Horizontal velocity
    //! d_HorSpd = sqrt(sum(md_UAVState(4:5, ind_UAV).^2));

    //! Optimization variables
    d_DeconfDist = d_SafeDist + d_CtrlMarg;
    float tmp_cos_heading = cos(md_UAVState(9, ind_UAV)),
          tmp_sin_heading = sin(md_UAVState(9, ind_UAV));
    vd_BodyX = [d_cos_Heading, d_sin_Heading];
    vd_BodyY = [-d_sin_Heading, d_cos_Heading];
    md_StateMtxInv = [vd_BodyX; vd_BodyY];
    //! d_GndLngSpd = vd_BodyX*md_UAVState(4:5, ind_UAV); //! Ground speed over the longitudinal axis
    vd_Wind = md_UAVState(4:5, ind_UAV) - vd_BodyX'*d_TAS;

    //! UAV relative importance parameters
    d_DeconfDistGain = d_DeconfVGain/2;
    d_LngDistGain1 = 1.5;
    d_LngDistGain2 = 4;
    d_LngDistGain3 = d_LngDistGain2-d_LngDistGain1;

    //! Maneuvering constrains
    vd_BodyAccelMaxX = d_AccelXMax*vd_BodyX;
    vd_BodyAccelMaxY = d_g * tan(d_BankMax*0.6)*vd_BodyY;

    //! //! ======== Formation perturbation test - Mesh stability =======
    //! if ind_UAV == 2
    //! //!     vd_Pert = 5*(1+cos(d_Time/40*2*pi))*[-1; 1];
    //!     vd_Pert = 10*cos(d_Time/20*2*pi)*[-1; 1];
    //! //!     vd_Pert = 10*[-cos(d_Time/20*2*pi); sin(d_Time/20*2*pi)];
    //! //!     vd_Pert = [0; 0];
    //!     md_FormPos(1:2, ind_UAV) = md_FormPos(1:2, ind_UAV) + vd_Pert;
    //! end
    //! //! ======== Formation perturbation test - Mesh stability =======

    //!-------------------------------------------
    //! Formation shape rotation
    //!-------------------------------------------

    d_LeadGndSpeed = sqrt(sum(vd_LeadState(4:5).^2));
    d_cos_FormAngle = vd_LeadState(4)/d_LeadGndSpeed;
    d_sin_FormAngle = vd_LeadState(5)/d_LeadGndSpeed;
    md_RotForm = [d_cos_FormAngle -d_sin_FormAngle;
        d_sin_FormAngle d_cos_FormAngle];

    //! Formation current rotation radius, speed, and turn-rate
    d_FormTurnRate = d_g * tan(vd_LeadState(7))/d_LeadGndSpeed*...
        cos(atan2(vd_LeadState(5), vd_LeadState(4)) - vd_LeadState(9));
    d_FormRad = d_LeadGndSpeed/d_FormTurnRate;
    //! d_FormRad = d_LeadGndSpeed^2/(d_g * tan(vd_LeadState(7))*...
    //!     cos(atan2(vd_LeadState(5), vd_LeadState(4)) - vd_LeadState(9)));
    //! d_FormTurnRate = d_LeadGndSpeed/d_FormRad;
    //! vd_FormRotCtr = vd_LeadState(1:2) + d_FormRad*md_RotForm(1:2, 2);
    //! fprintf('\nFormation rotation center: //!3.1f, //!3.1f\n', vd_FormRotCtr)

    if i_FormFrame > 0
        if vd_LeadState(7) == 0
            d_FormTurnRate = 0;
            vd_FormPos1 = md_FormPos(1:2, ind_UAV);
    //!         vd_FormVel1 = [0; 0];
    //!         vd_FormAcc1 = [0; 0];
        elseif i_FormFrame == 2
            //! In-formation adjustment
            tmp_UAVRad = d_FormRad - md_FormPos(2, ind_UAV);
            tmp_cos_Gamma = cos(md_FormPos(1, ind_UAV)/d_FormRad);
            tmp_sin_Gamma = sin(md_FormPos(1, ind_UAV)/d_FormRad);
            //! - Position
            vd_FormPos1 = tmp_UAVRad * [tmp_sin_Gamma; 1 - tmp_cos_Gamma] + ...
                [0; md_FormPos(2, ind_UAV)];
    //!         //! - Velocity
    //!         vd_FormVel1 = [-vd_FormPos1(2); vd_FormPos1(1)] * d_FormTurnRate;
    //!         //! - Acceleration
    //!         vd_FormAcc1 = -vd_FormPos1 * d_FormTurnRate^2;
        else
            vd_FormPos1 = md_FormPos(1:2, ind_UAV);
    //!         vd_FormVel1 = [-vd_FormPos1(2); vd_FormPos1(1)] * ...
    //!             d_FormTurnRate;
    //!         vd_FormAcc1 = -vd_FormPos1 * d_FormTurnRate^2;
        end
    end

    //!-------------------------------------------
    //! Formation shape rotation
    //!-------------------------------------------

    int_UAV_N = size(md_UAVState, 2);
    vd_Surf_UAV = zeros(2, int_UAV_N);
    vtmp_VirtErr_UAV = zeros(2, int_UAV_N);
    vd_WeightGn = zeros(1, int_UAV_N);

    //! Tracking output
    if nargout > 3
        varargout{3} = zeros(int_UAV_N+1, 1);
        if nargout > 5
            varargout{5} = zeros(int_UAV_N+1, 2);
            if nargout > 6
                varargout{6} = zeros(int_UAV_N+1, 2);
                if nargout > 7
                    varargout{7} = zeros(int_UAV_N+1, 6);
                    if nargout > 8
                        varargout{8} = zeros(int_UAV_N+1, 2);
                        if nargout > 9
                            varargout{9} = zeros(int_UAV_N+1, 1);
                        end
                    end
                end
            end
        end
    end

    //! Formation UAV sweep
    vind_UAV = [1:ind_UAV-1, ind_UAV+1:int_UAV_N];
    ind_t = 1;
    while ind_t < int_UAV_N
        ind_UAV2 = vind_UAV(ind_t);
        ind_t = ind_t + 1;

        vd_InterUAVState = md_UAVState(1:6, ind_UAV2) - ...
            md_UAVState(1:6, ind_UAV);
        d_InterUAVdist = sqrt(sum(vd_InterUAVState(1:2).^2));
        //! Rotation matrix - From inter-UAV frame to ground frame
        d_InterUAVangle = atan2(vd_InterUAVState(2), ...
            vd_InterUAVState(1));
        d_cos_InterUAVangle = cos(d_InterUAVangle);
        d_sin_InterUAVangle = sin(d_InterUAVangle);
        md_Rot = [d_cos_InterUAVangle -d_sin_InterUAVangle;
            d_sin_InterUAVangle d_cos_InterUAVangle];
        vd_InterUAV_X = md_Rot * [1; 0];
        vd_InterUAV_Y = md_Rot * [0; 1];

        if i_FormFrame == 0
            //! Earth frame position references
            vd_InterUAVDesPos = md_FormPos(1:2, ind_UAV) - md_FormPos(1:2, ind_UAV2);
            //! - Velocity
            vd_InterUAVDesVel = [0; 0];
            //! - Acceleration
            vd_InterUAVDesAcc = [0; 0];
    //!         vd_Err = -vd_InterUAVState(1:2) - vd_InterUAVDesPos;
    //!         //! - Velocity
    //!         vd_InterUAVDesVel = [-vd_Err(2); vd_Err(1)] * d_FormTurnRate;
    //!         //! - Acceleration
    //!         vd_InterUAVDesAcc = -vd_Err * d_FormTurnRate^2;
        else
            //! Path frame position references
            if i_FormFrame == 2 && vd_LeadState(7) ~= 0
                //! In-formation adjustment
                tmp_UAVRad = d_FormRad - md_FormPos(2, ind_UAV2);
                tmp_cos_Gamma = cos(md_FormPos(1, ind_UAV2)/d_FormRad);
                tmp_sin_Gamma = sin(md_FormPos(1, ind_UAV2)/d_FormRad);
                //! - Position
                vd_FormPos2 = [0; md_FormPos(2, ind_UAV2)] + ...
                    tmp_UAVRad * [tmp_sin_Gamma; 1 - tmp_cos_Gamma];
    //!             //! - Velocity
    //!             vd_FormVel2 = [-vd_FormPos2(2); vd_FormPos2(1)] * ...
    //!                 d_FormTurnRate;
    //!             //! - Acceleration
    //!             vd_FormAcc2 = -vd_FormPos2 * d_FormTurnRate^2;
            else
                vd_FormPos2 = md_FormPos(1:2, ind_UAV2);
    //!             vd_FormVel2 = [-vd_FormPos2(2); vd_FormPos2(1)] * ...
    //!                 d_FormTurnRate;
    //!             vd_FormAcc2 = -vd_FormPos2 * d_FormTurnRate^2;
            end
            vd_InterUAVDesPos = md_RotForm * (vd_FormPos1 - ...
                vd_FormPos2);
    //!         vd_Err = -vd_InterUAVState(1:2) - vd_InterUAVDesPos;
            //! - Velocity
            vd_InterUAVDesVel = [vd_InterUAVState(2);
                -vd_InterUAVState(1)] * d_FormTurnRate;
            //! - Acceleration
            vd_InterUAVDesAcc = vd_InterUAVState(1:2) * ...
                d_FormTurnRate^2;
    //!         vd_InterUAVDesVel = md_RotForm * (vd_FormVel1 - ...
    //!             vd_FormVel2);
    //!         vd_InterUAVDesAcc = md_RotForm * (vd_FormAcc1 - ...
    //!             vd_FormAcc2);
        end

        //! Relative position error vector
        vd_Err = -vd_InterUAVState(1:2) - vd_InterUAVDesPos;
        vd_OrErr = vd_Err;
        d_ErrY = vd_Err' * vd_InterUAV_Y;
        [d_ErrX, int_Max] = max([vd_Err' * vd_InterUAV_X, ...
            d_DeconfDist - d_InterUAVdist]);

        //! Relative velocity error vector
        vd_dErr = -vd_InterUAVState(4:5) - vd_InterUAVDesVel;
        d_dErrX = vd_dErr' * vd_InterUAV_X;
        d_dErrY = vd_dErr' * vd_InterUAV_Y;

        //! Maneuvering constrains
        d_VProjX = (md_UAVState(4:5, ind_UAV2) - vd_Wind)'*vd_InterUAV_X;
        d_AccelMaxProjX = abs(vd_BodyAccelMaxX*vd_InterUAV_X) + ...
            abs(vd_BodyAccelMaxY*vd_InterUAV_X);
        d_VProjY = (md_UAVState(4:5, ind_UAV2) - vd_Wind)'*vd_InterUAV_Y;
        d_AccelMaxProjY = abs(vd_BodyAccelMaxX*vd_InterUAV_Y) + ...
            abs(vd_BodyAccelMaxY*vd_InterUAV_Y);

        //! Sliding Surface parameters of the inter-UAV X projection
        d_C1 = max(d_TASMax - d_VProjX, 0.5); //! Avoid negative maximum relative velocities
        tmp_CtrlMarg_Mult = 2 * d_TASMax/(d_TASMax + d_VProjX);
        d_C2 = d_CtrlMarg * tmp_CtrlMarg_Mult;
        if d_ErrX < 0
            d_C2 = max(4 * (1+d_AccSafMarg) * d_C1^2/(27 * d_AccelMaxProjX), d_C2);
    //!         tmp_CtrlMarg = d_C2/tmp_CtrlMarg_Mult;
    //!         d_DeconfDist = d_SafeDist + tmp_CtrlMarg;
            //!             if tmp_CtrlMarg > d_CtrlMarg*1.1;
            //!                 fprintf('Control margin: //!1.1f m; UAV//!d & UAV//!d\n', ...
            //!                     tmp_CtrlMarg, ind_UAV, ind_UAV2)
            //!                 pause(1)
            //!             end
        end

        //! Limitation of the sliding surface (before reaching negative infinite)
        if d_InterUAVdist < d_DeconfDist
            d_ErrX = min(d_ErrX, d_C2*0.5);
            if d_dErrX > 0
                d_ErrX_SConv = d_ErrX;
            else
                d_ErrX_SConv = min(d_ErrX, 0);
            end
        else
            d_ErrX = min(d_ErrX, d_C2*0.5);
            d_ErrX_SConv = d_ErrX;
        end
        //!             d_ErrX = min(d_ErrX, d_C2*0.5);
        //! Y projection adjustment, if target is beyond the other UAV
        if int_Max == 2
            //! Target point across another UAV position - Define a point
            //! on the safety rim of the other UAV to follow
            tmp_ErrY = 2 * d_DeconfDist;
            //!                 if d_ErrX > 0
            //!                     tmp_ErrY = 2 * d_DeconfDist;
            //!                 else
            //!                     tmp_ErrY = 0.5 * d_DeconfDist;
            //!                 end
            if tmp_ErrY > abs(d_ErrY)
                if d_ErrY < 0
                    d_ErrY = -tmp_ErrY;
                else
                    d_ErrY = tmp_ErrY;
                end
            end
        end
        vd_Err = md_Rot*[d_ErrX; d_ErrY];

        //! UAV-pair control importance regulation
        d_DesDist = sqrt(sum(vd_InterUAVDesPos.^2));
        d_Dist2Confl = d_InterUAVdist-d_DeconfDist;
        d_VGain = 1 + (d_dErrX^2/d_AccelMaxProjX - d_Dist2Confl)/d_CtrlMarg*...
            d_DeconfVGain;
        if d_Dist2Confl < 0
            d_DGain = 1 + (d_Dist2Confl/d_CtrlMarg)^2 * d_DeconfDistGain;
        elseif d_InterUAVdist <= d_DesDist*d_LngDistGain1
            d_DGain = 1;
        elseif d_InterUAVdist < d_DesDist*d_LngDistGain2
            d_DGain = 1-((d_InterUAVdist-d_DesDist*d_LngDistGain1)/...
                (d_DesDist*d_LngDistGain3))^2;
        else
            d_DGain = 0;
        end
        vd_WeightGn(ind_UAV2) = max(d_VGain, d_DGain);

        //! Sliding Surface parameters of the inter-UAV Y projection
        if d_ErrY < 0
            d_C3 = max(d_TASMax - d_VProjY, 0.5); //! Avoid negative maximum relative velocities
            d_C4 = 4 * (1+d_AccSafMarg) * d_C3^2/ ...
                (27 * d_AccelMaxProjY);
        else
            d_C3 = min(- d_TASMax - d_VProjY, -0.5); //! Avoid negative minimum relative velocities
            d_C4 = - 4 * (1+d_AccSafMarg) * d_C3^2/ ...
                (27 * d_AccelMaxProjY);
        end

        //! ======= Sliding surface ==============

        tmp_SurfX = d_C1 * d_ErrX/(d_ErrX - d_C2);
        tmp_SurfY = d_C3 * d_ErrY/(d_ErrY - d_C4);
        //! Sliding surface deviation
        vd_Surf_UAV(:, ind_UAV2) = vd_dErr - tmp_SurfX * vd_InterUAV_X - ...
            tmp_SurfY * vd_InterUAV_Y;

        //! ======= Virtual error and feedback linearization ================
        d_InterUAVangle_dot = vd_InterUAVState(4:5)' * ...
            vd_InterUAV_Y/d_InterUAVdist;
        //!             d_InterUAVangle_dot = 0;
        vtmp_VirtErr_UAV(:, ind_UAV2) = md_UAVAccel(1:2, ind_UAV2) + vd_InterUAVDesAcc - ...
            md_Rot * [d_C1*d_C2*d_dErrX/(d_ErrX_SConv - d_C2)^2 + ...
            tmp_SurfY * d_InterUAVangle_dot;
            d_C3 * d_C4 * d_dErrY/(d_ErrY - d_C4)^2 - tmp_SurfX * ...
            d_InterUAVangle_dot];//! md_UAVAccel(1:2, ind_UAV2) +

        //! Tracking output
        if nargout > 3
            varargout{3}(ind_UAV2) = d_InterUAVdist;
            if nargout > 5
                varargout{5}(ind_UAV2, :) = vd_InterUAV_X';
                if nargout > 6
    //!                 //! ======== Formation perturbation test - Mesh stability =======
    //!                 if ind_UAV == 2
    //!                     vd_Err = vd_Err + vd_Pert;
    //!                 end
    //!                 //! ======== Formation perturbation test - Mesh stability =======
                    varargout{6}(ind_UAV2, :) = vd_Err';
                    if nargout > 7
                        varargout{7}(ind_UAV2, :) = [vd_Err'*md_Rot, ...
                            vd_dErr'*md_Rot, vd_Surf_UAV(:, ind_UAV2)'*md_Rot];
                        if nargout > 8
                            varargout{8}(ind_UAV2, :) = vtmp_VirtErr_UAV(:, ind_UAV2)';
                            if nargout > 9
    //!                             //! ======== Formation perturbation test - Mesh stability =======
    //!                             if ind_UAV == 2
    //!                                 vd_OrErr = vd_OrErr + vd_Pert;
    //!                             end
    //!                             //! ======== Formation perturbation test - Mesh stability =======
                                varargout{9}(ind_UAV2) = sqrt(sum(vd_OrErr.^2));
                            end
                        end
                    end
                end
            end
        end
    end

    //!-------------------------------------------
    //! Leader relative dynamics - Formation global reference
    //!-------------------------------------------

    ind_UAV2 = int_UAV_N + 1;
    //! UAV importance regulation
    vd_WeightGn(ind_UAV2) = 1;

    vd_InterUAVState = vd_LeadState(1:6) - md_UAVState(1:6, ind_UAV);
    d_InterUAVdist = sqrt(sum(vd_InterUAVState(1:2).^2));
    d_InterUAVangle = atan2(vd_InterUAVState(2), ...
        vd_InterUAVState(1));
    d_cos_InterUAVangle = cos(d_InterUAVangle);
    d_sin_InterUAVangle = sin(d_InterUAVangle);
    md_Rot = [d_cos_InterUAVangle -d_sin_InterUAVangle;
        d_sin_InterUAVangle d_cos_InterUAVangle];
    vd_InterUAV_X = md_Rot * [1; 0];
    //! vd_InterUAV_Y = md_Rot * [0; 1];

    if i_FormFrame == 0
        //! Earth frame position references
        vd_InterUAVDesPos = md_FormPos(1:2, ind_UAV);
        vd_Err = -vd_InterUAVState(1:2) - vd_InterUAVDesPos;
    //!     //! - Velocity
    //!     vd_InterUAVDesVel = [0; 0];
    //!     //! - Acceleration
    //!     vd_InterUAVDesAcc = [0; 0];
        //! - Velocity
        vd_InterUAVDesVel = [-vd_Err(2); vd_Err(1)] * d_FormTurnRate;
        //! - Acceleration
        vd_InterUAVDesAcc = -vd_Err * d_FormTurnRate^2;
    else
        vd_InterUAVDesPos = md_RotForm * vd_FormPos1;
        vd_Err = -vd_InterUAVState(1:2) - vd_InterUAVDesPos;
        //! - Velocity
        vd_InterUAVDesVel = [vd_InterUAVState(2); -vd_InterUAVState(1)] * d_FormTurnRate;
        //! - Acceleration
        vd_InterUAVDesAcc = vd_InterUAVState(1:2) * d_FormTurnRate^2;
    //!     //! - Velocity
    //!     vd_InterUAVDesVel = md_RotForm * vd_FormVel1;
    //!     //! - Acceleration
    //!     vd_InterUAVDesAcc = md_RotForm * vd_FormAcc1;
    end

    //! Relative position error vector
    d_ErrX = vd_Err(1);
    d_ErrY = vd_Err(2);

    //! Relative position error vector
    vd_dErr = -vd_InterUAVState(4:5) - vd_InterUAVDesVel;
    d_dErrX = vd_dErr(1);
    d_dErrY = vd_dErr(2);

    //! Maneuvering constrains
    d_AccelMaxProjX = abs(vd_BodyAccelMaxX(1)) + ...
        abs(vd_BodyAccelMaxY(1));
    d_AccelMaxProjY = abs(vd_BodyAccelMaxX(2)) + ...
        abs(vd_BodyAccelMaxY(2));

    //! Sliding Surface parameters of the inter-UAV X projection
    if d_ErrX < 0
        d_C1 = max(d_TASMax - vd_LeadState(4) + vd_Wind(1), 0.5); //! Avoid negative maximum relative velocities
        d_C2 = 4 * (1+d_AccSafMarg) * d_C1^2/ ...
            (27 * d_AccelMaxProjX);
    //!     d_ErrX_SConv = max(d_ErrX, -d_C2);
    else
        d_C1 = min(- d_TASMax - vd_LeadState(4) + vd_Wind(1), -0.5); //! Avoid negative maximum relative velocities
        d_C2 = - 4 * (1+d_AccSafMarg) * d_C1^2/ ...
            (27 * d_AccelMaxProjX);
    //!     d_ErrX_SConv = min(d_ErrX, -d_C2);
    end
    //! Sliding Surface parameters of the inter-UAV Y projection
    if d_ErrY < 0
        d_C3 = max(d_TASMax - vd_LeadState(5) + vd_Wind(2), 0.5); //! Avoid negative maximum relative velocities
        d_C4 = 4 * (1+d_AccSafMarg) * d_C3^2/ ...
            (27 * d_AccelMaxProjY);
    //!     d_ErrY_SConv = max(d_ErrY, -d_C4);
    else
        d_C3 =  min(- d_TASMax - vd_LeadState(5) + vd_Wind(2), -0.5); //! Avoid negative maximum relative velocities
        d_C4 = - 4 * (1+d_AccSafMarg) * d_C3^2/ ...
            (27 * d_AccelMaxProjY);
    //!     d_ErrY_SConv = min(d_ErrY, -d_C4);
    end

    //! ======= Sliding surface ==============

    //! Sliding surface deviation
    vd_Surf_UAV(:, ind_UAV2) = vd_dErr - ...
        [d_C1 * d_ErrX/(d_ErrX - d_C2);
        d_C3 * d_ErrY/(d_ErrY - d_C4)];

    //! ======= Virtual error and feedback linearization ================
    vtmp_VirtErr_UAV(:, ind_UAV2) = vd_InterUAVDesAcc + md_UAVAccel(1:2, ind_UAV2) - ...
        [d_C1 * d_C2 * d_dErrX/(d_ErrX - d_C2)^2;
        d_C3 * d_C4 * d_dErrY/(d_ErrY - d_C4)^2]; //!

    //! Tracking output
    if nargout > 3
        varargout{3}(ind_UAV2) = d_InterUAVdist;
        if nargout > 5
            varargout{5}(ind_UAV2, :) = vd_InterUAV_X';
            if nargout > 6
    //!             //! ======== Formation perturbation test - Mesh stability =======
    //!             if ind_UAV == 2
    //!                 vd_Err = vd_Err + vd_Pert;
    //!             end
    //!             //! ======== Formation perturbation test - Mesh stability =======
                varargout{6}(ind_UAV2, :) = vd_Err';
                if nargout > 7
                    varargout{7}(ind_UAV2, :) = [vd_Err'*md_Rot, ...
                        vd_dErr'*md_Rot, vd_Surf_UAV(:, ind_UAV2)'*md_Rot];
                    if nargout > 8
                        varargout{8}(ind_UAV2, :) = vtmp_VirtErr_UAV(:, ind_UAV2)';
                        if nargout > 9
                            varargout{9}(ind_UAV2) = sqrt(sum(vd_Err.^2));
                        end
                    end
                end
            end
        end
    end

    //!-------------------------------------------
    //! Control influence merging
    //!-------------------------------------------

    //!-------------------------------------------
    //! Control importances
    //!-------------------------------------------

    //! UAV weight on control strategy
    vd_UAVWeight = [ones(1, int_UAV_N), d_FormRefGain];
    vd_UAVWeight(ind_UAV) = 0;
    vd_UAVWeight = vd_UAVWeight.*vd_WeightGn;
    //!     vd_UAVWeight = vd_UAVWeight./vd_WeightGn;
    vd_UAVWeight = vd_UAVWeight./sum(vd_UAVWeight);
    if nargout > 4
        varargout{4} = vd_UAVWeight';
    end
    //! Sliding surface data mixing
    vd_Surf = vd_Surf_UAV * vd_UAVWeight';
    vtmp_VirtErr = vtmp_VirtErr_UAV * vd_UAVWeight';

    d_SurfNorm = sqrt(sum(vd_Surf.^2));
    vd_SurfUnit = vd_Surf/d_SurfNorm;

    //!-------------------------------------------
    //! Sliding surface convergence term
    //!-------------------------------------------

    if d_SSBndLayer < d_SurfNorm
        vd_sat_Surf2Phi = vd_SurfUnit;
    //!     fprintf('Sat: //!1.2f - //!1.2f, //!1.2f!\n', d_SurfNorm, vd_Surf(1), vd_Surf(1))
    else
        vd_sat_Surf2Phi = vd_Surf/d_SSBndLayer;
    end
    vd_SurfConv = md_StateMtxInv'*md_GainMtx*md_StateMtxInv * vd_sat_Surf2Phi;

    //!-------------------------------------------
    //! Sliding surface unknown disturbance term
    //!-------------------------------------------

    //! vd_SurfUnkn = (2 * (int_UAV_N-1) + d_FormRefGain) * d_FlowAccelMax * vd_SurfUnit;

    //! vd_SurfUnkn1 = ((int_UAV_N-1)/(int_UAV_N-1+d_FormRefGain)+1)*...
    //!     d_FlowAccelMax*vd_SurfUnit;

    vd_SurfUnit = zeros(2, 1);
    //! UAVs/Uncertainty compensation
    ind_t = 1;
    while ind_t < int_UAV_N
        ind_UAV2 = vind_UAV(ind_t);
        ind_t = ind_t + 1;

        t_SurfSqr = sum(vd_Surf_UAV(:, ind_UAV2).^2);
        if t_SurfSqr
            vd_SurfUnit = vd_SurfUnit + 2*vd_Surf_UAV(:, ind_UAV2)*...
                vd_UAVWeight(ind_UAV2)/ sqrt(t_SurfSqr);
        end
    end
    //! Leader/Uncertainty compensation
    t_SurfSqr = sum(vd_Surf_UAV(:, ind_UAV2).^2);
    if t_SurfSqr
        vd_SurfUnit = vd_SurfUnit + d_FormRefGain*vd_Surf_UAV(:, ind_UAV2)*...
            vd_UAVWeight(ind_UAV2)/ sqrt(t_SurfSqr);
    end
    //! Formation/Uncertainty compensation
    vd_SurfUnkn = vd_SurfUnit*d_FlowAccelMax/(int_UAV_N-1+d_FormRefGain);
    //! if ind_UAV == 1
    //!     clc
    //!     fprintf('Uncertainty component 1: //!1.3f, //!1.3f\n', vd_SurfUnkn1(1), vd_SurfUnkn1(2))
    //!     fprintf('Uncertainty component 2: //!1.3f, //!1.3f\n', vd_SurfUnkn(1), vd_SurfUnkn(2))
    //! end

    //!-------------------------------------------
    //! Acceleration command
    //!-------------------------------------------

    //! md_StateMtxInv = [vd_BodyX; vd_BodyY];
    //! md_StateMtxInv = [vd_BodyX; vd_BodyY/d_HorSpd];
    //!     md_StateMtxInv = [d_cos_Heading d_sin_Heading;
    //!         -d_sin_Heading/d_HorSpd d_cos_Heading/d_HorSpd];

    //! Control vector
    //! vd_Accel = (vtmp_VirtErr - vd_SurfConv - vd_SurfUnkn)/...
    //!     (int_UAV_N-1+d_FormRefGain);
    vd_Accel = vtmp_VirtErr - vd_SurfConv - vd_SurfUnkn;
    vd_Ctrl = md_StateMtxInv*vd_Accel;

    //!-------------------------------------------
    //! Altitude control
    //!-------------------------------------------

    d_AltCmd = md_FormPos(3, ind_UAV) + vd_LeadState(3);

    //!-------------------------------------------
    //! Speed control
    //!-------------------------------------------

    d_AccelXCmd = min(max(vd_Ctrl(1), -d_AccelXMax), ...
        d_AccelXMax);
    vd_Ctrl(1) = d_AccelXCmd;
    d_TASCmd = d_TASCmd + d_TimeStep * d_AccelXCmd;

    //!-------------------------------------------
    //! Course control
    //!-------------------------------------------

    //! Bank command
    d_BankCmd = atan(vd_Ctrl(2)/d_g); //! Desired bank

    //!===========================================
    //! Control limits
    //!===========================================

    //! Velocity limits
    d_TASCmd = min(max(d_TASCmd, d_TASMin), d_TASMax);

    //! Altitude limits
    d_AltCmd = min(max(d_AltCmd, d_AltMin), d_AltMax);

    //! Bank limits
    d_BankCmd = min(max(d_BankCmd, -d_BankMax), d_BankMax);
    vd_Ctrl(2) = d_g*tan(d_BankCmd); //! Real lateral acceleration command

    //!===========================================
    //! Log data
    //!===========================================

    if nargout > 1
        varargout{1} = vd_Accel';
        if nargout > 2
            varargout{2} = [vtmp_VirtErr; -vd_SurfConv; -vd_SurfUnkn]';
            if nargout > 10
                varargout{10} = vd_Surf';
                if nargout > 11
                    varargout{11} = vd_Ctrl';
                end
            end
        end
    end

    //!===========================================
    //! Output
    //!===========================================

    //!       ========= Low level control =========
    vd_Cmd(1) = d_BankCmd;
    vd_Cmd(2) = d_TASCmd;
    vd_Cmd(3) = d_AltCmd;

  }
};

DUNE_TASK_END
