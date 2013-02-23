/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 1999,2000,2001,2002 Andreas Bombe
 *        new ISO API by Dan Maas
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 */

#include "config.h"
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <malloc.h>

#include "raw1394.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"

/* This implements
   x = (x+1) % n
   using a branch based implementation
 */
static inline int increment_and_wrap(int x, int n)
{
  ++x;
  if (x >= n)
    x = 0;
  return x;
}

/* reset the dropped counter each time it is seen */
static unsigned int _iso_dropped(ieee1394handle_t handle)
{
	unsigned int retval = handle->iso_packets_dropped;
	handle->iso_packets_dropped = 0;
	return retval;
}


/* common code for iso_xmit_init and iso_recv_init */
static int do_iso_init(ieee1394handle_t handle,
		       unsigned int buf_packets,
		       unsigned int max_packet_size,
		       int channel,
		       enum raw1394_iso_speed speed,
		       enum raw1394_iso_dma_recv_mode mode,
		       int irq_interval,
		       int cmd)
{
	unsigned int stride;
	int result;

	/* already initialized? */
	if(handle->iso_mode != ISO_INACTIVE)
		return -1;

	/* choose a power-of-two stride for the packet data buffer,
	   so that an even number of packets fits on one page */
	for(stride = 4; stride < max_packet_size; stride *= 2);

	if(stride > getpagesize()) {
		errno = ENOMEM;
		return -1;
	}

	handle->iso_buf_stride = stride;

	handle->iso_status.config.data_buf_size = stride * buf_packets;
	handle->iso_status.config.buf_packets = buf_packets;
	handle->iso_status.config.channel = channel;
	handle->iso_status.config.speed = speed;
	handle->iso_status.config.irq_interval = irq_interval;
	handle->iso_status.config.dma_mode = mode;

	if(ioctl(handle->fd, cmd, &handle->iso_status))
		return -1;

	/* mmap the DMA buffer */
	/* (we assume the kernel sets buf_size to an even number of pages) */
	handle->iso_buffer = mmap(NULL,
				  handle->iso_status.config.data_buf_size,
				  PROT_READ | PROT_WRITE,
				  MAP_SHARED, handle->fd, 0);

	if(handle->iso_buffer == (unsigned char*) MAP_FAILED) {
		handle->iso_buffer = NULL;
		ioctl(handle->fd, RAW1394_IOC_ISO_SHUTDOWN, 0);
		return -1;
	}

	handle->iso_status.overflows = 0;
	handle->iso_packets_dropped = 0;

	handle->iso_xmit_handler = NULL;
	handle->iso_recv_handler = NULL;

	handle->iso_state = ISO_STOP;

	handle->iso_packet_infos = malloc(buf_packets * sizeof(struct raw1394_iso_packet_info));
	if(handle->iso_packet_infos == NULL) {
		munmap(handle->iso_buffer, handle->iso_status.config.data_buf_size);
		handle->iso_buffer = NULL;
		ioctl(handle->fd, RAW1394_IOC_ISO_SHUTDOWN, 0);
		return -1;
	}
#if _POSIX_MEMLOCK > 0
	result = mlock(handle->iso_packet_infos, buf_packets * sizeof(struct raw1394_iso_packet_info));
	/* Ignore a permission error - app is responsible for that, */
	if (result < 0 && result != -EPERM) {
		munmap(handle->iso_buffer, handle->iso_status.config.data_buf_size);
		handle->iso_buffer = NULL;
		ioctl(handle->fd, RAW1394_IOC_ISO_SHUTDOWN, 0);
		return -1;
	}
#endif
	return 0;
}

int ieee1394_iso_xmit_init(ieee1394handle_t handle,
			  raw1394_iso_xmit_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_speed speed,
			  int irq_interval)
{
	if (do_iso_init(handle, buf_packets, max_packet_size, channel, speed, RAW1394_DMA_DEFAULT,
		       irq_interval, RAW1394_IOC_ISO_XMIT_INIT))
		return -1;

	handle->iso_mode = ISO_XMIT;
	handle->iso_xmit_handler = handler;
	handle->next_packet = 0;

	return 0;
}

