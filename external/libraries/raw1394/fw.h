/*						-*- c-basic-offset: 8 -*-
 *
 * fw.h -- Internal header file for firewire raw1394 emulation
 *
 * Copyright (C) 2007  Kristian Hoegsberg <krh@bitplanet.net>
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 */

#ifndef LIBRAW1394_FW_H
#define LIBRAW1394_FW_H

#include <stdlib.h>
#include <byteswap.h>
#include <linux/firewire-cdev.h>
#include "raw1394.h"
#include "csr.h"
#include "config.h"

#define ptr_to_u64(p) ((__u64)(unsigned long)(p))
#define u64_to_ptr(p) ((void *)(unsigned long)(p))

static inline __u32
be32_to_cpu(__u32 q)
{
  union { char c[4]; __u32 q; } u = { { 1, 0, 0, 0 } };

  return u.q == 1 ? bswap_32(q) : q;
}

static inline __u32
cpu_to_be32(__u32 q)
{
  return be32_to_cpu(q);
}

#define ARRAY_LENGTH(a) (sizeof (a) / sizeof (a)[0])

#define BUFFER_SIZE	(16 * 1024)

#define MAX_PORTS 16

struct fw_handle;

struct epoll_closure {
	int (*func)(raw1394handle_t handle,
		    struct epoll_closure *closure, __uint32_t events);
};

struct port {
	char device_file[32];
	char *name;
	int node_count;
	int card;
};

#define MAX_DEVICES	63
#define FILENAME_SIZE	16

struct device {
	struct epoll_closure closure;
	int fd;
	int node_id;
	int generation;
	char filename[FILENAME_SIZE];
};

struct request_closure {
	void *data;
	size_t length;
	unsigned long tag;
};

struct allocation;

struct fw_handle {
	struct port ports[MAX_PORTS];
	int port_count;
	int err;
	int generation;
	int abi_version;
	void *userdata;
	int notify_bus_reset;

	bus_reset_handler_t bus_reset_handler;
	tag_handler_t tag_handler;
	arm_tag_handler_t arm_tag_handler;
	fcp_handler_t fcp_handler;
	__u32 fcp_allocation_handle;
	struct allocation *allocations;

	int ioctl_fd;
	int epoll_fd;
	int inotify_fd;
	int inotify_watch;
	int pipe_fds[2];

	struct epoll_closure pipe_closure;
	struct epoll_closure inotify_closure;

	struct device devices[MAX_DEVICES];
	struct device *local_device;
	int nodes[MAX_DEVICES];
	struct fw_cdev_event_bus_reset reset;

	struct {
		char *filename;
		struct epoll_closure closure;
		int fd;
		int type;
		int irq_interval;
		int packet_phase;
		int packet_count;
		int packet_index;
		int buf_packets;
		int max_packet_size;
		int prebuffer;
		int start_on_cycle;
		enum raw1394_iso_dma_recv_mode recv_mode;
		enum { ISO_STOPPED, ISO_ACTIVE } state;
		raw1394_iso_xmit_handler_t xmit_handler;
		raw1394_iso_recv_handler_t recv_handler;
		unsigned char *buffer, *buffer_end, *head;
		unsigned char *tail, *first_payload;

		struct fw_cdev_iso_packet *packets;
	} iso;

	char buffer[BUFFER_SIZE];
};
typedef struct fw_handle *fw_handle_t;

int fw_loop_iterate(raw1394handle_t handle);
fw_handle_t fw_new_handle(void);
void fw_destroy_handle(fw_handle_t handle);
fw_handle_t fw_new_handle_on_port(int port);
int fw_busreset_notify (fw_handle_t handle, int off_on_switch);
int fw_get_fd(fw_handle_t handle);
nodeid_t fw_get_local_id(fw_handle_t handle);
nodeid_t fw_get_irm_id(fw_handle_t handle);
int fw_get_nodecount(fw_handle_t handle);
int fw_get_port_info(fw_handle_t handle, struct raw1394_portinfo *pinf,
		   int maxports);
int fw_set_port(fw_handle_t handle, int port);
int fw_reset_bus_new(fw_handle_t handle, int type);
int fw_arm_register(fw_handle_t handle, nodeaddr_t start,
		   size_t length, byte_t *initial_value,
		   octlet_t arm_tag, arm_options_t access_rights,
		   arm_options_t notification_options,
		   arm_options_t client_transactions);
int fw_arm_unregister(fw_handle_t handle, nodeaddr_t start);
int fw_arm_set_buf(fw_handle_t handle, nodeaddr_t start,
		   size_t length, void *buf);
