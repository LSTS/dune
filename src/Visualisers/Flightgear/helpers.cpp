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
// Author: Kristian Klausen                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Task specific headers
#include "net_fdm.hxx"
#include "helpers.hpp"



namespace Visualisers
{
  namespace Flightgear
  {
    using DUNE_NAMESPACES;

    static const int endianTest = 1;
    #define hostIsLittleEndian (*((char *) &endianTest ) != 0)
    #define hostIsBigEndian (*((char *) &endianTest ) == 0)

    // Forward declarations
    static void ntohd(double &x);
    static void ntohf(float &x);
    static void htond(double &x);
    static void htonf(float &x);

    static const double METER_TO_FEET = 3.2808;
    static const double FEET_TO_METER = 0.3048;

    static const double MS_TO_KNOT    = 1.9438444924406;

    // Implementations


    void
    convertFromSimstateToFGNetHost(IMC::SimulatedState* simstate, IMC::Acceleration* acc, FGNetFDM* net)
    {

    	// Set version!
    	net->version    = FG_NET_FDM_VERSION;

    	// Positions
    	net->latitude 	= simstate->lat;
    	net->longitude  = simstate->lon;
    	net->altitude   = simstate->height;

    	net->agl        = 0; //simstate->height; // Agl: Above ground level.

    	net->phi        = simstate->phi;
    	net->theta      = simstate->theta;
    	net->psi        = simstate->psi;

    	net->alpha		  = 0;
    	net->beta       = 0;

    	net->cur_time   = Clock::getSinceEpochMsec()*1000;


    	// Velocities
    	net->phidot     = simstate->p;
    	net->thetadot   = simstate->q;
    	net->psidot     = simstate->r;

    	net->vcas       = 0; // cal. airspeed
    	net->climb_rate = 0; // feet


    	//fp32_t vx, vy, vz;
		  //BodyFixedFrame::toInertialFrame(simstate->phi, simstate->theta, simstate->psi,
			//  simstate->u, simstate->v, simstate->w,
			//  &vx, &vy, &vz);

    	net->v_north	  = simstate->u*METER_TO_FEET;
    	net->v_east     = simstate->v*METER_TO_FEET;
    	net->v_down     = simstate->w*METER_TO_FEET;

    	// TODO: add wind


    	net->A_X_pilot = acc->x;
    	net->A_Y_pilot = acc->y;
    	net->A_Z_pilot = acc->z;


    	// Rest is just things we do not need now.

    	net->num_engines = 0;
    	net->num_tanks = 0;
    	net->num_wheels = 0;
    }



