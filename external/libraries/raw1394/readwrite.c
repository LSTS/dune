/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 1999,2000,2001,2002 Andreas Bombe
 *                     2002 Christian Toegel <christian.toegel@gmx.at>
 *                     2002 Manfred Weihs <weihs@ict.tuwien.ac.at>
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 *
 *
 * Contributions:
 *
 * Christian Toegel <christian.toegel@gmx.at>
 *        lock64 request
 *        transmit physical packet
 *        raw1394_echo_request, raw1394_wake_up (interrupt blocking wait)
 *
 * Manfred Weihs <weihs@ict.tuwien.ac.at>
 *        raw1394_start_async_send, raw1394_async_send
 */

#include "config.h"
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "raw1394.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"

#if HAVE_VALGRIND_VALGRIND_H
# include <valgrind/memcheck.h>
# ifndef VALGRIND_MAKE_MEM_DEFINED_IF_ADDRESSABLE
#  define VALGRIND_MAKE_MEM_DEFINED_IF_ADDRESSABLE(m, n) do {} while(0)
# endif
#else
# define VALGRIND_MAKE_MEM_DEFINED_IF_ADDRESSABLE(m, n) do {} while(0)
#endif


int ieee1394_start_read(struct ieee1394_handle *handle, nodeid_t node,
                       nodeaddr_t addr, size_t length, quadlet_t *buffer,
                       unsigned long tag)
{
        struct raw1394_request req;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_ASYNC_READ;
        req.generation = handle->generation;
        req.tag = tag;

        req.address = ((__u64)node << 48) | addr;
        req.length = length;
        req.recvb = ptr2int(buffer);

        return (int)write(handle->fd, &req, sizeof(req));
}


int ieee1394_start_write(struct ieee1394_handle *handle, nodeid_t node,
                        nodeaddr_t addr, size_t length, quadlet_t *data,
                        unsigned long tag)
{
        struct raw1394_request req;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_ASYNC_WRITE;
        req.generation = handle->generation;
        req.tag = tag;

        req.address = ((__u64)node << 48) | addr;
        req.length = length;
        req.sendb = ptr2int(data);

        return (int)write(handle->fd, &req, sizeof(req));
}


int ieee1394_start_lock(struct ieee1394_handle *handle, nodeid_t node,
                       nodeaddr_t addr, unsigned int extcode, quadlet_t data,
                       quadlet_t arg, quadlet_t *result, unsigned long tag)
{
        struct raw1394_request req;
        quadlet_t sendbuf[2];

        if ((extcode > 7) || (extcode == 0)) {
                errno = EINVAL;
                return -1;
        }

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_LOCK;
        req.generation = handle->generation;
        req.tag = tag;

        req.address = ((__u64)node << 48) | addr;
        req.sendb = ptr2int(sendbuf);
        req.recvb = ptr2int(result);
        req.misc = extcode;

        switch (extcode) {
        case 3: /* EXTCODE_FETCH_ADD */
        case 4: /* EXTCODE_LITTLE_ADD */
                sendbuf[0] = data;
                req.length = 4;
                break;
        default:
                sendbuf[0] = arg;
                sendbuf[1] = data;
                req.length = 8;
                break;
        }
        return (int)write(handle->fd, &req, sizeof(req));
}

int ieee1394_start_lock64(struct ieee1394_handle *handle, nodeid_t node,
                         nodeaddr_t addr, unsigned int extcode, octlet_t data,
                         octlet_t arg, octlet_t *result, unsigned long tag)
{
        struct raw1394_request req;
        octlet_t sendbuf[2];

        if ((extcode > 7) || (extcode == 0)) {
                errno = EINVAL;
                return -1;
        }

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_LOCK64;
        req.generation = handle->generation;
        req.tag = tag;

        req.address = ((__u64)node << 48) | addr;
        req.sendb = ptr2int(sendbuf);
        req.recvb = ptr2int(result);
        req.misc = extcode;

        switch (extcode) {
        case 3: /* EXTCODE_FETCH_ADD */
        case 4: /* EXTCODE_LITTLE_ADD */
                sendbuf[0] = data;
                req.length = 8;
                break;
        default:
                sendbuf[0] = arg;
                sendbuf[1] = data;
                req.length = 16;
                break;
        }

        return (int)write(handle->fd, &req, sizeof(req));
}


int ieee1394_start_async_stream(struct ieee1394_handle *handle,
                               unsigned int channel,
                               unsigned int tag, unsigned int sy,
                               unsigned int speed, size_t length, quadlet_t *data,
                               unsigned long rawtag)
{
        struct raw1394_request req;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_ASYNC_STREAM;
        req.generation = handle->generation;
        req.tag = rawtag;

        req.address = ((__u64)channel << 48) | speed;
        req.misc = (tag << 16) | sy;
        req.length = length;
        req.sendb = ptr2int(data);

        return (int)write(handle->fd, &req, sizeof(req));
}

