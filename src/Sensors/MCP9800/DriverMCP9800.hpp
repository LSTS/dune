//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Macedo                                                    *
//***************************************************************************


#ifndef SENSORS_DRIVER_MCP9800_HPP_INCLUDED_
#define SENSORS_DRIVER_MCP9800_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Miguel Macedo
    namespace MCP9800
    {
        using DUNE_NAMESPACES;


        class DriverMCP9800
        {
	   	 /*===========================================================================
	           	 DriverINA219 Enums and Structs
	   	 =========================================================================*/
            public:
			        
		/*---------------------------------------------------------------------------
			 Register Pointers
		---------------------------------------------------------------------------*/
            typedef enum  
            {
    		    MCP_REG_TA		    = 0x00,
    		    MCP_REG_CONFIG		= 0x01,
    		    MCP_REG_THYST		= 0x10,
    		    MCP_REG_TSET		= 0x11
            } MCP_REG_e;
		/*-------------------------------------------------------------------------*/


	       /*---------------------------------------------------------------------------
		          Function Return Status
		---------------------------------------------------------------------------*/
            typedef enum 
	        {
	            MCP_STATUS_SUCCESS = 0x00,
		        MCP_STATUS_ERROR = 0x01
		    } MCP_STATUS_e;	
		/*--------------------------------------------------------------------------*/	     


		/*---------------------------------------------------------------------------
    			Config Register Settings
		--------------------------------------------------------------------------*/
		
		//CONFIG: One-shot mode (single conversion while in shutdown)
            typedef enum
		    {
		        MCP_CONFIG_ONESHOT_ENABLE = 0x01,
		        MCP_CONFIG_ONESHOT_DISABLE = 0x00
		    } MCP_CONFIG_ONESHOT_e;

		//CONFIG: Delta-Sigma ADC Resolution
            typedef enum
    		{
	        	 MCP_CONFIG_ADC_9BIT = 0x00,	//0.5ºC
	             MCP_CONFIG_ADC_10BIT = 0x01, 	//0.25ºC
	             MCP_CONFIG_ADC_11BIT = 0x02, 	//0.125ºC
	        	 MCP_CONFIG_ADC_12BIT = 0x03 	//0.0625ºC
	    	} MCP_CONFIG_ADC_e;

		//CONFIG: Fault queque bits  
            typedef enum
    		{
        		 MCP_CONFIG_QUEQUE_1BIT = 0x00,
        		 MCP_CONFIG_QUEQUE_2BIT = 0x01,
        		 MCP_CONFIG_QUEQUE_4BIT = 0x02 ,
        		 MCP_CONFIG_QUEQUE_6BIT = 0x03
    		} MCP_CONFIG_QUEQUE_e;
	      
		//CONFIG: Alert output Polarity bit
            typedef enum
    		{
        		 MCP_CONFIG_POLARITY_LOW   = 0x00,
        		 MCP_CONFIG_POLARITY_HIGH  = 0x01
       		} MCP_CONFIG_POLARITY_e;
	      
		//CONFIG: Comparator/Interruipt output mode 
		    typedef enum
		    {
		        MCP_CONFIG_MODE_COMP= 0x00,
		        MCP_CONFIG_MODE_INT= 0x01
		    } MCP_CONFIG_MODE_e;
	      
		//CONFIG: Shutdown 
		    typedef enum
		    {
		        MCP_CONFIG_SHUTDOWN_DISABLE= 0x00,
		        MCP_CONFIG_SHUTDOWN_ENABLE= 0x01
		    } MCP_CONFIG_SHUTDOWN_e;
		/*-------------------------------------------------------------------------*/

	       	private:


		// Device information and settings
		    typedef struct
		    {
		        std::string elabel;
		        uint8_t address;
    		} MCP_DEVICE_t;

	      /*===========================================================================
	       *         DriverMCP9800 Functions
	       *=========================================================================*/
	        public:
	        DriverMCP9800(DUNE::Tasks::Periodic* task, DUNE::Hardware::I2C* i2c, const std::string elabel, const int address);
		
	        MCP_STATUS_e
    		config(MCP_CONFIG_ONESHOT_e oneshot_mode, MCP_CONFIG_ADC_e adc_mode, MCP_CONFIG_QUEQUE_e queque, MCP_CONFIG_POLARITY_e polarity, MCP_CONFIG_MODE_e mode, MCP_CONFIG_SHUTDOWN_e shutdown);

	    	MCP_STATUS_e
	    	getBusTemperature(float& bus_temperature);


	    	private:
	    	MCP_STATUS_e
	    	write(MCP_REG_e reg_addr, uint8_t* data);
		
	    	MCP_STATUS_e
	    	read(MCP_REG_e reg_addr, uint8_t* data);
	
	    	//Parent task.
	    	DUNE::Tasks::Periodic* m_task;
	    	//I2C Port Device
	    	DUNE::Hardware::I2C* m_i2c;
	    	//Device information
	    	MCP_DEVICE_t m_device;

        };
    }
} 
#endif /*SENSOR_DRIVER_MCP9800_HPP_INCLUDED_*/
