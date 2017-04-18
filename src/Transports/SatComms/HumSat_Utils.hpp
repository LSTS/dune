//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: André Guerra (re-adaptation)                                     *
//***************************************************************************
// HumSat Utilities Header File                                             *
// Source: Vigo University                                                  *
//***************************************************************************

/*
* humpl_pkt.h
*
* Created: 21/06/2012 22:03:43
*  Author: TSC4
*/

#ifndef HUMPL_PKT_H_
#define HUMPL_PKT_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

//////////////////////////////
///////	Preamble  ////////////
//////////////////////////////

#define HUMPL_PKT_PREAMBLE_CODE			(0xFF)
#define HUMPL_PKT_END_PREAMBLE_LENGTH	(3)
#define HUMPL_PKT_END_PREAMBLE_CODE		(0x7E)

//////////////////////////////
///////	Reed-Solomon  ////////
//////////////////////////////
#define HUMPL_PKT_REEDSOLOMON_PARITY_LENGTH_E8	(16)
#define HUMPL_PKT_REEDSOLOMON_PARITY_LENGTH_E16	(32)

/////////////////////////////////
/////// Flags field content	/////
/////////////////////////////////

#define HUMPL_PKT_FLAGS_FIELD_ACK_bm			(1 << 0)
#define HUMPL_PKT_FLAGS_FIELD_DISCOVERY_bm		(1 << 1)
#define HUMPL_PKT_FLAGS_FIELD_SPACE_bm			(1 << 2)
#define HUMPL_PKT_FLAGS_FIELD_GROUND_bm			(1 << 3)
#define HUMPL_PKT_FLAGS_FIELD_DATA_bm			(1 << 4)
#define HUMPL_PKT_FLAGS_FIELD_BI_DIR_bm			(1 << 5)
#define HUMPL_PKT_FLAGS_FIELD_REEDSOLOMON_bm	(1 << 6)
#define HUMPL_PKT_FLAGS_FIELD_RS_CCSDS_E8_bm	(1 << 7)

/////////////////////////////////////////
///////   CRC FUNCTIONS /////////////////
/////////////////////////////////////////

//CRC-16-CCITT used:
//Polynomial 0x1021
//Init 0xFFFF

//Not used
////Generates crc code of a buffer
////CRC result must be XORed before transmission, as standard recommends.
uint16_t humpl_crc_generate(uint8_t *buffer, uint16_t length);

//Update crc with 1 byte
uint16_t humpl_crc_ccitt_1021_update(uint16_t crc, uint8_t data);


#define REEDSOLOMON_CCSDS_E8    (16)
#define REEDSOLOMON_CCSDS_E16   (32)

/*
@brief Encodes a Reed-Solomon codeword

@param data     Pointer to the array of data to encode
@param len      Length of the pointed data
@param parity   Pointer to the RS parity output
@param nroots   Number of roots for RS. Please use REEDSOLOMON_CCSDS_E8 or REEDSOLOMON_CCSDS_E16.
REEDSOLOMON_CCSDS_E16, code is (223, 255): (32 bytes of parity, 16 correctable bytes)
REEDSOLOMON_CCSDS_E8,  code is (239, 255): (16 bytes of parity,  8 correctable bytes)
*/

void reedSolomon_encode(uint8_t* data, uint8_t len, uint8_t* parity, uint8_t nroots);

/////////////////////////////////////////
///////   Message Format ////////////////
/////////////////////////////////////////

typedef struct humpl_pkt_t {
  uint8_t radio_id[6];		//! User Amateur Radio Id
  uint16_t sensor_id;			//! User Sensor identifier
  uint8_t flags;				//! System flags
  uint8_t reserved[6];		//! Reserved field
  uint8_t length;				//! Length of user data field
  uint8_t payload[32];		//! User data
  uint16_t crc;				//! Verification algorithm
  uint8_t RS_parity[32];		//! Error detection and correction algorithm
} humpl_pkt_t;

/////////////////////////////////////////
///////   Return codes //////////////////
/////////////////////////////////////////

//Return code
#define HUMPL_PKT_RESULT_OK						(0)
#define HUMPL_PKT_ERROR_END_PREAMBLE_NOT_FOUND	(-1)
#define HUMPL_PKT_ERROR_CRC_ERRONEOUS			(-2)
#define HUMPL_PKT_ERROR_RS_ERRONEOUS			(-3)
#define HUMPL_PKT_ERROR_RS_NOT_EXECUTED			(-4)

/////////////////////////////////////////
///////   Packet Functions //////////////
/////////////////////////////////////////

////serializes packet in structure from buffer
////Packet data is not checked
uint8_t humpl_pkt_serialize_and_compute_pkt(humpl_pkt_t *pkt, uint8_t *buffer);

//Scrambles or Descrambles all packet stored into the original buffer with the scramble_string
//and store it into the scrambled_buffer.
//RADIO_ID and CRC Fields are scrambled or descrambled too.
//Maximum length is HUMPL_PKT_TOTAL_LENGTH
void humpl_pkt_scramble(uint8_t *original_buffer, uint8_t *scrambled_buffer, uint8_t length);

#endif /* HUMPL_PKT_H_ */