int ieee1394_start_async_send(struct ieee1394_handle *handle,
                             size_t length, size_t header_length, unsigned int expect_response,
                             quadlet_t *data, unsigned long rawtag)
{
        struct raw1394_request req;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_ASYNC_SEND;
        req.generation = handle->generation;
        req.tag = rawtag;

        req.length = length;
        req.misc = (expect_response << 16) | (header_length & 0xffff);
        req.sendb = ptr2int(data);

        return (int)write(handle->fd, &req, sizeof(req));
}


#define SYNCFUNC_VARS                                                     \
        struct sync_cb_data sd = { 0, 0 };                                \
        struct raw1394_reqhandle rh = { (req_callback_t)_raw1394_sync_cb, \
                                        &sd };                            \
        int err = 0

#define SYNCFUNC_BODY_WO_RETURN                       \
        while (!sd.done) {                            \
                if (err < 0) return err;              \
                err = raw1394_loop_iterate(handle);   \
        }                                             \
        handle->mode.ieee1394->err = sd.errcode;                     \
        errno = raw1394_errcode_to_errno(sd.errcode);

#define SYNCFUNC_BODY                                 \
        SYNCFUNC_BODY_WO_RETURN                       \
        return (errno ? -1 : 0)

int ieee1394_read(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 size_t length, quadlet_t *buffer)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_read(handle->mode.ieee1394, node, addr, length, buffer, 
                                 (unsigned long)&rh);

        SYNCFUNC_BODY_WO_RETURN;
        if(!errno) {
          VALGRIND_MAKE_MEM_DEFINED_IF_ADDRESSABLE(buffer, length);
        }
           
        return (errno ? -1 : 0);
}

int ieee1394_write(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                  size_t length, quadlet_t *data)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_write(handle->mode.ieee1394, node, addr, length, data, 
                                  (unsigned long)&rh);

        SYNCFUNC_BODY;
}

int ieee1394_lock(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, quadlet_t data, quadlet_t arg,
                 quadlet_t *result)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_lock(handle->mode.ieee1394, node, addr, extcode, data, arg, result,
                                 (unsigned long)&rh);

        SYNCFUNC_BODY_WO_RETURN;
        if(!errno) {
          VALGRIND_MAKE_MEM_DEFINED_IF_ADDRESSABLE(result, sizeof(quadlet_t));
        }
           
        return (errno ? -1 : 0);
}

int ieee1394_lock64(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, octlet_t data, octlet_t arg,
                 octlet_t *result)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_lock64(handle->mode.ieee1394, node, addr, extcode, data, arg, result,
                                 (unsigned long)&rh);

        SYNCFUNC_BODY;
}


int ieee1394_async_stream(struct raw1394_handle *handle, unsigned int channel,
                         unsigned int tag, unsigned int sy, unsigned int speed,
                         size_t length, quadlet_t *data)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_async_stream(handle->mode.ieee1394, channel, tag, sy, speed, length,
                                         data, (unsigned long)&rh);

        SYNCFUNC_BODY;
}

int ieee1394_async_send(struct raw1394_handle *handle               ,
                             size_t length, size_t header_length, unsigned int expect_response,
                             quadlet_t *data)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_async_send(handle->mode.ieee1394, length, header_length, expect_response,
                                      data, (unsigned long)&rh);

        SYNCFUNC_BODY;
}



int ieee1394_start_phy_packet_write(struct ieee1394_handle *handle, 
	quadlet_t data, unsigned long tag)
{
        struct raw1394_request req;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_PHYPACKET;
        req.generation = handle->generation;
        req.tag = tag;

        req.sendb = data;

        return (int)write(handle->fd, &req, sizeof(req));
}

int ieee1394_phy_packet_write (struct raw1394_handle *handle, quadlet_t data)
{
        SYNCFUNC_VARS;

        err = ieee1394_start_phy_packet_write(handle->mode.ieee1394, data, (unsigned long)&rh);

        SYNCFUNC_BODY; /* return 0 on success */
}

int ieee1394_echo_request(struct ieee1394_handle *handle, quadlet_t data)
{
        struct raw1394_request req;
        int retval=0;

        CLEAR_REQ(&req);

        req.type = RAW1394_REQ_ECHO;
        req.misc = data;

        retval = (int)write(handle->fd, &req, sizeof(req));
        if (retval == sizeof(req)) {
                return 0; /* succcess */
	}
	return -1;
}	

int ieee1394_wake_up(ieee1394handle_t handle)
{
	return ieee1394_echo_request(handle, 0);
}

#undef SYNCFUNC_VARS
#undef SYNCFUNC_BODY
