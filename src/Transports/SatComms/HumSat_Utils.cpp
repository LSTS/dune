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
* humpl_pkt.c
*
* Created: 21/06/2012 22:03:26
*  Author: TSC4
*/

#include "HumSat_Utils.hpp"
#include <string.h>
#define min(a,b)    ((a) < (b) ? (a) : (b))

//! Added to elimitane PROGMEM (an Arduino feature)
#define PROGMEM

/////////////////////////////////////////
///////   SCRAMBLE FUNCTIONS ////////////
/////////////////////////////////////////

//Scrambles or Descrambles all packet stored into the original buffer with the scramble_string
//and store it into the scrambled_buffer.
//RADIO_ID and CRC Fields are scrambled or descrambled too.
//Maximum length is HUMPL_PKT_TOTAL_LENGTH+HUMPL_PKT_REEDSOLOMON_PARITY_LENGTH
void humpl_pkt_scramble(uint8_t *original_buffer, uint8_t *scrambled_buffer, uint8_t length) {

  static const uint8_t PROGMEM scramble_string[sizeof(humpl_pkt_t)] = {
    0xff, 0x48, 0x0e, 0xc0, 0x9a, 0x0d, 0x70, 0xbc, 0x8e, 0x2c,
    0x93, 0xad, 0xa7, 0xb7, 0x46, 0xce, 0x5a, 0x97, 0x7d, 0xcc,
    0x32, 0xa2, 0xbf, 0x3e, 0x0a, 0x10, 0xf1, 0x88, 0x94, 0xcd,
    0xea, 0xb1, 0xfe, 0x90, 0x1d, 0x81, 0x34, 0x1a, 0xe1, 0x79,
    0xc6, 0x52, 0xfd, 0xe1, 0xaf, 0xa2, 0x01, 0xb3, 0xf1, 0x90,
    0xd8, 0xa3, 0x9f, 0xb9, 0x5e, 0x09, 0xe4, 0x0d, 0x49, 0xa2,
    0x50, 0xFF, 0x33, 0xB9, 0xEE, 0x2a, 0x0b, 0x6b, 0x1c, 0x49,
    0x94, 0x90, 0x5b, 0xe8, 0x39, 0xc2, 0x68, 0x23, 0x01, 0x00,
    0x1c, 0xb9
  };

  uint8_t max_length = min(length, sizeof(humpl_pkt_t));
  uint8_t i;

  for (i = 0; i < max_length; i++) {
    // ORIGINAL -> scrambled_buffer[i] = original_buffer[i] ^ pgm_read_byte(scramble_string + i);
    // Changed to take out Arduino function pgm_read_byte
    scrambled_buffer[i] = original_buffer[i] ^ (scramble_string[i]);
  }
}


/////////////////////////////////////////
/////////   CRC FUNCTIONS ///////////////
/////////////////////////////////////////

//CRC-16-CCITT used:
//Polynomial 0x1021
//Init 0xFFFF

////Generates crc code of a buffer
////CRC result must be XORed before transmission, as standard recommends.
uint16_t humpl_crc_generate(uint8_t *buffer, uint16_t length) {
  uint16_t crc = 0xFFFF;
  uint8_t i;
  for (i = 0; i < length; i++)
    crc = humpl_crc_ccitt_1021_update(crc, buffer[i]);
  return ~crc;
}

//Update crc with 1 byte
uint16_t humpl_crc_ccitt_1021_update(uint16_t crc, uint8_t data) {
  crc ^= (((uint16_t)data) << 8);

  uint8_t i;
  for (i = 0; i < 8; i++) {
    if (crc & 0x8000) {
      crc = (crc << 1) ^ 0x1021;
    }
    else {
      crc <<= 1;
    }
  }
  return crc;
}


//////////////////////////////////////////////////
/////////   REED-SOLOMON FUNCTIONS ///////////////
//////////////////////////////////////////////////


#define NN          255
#define FCR         112
#define PRIM         11
#define IPRIM       116
#define NROOTS       32
#define A0          (NN) /* Special reserved value encoding zero in index form */