int ieee1394_iso_recv_init(ieee1394handle_t handle,
			  raw1394_iso_recv_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_dma_recv_mode mode,
			  int irq_interval)
{
	/* any speed will work */
	if (do_iso_init(handle, buf_packets, max_packet_size, channel, RAW1394_ISO_SPEED_100, mode,
		       irq_interval, RAW1394_IOC_ISO_RECV_INIT))
		return -1;

	handle->iso_mode = ISO_RECV;
	handle->iso_recv_handler = handler;
	return 0;
}

int ieee1394_iso_multichannel_recv_init(ieee1394handle_t handle,
				       raw1394_iso_recv_handler_t handler,
				       unsigned int buf_packets,
				       unsigned int max_packet_size,
				       int irq_interval)
{
	/* any speed will work */
	if (do_iso_init(handle, buf_packets, max_packet_size, -1, RAW1394_ISO_SPEED_100,
			RAW1394_DMA_BUFFERFILL,
		       irq_interval, RAW1394_IOC_ISO_RECV_INIT))
		return -1;

	handle->iso_mode = ISO_RECV;
	handle->iso_recv_handler = handler;
	return 0;
}

int ieee1394_iso_recv_listen_channel(ieee1394handle_t handle, unsigned char channel)
{
	if (handle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}

	return ioctl(handle->fd, RAW1394_IOC_ISO_RECV_LISTEN_CHANNEL, channel);
}

int ieee1394_iso_recv_unlisten_channel(ieee1394handle_t handle, unsigned char channel)
{
	if (handle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}

	return ioctl(handle->fd, RAW1394_IOC_ISO_RECV_UNLISTEN_CHANNEL, channel);
}

int ieee1394_iso_recv_flush(ieee1394handle_t handle)
{
	if (handle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}

	return ioctl(handle->fd, RAW1394_IOC_ISO_RECV_FLUSH, 0);
}

int ieee1394_iso_recv_set_channel_mask(ieee1394handle_t handle, u_int64_t mask)
{
	if (handle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}

	return ioctl(handle->fd, RAW1394_IOC_ISO_RECV_SET_CHANNEL_MASK, (void*) &mask);
}

int ieee1394_iso_recv_start(ieee1394handle_t handle, int start_on_cycle, int tag_mask, int sync)
{
	int args[3];

	if(handle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}

	args[0] = start_on_cycle;
	args[1] = tag_mask;
	args[2] = sync;

	if(ioctl(handle->fd, RAW1394_IOC_ISO_RECV_START, &args[0]))
		return -1;

	handle->iso_state = ISO_GO;
	return 0;
}

static int _iso_xmit_queue_packets(raw1394handle_t handle)
{
	ieee1394handle_t ihandle = handle->mode.ieee1394;
	struct raw1394_iso_status *stat = &ihandle->iso_status;
	struct raw1394_iso_packets packets;
	int retval = -1;
	int stop_sync = 0;

	if(ihandle->iso_mode != ISO_XMIT) {
		errno = EINVAL;
		goto out;
	}

	/* ensure stat->n_packets is sane */
	if (stat->n_packets > stat->config.buf_packets)
		stat->n_packets = stat->config.buf_packets;

	/* we could potentially send up to stat->n_packets packets */
	packets.n_packets = 0;
	packets.infos = ihandle->iso_packet_infos;
	if(packets.infos == NULL)
		goto out;

	while(stat->n_packets > 1) {
		enum raw1394_iso_disposition disp;
		unsigned int len;
		
		struct raw1394_iso_packet_info *info = &packets.infos[packets.n_packets];

		info->offset = ihandle->iso_buf_stride * ihandle->next_packet;
		
		/* call handler */
		disp = ihandle->iso_xmit_handler(handle,
						ihandle->iso_buffer + info->offset,
						&len,
						&info->tag, &info->sy,
						stat->xmit_cycle,
						_iso_dropped(ihandle));
		info->len = len;
		
		/* advance packet cursors and cycle counter */
		stat->n_packets--;
		ihandle->next_packet = increment_and_wrap(ihandle->next_packet, stat->config.buf_packets);
		if(stat->xmit_cycle != -1)
			stat->xmit_cycle = increment_and_wrap(stat->xmit_cycle, 8000);
		packets.n_packets++;

		if(disp == RAW1394_ISO_DEFER) {
			/* queue an event so that we don't hang in the next read() */
			if(ioctl(ihandle->fd, RAW1394_IOC_ISO_QUEUE_ACTIVITY, 0))
				goto out_produce;
			break;
		} else if(disp == RAW1394_ISO_AGAIN) {
			/* the last packet was not ready, decrement counter */
			packets.n_packets--;
			
			/* queue an event so that we don't hang in the next read() */
			if(ioctl(ihandle->fd, RAW1394_IOC_ISO_QUEUE_ACTIVITY, 0))
				goto out_produce;
			break;
		} else if(disp == RAW1394_ISO_STOP) {
			stop_sync = 1;
			break;
		} else if(disp == RAW1394_ISO_STOP_NOSYNC) {
			ieee1394_iso_stop(ihandle);
			break;
		} else if(disp == RAW1394_ISO_ERROR) {
			goto out_produce;
		}
	}

	/* success */
	retval = 0;

out_produce:
	if(packets.n_packets > 0) {
		if(ioctl(ihandle->fd, RAW1394_IOC_ISO_XMIT_PACKETS, &packets))
			retval = -1;
	}
out:
	if(stop_sync) {
		if(ieee1394_iso_xmit_sync(ihandle))
			return -1;
		ieee1394_iso_stop(ihandle);
	}
	
	return retval;
}