int fw_arm_get_buf(fw_handle_t handle, nodeaddr_t start,
		   size_t length, void *buf);
int fw_echo_request(fw_handle_t handle, quadlet_t data);
int fw_wake_up(fw_handle_t handle);
int fw_phy_packet_write (fw_handle_t handle, quadlet_t data);
int fw_start_phy_packet_write(fw_handle_t handle,
		   quadlet_t data, unsigned long tag);
int fw_start_read(fw_handle_t handle, nodeid_t node, nodeaddr_t addr,
		   size_t length, quadlet_t *buffer, unsigned long tag);
int fw_start_write(fw_handle_t handle, nodeid_t node, nodeaddr_t addr,
		   size_t length, quadlet_t *data, unsigned long tag);
int fw_start_lock(fw_handle_t handle, nodeid_t node, nodeaddr_t addr,
		   unsigned int extcode, quadlet_t data, quadlet_t arg,
		   quadlet_t *result, unsigned long tag);
int fw_start_lock64(fw_handle_t handle, nodeid_t node, nodeaddr_t addr,
		   unsigned int extcode, octlet_t data, octlet_t arg,
		   octlet_t *result, unsigned long tag);
int fw_start_async_stream(fw_handle_t handle, unsigned int channel,
		   unsigned int tag, unsigned int sy,
		   unsigned int speed, size_t length, quadlet_t *data,
		   unsigned long rawtag);
int fw_start_async_send(fw_handle_t handle,
		   size_t length, size_t header_length,
		   unsigned int expect_response,
		   quadlet_t *data, unsigned long rawtag);
int fw_read(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
		   size_t length, quadlet_t *buffer);
int fw_write(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
		   size_t length, quadlet_t *data);
int fw_lock(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
		   unsigned int extcode, quadlet_t data, quadlet_t arg,
		   quadlet_t *result);
int fw_lock64(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
		   unsigned int extcode, octlet_t data, octlet_t arg,
		   octlet_t *result);
int fw_async_stream(raw1394handle_t handle, unsigned int channel,
		   unsigned int tag, unsigned int sy, unsigned int speed,
		   size_t length, quadlet_t *data);
int fw_async_send(fw_handle_t handle,
		   size_t length, size_t header_length,
		   unsigned int expect_response,
		   quadlet_t *data);
int fw_start_fcp_listen(fw_handle_t handle);
int fw_stop_fcp_listen(fw_handle_t handle);
int fw_update_config_rom(fw_handle_t handle, const quadlet_t *new_rom,
		   size_t size, unsigned char rom_version);
int fw_get_config_rom(fw_handle_t handle, quadlet_t *buffer,
		   size_t buffersize, size_t *rom_size,
		   unsigned char *rom_version);
int fw_bandwidth_modify(raw1394handle_t handle,
		   unsigned int bandwidth,
		   enum raw1394_modify_mode mode);
int fw_channel_modify(raw1394handle_t handle,
		   unsigned int channel,
		   enum raw1394_modify_mode mode);

int fw_iso_xmit_start(raw1394handle_t handle, int start_on_cycle,
			   int prebuffer_packets);
int fw_iso_recv_start(fw_handle_t handle, int start_on_cycle,
			   int tag_mask, int sync);
int fw_iso_xmit_write(raw1394handle_t handle, unsigned char *data,
			   unsigned int len, unsigned char tag,
			   unsigned char sy);
int fw_iso_xmit_sync(raw1394handle_t handle);
int fw_iso_recv_flush(fw_handle_t handle);
int fw_iso_xmit_init(fw_handle_t handle,
			  raw1394_iso_xmit_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_speed speed,
			  int irq_interval);
int fw_iso_recv_init(fw_handle_t handle,
			  raw1394_iso_recv_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_dma_recv_mode mode,
			  int irq_interval);
int fw_iso_multichannel_recv_init(fw_handle_t handle,
				       raw1394_iso_recv_handler_t handler,
				       unsigned int buf_packets,
				       unsigned int max_packet_size,
				       int irq_interval);
int fw_iso_recv_listen_channel(fw_handle_t handle,
				    unsigned char channel);
int fw_iso_recv_unlisten_channel(fw_handle_t handle,
				      unsigned char channel);
int fw_iso_recv_set_channel_mask(fw_handle_t handle, u_int64_t mask);
void fw_iso_stop(fw_handle_t handle);
void fw_iso_shutdown(fw_handle_t handle);
int fw_read_cycle_timer(fw_handle_t handle,
			u_int32_t *cycle_timer, u_int64_t *local_time);

#endif
