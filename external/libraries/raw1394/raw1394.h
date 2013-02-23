/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 1999-2004 Andreas Bombe, Dan Maas, Manfred Weihs, and
 *    Christian Toegel
 * Copyright (C) 2008 Dan Dennedy <dan@dennedy.org>
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 */

#ifndef _LIBRAW1394_RAW1394_H
#define _LIBRAW1394_RAW1394_H

#include <sys/types.h>

#define RAW1394_ARM_READ  1
#define RAW1394_ARM_WRITE 2
#define RAW1394_ARM_LOCK  4

#define RAW1394_LONG_RESET  0
#define RAW1394_SHORT_RESET 1

/* busresetnotify ... */
#define RAW1394_NOTIFY_OFF 0
#define RAW1394_NOTIFY_ON  1

/* extended transaction codes (lock-request-response) */
#define RAW1394_EXTCODE_MASK_SWAP        0x1
#define RAW1394_EXTCODE_COMPARE_SWAP     0x2
#define RAW1394_EXTCODE_FETCH_ADD        0x3
#define RAW1394_EXTCODE_LITTLE_ADD       0x4
#define RAW1394_EXTCODE_BOUNDED_ADD      0x5
#define RAW1394_EXTCODE_WRAP_ADD         0x6

/* response codes */
#define RAW1394_RCODE_COMPLETE           0x0
#define RAW1394_RCODE_CONFLICT_ERROR     0x4
#define RAW1394_RCODE_DATA_ERROR         0x5
#define RAW1394_RCODE_TYPE_ERROR         0x6
#define RAW1394_RCODE_ADDRESS_ERROR      0x7

typedef u_int8_t  byte_t;
typedef u_int32_t quadlet_t;
typedef u_int64_t octlet_t;
typedef u_int64_t nodeaddr_t;
typedef u_int16_t nodeid_t;
typedef u_int8_t  phyid_t;
typedef u_int8_t  arm_options_t;
typedef u_int16_t arm_length_t;

typedef struct raw1394_handle *raw1394handle_t;

typedef struct raw1394_arm_request {
        nodeid_t        destination_nodeid;
        nodeid_t        source_nodeid;
        nodeaddr_t      destination_offset;
        u_int8_t        tlabel;
        u_int8_t        tcode;
        u_int8_t        extended_transaction_code;
        u_int32_t       generation;
        arm_length_t    buffer_length;
        byte_t          *buffer;
} *raw1394_arm_request_t;

typedef struct raw1394_arm_response {
        int             response_code;
        arm_length_t    buffer_length;
        byte_t          *buffer;
} *raw1394_arm_response_t;

typedef struct raw1394_arm_request_response {
        struct raw1394_arm_request  *request;
        struct raw1394_arm_response *response;
} *raw1394_arm_request_response_t;

/* new ISO API */

enum raw1394_iso_speed {
	RAW1394_ISO_SPEED_100 = 0,
	RAW1394_ISO_SPEED_200 = 1,
	RAW1394_ISO_SPEED_400 = 2,
};

/* The dma mode when receiving iso data. Must be supported by chipset */
enum raw1394_iso_dma_recv_mode {
	RAW1394_DMA_DEFAULT = -1,		/* Use the default mode, this is BUFFERFILL for ohci */
	RAW1394_DMA_BUFFERFILL = 1,		/* BUFFER_FILL mode */
	RAW1394_DMA_PACKET_PER_BUFFER = 2	/* PACKET_PER_BUFFER mode */
};

/* return values from isochronous xmit/recv handlers */

enum raw1394_iso_disposition {
	/* continue on to the next packet */
	RAW1394_ISO_OK = 0,

	/* no error, but return from raw1394_loop_iterate() immediately */
	RAW1394_ISO_DEFER = 1,

	/* return from raw1394_loop_iterate() immediately, which will return an error */
	RAW1394_ISO_ERROR = 2,

	/* return from raw1394_loop_iterate() immediately, and stop receiving packets */
	RAW1394_ISO_STOP = 3,

	/* (transmission only) - like ISO_STOP, but don't wait for the buffer to empty */
	RAW1394_ISO_STOP_NOSYNC = 4,
	
	/* (transmission only) - use this if the data you need for the packet was not ready yet
	 * The packet queueing will retry at a later point
	 */
	RAW1394_ISO_AGAIN = 5,
};

enum raw1394_modify_mode {
	RAW1394_MODIFY_ALLOC,
	RAW1394_MODIFY_FREE
};