int ieee1394_iso_xmit_write(raw1394handle_t handle, unsigned char *data, unsigned int len,
			   unsigned char tag, unsigned char sy)
{
	ieee1394handle_t ihandle = handle->mode.ieee1394;
	struct raw1394_iso_status *stat = &ihandle->iso_status;
	struct raw1394_iso_packets packets;
	struct raw1394_iso_packet_info info;

	if(ihandle->iso_mode != ISO_XMIT || ihandle->iso_xmit_handler != NULL) {
		errno = EINVAL;
		return -1;
	}

	/* wait until buffer space is available */
	while(ihandle->iso_status.n_packets <= 1) {
		/* if the file descriptor has been set non-blocking,
		   return immediately */
		if(fcntl(ihandle->fd, F_GETFL) & O_NONBLOCK) {
			errno = EAGAIN;
			return -1;
		}
			
		if(ieee1394_loop_iterate(handle)) {
			return -1;
		}
	}

	/* copy the data to the packet buffer */
	info.offset = ihandle->next_packet * ihandle->iso_buf_stride;
	info.len = len;
	info.tag = tag;
	info.sy = sy;
	
	memcpy(ihandle->iso_buffer + info.offset, data, len);
	
	packets.n_packets = 1;
	packets.infos = &info;

	if(ioctl(ihandle->fd, RAW1394_IOC_ISO_XMIT_PACKETS, &packets))
		return -1;

	stat->n_packets--;
	ihandle->next_packet = increment_and_wrap(ihandle->next_packet, stat->config.buf_packets);
	if(stat->xmit_cycle != -1)
		stat->xmit_cycle = increment_and_wrap(stat->xmit_cycle, 8000);

	return 0;
}

int ieee1394_iso_xmit_start(ieee1394handle_t handle, int start_on_cycle, int prebuffer_packets)
{
	int args[2];

	if(handle->iso_mode != ISO_XMIT) {
		errno = EINVAL;
		return -1;
	}

	args[0] = start_on_cycle;
	args[1] = prebuffer_packets;

	if(ioctl(handle->fd, RAW1394_IOC_ISO_XMIT_START, &args[0]))
		return -1;

	handle->iso_state = ISO_GO;
	return 0;
}

int ieee1394_iso_xmit_sync(ieee1394handle_t handle)
{
	if(handle->iso_mode != ISO_XMIT) {
		errno = EINVAL;
		return -1;
	}
	return ioctl(handle->fd, RAW1394_IOC_ISO_XMIT_SYNC, 0);
}

void ieee1394_iso_stop(ieee1394handle_t handle)
{
	if(handle->iso_mode == ISO_INACTIVE) {
		return;
	}

	ioctl(handle->fd, RAW1394_IOC_ISO_XMIT_RECV_STOP, 0);
	handle->iso_state = ISO_STOP;
}