    //! Converts incomming buffer to host-ordered Flightgear native format
    void
    convertFromNetworkEndian(FGNetFDM* net)
    {
      // Convert the net buffer to network format
      net->version = ntohl(net->version);



      ntohd(net->longitude);
      ntohd(net->latitude);
      ntohd(net->altitude);
      ntohf(net->agl);
      ntohf(net->phi);
      ntohf(net->theta);
      ntohf(net->psi);
      ntohf(net->alpha);
      ntohf(net->beta);

      ntohf(net->phidot);
      ntohf(net->thetadot);
      ntohf(net->psidot);
      ntohf(net->vcas);
      ntohf(net->climb_rate);
      ntohf(net->v_north);
      ntohf(net->v_east);
      ntohf(net->v_down);
      ntohf(net->v_wind_body_north);
      ntohf(net->v_wind_body_east);
      ntohf(net->v_wind_body_down);

      ntohf(net->A_X_pilot);
      ntohf(net->A_Y_pilot);
      ntohf(net->A_Z_pilot);

      ntohf(net->stall_warning);
      ntohf(net->slip_deg);



      unsigned int i;

      net->num_engines = ntohl(net->num_engines);
      for ( i = 0; i < net->num_engines; ++i ) {
        net->eng_state[i] = ntohl(net->eng_state[i]);
        ntohf(net->rpm[i]);
        ntohf(net->fuel_flow[i]);
        ntohf(net->fuel_px[i]);
        ntohf(net->egt[i]);
        ntohf(net->cht[i]);
        ntohf(net->mp_osi[i]);
        ntohf(net->tit[i]);
        ntohf(net->oil_temp[i]);
        ntohf(net->oil_px[i]);
      }


      net->num_tanks = ntohl(net->num_tanks);
      for ( i = 0; i < net->num_tanks; ++i ) {
        ntohf(net->fuel_quantity[i]);
      }

      net->num_wheels = ntohl(net->num_wheels);
      for ( i = 0; i < net->num_wheels; ++i ) {
        net->wow[i] = ntohl(net->wow[i]);
        ntohf(net->gear_pos[i]);
        ntohf(net->gear_steer[i]);
        ntohf(net->gear_compression[i]);
      }


      net->cur_time = ntohl( net->cur_time );
      net->warp = ntohl( net->warp );
      ntohf(net->visibility);

      ntohf(net->elevator);
      ntohf(net->elevator_trim_tab);
      ntohf(net->left_flap);
      ntohf(net->right_flap);
      ntohf(net->left_aileron);
      ntohf(net->right_aileron);
      ntohf(net->rudder);
      ntohf(net->nose_wheel);
      ntohf(net->speedbrake);
      ntohf(net->spoilers);
    }
    void
    convertToNetworkEndian(FGNetFDM* net)
    {

      // Convert the net buffer to network format
      net->version = htonl(net->version);

      htond(net->longitude);
      htond(net->latitude);
      htond(net->altitude);
      htonf(net->agl);
      htonf(net->phi);
      htonf(net->theta);
      htonf(net->psi);
      htonf(net->alpha);
      htonf(net->beta);

      htonf(net->phidot);
      htonf(net->thetadot);
      htonf(net->psidot);
      htonf(net->vcas);
      htonf(net->climb_rate);
      htonf(net->v_north);
      htonf(net->v_east);
      htonf(net->v_down);
      htonf(net->v_wind_body_north);
      htonf(net->v_wind_body_east);
      htonf(net->v_wind_body_down);

      htonf(net->A_X_pilot);
      htonf(net->A_Y_pilot);
      htonf(net->A_Z_pilot);

      htonf(net->stall_warning);
      htonf(net->slip_deg);

      unsigned int i;
      for ( i = 0; i < net->num_engines; ++i ) {
        net->eng_state[i] = htonl(net->eng_state[i]);
        htonf(net->rpm[i]);
        htonf(net->fuel_flow[i]);
        htonf(net->fuel_px[i]);
        htonf(net->egt[i]);
        htonf(net->cht[i]);
        htonf(net->mp_osi[i]);
        htonf(net->tit[i]);
        htonf(net->oil_temp[i]);
        htonf(net->oil_px[i]);
      }
      net->num_engines = htonl(net->num_engines);

      for ( i = 0; i < net->num_tanks; ++i ) {
        htonf(net->fuel_quantity[i]);
      }
      net->num_tanks = htonl(net->num_tanks);

      for ( i = 0; i < net->num_wheels; ++i ) {
        net->wow[i] = htonl(net->wow[i]);
        htonf(net->gear_pos[i]);
        htonf(net->gear_steer[i]);
        htonf(net->gear_compression[i]);
      }
      net->num_wheels = htonl(net->num_wheels);

      net->cur_time = htonl( net->cur_time );
      net->warp = htonl( net->warp );
      htonf(net->visibility);

      htonf(net->elevator);
      htonf(net->elevator_trim_tab);
      htonf(net->left_flap);
      htonf(net->right_flap);
      htonf(net->left_aileron);
      htonf(net->right_aileron);
      htonf(net->rudder);
      htonf(net->nose_wheel);
      htonf(net->speedbrake);
      htonf(net->spoilers);

    }

