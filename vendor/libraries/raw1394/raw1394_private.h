#ifndef _RAW1394_PRIVATE_H
#define _RAW1394_PRIVATE_H

#include "raw1394.h"
#include "csr.h"
#include "fw.h"
#include "kernel-raw1394.h"

#define HBUF_SIZE      8192
#define ARM_REC_LENGTH 4096 
#define MAXIMUM_BANDWIDTH 4915

struct ieee1394_handle {
	int fd;
	int protocol_version;
	unsigned int generation;

	nodeid_t local_id;
	int num_of_nodes;
	nodeid_t irm_id;

	raw1394_errcode_t err;
	void *userdata;

	bus_reset_handler_t bus_reset_handler;
	tag_handler_t     tag_handler;
	arm_tag_handler_t arm_tag_handler;
	fcp_handler_t     fcp_handler;

	/* new ISO API */

	/* memory mapping of the DMA buffer */
	unsigned char *iso_buffer;
	enum { ISO_INACTIVE, ISO_XMIT, ISO_RECV } iso_mode;
	enum { ISO_STOP, ISO_GO } iso_state;

	/* iso XMIT only: */
	unsigned int iso_buf_stride; /* offset between successive packets */
	unsigned int next_packet; /* index of next packet to be transmitted */

	/* status buffer, updated from _raw1394_iso_iterate() */
	struct raw1394_iso_status iso_status;
	unsigned int iso_packets_dropped;

	/* user-supplied handlers */
	raw1394_iso_xmit_handler_t iso_xmit_handler;
	raw1394_iso_recv_handler_t iso_recv_handler;

	quadlet_t buffer[HBUF_SIZE/4]; /* 2048 */
	void *iso_packet_infos; /* actually a struct raw1394_iso_packet_info* */
};
typedef struct ieee1394_handle *ieee1394handle_t;
// typedef struct fw_handle *fw_handle_t;

struct raw1394_handle {
	int is_fw;
	union {
		ieee1394handle_t ieee1394;
		fw_handle_t fw;
	} mode;
};

struct sync_cb_data {
	int done;
	int errcode;
};

int _raw1394_sync_cb(struct raw1394_handle*, struct sync_cb_data*, int);
int _raw1394_iso_iterate(raw1394handle_t handle);

#define CLEAR_REQ(reqp) memset((reqp), 0, sizeof(struct raw1394_request))

#if SIZEOF_VOID_P == 4
#define int2ptr(x) ((void *)(__u32)x)
#define ptr2int(x) ((__u64)(__u32)x)
#else
#define int2ptr(x) ((void *)x)
#define ptr2int(x) ((__u64)x)
#endif


int ieee1394_arm_register(struct ieee1394_handle *handle, nodeaddr_t start, 
                         size_t length, byte_t *initial_value,
                         octlet_t arm_tag, arm_options_t access_rights,
                         arm_options_t notification_options,
                         arm_options_t client_transactions);
int ieee1394_arm_unregister (struct ieee1394_handle *handle, nodeaddr_t start);
int ieee1394_arm_set_buf (struct ieee1394_handle *handle, nodeaddr_t start,
                         size_t length, void *buf);
int ieee1394_arm_get_buf (struct ieee1394_handle *handle, nodeaddr_t start,
                         size_t length, void *buf);
int ieee1394_errcode_to_errno(raw1394_errcode_t errcode);
int ieee1394_loop_iterate(struct raw1394_handle *handle);
int ieee1394_start_fcp_listen(struct raw1394_handle *handle);
int ieee1394_stop_fcp_listen(struct raw1394_handle *handle);
struct ieee1394_handle *ieee1394_new_handle(void);
void ieee1394_destroy_handle(struct ieee1394_handle *handle);
int ieee1394_get_fd(struct ieee1394_handle *handle);
int ieee1394_get_nodecount(struct ieee1394_handle *handle);
nodeid_t ieee1394_get_local_id(struct ieee1394_handle *handle);
nodeid_t ieee1394_get_irm_id(struct ieee1394_handle *handle);
int ieee1394_get_port_info(struct ieee1394_handle *handle,
                          struct raw1394_portinfo *pinf, int maxports);
int ieee1394_set_port(struct ieee1394_handle *handle, int port);
ieee1394handle_t ieee1394_new_handle_on_port(int port);
int ieee1394_reset_bus_new(struct ieee1394_handle *handle, int type);
int ieee1394_busreset_notify (struct ieee1394_handle *handle,
                             int off_on_switch);
int ieee1394_update_config_rom(ieee1394handle_t handle, const quadlet_t
        *new_rom, size_t size, unsigned char rom_version);
int ieee1394_get_config_rom(ieee1394handle_t handle, quadlet_t *buffer,
        size_t buffersize, size_t *rom_size, unsigned char *rom_version);