void ieee1394_iso_shutdown(ieee1394handle_t handle)
{
	if(handle->iso_buffer) {
		munmap(handle->iso_buffer, handle->iso_status.config.data_buf_size);
		handle->iso_buffer = NULL;
	}
	
	if(handle->iso_mode != ISO_INACTIVE) {
		ieee1394_iso_stop(handle);
		ioctl(handle->fd, RAW1394_IOC_ISO_SHUTDOWN, 0);
	}

	if(handle->iso_packet_infos) {
#if _POSIX_MEMLOCK > 0
		munlock(handle->iso_packet_infos,
			handle->iso_status.config.buf_packets * 
			sizeof(struct raw1394_iso_packet_info));
#endif
		free(handle->iso_packet_infos);
		handle->iso_packet_infos = NULL;
	}

	handle->iso_mode = ISO_INACTIVE;
}

int ieee1394_read_cycle_timer(ieee1394handle_t handle,
			     u_int32_t *cycle_timer, u_int64_t *local_time)
{
	int err;
	struct raw1394_cycle_timer ctr = { 0 };

	err = ioctl(handle->fd, RAW1394_IOC_GET_CYCLE_TIMER, &ctr);
	if (!err) {
		*cycle_timer = ctr.cycle_timer;
		*local_time  = ctr.local_time;
	}
	return err;
}

static int _iso_recv_packets(raw1394handle_t handle)
{
	ieee1394handle_t ihandle = handle->mode.ieee1394;
	struct raw1394_iso_status *stat = &ihandle->iso_status;
	struct raw1394_iso_packets packets;

	int retval = -1, packets_done = 0;

	if(ihandle->iso_mode != ISO_RECV) {
		errno = EINVAL;
		return -1;
	}
	
	/* ask the kernel to fill an array with packet info structs */
	packets.n_packets = stat->n_packets;
	packets.infos = ihandle->iso_packet_infos;
	if(packets.infos == NULL)
		goto out;

	if(ioctl(ihandle->fd, RAW1394_IOC_ISO_RECV_PACKETS, &packets) < 0)
		goto out;

	while(stat->n_packets > 0) {
		struct raw1394_iso_packet_info *info;
		enum raw1394_iso_disposition disp;

		info = &packets.infos[packets_done];

		/* call handler */
		disp = ihandle->iso_recv_handler(handle,
						ihandle->iso_buffer + info->offset,
						info->len, info->channel,
						info->tag, info->sy,
						info->cycle,
						_iso_dropped(ihandle));

		/* advance packet cursors */
		stat->n_packets--;
		packets_done++;
		
		if(disp == RAW1394_ISO_DEFER) {
			/* queue an event so that we don't hang in the next read() */
			if(ioctl(ihandle->fd, RAW1394_IOC_ISO_QUEUE_ACTIVITY, 0))
				goto out_consume;
			break;
		} else if(disp == RAW1394_ISO_STOP || disp == RAW1394_ISO_STOP_NOSYNC) {
			ieee1394_iso_stop(ihandle);
			break;
		} else if(disp == RAW1394_ISO_ERROR) {
			goto out_consume;
		}
	}

	/* success */
	retval = 0;

out_consume:
	if(packets_done > 0) {
		if(ioctl(ihandle->fd, RAW1394_IOC_ISO_RECV_RELEASE_PACKETS, packets_done))
			retval = -1;
	}
out:	
	return retval;
}

/* run the ISO state machine; called from raw1394_loop_iterate()  */
int _ieee1394_iso_iterate(raw1394handle_t handle)
{
	ieee1394handle_t ihandle = handle->mode.ieee1394;
	int err;

	if(ihandle->iso_mode == ISO_INACTIVE)
		return 0;

	err = ioctl(ihandle->fd, RAW1394_IOC_ISO_GET_STATUS, &ihandle->iso_status);
	if(err != 0)
		return err;

	ihandle->iso_packets_dropped += ihandle->iso_status.overflows;

	if(ihandle->iso_state == ISO_GO) {
		if(ihandle->iso_mode == ISO_XMIT) {
			if(ihandle->iso_xmit_handler) {
				return _iso_xmit_queue_packets(handle);
			}
		}

		if(ihandle->iso_mode == ISO_RECV) {
			if(ihandle->iso_recv_handler) {
				return _iso_recv_packets(handle);
			}
		}
	}

	return 0;
}