    void
    convertFromNetworkEndian(FGNetCtrls* ctrls)
    {

      ctrls->version = htonl(ctrls->version);
      htond(ctrls->aileron);
      htond(ctrls->elevator);
      htond(ctrls->rudder);
      htond(ctrls->aileron_trim);
      htond(ctrls->elevator_trim);
      htond(ctrls->rudder_trim);
      htond(ctrls->flaps);
      htond(ctrls->speedbrake);
      htond(ctrls->spoilers);
      ctrls->flaps_power = htonl(ctrls->flaps_power);
      ctrls->flap_motor_ok = htonl(ctrls->flap_motor_ok);

      ctrls->num_engines = htonl(ctrls->num_engines);

      int i;
      for ( i = 0; i < (int)ctrls->num_engines; ++i )
      {
        ctrls->master_bat[i] = htonl(ctrls->master_bat[i]);
        ctrls->master_alt[i] = htonl(ctrls->master_alt[i]);
        ctrls->magnetos[i] = htonl(ctrls->magnetos[i]);
        ctrls->starter_power[i] = htonl(ctrls->starter_power[i]);
        htond(ctrls->throttle[i]);
        htond(ctrls->mixture[i]);
        ctrls->fuel_pump_power[i] = htonl(ctrls->fuel_pump_power[i]);
        htond(ctrls->prop_advance[i]);
        htond(ctrls->condition[i]);
        ctrls->engine_ok[i] = htonl(ctrls->engine_ok[i]);
        ctrls->mag_left_ok[i] = htonl(ctrls->mag_left_ok[i]);
        ctrls->mag_right_ok[i] = htonl(ctrls->mag_right_ok[i]);
        ctrls->spark_plugs_ok[i] = htonl(ctrls->spark_plugs_ok[i]);
        ctrls->oil_press_status[i] = htonl(ctrls->oil_press_status[i]);
        ctrls->fuel_pump_ok[i] = htonl(ctrls->fuel_pump_ok[i]);
      }

      ctrls->num_tanks = htonl(ctrls->num_tanks);
      for ( i = 0; i < FGNetCtrls::FG_MAX_TANKS; ++i )
      {
        ctrls->fuel_selector[i] = htonl(ctrls->fuel_selector[i]);
      }

      ctrls->cross_feed = htonl(ctrls->cross_feed);
      htond(ctrls->brake_left);
      htond(ctrls->brake_right);
      htond(ctrls->copilot_brake_left);
      htond(ctrls->copilot_brake_right);
      htond(ctrls->brake_parking);
      ctrls->gear_handle = htonl(ctrls->gear_handle);
      ctrls->master_avionics = htonl(ctrls->master_avionics);
      htond(ctrls->wind_speed_kt);
      htond(ctrls->wind_dir_deg);
      htond(ctrls->turbulence_norm);
      htond(ctrls->temp_c);
      htond(ctrls->press_inhg);
      htond(ctrls->hground);
      htond(ctrls->magvar);
      ctrls->icing = htonl(ctrls->icing);
      ctrls->speedup = htonl(ctrls->speedup);
      ctrls->freeze = htonl(ctrls->freeze);
    }
    void
    convertToNetworkEndian(FGNetCtrls* ctrls)
    {
      ctrls->version = htonl(ctrls->version);
      htond(ctrls->aileron);
      htond(ctrls->elevator);
      htond(ctrls->rudder);
      htond(ctrls->aileron_trim);
      htond(ctrls->elevator_trim);
      htond(ctrls->rudder_trim);
      htond(ctrls->flaps);
      htond(ctrls->speedbrake);
      htond(ctrls->spoilers);
      ctrls->flaps_power = htonl(ctrls->flaps_power);
      ctrls->flap_motor_ok = htonl(ctrls->flap_motor_ok);

      ctrls->num_engines = htonl(ctrls->num_engines);
      int i;
      for ( i = 0; i < FGNetCtrls::FG_MAX_ENGINES; ++i ) {
        ctrls->master_bat[i] = htonl(ctrls->master_bat[i]);
        ctrls->master_alt[i] = htonl(ctrls->master_alt[i]);
        ctrls->magnetos[i] = htonl(ctrls->magnetos[i]);
        ctrls->starter_power[i] = htonl(ctrls->starter_power[i]);
        htond(ctrls->throttle[i]);
        htond(ctrls->mixture[i]);
        ctrls->fuel_pump_power[i] = htonl(ctrls->fuel_pump_power[i]);
        htond(ctrls->prop_advance[i]);
        htond(ctrls->condition[i]);
        ctrls->engine_ok[i] = htonl(ctrls->engine_ok[i]);
        ctrls->mag_left_ok[i] = htonl(ctrls->mag_left_ok[i]);
        ctrls->mag_right_ok[i] = htonl(ctrls->mag_right_ok[i]);
        ctrls->spark_plugs_ok[i] = htonl(ctrls->spark_plugs_ok[i]);
        ctrls->oil_press_status[i] = htonl(ctrls->oil_press_status[i]);
        ctrls->fuel_pump_ok[i] = htonl(ctrls->fuel_pump_ok[i]);
      }

      ctrls->num_tanks = htonl(ctrls->num_tanks);
      for ( i = 0; i < FGNetCtrls::FG_MAX_TANKS; ++i ) {
        ctrls->fuel_selector[i] = htonl(ctrls->fuel_selector[i]);
      }

      ctrls->cross_feed = htonl(ctrls->cross_feed);
      htond(ctrls->brake_left);
      htond(ctrls->brake_right);
      htond(ctrls->copilot_brake_left);
      htond(ctrls->copilot_brake_right);
      htond(ctrls->brake_parking);
      ctrls->gear_handle = htonl(ctrls->gear_handle);
      ctrls->master_avionics = htonl(ctrls->master_avionics);
      htond(ctrls->wind_speed_kt);
      htond(ctrls->wind_dir_deg);
      htond(ctrls->turbulence_norm);
      htond(ctrls->temp_c);
      htond(ctrls->press_inhg);
      htond(ctrls->hground);
      htond(ctrls->magvar);
      ctrls->icing = htonl(ctrls->icing);
      ctrls->speedup = htonl(ctrls->speedup);
      ctrls->freeze = htonl(ctrls->freeze);

    }


    // From http://stackoverflow.com/questions/10616883/how-to-convert-double-between-host-and-network-byte-order
    static void
    htond (double &x)
    {
      if ( hostIsLittleEndian )
      {
        int    *Double_Overlay;
        int     Holding_Buffer;

        Double_Overlay = (int *) &x;
        Holding_Buffer = Double_Overlay [0];

        Double_Overlay [0] = htonl (Double_Overlay [1]);
        Double_Overlay [1] = htonl (Holding_Buffer);
      }
      else
      {
        return;
      }
    }

    // Float version
    static void
    htonf (float &x)
    {
      if ( hostIsLittleEndian )
      {
        int    *Float_Overlay;
        int     Holding_Buffer;

        Float_Overlay = (int *) &x;
        Holding_Buffer = Float_Overlay [0];

        Float_Overlay [0] = htonl (Holding_Buffer);
      }
      else
      {
        return;
      }
    }

    static void
    ntohd(double &x)
    {
      // On little-endian machines, this is the same as htond
      if( hostIsLittleEndian)
      {
        htond(x);
      }
      // else, do nothing.
    }

    static void
    ntohf(float &x)
    {
      // On little-endian machines, this is the same as htond
      if( hostIsLittleEndian)
      {
        htonf(x);
      }
      // else, do nothing.
    }

  }
}