int ieee1394_bandwidth_modify (raw1394handle_t handle, unsigned int bandwidth,
	enum raw1394_modify_mode mode);
int ieee1394_channel_modify (raw1394handle_t handle, unsigned int channel,
	enum raw1394_modify_mode mode);
int ieee1394_start_read(struct ieee1394_handle *handle, nodeid_t node,
                       nodeaddr_t addr, size_t length, quadlet_t *buffer,
                       unsigned long tag);
int ieee1394_start_write(struct ieee1394_handle *handle, nodeid_t node,
                        nodeaddr_t addr, size_t length, quadlet_t *data,
                        unsigned long tag);
int ieee1394_start_lock(struct ieee1394_handle *handle, nodeid_t node,
                       nodeaddr_t addr, unsigned int extcode, quadlet_t data,
                       quadlet_t arg, quadlet_t *result, unsigned long tag);
int ieee1394_start_lock64(struct ieee1394_handle *handle, nodeid_t node,
                         nodeaddr_t addr, unsigned int extcode, octlet_t data,
                         octlet_t arg, octlet_t *result, unsigned long tag);
int ieee1394_start_async_stream(struct ieee1394_handle *handle,
                               unsigned int channel,
                               unsigned int tag, unsigned int sy,
                               unsigned int speed, size_t length, quadlet_t *data,
                               unsigned long rawtag);
int ieee1394_start_async_send(struct ieee1394_handle *handle,
                             size_t length, size_t header_length, unsigned int expect_response,
                             quadlet_t *data, unsigned long rawtag);
int ieee1394_read(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 size_t length, quadlet_t *buffer);
int ieee1394_write(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                  size_t length, quadlet_t *data);
int ieee1394_lock(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, quadlet_t data, quadlet_t arg,
                 quadlet_t *result);
int ieee1394_lock64(struct raw1394_handle *handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, octlet_t data, octlet_t arg,
                 octlet_t *result);
int ieee1394_async_stream(struct raw1394_handle *handle, unsigned int channel,
                         unsigned int tag, unsigned int sy, unsigned int speed,
                         size_t length, quadlet_t *data);
int ieee1394_async_send(struct raw1394_handle *handle               ,
                             size_t length, size_t header_length, unsigned int expect_response,
                             quadlet_t *data);
int ieee1394_start_phy_packet_write(struct ieee1394_handle *handle, 
	quadlet_t data, unsigned long tag);
int ieee1394_phy_packet_write (struct raw1394_handle *handle, quadlet_t data);
int ieee1394_echo_request(struct ieee1394_handle *handle, quadlet_t data);
int ieee1394_wake_up(ieee1394handle_t handle);
const char *ieee1394_get_libversion();

int ieee1394_iso_xmit_init(ieee1394handle_t handle,
			  raw1394_iso_xmit_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_speed speed,
			  int irq_interval);
int ieee1394_iso_recv_init(ieee1394handle_t handle,
			  raw1394_iso_recv_handler_t handler,
			  unsigned int buf_packets,
			  unsigned int max_packet_size,
			  unsigned char channel,
			  enum raw1394_iso_dma_recv_mode mode,
			  int irq_interval);
int ieee1394_iso_multichannel_recv_init(ieee1394handle_t handle,
				       raw1394_iso_recv_handler_t handler,
				       unsigned int buf_packets,
				       unsigned int max_packet_size,
				       int irq_interval);
int ieee1394_iso_recv_listen_channel(ieee1394handle_t handle, unsigned char channel);
int ieee1394_iso_recv_unlisten_channel(ieee1394handle_t handle, unsigned char channel);
int ieee1394_iso_recv_flush(ieee1394handle_t handle);
int ieee1394_iso_recv_set_channel_mask(ieee1394handle_t handle, u_int64_t mask);
int ieee1394_iso_recv_start(ieee1394handle_t handle, int start_on_cycle, int tag_mask, int sync);
int ieee1394_iso_xmit_write(raw1394handle_t handle, unsigned char *data, unsigned int len,
			   unsigned char tag, unsigned char sy);
int ieee1394_iso_xmit_start(ieee1394handle_t handle, int start_on_cycle, int prebuffer_packets);
int ieee1394_iso_xmit_sync(ieee1394handle_t handle);
void ieee1394_iso_stop(ieee1394handle_t handle);
void ieee1394_iso_shutdown(ieee1394handle_t handle);
int ieee1394_read_cycle_timer(ieee1394handle_t handle,
			     u_int32_t *cycle_timer, u_int64_t *local_time);
int _ieee1394_iso_iterate(raw1394handle_t handle);



#endif /* _RAW1394_PRIVATE_H */
