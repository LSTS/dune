//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef SENSORS_MPU9250_REGISTER_MAP_HPP_INCLUDED_
#define SENSORS_MPU9250_REGISTER_MAP_HPP_INCLUDED_

namespace Sensors
{
  namespace MPU9250
  {
    // static constexpr uint8_t AK8963_ADDRESS     = 0x0C;
    static constexpr uint8_t AK8963_WHO_AM_I    = 0x00; // should return 0x48
    static constexpr uint8_t AK8963_INFO        = 0x01;
    static constexpr uint8_t AK8963_ST1         = 0x02;  // data ready status bit 0
    static constexpr uint8_t AK8963_XOUT_L	    = 0x03;  // data
    static constexpr uint8_t AK8963_XOUT_H	    = 0x04;
    static constexpr uint8_t AK8963_YOUT_L	    = 0x05;
    static constexpr uint8_t AK8963_YOUT_H	    = 0x06;
    static constexpr uint8_t AK8963_ZOUT_L	    = 0x07;
    static constexpr uint8_t AK8963_ZOUT_H	    = 0x08;
    static constexpr uint8_t AK8963_ST2         = 0x09;  // Data overflow bit 3 and data read error status bit 2
    static constexpr uint8_t AK8963_CNTL        = 0x0A;  // Power down (0000), single-measurement (0001), self-test (1000) and Fuse ROM (1111) modes on bits 3:0
    static constexpr uint8_t AK8963_ASTC        = 0x0C;  // Self test control
    static constexpr uint8_t AK8963_I2CDIS      = 0x0F;  // I2C disable
    static constexpr uint8_t AK8963_ASAX        = 0x10;  // Fuse ROM x-axis sensitivity adjustment value
    static constexpr uint8_t AK8963_ASAY        = 0x11;  // Fuse ROM y-axis sensitivity adjustment value
    static constexpr uint8_t AK8963_ASAZ        = 0x12;  // Fuse ROM z-axis sensitivity adjustment value
    static constexpr uint8_t SELF_TEST_X_GYRO   = 0x00;
    static constexpr uint8_t SELF_TEST_Y_GYRO   = 0x01;
    static constexpr uint8_t SELF_TEST_Z_GYRO   = 0x02;
    // static constexpr uint8_t X_FINE_GAIN        = 0x03; // [7:0] fine gain
    // static constexpr uint8_t Y_FINE_GAIN        = 0x04;
    // static constexpr uint8_t Z_FINE_GAIN        = 0x05;
    // static constexpr uint8_t XA_OFFSET_H        = 0x06; // User-defined trim values for accelerometer
    // static constexpr uint8_t XA_OFFSET_L_TC     = 0x07;
    // static constexpr uint8_t YA_OFFSET_H        = 0x08;
    // static constexpr uint8_t YA_OFFSET_L_TC     = 0x09;
    // static constexpr uint8_t ZA_OFFSET_H        = 0x0A;
    // static constexpr uint8_t ZA_OFFSET_L_TC     = 0x0B;
    static constexpr uint8_t SELF_TEST_X_ACCEL  = 0x0D;
    static constexpr uint8_t SELF_TEST_Y_ACCEL  = 0x0E;
    static constexpr uint8_t SELF_TEST_Z_ACCEL  = 0x0F;
    static constexpr uint8_t SELF_TEST_A        = 0x10;
    static constexpr uint8_t XG_OFFSET_H        = 0x13;  // User-defined trim values for gyroscope
    static constexpr uint8_t XG_OFFSET_L        = 0x14;
    static constexpr uint8_t YG_OFFSET_H        = 0x15;
    static constexpr uint8_t YG_OFFSET_L        = 0x16;
    static constexpr uint8_t ZG_OFFSET_H        = 0x17;
    static constexpr uint8_t ZG_OFFSET_L        = 0x18;
    static constexpr uint8_t SMPLRT_DIV         = 0x19;
    static constexpr uint8_t MPU_CONFIG         = 0x1A;
    static constexpr uint8_t GYRO_CONFIG        = 0x1B;
    static constexpr uint8_t ACCEL_CONFIG       = 0x1C;
    static constexpr uint8_t ACCEL_CONFIG2      = 0x1D;
    static constexpr uint8_t LP_ACCEL_ODR       = 0x1E;
    static constexpr uint8_t WOM_THR            = 0x1F;
    static constexpr uint8_t MOT_DUR            = 0x20;  // Duration counter threshold for motion interrupt generation, 1 kHz rate, LSB = 1 ms
    static constexpr uint8_t ZMOT_THR           = 0x21;  // Zero-motion detection threshold bits [7:0]
    static constexpr uint8_t ZRMOT_DUR          = 0x22;  // Duration counter threshold for zero motion interrupt generation, 16 Hz rate, LSB = 64 ms
    static constexpr uint8_t FIFO_EN            = 0x23;
    static constexpr uint8_t I2C_MST_CTRL       = 0x24;
    static constexpr uint8_t I2C_SLV0_ADDR      = 0x25;
    static constexpr uint8_t I2C_SLV0_REG       = 0x26;
    static constexpr uint8_t I2C_SLV0_CTRL      = 0x27;
    static constexpr uint8_t I2C_SLV1_ADDR      = 0x28;
    static constexpr uint8_t I2C_SLV1_REG       = 0x29;
    static constexpr uint8_t I2C_SLV1_CTRL      = 0x2A;
    static constexpr uint8_t I2C_SLV2_ADDR      = 0x2B;
    static constexpr uint8_t I2C_SLV2_REG       = 0x2C;
    static constexpr uint8_t I2C_SLV2_CTRL      = 0x2D;
    static constexpr uint8_t I2C_SLV3_ADDR      = 0x2E;
    static constexpr uint8_t I2C_SLV3_REG       = 0x2F;
    static constexpr uint8_t I2C_SLV3_CTRL      = 0x30;
    static constexpr uint8_t I2C_SLV4_ADDR      = 0x31;
    static constexpr uint8_t I2C_SLV4_REG       = 0x32;
    static constexpr uint8_t I2C_SLV4_DO        = 0x33;
    static constexpr uint8_t I2C_SLV4_CTRL      = 0x34;
    static constexpr uint8_t I2C_SLV4_DI        = 0x35;
    static constexpr uint8_t I2C_MST_STATUS     = 0x36;
    static constexpr uint8_t INT_PIN_CFG        = 0x37;
    static constexpr uint8_t INT_ENABLE         = 0x38;
    static constexpr uint8_t DMP_INT_STATUS     = 0x39;  // Check DMP interrupt
    static constexpr uint8_t INT_STATUS         = 0x3A;
    static constexpr uint8_t ACCEL_XOUT_H       = 0x3B;
    static constexpr uint8_t ACCEL_XOUT_L       = 0x3C;
    static constexpr uint8_t ACCEL_YOUT_H       = 0x3D;
    static constexpr uint8_t ACCEL_YOUT_L       = 0x3E;
    static constexpr uint8_t ACCEL_ZOUT_H       = 0x3F;
    static constexpr uint8_t ACCEL_ZOUT_L       = 0x40;
    static constexpr uint8_t TEMP_OUT_H         = 0x41;
    static constexpr uint8_t TEMP_OUT_L         = 0x42;
    static constexpr uint8_t GYRO_XOUT_H        = 0x43;
    static constexpr uint8_t GYRO_XOUT_L        = 0x44;
    static constexpr uint8_t GYRO_YOUT_H        = 0x45;
    static constexpr uint8_t GYRO_YOUT_L        = 0x46;
    static constexpr uint8_t GYRO_ZOUT_H        = 0x47;
    static constexpr uint8_t GYRO_ZOUT_L        = 0x48;
    static constexpr uint8_t EXT_SENS_DATA_00   = 0x49;
    static constexpr uint8_t EXT_SENS_DATA_01   = 0x4A;
    static constexpr uint8_t EXT_SENS_DATA_02   = 0x4B;
    static constexpr uint8_t EXT_SENS_DATA_03   = 0x4C;
    static constexpr uint8_t EXT_SENS_DATA_04   = 0x4D;
    static constexpr uint8_t EXT_SENS_DATA_05   = 0x4E;
    static constexpr uint8_t EXT_SENS_DATA_06   = 0x4F;
    static constexpr uint8_t EXT_SENS_DATA_07   = 0x50;
    static constexpr uint8_t EXT_SENS_DATA_08   = 0x51;
    static constexpr uint8_t EXT_SENS_DATA_09   = 0x52;
    static constexpr uint8_t EXT_SENS_DATA_10   = 0x53;
    static constexpr uint8_t EXT_SENS_DATA_11   = 0x54;
    static constexpr uint8_t EXT_SENS_DATA_12   = 0x55;
    static constexpr uint8_t EXT_SENS_DATA_13   = 0x56;
    static constexpr uint8_t EXT_SENS_DATA_14   = 0x57;
    static constexpr uint8_t EXT_SENS_DATA_15   = 0x58;
    static constexpr uint8_t EXT_SENS_DATA_16   = 0x59;
    static constexpr uint8_t EXT_SENS_DATA_17   = 0x5A;
    static constexpr uint8_t EXT_SENS_DATA_18   = 0x5B;
    static constexpr uint8_t EXT_SENS_DATA_19   = 0x5C;
    static constexpr uint8_t EXT_SENS_DATA_20   = 0x5D;
    static constexpr uint8_t EXT_SENS_DATA_21   = 0x5E;
    static constexpr uint8_t EXT_SENS_DATA_22   = 0x5F;
    static constexpr uint8_t EXT_SENS_DATA_23   = 0x60;
    static constexpr uint8_t MOT_DETECT_STATUS  = 0x61;
    static constexpr uint8_t I2C_SLV0_DO        = 0x63;
    static constexpr uint8_t I2C_SLV1_DO        = 0x64;
    static constexpr uint8_t I2C_SLV2_DO        = 0x65;
    static constexpr uint8_t I2C_SLV3_DO        = 0x66;
    static constexpr uint8_t I2C_MST_DELAY_CTRL = 0x67;
    static constexpr uint8_t SIGNAL_PATH_RESET  = 0x68;
    static constexpr uint8_t MOT_DETECT_CTRL    = 0x69;
    static constexpr uint8_t USER_CTRL          = 0x6A;  // Bit 7 enable DMP, bit 3 reset DMP
    static constexpr uint8_t PWR_MGMT_1         = 0x6B; // Device defaults to the SLEEP mode
    static constexpr uint8_t PWR_MGMT_2         = 0x6C;
    static constexpr uint8_t DMP_BANK           = 0x6D;  // Activates a specific bank in the DMP
    static constexpr uint8_t DMP_RW_PNT         = 0x6E;  // Set read/write pointer to a specific start address in specified DMP bank
    static constexpr uint8_t DMP_REG            = 0x6F;  // Register in DMP from which to read or to which to write
    static constexpr uint8_t DMP_REG_1          = 0x70;
    static constexpr uint8_t DMP_REG_2          = 0x71;
    static constexpr uint8_t FIFO_COUNTH        = 0x72;
    static constexpr uint8_t FIFO_COUNTL        = 0x73;
    static constexpr uint8_t FIFO_R_W           = 0x74;
    static constexpr uint8_t WHO_AM_I_MPU9250   = 0x75; // Should return 0x71
    static constexpr uint8_t XA_OFFSET_H        = 0x77;
    static constexpr uint8_t XA_OFFSET_L        = 0x78;
    static constexpr uint8_t YA_OFFSET_H        = 0x7A;
    static constexpr uint8_t YA_OFFSET_L        = 0x7B;
    static constexpr uint8_t ZA_OFFSET_H        = 0x7D;
    static constexpr uint8_t ZA_OFFSET_L        = 0x7E;
  }
}

#endif