static const inline uint8_t mod255(int x) {
  while (x >= 255) {
    x -= 255;
    x = (x >> 8) + (x & 255);
  }
  return (uint8_t)x;
}

static const PROGMEM uint8_t CCSDS_alpha_to[] = {
  0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x87, 0x89, 0x95, 0xad, 0xdd, 0x3d, 0x7a, 0xf4,
  0x6f, 0xde, 0x3b, 0x76, 0xec, 0x5f, 0xbe, 0xfb, 0x71, 0xe2, 0x43, 0x86, 0x8b, 0x91, 0xa5, 0xcd,
  0x1d, 0x3a, 0x74, 0xe8, 0x57, 0xae, 0xdb, 0x31, 0x62, 0xc4, 0x0f, 0x1e, 0x3c, 0x78, 0xf0, 0x67,
  0xce, 0x1b, 0x36, 0x6c, 0xd8, 0x37, 0x6e, 0xdc, 0x3f, 0x7e, 0xfc, 0x7f, 0xfe, 0x7b, 0xf6, 0x6b,
  0xd6, 0x2b, 0x56, 0xac, 0xdf, 0x39, 0x72, 0xe4, 0x4f, 0x9e, 0xbb, 0xf1, 0x65, 0xca, 0x13, 0x26,
  0x4c, 0x98, 0xb7, 0xe9, 0x55, 0xaa, 0xd3, 0x21, 0x42, 0x84, 0x8f, 0x99, 0xb5, 0xed, 0x5d, 0xba,
  0xf3, 0x61, 0xc2, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0,
  0x47, 0x8e, 0x9b, 0xb1, 0xe5, 0x4d, 0x9a, 0xb3, 0xe1, 0x45, 0x8a, 0x93, 0xa1, 0xc5, 0x0d, 0x1a,
  0x34, 0x68, 0xd0, 0x27, 0x4e, 0x9c, 0xbf, 0xf9, 0x75, 0xea, 0x53, 0xa6, 0xcb, 0x11, 0x22, 0x44,
  0x88, 0x97, 0xa9, 0xd5, 0x2d, 0x5a, 0xb4, 0xef, 0x59, 0xb2, 0xe3, 0x41, 0x82, 0x83, 0x81, 0x85,
  0x8d, 0x9d, 0xbd, 0xfd, 0x7d, 0xfa, 0x73, 0xe6, 0x4b, 0x96, 0xab, 0xd1, 0x25, 0x4a, 0x94, 0xaf,
  0xd9, 0x35, 0x6a, 0xd4, 0x2f, 0x5e, 0xbc, 0xff, 0x79, 0xf2, 0x63, 0xc6, 0x0b, 0x16, 0x2c, 0x58,
  0xb0, 0xe7, 0x49, 0x92, 0xa3, 0xc1, 0x05, 0x0a, 0x14, 0x28, 0x50, 0xa0, 0xc7, 0x09, 0x12, 0x24,
  0x48, 0x90, 0xa7, 0xc9, 0x15, 0x2a, 0x54, 0xa8, 0xd7, 0x29, 0x52, 0xa4, 0xcf, 0x19, 0x32, 0x64,
  0xc8, 0x17, 0x2e, 0x5c, 0xb8, 0xf7, 0x69, 0xd2, 0x23, 0x46, 0x8c, 0x9f, 0xb9, 0xf5, 0x6d, 0xda,
  0x33, 0x66, 0xcc, 0x1f, 0x3e, 0x7c, 0xf8, 0x77, 0xee, 0x5b, 0xb6, 0xeb, 0x51, 0xa2, 0xc3, 0x00,
};

