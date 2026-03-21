///////////////////////////////////////////////////////////
//
//  This file is part of RTArduLink
//
//  Copyright (c) 2014 richards-tech
//
//  Permission is hereby granted, free of charge,
//  to any person obtaining a copy of
//  this software and associated documentation files
//  (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute,
//  sublicense, and/or sell copies of the Software, and
//  to permit persons to whom the Software is furnished
//  to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions
//  of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
//  ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
//  TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
//  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

#ifndef _RTARDULINKUTILS_H
#define _RTARDULINKUTILS_H

#include "RTArduLinkDefs.h"

//  Function defs

void RTArduLinkRXFrameInit(RTARDULINK_RXFRAME *RXFrame, RTARDULINK_FRAME *frameBuffer);	// initializes RTARDULINK_RXFRAME for a new frame
bool RTArduLinkReassemble(RTARDULINK_RXFRAME *RXFrame, unsigned char data);	// adds a byte to the reassembly, returns false if error

//  Checksum utilities

void RTArduLinkSetChecksum(RTARDULINK_FRAME *frame);        // sets the checksum field prior to transmission
bool RTArduLinkCheckChecksum(RTARDULINK_FRAME *frame);      // checks the checksum field after reception - returns true if ok, false if error

//  Type conversion utilities

long RTArduLinkConvertUC4ToLong(RTARDULINK_UC4 uc4);        // converts a 4 byte array to a signed long
void RTArduLinkConvertLongToUC4(long val, RTARDULINK_UC4 uc4);  // converts a long to a four byte array
int	 RTArduLinkConvertUC2ToInt(RTARDULINK_UC2 uc2);         // converts a 2 byte array to a signed integer
unsigned int RTArduLinkConvertUC2ToUInt(RTARDULINK_UC2 uc2);// converts a 2 byte array to an unsigned integer
void RTArduLinkConvertIntToUC2(int val, RTARDULINK_UC2 uc2);// converts an integer to a two byte array
void RTArduLinkCopyUC2(RTARDULINK_UC2 destUC2, RTARDULINK_UC2 sourceUC2); // copies a UC2

#endif // _RTARDULINKUTILS_H