#ifdef __cplusplus
extern "C" {
#endif

/* handlers for transmitting/receiving isochronous packets */

typedef enum raw1394_iso_disposition (*raw1394_iso_xmit_handler_t)(
	raw1394handle_t handle,
	unsigned char *data,
	unsigned int *len,
	unsigned char *tag,
	unsigned char *sy,
	int cycle, /* -1 if unknown */
	unsigned int dropped);

typedef enum raw1394_iso_disposition (*raw1394_iso_recv_handler_t)(
	raw1394handle_t handle,
	unsigned char *data,
	unsigned int len,
	unsigned char channel,
	unsigned char tag,
	unsigned char sy,
	unsigned int cycle,
	unsigned int dropped);

/**
 * raw1394_iso_xmit_init - initialize isochronous transmission
 * @handle: libraw1394 handle
 * @handler: handler function for queueing packets
 * @buf_packets: number of isochronous packets to buffer
 * @max_packet_size: largest packet you need to handle, in bytes
 * (not including the isochronous header)
 * @channel: isochronous channel on which to transmit
 * @speed: speed at which to transmit
 * @irq_interval: maximum latency of wake-ups, in packets (-1 if you don't care)
 *
 * Allocates all user and kernel resources necessary for isochronous transmission.
 * Channel and bandwidth allocation at the IRM is not performed.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_xmit_init(raw1394handle_t handle,
                          raw1394_iso_xmit_handler_t handler,
                          unsigned int buf_packets,
                          unsigned int max_packet_size,
                          unsigned char channel,
                          enum raw1394_iso_speed speed,
                          int irq_interval);

/**
 * raw1394_iso_recv_init - initialize isochronous reception
 * @handle: libraw1394 handle
 * @handler: handler function for receiving packets
 * @buf_packets: number of isochronous packets to buffer
 * @max_packet_size: largest packet you need to handle, in bytes (not including
 * the isochronous header)
 * @channel: isochronous channel to receive
 * @mode: bufferfill or packet per buffer mode
 * @irq_interval: maximum latency of wake-ups, in packets
 * (-1 if you don't care)
 *
 * Allocates all user and kernel resources necessary for isochronous reception.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_recv_init(raw1394handle_t handle,
                          raw1394_iso_recv_handler_t handler,
                          unsigned int buf_packets,
                          unsigned int max_packet_size,
                          unsigned char channel,
                          enum raw1394_iso_dma_recv_mode mode,
                          int irq_interval);

/**
 * raw1394_iso_multichannel_recv_init - initialize multi-channel iso reception
 * @handle: libraw1394 handle
 * @handler: handler function for receiving packets
 * @buf_packets: number of isochronous packets to buffer
 * @max_packet_size: largest packet you need to handle, in bytes (not including
 * the isochronous header)
 * @speed: speed at which to receive
 * @irq_interval: maximum latency of wake-ups, in packets (-1 if you don't care)
 *
 * Allocates all user and kernel resources necessary for isochronous reception.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_multichannel_recv_init(raw1394handle_t handle,
                                       raw1394_iso_recv_handler_t handler,
                                       unsigned int buf_packets,
                                       unsigned int max_packet_size,
                                       int irq_interval);

/**
 * raw1394_iso_recv_listen_channel - listen to a specific channel in multi-channel mode
 * @handle: libraw1394 handle
 * @channel: the channel to start listening
 *
 * listen/unlisten on a specific channel (multi-channel mode ONLY)
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_recv_listen_channel(raw1394handle_t handle, 
                                    unsigned char channel);

/**
 * raw1394_iso_recv_unlisten_channel - stop listening  to a specific channel in multi-channel mode
 * @handle: libraw1394 handle
 * @channel: the channel to stop listening to
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_recv_unlisten_channel(raw1394handle_t handle, 
                                      unsigned char channel);

/**
 * raw1394_iso_recv_set_channel_mask - listen or unlisten to a whole bunch of channels at once
 * @handle: libraw1394 handle
 * @mask: 64-bit mask of channels, 1 means listen, 0 means unlisten,
 *        channel 0 is LSB, channel 63 is MSB
 *
 * for multi-channel reception mode only
 *
 * Returns: 0 on success, -1 on failure (sets errno)
 **/
int raw1394_iso_recv_set_channel_mask(raw1394handle_t handle, u_int64_t mask);

/**
 * raw1394_iso_xmit_start - begin isochronous transmission
 * @handle: libraw1394 handle
 * @start_on_cycle: isochronous cycle number on which to start 
 * (-1 if you don't care)
 * @prebuffer_packets: number of packets to queue up before starting transmission
 * (-1 if you don't care)
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_xmit_start(raw1394handle_t handle, int start_on_cycle,
                           int prebuffer_packets);

/**
 * raw1394_iso_recv_start - begin isochronous reception
 * @handle: libraw1394 handle
 * @start_on_cycle: isochronous cycle number on which to start 
 * (-1 if you don't care)
 * @tag_mask: mask of tag fields to match (-1 to receive all packets)
 * @sync: not used, reserved for future implementation
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_recv_start(raw1394handle_t handle, int start_on_cycle, 
                           int tag_mask, int sync);

/**
 * raw1394_iso_xmit_write - alternative blocking-write API for ISO transmission
 * @handle: libraw1394 handle
 * @data: pointer to packet data buffer
 * @len: length of packet, in bytes
 * @tag: tag field
 * @sy: sync field
 *
 * write() style API - do NOT use this if you have set an xmit_handler
 * if buffer is full, waits for more space UNLESS the file descriptor is
 * set to non-blocking, in which case xmit_write() will return -1 with
 * errno = EAGAIN
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_xmit_write(raw1394handle_t handle, unsigned char *data, 
                           unsigned int len, unsigned char tag, 
                           unsigned char sy);

/**
 * raw1394_iso_xmit_sync - wait until all queued packets have been sent
 * @handle: libraw1394 handle
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_xmit_sync(raw1394handle_t handle);

/**
 * raw1394_iso_recv_flush - flush all already received iso packets from kernel into user space
 * @handle: libraw1394 handle
 *
 * If you specified an irq_interval > 1 in
 * iso_recv_init, you won't be notified for every single iso packet, but
 * for groups of them. Now e.g. if irq_interval is 100, and you were just
 * notified about iso packets and after them only 20 more packets arrived,
 * no notification will be generated (20 < 100). In the case that you know
 * that there should be more packets at this moment, you can call this
 * function and all iso packets which are already received by the kernel
 * will be flushed out to user space.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_iso_recv_flush(raw1394handle_t handle);

/**
 * raw1394_iso_stop - halt isochronous transmission or reception
 * @handle: libraw1394 handle
 **/
void raw1394_iso_stop(raw1394handle_t handle);

/**
 * raw1394_iso_shutdown - clean up and deallocate all resources for isochronous transmission or reception
 * @handle: libraw1394 handle
 **/
void raw1394_iso_shutdown(raw1394handle_t handle);

/**
 * raw1394_read_cycle_timer - get the current value of the cycle timer
 * @handle: libraw1394 handle
 * @cycle_timer: buffer for Isochronous Cycle Timer
 * @local_time: buffer for local system time in microseconds since Epoch
 *
 * Simultaneously reads the cycle timer register together with the system clock.
 *
 * Format of @cycle_timer, from MSB to LSB: 7 bits cycleSeconds (seconds, or
 * number of cycleCount rollovers), 13 bits cycleCount (isochronous cycles, or
 * cycleOffset rollovers), 12 bits cycleOffset (24.576 MHz clock ticks, not
 * provided on some hardware). The union of cycleSeconds and cycleCount is the
 * current cycle number. The nominal duration of a cycle is 125 microseconds.
 *
 * Returns: the error code of the ioctl, or 0 if successful.
 **/
int raw1394_read_cycle_timer(raw1394handle_t handle,
                             u_int32_t *cycle_timer, u_int64_t *local_time);

typedef int raw1394_errcode_t;
#define raw1394_make_errcode(ack, rcode) (((ack) << 16) | rcode)
#define raw1394_internal_err(errcode) ((errcode) < 0)
#define raw1394_get_ack(errcode) ((errcode) >> 16)
#define raw1394_get_rcode(errcode) ((errcode) & 0xf)
#define raw1394_get_internal(errcode) (errcode)

/**
 * raw1394_get_errcode - return error code of async transaction
 * @handle: libraw1394 handle
 *
 * Some macros are available to extract information from the error code,
 * raw1394_errcode_to_errno() can be used to convert it to an errno number of
 * roughly the same meaning.
 *
 * Returns: the error code of the last raw1394_read(), raw1394_write(),
 * raw1394_lock().  The error code is either an internal
 * error (i.e. not a bus error) or a combination of acknowledge code and
 * response code, as appropriate.
 *
 **/
raw1394_errcode_t raw1394_get_errcode(raw1394handle_t handle);

/**
 * raw1394_errcode_to_errno - convert libraw1394 errcode to errno
 * @errcode: the error code to convert
 *
 * The error code as retrieved by raw1394_get_errcode() is converted into a
 * roughly equivalent errno number and returned.  %0xdead is returned for an
 * illegal errcode.
 *
 * It is intended to be used to decide what to do (retry, give up, report error)
 * for those programs that aren't interested in details, since these get lost in
 * the conversion.  However the returned errnos are equivalent in source code
 * meaning only, the associated text of e.g. perror() is not necessarily
 * meaningful.
 *
 * Returns: %EAGAIN (retrying might succeed, also generation number
 * mismatch), %EREMOTEIO (other node had internal problems), %EPERM (operation
 * not allowed on this address, e.g. write on read-only location), %EINVAL
 * (invalid argument) and %EFAULT (invalid pointer).
 **/
int raw1394_errcode_to_errno(raw1394_errcode_t errcode);

/**
 * raw1394_new_handle - create new handle
 *
 * Creates and returns a new handle which can (after being set up) control one
 * port.  It is not allowed to use the same handle in multiple threads or forked
 * processes.  It is allowed to create and use multiple handles, however.  Use
 * one handle per thread which needs it in the multithreaded case.
 *
 * The default device node is /dev/raw1394, but one can override the default
 * by setting environment variable RAW1394DEV. However, if RAW1394DEV points to
 * a non-existant or invalid device node, then it also attempts to open the
 * default device node.
 *
 * Returns: the created handle or %NULL when initialization fails. In the latter
 * case errno either contains some OS specific error code or EPROTO if
 * libraw1394 and raw1394 don't support each other's protocol versions.
 **/
raw1394handle_t raw1394_new_handle(void);

/**
 * raw1394_destroy_handle - deallocate handle
 * @handle: handle to deallocate
 *
 * Closes connection with raw1394 on this handle and deallocates everything
 * associated with it.  It is safe to pass %NULL as handle, nothing is done in
 * this case.
 **/
void raw1394_destroy_handle(raw1394handle_t handle);

/**
 * raw1394_new_handle_on_port - create a new handle and bind it to a port
 * @port: port to connect to (same as argument to raw1394_set_port())
 *
 * Same as raw1394_new_handle(), but also binds the handle to the
 * specified 1394 port. Equivalent to raw1394_new_handle() followed by
 * raw1394_get_port_info() and raw1394_set_port(). Useful for
 * command-line programs that already know what port they want. If
 * raw1394_set_port() returns ESTALE, retries automatically.
 *
 * The default device node is /dev/raw1394, but one can override the default
 * by setting environment variable RAW1394DEV. However, if RAW1394DEV points to
 * a non-existant or invalid device node, then it also attempts to open the
 * default device node.
 *
 * Returns: the new handle on success or NULL on failure
 **/
raw1394handle_t raw1394_new_handle_on_port(int port);

/**
 * raw1394_busreset_notify - Switch off/on busreset-notification for handle
 * @handle: libraw1394 handle
 * @off_on_switch: RAW1394_NOTIFY_OFF or RAW1394_NOTIFY_ON
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_busreset_notify (raw1394handle_t handle, int off_on_switch);

/**
 * raw1394_get_fd - get the communication file descriptor
 * @handle: libraw1394 handle
 *
 * This can be used for select()/poll() calls if you wait on other fds or can be
 * integrated into another event loop (e.g. from a GUI application framework).
 * It can also be used to set/remove the O_NONBLOCK flag using fcntl() to modify
 * the blocking behaviour in raw1394_loop_iterate().  It must not be used for
 * anything else.
 *
 * Returns: the fd used for communication with the raw1394 kernel module or -1
 * on failure (sets errno).
 **/
int raw1394_get_fd(raw1394handle_t handle);

/**
 * raw1394_set_userdata - associate user data with a handle
 * @handle: libraw1394 handle
 * @data: user data (pointer)
 *
 * Allows to associate one void pointer with a handle.  libraw1394 does not care
 * about the data, it just stores it in the handle allowing it to be retrieved
 * at any time with raw1394_get_userdata().  This can be useful when multiple
 * handles are used, so that callbacks can identify the handle.
 **/
void raw1394_set_userdata(raw1394handle_t handle, void *data);

/**
 * raw1394_get_userdata - retrieve user data from handle
 * @handle: libraw1394 handle
 *
 * Returns: the user data pointer associated with the handle using
 * raw1394_set_userdata().
 **/
void *raw1394_get_userdata(raw1394handle_t handle);

/**
 * raw1394_get_local_id - get node ID of the current port
 * @handle: libraw1394 handle
 *
 * Returns: the node ID of the local node connected to which the handle is
 * connected.  This value can change with every bus reset.
 **/
nodeid_t raw1394_get_local_id(raw1394handle_t handle);

/**
 * raw1394_get_irm_id - get node ID of isochronous resource manager
 * @handle: libraw1394 handle
 *
 * Returns: the node ID of the isochronous resource manager of the bus the handle
 * is connected to.  This value may change with every bus reset.
 **/
nodeid_t raw1394_get_irm_id(raw1394handle_t handle);

/**
 * raw1394_get_nodecount - get number of nodes on the bus
 * @handle: libraw1394 handle
 *
 * Since the root node always has
 * the highest node ID, this number can be used to determine that ID (it's
 * LOCAL_BUS|(count-1)).
 *
 * Returns: the number of nodes on the bus to which the handle is connected.
 * This value can change with every bus reset.
 **/
int raw1394_get_nodecount(raw1394handle_t handle);

struct raw1394_portinfo {
        int nodes;
        char name[32];
};

/**
 * raw1394_get_port_info - get information about available ports
 * @handle: libraw1394 handle
 * @pinf: pointer to an array of struct raw1394_portinfo
 * @maxports: number of elements in @pinf
 *
 * Before you can set which port to use, you have to use this function to find
 * out which ports exist.
 *
 * If your program is interactive, you should present the user with this list to
 * let them decide which port to use if there is more than one.  A
 * non-interactive program (and probably interactive ones, too) should provide a
 * command line option to choose the port. If @maxports is %0, @pinf can be
 * %NULL, too.
 *
 * Returns: the number of ports and writes information about them into @pinf, but
 * not into more than @maxports elements.
 **/
int raw1394_get_port_info(raw1394handle_t handle, struct raw1394_portinfo *pinf,
                          int maxports);

/**
 * raw1394_set_port - choose port for handle
 * @handle: libraw1394 handle
 * @port: port to connect to (corresponds to index of struct raw1394_portinfo)
 *
 * This function connects the handle to the port given (as queried with
 * raw1394_get_port_info()).  If successful, raw1394_get_port_info() and
 * raw1394_set_port() are not allowed to be called afterwards on this handle.
 * To make up for this, all the other functions (those handling asynchronous and
 * isochronous transmissions) can now be called.
 *
 * Returns: %0 for success or -1 for failure with errno set appropriately.  A
 * possible failure mode is with errno = %ESTALE, in this case the configuration
 * has changed since the call to raw1394_get_port_info() and it has to be called
 * again to update your view of the available ports.
 **/
int raw1394_set_port(raw1394handle_t handle, int port);

/**
 * raw1394_reset_bus - initiate bus reset
 * @handle: libraw1394 handle
 *
 * This function initiates a bus reset on the connected port.  Usually this is
 * not necessary and should be avoided, this function is here for low level bus
 * control and debugging.
 *
 * Returns: %0 for success or -1 for failure with errno set appropriately
 **/
int raw1394_reset_bus(raw1394handle_t handle);

/**
 * raw1394_reset_bus_new - Reset the connected bus (with certain type). 
 * @handle: libraw1394 handle
 * @type: RAW1394_SHORT_RESET or RAW1394_LONG_RESET
 *
 * Returns: %0 for success or -1 for failure 
 **/
int raw1394_reset_bus_new(raw1394handle_t handle, int type);

/**
 * raw1394_loop_iterate - get and process one event message
 * @handle: libraw1394 handle
 *
 * Get one new message through handle and process it with the registered message
 * handler. Note that some other library functions may call this function 
 * multiple times to wait for their completion, some handler return values may 
 * get lost if you use these.
 *
 * Returns: %-1 for an error or the return value of
 * the handler which got executed. The default handlers always return zero.
 **/
int raw1394_loop_iterate(raw1394handle_t handle);

typedef int (*bus_reset_handler_t)(raw1394handle_t, unsigned int generation);

/**
 * raw1394_set_bus_reset_handler - set bus reset handler
 * @handle: libraw1394 handle
 * @new_h: pointer to new handler
 *
 * Sets the handler to be called on every bus reset to @new_h.
 * The default handler just calls raw1394_update_generation().
 *
 * Returns: the old handler or NULL on failure (sets errno)
 **/
bus_reset_handler_t raw1394_set_bus_reset_handler(raw1394handle_t handle,
                                                  bus_reset_handler_t new_h);

/**
 * raw1394_get_generation - get generation number of handle
 * @handle: libraw1394 handle
 *
 * The generation number is incremented on every bus reset, and every transaction
 * started by raw1394 is tagged with the stored generation number.  If these
 * don't match, the transaction will abort with an error.
 * The generation number of the handle is not automatically updated,
 * raw1394_update_generation() has to be used for this.
 *
 * Returns: the generation number associated with the handle or UINT_MAX on
* failure.
 **/
unsigned int raw1394_get_generation(raw1394handle_t handle);

/**
 * raw1394_update_generation - set generation number of handle
 * @handle: libraw1394 handle
 * @generation: new generation number
 *
 * This function sets the generation number of the handle to @gen.  All requests
 * that apply to a single node ID are tagged with this number and abort with an
 * error if that is different from the generation number kept in the kernel.
 * This avoids acting on the wrong node which may have changed its ID in a bus
 * reset.
 *
 * You should call this within your bus reset handler with an incremented value.
 **/
void raw1394_update_generation(raw1394handle_t handle, unsigned int generation);

typedef int (*tag_handler_t)(raw1394handle_t, unsigned long tag,
                             raw1394_errcode_t err);

/**
 * raw1394_set_tag_handler - set request completion handler
 * @handle: libraw1394 handle
 * @new_h: pointer to new handler
 *
 * Sets the handler to be called whenever a request completes to @new_h.
 * The default handler interprets the tag as a pointer
 * to a &struct raw1394_reqhandle and calls the callback in there.
 *
 * Care must be taken when replacing the tag handler and calling the synchronous
 * versions of the transaction functions (i.e. raw1394_read(), raw1394_write(),
 * raw1394_lock()) since these do pass pointers to &struct
 * raw1394_reqhandle as the tag and expect the callback to be invoked.
 *
 * Returns: the old handler or NULL on failure (sets errno)
 **/
tag_handler_t raw1394_set_tag_handler(raw1394handle_t handle,
                                      tag_handler_t new_h);

typedef int (*arm_tag_handler_t)(raw1394handle_t handle, unsigned long arm_tag,
                             byte_t request_type, unsigned int requested_length,
                             void *data); 

/**
 * raw1394_set_arm_tag_handler - set the async request handler
 * @handle: libraw1394 handle
 * @new_h: pointer to new handler
 *
 * Set the handler that will be called when an async read/write/lock arm_request
 * arrived. The default action is to call the arm_callback in the 
 * raw1394_arm_reqhandle pointed to by arm_tag.
 *
 * Returns: old handler or NULL on failure (sets errno)
 **/
arm_tag_handler_t raw1394_set_arm_tag_handler(raw1394handle_t handle,
                                      arm_tag_handler_t new_h);

typedef int (*fcp_handler_t)(raw1394handle_t, nodeid_t nodeid, int response,
                             size_t length, unsigned char *data);

/**
 * raw1394_set_fcp_handler - set FCP handler
 * @handle: libraw1394 handle
 * @new_h: pointer to new handler
 *
 * Function Control Protocol is defined in IEC 61883-1.
 *
 * Sets the handler to be called when either FCP command or FCP response
 * registers get written to @new_h.  The default handler does nothing.
 * In order to actually get FCP events, you have to enable it with
 * raw1394_start_fcp_listen() and can stop it with raw1394_stop_fcp_listen().
 *
 * Returns: the old handler or NULL on failure (sets errno)
 **/
fcp_handler_t raw1394_set_fcp_handler(raw1394handle_t handle, fcp_handler_t new_h);

/**
 * req_callback_t - This is the general request handler
 * @req_callback_t: This is the general request handler
 *
 * It is used by the default tag handler
 * when a request completes, it calls the callback and passes it the data
 * pointer and the error code of the request.
 **/
typedef int (*req_callback_t)(raw1394handle_t, void *data,
                              raw1394_errcode_t err);

struct raw1394_reqhandle {
        req_callback_t callback;
        void *data;
};

/**
 * arm_req_callback_t - This is the general arm-request handle
 * @arm_req_callback_t: This is the general arm-request handle
 * @handle: libraw1394 handle
 *
 * (arm = address range mapping)
 * It is used by the default arm-tag handler when a request has been 
 * received, it calls the arm_callback.
 **/
typedef int (*arm_req_callback_t) (raw1394handle_t,
                                   struct raw1394_arm_request_response *arm_req_resp,
                                   unsigned int requested_length,
                                   void *pcontext, byte_t request_type);

struct raw1394_arm_reqhandle {
        arm_req_callback_t arm_callback;
        void *pcontext;
};

/**
 * raw1394_arm_register - register an AddressRangeMapping
 * @handle: libraw1394 handle
 * @start:            identifies addressrange
 * @length:           identifies addressrange
 * @initial_value:    pointer to buffer containing (if necessary) initial value
 *                    NULL means undefined
 * @arm_tag:          identifier for arm_tag_handler 
 *                    (usually pointer to raw1394_arm_reqhandle)
 * @access_rights:    access-rights for registered addressrange handled 
 *                    by kernel-part. Value is one or more binary or of the 
 *                    following flags - ARM_READ, ARM_WRITE, ARM_LOCK
 * @notification_options: identifies for which type of request you want
 *                    to be notified. Value is one or more binary or of the 
 *                    following flags - ARM_READ, ARM_WRITE, ARM_LOCK
 * @client_transactions: identifies for which type of request you want
 *                    to handle the request by the client application.
 *                    for those requests no response will be generated, but
 *                    has to be generated by the application.
 *                    Value is one or more binary or of the 
 *                    following flags - ARM_READ, ARM_WRITE, ARM_LOCK
 *                    For each bit set here, notification_options and
 *                    access_rights will be ignored.
 *
 * ARM = Adress Range Mapping
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_arm_register(raw1394handle_t handle, nodeaddr_t start, 
                         size_t length, byte_t *initial_value,
                         octlet_t arm_tag, arm_options_t access_rights,
                         arm_options_t notification_options,
                         arm_options_t client_transactions);
/**
 * raw1394_arm_unregister - unregister an AddressRangeMapping
 * @handle: libraw1394 handle
 * @start:            identifies addressrange for unregistering 
 *                    (value of start have to be the same value 
 *                    used for registering this adressrange)
 * 
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_arm_unregister(raw1394handle_t handle, nodeaddr_t start);

/**
 * raw1394_arm_set_buf - set the buffer of an AdressRangeMapping
 * @handle: libraw1394 handle
 * @start: identifies addressrange
 * @length: identifies addressrange
 * @buf: pointer to buffer
 *
 * This function copies @length bytes from user memory area @buf
 * to one ARM block in kernel memory area
 * with start offset @start.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_arm_set_buf (raw1394handle_t handle, nodeaddr_t start,
                         size_t length, void *buf);

/**
 * raw1394_arm_get_buf - get the buffer of an AdressRangeMapping
 * @handle: libraw1394 handle
 * @start: identifies addressrange
 * @length: identifies addressrange
 * @buf: pointer to buffer
 *
 * This function copies @length bytes from one
 * ARM block in kernel memory area with start offset @start
 * to user memory area @buf
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_arm_get_buf (raw1394handle_t handle, nodeaddr_t start,
                         size_t length, void *buf);

/**
 * raw1394_echo_request - send an echo request to the driver
 * @handle: libraw1394 handle
 * @data:              arbitrary data; raw1394_loop_iterate will return it
 *
 * the driver then send back the
 * same request. raw1394_loop_iterate will return data as return value,
 * when it processes the echo. 
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_echo_request(raw1394handle_t handle, quadlet_t data);

/**
 * raw1394_wake_up - wake up raw1394_loop_iterate
 * @handle: libraw1394 handle
 *
 * (or a blocking read from the device
 * file). actually this calls raw1394_echo_request with 0 as data. 
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_wake_up(raw1394handle_t handle);

 
/**
 * raw1394_phy_packet_write - send physical request
 * @handle: libraw1394 handle
 * @data: the contents of the packet
 *
 * examples of physical requests are linkon, physicalconfigurationpacket, etc.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_phy_packet_write (raw1394handle_t handle, quadlet_t data);

/**
 * raw1394_start_phy_packet_write - initiate sending a physical request
 * @handle: libraw1394 handle
 * @data: the contents of the packet
 * @tag: data to identify the request to completion handler
 *
 * examples of physical requests are linkon, physicalconfigurationpacket, etc.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_phy_packet_write(raw1394handle_t handle, 
        quadlet_t data, unsigned long tag);

/**
 * raw1394_start_read - initiate a read transaction
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @length: amount of bytes of data to read
 * @buffer: pointer to buffer where data will be saved
 * @tag: data to identify the request to completion handler
 *
 * This function starts the specified read request. If
 * @length is %4 a quadlet read is initiated and a block read otherwise.
 *
 * The transaction is only started, no success of the transaction is implied
 * with a successful return of this function.  When the transaction completes, a
 * raw1394_loop_iterate() will call the tag handler and pass it the tag and
 * error code of the transaction.  @tag should therefore be set to something
 * that uniquely identifies this transaction (e.g. a struct pointer casted to
 * unsigned long).
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_read(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       size_t length, quadlet_t *buffer, unsigned long tag);

/**
 * raw1394_start_write - initiate a write transaction
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to write to
 * @length: amount of bytes of data to write
 * @data: pointer to data to be sent
 * @tag: data to identify the request to completion handler
 *
 * This function starts the specified write request. If
 * @length is %4 a quadlet write is initiated and a block write otherwise.
 *
 * The transaction is only started, no success of the transaction is implied
 * with a successful return of this function.  When the transaction completes, a
 * raw1394_loop_iterate() will call the tag handler and pass it the tag and
 * error code of the transaction.  @tag should therefore be set to something
 * that uniquely identifies this transaction (e.g. a struct pointer casted to
 * unsigned long).
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_write(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                        size_t length, quadlet_t *data, unsigned long tag);

/**
 * raw1394_start_lock - initiate a 32-bit compare-swap lock transaction
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @extcode: extended transaction code determining the lock operation
 * @data: data part of lock parameters
 * @arg: arg part of lock parameters
 * @result: address where return value will be written
 * @tag: data to identify the request to completion handler
 *
 * This function starts the specified lock request.
 * The transaction is only started, no success of the transaction is implied
 * with a successful return of this function.  When the transaction completes, a
 * raw1394_loop_iterate() will call the tag handler and pass it the tag and
 * error code of the transaction.  @tag should therefore be set to something
 * that uniquely identifies this transaction (e.g. a struct pointer casted to
 * unsigned long).
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_lock(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       unsigned int extcode, quadlet_t data, quadlet_t arg,
                       quadlet_t *result, unsigned long tag);

/**
 * raw1394_start_lock64 - initiate a 64-bit compare-swap lock transaction
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @extcode: extended transaction code determining the lock operation
 * @data: data part of lock parameters
 * @arg: arg part of lock parameters
 * @result: address where return value will be written
 * @tag: data to identify the request to completion handler
 *
 * This function starts the specified lock request.
 * The transaction is only started, no success of the transaction is implied
 * with a successful return of this function.  When the transaction completes, a
 * raw1394_loop_iterate() will call the tag handler and pass it the tag and
 * error code of the transaction.  @tag should therefore be set to something
 * that uniquely identifies this transaction (e.g. a struct pointer casted to
 * unsigned long).
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_lock64(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       unsigned int extcode, octlet_t data, octlet_t arg,
                       octlet_t *result, unsigned long tag);

/**
 * raw1394_start_async_stream - initiate asynchronous stream
 * @handle: libraw1394 handle
 * @channel: the isochronous channel number to send on
 * @tag: data to be put into packet's tag field
 * @sy: data to be put into packet's sy field
 * @speed: speed at which to send
 * @length: amount of data to send, in bytes
 * @data: pointer to data to send
 * @rawtag: data to identify the request to completion handler
 *
 * Passes custom tag.  Use pointer to raw1394_reqhandle if you use the standard
 * tag handler.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_async_stream(raw1394handle_t handle, unsigned int channel,
                               unsigned int tag, unsigned int sy,
                               unsigned int speed, size_t length, quadlet_t *data,
                               unsigned long rawtag);


/**
 * raw1394_start_async_send - send an asynchronous packet
 * @handle: libraw1394 handle
 * @length: the amount of bytes of data to send
 * @header_length: the number of bytes in the header
 * @expect_response: indicate with a 0 or 1 whether to receive a completion event
 * @data: pointer to data to send
 * @rawtag: data to identify the request to completion handler
 *
 * This starts sending an arbitrary async packet. It gets an array of quadlets 
 * consisting of header and data (without CRC in between). Header information 
 * is always in machine byte order, data (data block as well as quadlet data 
 * in a read response for data quadlet) shall be in big endian byte order. 
 * expect_response indicates, if we expect a response (i.e. if we will get the 
 * tag back after the packet was sent or after a response arrived). length is 
 * the length of the complete packet (header_length + length of the data block).
 * The main purpose of this function is to send responses for incoming 
 * transactions, that are handled by the application.
 * Do not use that function, unless you really know, what you do! Sending 
 * corrupt packet may lead to weird results.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_async_send(raw1394handle_t handle,
                             size_t length, size_t header_length, 
                             unsigned int expect_response,
                             quadlet_t *data, unsigned long rawtag);

/**
 * raw1394_read - send async read request to a node and wait for response.
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @length: amount of bytes of data to read
 * @buffer: pointer to buffer where data will be saved
 *
 * If @length is %4, a quadlet read request is used.
 *
 * This does the complete transaction and will return when it's finished.  It
 * will call raw1394_loop_iterate() as often as necessary, return values of
 * handlers called will be therefore lost.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_read(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 size_t length, quadlet_t *buffer);

/**
 * raw1394_write - send async write request to a node and wait for response.
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to write to
 * @length: amount of bytes of data to write
 * @data: pointer to data to be sent
 *
 * If @length is %4, a quadlet write request is used.
 *
 * This does the complete transaction and will return when it's finished.  It
 * will call raw1394_loop_iterate() as often as necessary, return values of
 * handlers called will be therefore lost.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_write(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                  size_t length, quadlet_t *data);

/**
 * raw1394_lock - send 32-bit compare-swap lock request and wait for response.
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @extcode: extended transaction code determining the lock operation
 * @data: data part of lock parameters
 * @arg: arg part of lock parameters
 * @result: address where return value will be written
 *
 * This does the complete transaction and will return when it's finished.  It
 * will call raw1394_loop_iterate() as often as necessary, return values of
 * handlers called will be therefore lost.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_lock(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, quadlet_t data, quadlet_t arg,
                 quadlet_t *result);

/**
 * raw1394_lock64 - send 64-bit compare-swap lock request and wait for response.
 * @handle: libraw1394 handle
 * @node: target node ID
 * @addr: address to read from
 * @extcode: extended transaction code determining the lock operation
 * @data: data part of lock parameters
 * @arg: arg part of lock parameters
 * @result: address where return value will be written
 *
 * This does the complete transaction and will return when it's finished.  It
 * will call raw1394_loop_iterate() as often as necessary, return values of
 * handlers called will be therefore lost.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_lock64(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, octlet_t data, octlet_t arg,
                 octlet_t *result);

/**
 * raw1394_async_stream
 * @handle: libraw1394 handle
 * @channel: the isochronous channel number to send on
 * @tag: data to be put into packet's tag field
 * @sy: data to be put into packet's sy field
 * @speed: speed at which to send
 * @length: amount of bytes of data to send
 * @data: pointer to data to send
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_async_stream(raw1394handle_t handle, unsigned int channel,
                         unsigned int tag, unsigned int sy, unsigned int speed,
                         size_t length, quadlet_t *data);

/**
 * raw1394_async_send
 * @handle: libraw1394 handle
 * @length: the amount of bytes of data to send
 * @header_length: the number of bytes in the header
 * @expect_response: indicate with a 0 or 1 whether to receive a completion event
 * @data: pointer to data to send
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_async_send(raw1394handle_t handle,
                       size_t length, size_t header_length,
                       unsigned int expect_response,
                       quadlet_t *data);

/**
 * raw1394_start_fcp_listen - enable reception of FCP events
 * @handle: libraw1394 handle
 *
 * FCP = Function Control Protocol (see IEC 61883-1)
 * Enables the reception of FCP events (writes to the FCP_COMMAND or
 * FCP_RESPONSE address ranges) on @handle.  FCP requests are then passed to the
 * callback specified with raw1394_set_fcp_handler().
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_start_fcp_listen(raw1394handle_t handle);

/**
 * raw1394_stop_fcp_listen - disable reception of FCP events
 * @handle: libraw1394 handle
 *
 * Stops the reception of FCP events (writes to the FCP_COMMAND or
 * FCP_RESPONSE address ranges) on @handle.
 *
 * Returns: 0 on success or -1 on failure (sets errno)
 **/
int raw1394_stop_fcp_listen(raw1394handle_t handle);


/**
 * raw1394_get_libversion - Returns the version string
 *
 * Instead, typically, one uses 'pkg-config --mod-version libraw1394'
 * Might be useful for an application.
 *
 * Returns: a pointer to a string containing the version number
 */
const char *raw1394_get_libversion(void);


/**
 * raw1394_update_config_rom - updates the configuration ROM of a host
 * @handle: libraw1394 handle
 * @new_rom: a pointer to the new ROM image
 * @size: the size of the new ROM image in bytes
 * @rom_version: the version numer of the current version, not the new
 *
 * @rom_version must be the current
 * version, otherwise it will fail with return value -1. 
 *
 * Returns: -1 (failure) if the version is incorrect, 
 * -2 (failure) if the new rom version is too big, or
 * 0 for success
 **/

int raw1394_update_config_rom(raw1394handle_t handle, const quadlet_t
        *new_rom, size_t size, unsigned char rom_version);


/**
 * raw1394_get_config_rom - reads the current version of the configuration ROM of a host
 * @handle: libraw1394 handle
 * @buffer: the memory address at which to store the copy of the ROM
 * @buffersize: is the size of the buffer, @rom_size
 * @rom_size: upon successful return, contains the size of the ROM
 * @rom_version: upon successful return, contains the version of the rom
 *
 * returns the size of the current rom image. @rom_version is the
 * version number of the fetched rom.
 *
 * Return: -1 (failure) if the buffer was too small or 0 for success
 **/

int raw1394_get_config_rom(raw1394handle_t handle, quadlet_t *buffer,
        size_t buffersize, size_t *rom_size, unsigned char *rom_version);

/**
 * raw1394_bandwidth_modify - allocate or release bandwidth
 * @handle: a libraw1394 handle
 * @bandwidth: IEEE 1394 Bandwidth Alloction Units
 * @mode: whether to allocate or free
 *
 * Communicates with the isochronous resource manager.
 *
 * Return:
 * -1 for failure, 0 for success
 **/
int 
raw1394_bandwidth_modify (raw1394handle_t handle, unsigned int bandwidth, 
	enum raw1394_modify_mode mode);

/**
 * raw1394_channel_modify - allocate or release isochronous channel
 * @handle: a libraw1394 handle
 * @channel: isochronous channel
 * @mode: whether to allocate or free
 *
 * Communicates with the isochronous resource manager.
 *
 * Return:
 * -1 for failure, 0 for success
 **/
int 
raw1394_channel_modify (raw1394handle_t handle, unsigned int channel, 
	enum raw1394_modify_mode mode);


#ifdef __cplusplus
}
#endif

#endif /* _LIBRAW1394_RAW1394_H */