static const PROGMEM uint8_t CCSDS_index_of[] = {
  255, 0, 1, 99, 2, 198, 100, 106, 3, 205, 199, 188, 101, 126, 107, 42,
  4, 141, 206, 78, 200, 212, 189, 225, 102, 221, 127, 49, 108, 32, 43, 243,
  5, 87, 142, 232, 207, 172, 79, 131, 201, 217, 213, 65, 190, 148, 226, 180,
  103, 39, 222, 240, 128, 177, 50, 53, 109, 69, 33, 18, 44, 13, 244, 56,
  6, 155, 88, 26, 143, 121, 233, 112, 208, 194, 173, 168, 80, 117, 132, 72,
  202, 252, 218, 138, 214, 84, 66, 36, 191, 152, 149, 249, 227, 94, 181, 21,
  104, 97, 40, 186, 223, 76, 241, 47, 129, 230, 178, 63, 51, 238, 54, 16,
  110, 24, 70, 166, 34, 136, 19, 247, 45, 184, 14, 61, 245, 164, 57, 59,
  7, 158, 156, 157, 89, 159, 27, 8, 144, 9, 122, 28, 234, 160, 113, 90,
  209, 29, 195, 123, 174, 10, 169, 145, 81, 91, 118, 114, 133, 161, 73, 235,
  203, 124, 253, 196, 219, 30, 139, 210, 215, 146, 85, 170, 67, 11, 37, 175,
  192, 115, 153, 119, 150, 92, 250, 82, 228, 236, 95, 74, 182, 162, 22, 134,
  105, 197, 98, 254, 41, 125, 187, 204, 224, 211, 77, 140, 242, 31, 48, 220,
  130, 171, 231, 86, 179, 147, 64, 216, 52, 176, 239, 38, 55, 12, 17, 68,
  111, 120, 25, 154, 71, 116, 167, 193, 35, 83, 137, 251, 20, 93, 248, 151,
  46, 75, 185, 96, 15, 237, 62, 229, 246, 135, 165, 23, 58, 163, 60, 183,
};


// Array only needed for encoding
static const PROGMEM uint8_t CCSDS_poly_E16[] = {
  0, 249, 59, 66, 4, 43, 126, 251, 97, 30, 3, 213, 50, 66, 170, 5,
  24, 5, 170, 66, 50, 213, 3, 30, 97, 251, 126, 43, 4, 66, 59, 249,
  0,
};

// Array only needed for encoding
static const PROGMEM uint8_t CCSDS_poly_E8[] = {
  122, 240, 18, 180, 199, 181, 221, 49, 234, 225, 63, 199, 138, 40, 54, 197,
  0,
};

void reedSolomon_encode(uint8_t* data, uint8_t len, uint8_t* parity, uint8_t nroots) {

  uint8_t pad;
  const uint8_t* genpoly;

  if (nroots == REEDSOLOMON_CCSDS_E16) {
    genpoly = CCSDS_poly_E16;
  }
  else {
    genpoly = CCSDS_poly_E8;
  }

  if (len > 255 - nroots) {
    return;
  }
  pad = 255 - nroots - len;


  uint8_t i, j, feedback;

  memset(parity, 0, nroots * sizeof(uint8_t));

  for (i = 0; i < NN - nroots - pad; i++) {
    // ORIGINAL -> feedback = pgm_read_byte(CCSDS_index_of + (data[i] ^ parity[0]));
    // Changed to take out Arduino function pgm_read_byte
    feedback = (CCSDS_index_of[(data[i] ^ parity[0])]);
    if (feedback != A0) {      /* feedback term is non-zero */
      for (j = 1; j < nroots; j++) {
        // ORIGINAL -> parity[j] ^= pgm_read_byte(CCSDS_alpha_to + (mod255(feedback + pgm_read_byte(genpoly + nroots - j))));
        // Changed to take out Arduino function pgm_read_byte
        parity[j] ^= (CCSDS_alpha_to[(mod255(feedback + (genpoly[nroots - j])))]);
      }
    }
    /* Shift */
    memmove(&parity[0], &parity[1], sizeof(uint8_t)* (nroots - 1));
    if (feedback != A0) {
      // ORIGINAL -> parity[nroots - 1] = pgm_read_byte(CCSDS_alpha_to + (mod255(feedback + pgm_read_byte(genpoly))));
      // Changed to take out Arduino function pgm_read_byte
      parity[nroots - 1] = (CCSDS_alpha_to[(mod255(feedback + (genpoly[0])))]); //!!!!WRN: May have to be changed!!!!
    }
    else {
      parity[nroots - 1] = 0;
    }
  }
}
