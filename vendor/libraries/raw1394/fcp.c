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
#include <unistd.h>
#include <string.h>

#include "raw1394.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"

static int do_fcp_listen(struct raw1394_handle *handle, int startstop)
{
        ieee1394handle_t ihandle = handle->mode.ieee1394;
        struct sync_cb_data sd = { 0, 0 };
        struct raw1394_reqhandle rh = { (req_callback_t)_raw1394_sync_cb, &sd };
        int err;
        struct raw1394_request req;

        CLEAR_REQ(&req);
        req.type = RAW1394_REQ_FCP_LISTEN;
        req.generation = ihandle->generation;
        req.misc = startstop;
        req.tag = ptr2int(&rh);
        req.recvb = ptr2int(ihandle->buffer);
        req.length = 512;

        err = write(ihandle->fd, &req, sizeof(req));
        while (!sd.done) {
                if (err < 0) return err;
                err = ieee1394_loop_iterate(handle);
        }

        switch (sd.errcode) {
        case RAW1394_ERROR_ALREADY:
                errno = EALREADY;
                return -1;

        case RAW1394_ERROR_INVALID_ARG:
                errno = EINVAL;
                return -1;

        default:
                errno = 0;
                return sd.errcode;
        }
}


int ieee1394_start_fcp_listen(struct raw1394_handle *handle)
{
        return do_fcp_listen(handle, 1);
}

int ieee1394_stop_fcp_listen(struct raw1394_handle *handle)
{
        return do_fcp_listen(handle, 0);
}
