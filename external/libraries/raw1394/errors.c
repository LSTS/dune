/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 1999,2000,2001,2002 Andreas Bombe
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 */

#include "config.h"
#include <errno.h>

#include "raw1394.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"
#include "ieee1394.h"


raw1394_errcode_t raw1394_get_errcode(struct raw1394_handle *handle)
{
	if (!handle) {
		return RAW1394_ERROR_INVALID_ARG;
	}
	if (handle->is_fw)
		return handle->mode.fw->err;
	else
		return handle->mode.ieee1394->err;
}

int ieee1394_errcode_to_errno(raw1394_errcode_t errcode)
{
        static const int ack2errno[16] = {
                0xdead,    /* invalid ack code */
                0,         /* ack_complete */
                0xdead,    /* ack_pending, should not be used here */
                EAGAIN,    /* busy_x, busy_a and busy_b acks */
                EAGAIN,
                EAGAIN,
                0xdead,    /* invalid ack codes */
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                EREMOTEIO, /* ack_data_error */
                EPERM,     /* ack_type_error */
                0xdead     /* invalid ack code */
        };
        static const int rcode2errno[16] = {
                0,         /* rcode_complete */
                0xdead,    /* invalid rcodes */
                0xdead,
                0xdead,
                EAGAIN,    /* rcode_conflict_error */
                EREMOTEIO, /* rcode_data_error */
                EPERM,     /* rcode_type_error */
                EINVAL,    /* rcode_address_error */
                0xdead,    /* invalid rcodes */
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                0xdead,
                0xdead
        };

        if (!raw1394_internal_err(errcode)) {
                if (raw1394_get_ack(errcode) == 0x10
                    || raw1394_get_ack(errcode) == L1394_ACK_PENDING)
                        return rcode2errno[raw1394_get_rcode(errcode)];
                else
                        return ack2errno[raw1394_get_ack(errcode)];
        }

        switch (raw1394_get_internal(errcode)) {
        case RAW1394_ERROR_GENERATION:
        case RAW1394_ERROR_SEND_ERROR:
        case RAW1394_ERROR_ABORTED:
        case RAW1394_ERROR_TIMEOUT:
                return EAGAIN;

        case RAW1394_ERROR_MEMFAULT:
                return EFAULT;

        case RAW1394_ERROR_COMPAT:
        case RAW1394_ERROR_STATE_ORDER:
        case RAW1394_ERROR_INVALID_ARG:
        case RAW1394_ERROR_ALREADY:
        case RAW1394_ERROR_EXCESSIVE:
        case RAW1394_ERROR_UNTIDY_LEN:
        default:
                return EINVAL;
        }
}
