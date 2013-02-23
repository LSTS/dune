/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 1999,2000,2001,2002 Andreas Bombe
 *                     2002 Manfred Weihs <weihs@ict.tuwien.ac.at>
 *                     2002 Christian Toegel <christian.toegel@gmx.at>
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 *
 *
 * Contributions:
 *
 * Manfred Weihs <weihs@ict.tuwien.ac.at>
 *        address range mapping
 * Christian Toegel <christian.toegel@gmx.at>
 *        address range mapping
 */

#include "config.h"
#include <unistd.h>
#include <byteswap.h>
#include <errno.h>

#include "raw1394.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"


int ieee1394_loop_iterate(struct raw1394_handle *handle)
{
        struct raw1394_request req;
        ieee1394handle_t ihandle = handle->mode.ieee1394;
        int retval = 0;

        while (read(ihandle->fd, &req, sizeof(req)) < 0) {
                if (errno != EINTR) return -1;
        }

        switch (req.type) {
        case RAW1394_REQ_BUS_RESET:
                if (ihandle->protocol_version == 3) {
                        ihandle->num_of_nodes = req.misc & 0xffff;
                        ihandle->local_id = req.misc >> 16;
                } else {
                        ihandle->num_of_nodes = req.misc & 0xff;
                        ihandle->irm_id = ((req.misc >> 8) & 0xff) | 0xffc0;
                        ihandle->local_id = req.misc >> 16;
                }

                if (ihandle->bus_reset_handler) {
                        retval = ihandle->bus_reset_handler(handle,
                                                           req.generation);
                }
                break;

        case RAW1394_REQ_FCP_REQUEST:
                if (ihandle->fcp_handler) {
                        retval = ihandle->fcp_handler(handle, req.misc & 0xffff,
                                                     req.misc >> 16,
                                                     req.length,
                                                     (unsigned char *)ihandle->buffer);
                }
                break;

        case RAW1394_REQ_ARM:
                if (ihandle->arm_tag_handler) {
                        retval = ihandle->arm_tag_handler(handle, req.tag,
                                 (req.misc & (0xFF)), 
                                 ((req.misc >> 16) & (0xFFFF)),
                                 int2ptr(req.recvb));
                } 
                break;
                
        case RAW1394_REQ_ECHO:
                retval=req.misc;
                break;

        case RAW1394_REQ_RAWISO_ACTIVITY:
                retval = _ieee1394_iso_iterate(handle);
                break;
        
        default:
                if (ihandle->tag_handler) {
                        retval = ihandle->tag_handler(handle, req.tag,
                                                     req.error);
                }
                break;
        }

        return retval;
}


bus_reset_handler_t raw1394_set_bus_reset_handler(struct raw1394_handle *handle,
                                                  bus_reset_handler_t new)
{
	bus_reset_handler_t old;
	if (!handle) {
		errno = EINVAL;
		return NULL;
	}
	if (handle->is_fw) {
		old = handle->mode.fw->bus_reset_handler;
		handle->mode.fw->bus_reset_handler = new;
	}
	else {
		old = handle->mode.ieee1394->bus_reset_handler;
		handle->mode.ieee1394->bus_reset_handler = new;
	}
	return old;
}

tag_handler_t raw1394_set_tag_handler(struct raw1394_handle *handle, 
                                      tag_handler_t new)
{
	tag_handler_t old;
	if (!handle) {
		errno = EINVAL;
		return NULL;
	}
	if (handle->is_fw) {
		old = handle->mode.fw->tag_handler;
		handle->mode.fw->tag_handler = new;
	}
	else {
		old = handle->mode.ieee1394->tag_handler;
		handle->mode.ieee1394->tag_handler = new;
	}
	return old;
}

arm_tag_handler_t raw1394_set_arm_tag_handler(struct raw1394_handle *handle, 
                                      arm_tag_handler_t new)
{
	arm_tag_handler_t old;
	if (!handle) {
		errno = EINVAL;
		return NULL;
	}
	if (handle->is_fw) {
		old = handle->mode.fw->arm_tag_handler;
		handle->mode.fw->arm_tag_handler = new;
	}
	else {
		old = handle->mode.ieee1394->arm_tag_handler;
		handle->mode.ieee1394->arm_tag_handler = new;
	}
	return old;
}

fcp_handler_t raw1394_set_fcp_handler(struct raw1394_handle *handle,
                                      fcp_handler_t new)
{
	fcp_handler_t old;
	if (!handle) {
		errno = EINVAL;
		return NULL;
	}
	if (handle->is_fw) {
		old = handle->mode.fw->fcp_handler;
		handle->mode.fw->fcp_handler = new;
	}
	else {
		old = handle->mode.ieee1394->fcp_handler;
		handle->mode.ieee1394->fcp_handler = new;
	}
	return old;
}
