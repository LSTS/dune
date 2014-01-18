/*
 * libraw1394 - library for raw access to the 1394 bus with the Linux subsystem.
 *
 * Copyright (C) 2008 Dan Dennedy <dan@dennedy.org>
 *
 * This library is licensed under the GNU Lesser General Public License (LGPL),
 * version 2.1 or later. See the file COPYING.LIB in the distribution for
 * details.
 */

#include "config.h"
#include <errno.h>

#include "raw1394.h"
#include "csr.h"
#include "kernel-raw1394.h"
#include "raw1394_private.h"
#include "fw.h"

int raw1394_errcode_to_errno(raw1394_errcode_t errcode)
{
	return ieee1394_errcode_to_errno(errcode);
}

raw1394handle_t raw1394_new_handle(void)
{
	ieee1394handle_t ieee1394_handle;
	fw_handle_t fw_handle;
	raw1394handle_t handle;
	struct raw1394_portinfo port;

	handle = (raw1394handle_t) malloc(sizeof(struct raw1394_handle));
	if (!handle)
		return NULL;

	ieee1394_handle = ieee1394_new_handle();
	if (!ieee1394_handle)
		goto try_fw;

	if (ieee1394_get_port_info(ieee1394_handle, &port, 1) >= 1) {
		handle->is_fw = 0;
		handle->mode.ieee1394 = ieee1394_handle;
		return handle;
	}
	ieee1394_destroy_handle(ieee1394_handle);
try_fw:
	fw_handle = fw_new_handle();
	if (fw_handle) {
		handle->is_fw = 1;
		handle->mode.fw = fw_handle;
		return handle;
	}

	free(handle);
	return NULL;
}

void raw1394_destroy_handle(raw1394handle_t handle)
{
	if (!handle) {
		return;
	}
	if (handle->is_fw)
		fw_destroy_handle(handle->mode.fw);
	else
		ieee1394_destroy_handle(handle->mode.ieee1394);
	free(handle);
}

raw1394handle_t raw1394_new_handle_on_port(int port)
{
	ieee1394handle_t ieee1394_handle;
	fw_handle_t fw_handle;
	raw1394handle_t handle;

	handle = (raw1394handle_t) malloc(sizeof(struct raw1394_handle));
	if (!handle)
		return NULL;

	ieee1394_handle = ieee1394_new_handle_on_port(port);
	if (ieee1394_handle) {
		handle->is_fw = 0;
		handle->mode.ieee1394 = ieee1394_handle;
		return handle;
	}

	fw_handle = fw_new_handle_on_port(port);
	if (fw_handle) {
		handle->is_fw = 1;
		handle->mode.fw = fw_handle;
		return handle;
	}

	free(handle);
	return NULL;
}

int raw1394_busreset_notify (raw1394handle_t handle, int off_on_switch)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_busreset_notify(handle->mode.fw, off_on_switch);
	else
		return ieee1394_busreset_notify(handle->mode.ieee1394, off_on_switch);
}

int raw1394_get_fd(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_get_fd(handle->mode.fw);
	else
		return ieee1394_get_fd(handle->mode.ieee1394);
}

nodeid_t raw1394_get_local_id(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return 0xFFFF;
	}
	if (handle->is_fw)
		return fw_get_local_id(handle->mode.fw);
	else
		return ieee1394_get_local_id(handle->mode.ieee1394);
}

nodeid_t raw1394_get_irm_id(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return 0xFFFF;
	}
	if (handle->is_fw)
		return fw_get_irm_id(handle->mode.fw);
	else
		return ieee1394_get_irm_id(handle->mode.ieee1394);
}

int raw1394_get_nodecount(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_get_nodecount(handle->mode.fw);
	else
		return ieee1394_get_nodecount(handle->mode.ieee1394);
}

int raw1394_get_port_info(raw1394handle_t handle, struct raw1394_portinfo *pinf,
                          int maxports)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_get_port_info(handle->mode.fw, pinf, maxports);
	else
		return ieee1394_get_port_info(handle->mode.ieee1394, pinf, maxports);
}

int raw1394_set_port(raw1394handle_t handle, int port)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_set_port(handle->mode.fw, port);
	else
		return ieee1394_set_port(handle->mode.ieee1394, port);
}

int raw1394_reset_bus_new(raw1394handle_t handle, int type)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_reset_bus_new(handle->mode.fw, type);
	else
		return ieee1394_reset_bus_new(handle->mode.ieee1394, type);
}

int raw1394_loop_iterate(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_loop_iterate(handle);
	else
		return ieee1394_loop_iterate(handle);
}

int raw1394_arm_register(raw1394handle_t handle, nodeaddr_t start,
                         size_t length, byte_t *initial_value,
                         octlet_t arm_tag, arm_options_t access_rights,
                         arm_options_t notification_options,
                         arm_options_t client_transactions)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_arm_register(handle->mode.fw, start, length, initial_value,
			arm_tag, access_rights, notification_options, client_transactions);
	else
		return ieee1394_arm_register(handle->mode.ieee1394, start, length,
			initial_value, arm_tag, access_rights, notification_options,
			client_transactions);
}

int raw1394_arm_unregister(raw1394handle_t handle, nodeaddr_t start)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_arm_unregister(handle->mode.fw, start);
	else
		return ieee1394_arm_unregister(handle->mode.ieee1394, start);
}

int raw1394_arm_set_buf (raw1394handle_t handle, nodeaddr_t start,
                         size_t length, void *buf)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_arm_set_buf(handle->mode.fw, start, length, buf);
	else
		return ieee1394_arm_set_buf(handle->mode.ieee1394, start, length, buf);
}

int raw1394_arm_get_buf (raw1394handle_t handle, nodeaddr_t start,
                         size_t length, void *buf)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_arm_get_buf(handle->mode.fw, start, length, buf);
	else
		return ieee1394_arm_get_buf(handle->mode.ieee1394, start, length, buf);
}

int raw1394_echo_request(raw1394handle_t handle, quadlet_t data)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_echo_request(handle->mode.fw, data);
	else
		return ieee1394_echo_request(handle->mode.ieee1394, data);
}

int raw1394_wake_up(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_wake_up(handle->mode.fw);
	else
		return ieee1394_wake_up(handle->mode.ieee1394);
}

int raw1394_phy_packet_write (raw1394handle_t handle, quadlet_t data)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_phy_packet_write(handle->mode.fw, data);
	else
		return ieee1394_phy_packet_write(handle, data);
}

int raw1394_start_phy_packet_write(raw1394handle_t handle,
        quadlet_t data, unsigned long tag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_phy_packet_write(handle->mode.fw, data, tag);
	else
		return ieee1394_start_phy_packet_write(handle->mode.ieee1394, data, tag);
}

int raw1394_start_read(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       size_t length, quadlet_t *buffer, unsigned long tag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_read(handle->mode.fw, node, addr, length, buffer, tag);
	else
		return ieee1394_start_read(handle->mode.ieee1394, node, addr, length, buffer, tag);
}

int raw1394_start_write(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                        size_t length, quadlet_t *data, unsigned long tag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_write(handle->mode.fw, node, addr, length, data, tag);
	else
		return ieee1394_start_write(handle->mode.ieee1394, node, addr, length, data, tag);
}

int raw1394_start_lock(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       unsigned int extcode, quadlet_t data, quadlet_t arg,
                       quadlet_t *result, unsigned long tag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_lock(handle->mode.fw, node, addr, extcode, data, arg, result, tag);
	else
		return ieee1394_start_lock(handle->mode.ieee1394, node, addr, extcode, data, arg, result, tag);
}

int raw1394_start_lock64(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                       unsigned int extcode, octlet_t data, octlet_t arg,
                       octlet_t *result, unsigned long tag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_lock64(handle->mode.fw, node, addr, extcode, data, arg, result, tag);
	else
		return ieee1394_start_lock64(handle->mode.ieee1394, node, addr, extcode, data, arg, result, tag);
}

int raw1394_start_async_stream(raw1394handle_t handle, unsigned int channel,
                               unsigned int tag, unsigned int sy,
                               unsigned int speed, size_t length, quadlet_t *data,
                               unsigned long rawtag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_async_stream(handle->mode.fw, channel, tag, sy, speed, length, data, rawtag);
	else
		return ieee1394_start_async_stream(handle->mode.ieee1394, channel, tag, sy, speed, length, data, rawtag);
}

int raw1394_start_async_send(raw1394handle_t handle,
                             size_t length, size_t header_length, 
                             unsigned int expect_response,
                             quadlet_t *data, unsigned long rawtag)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_async_send(handle->mode.fw, length, header_length,
			expect_response, data, rawtag);
	else
		return ieee1394_start_async_send(handle->mode.ieee1394, length,
			header_length, expect_response, data, rawtag);
}

int raw1394_read(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 size_t length, quadlet_t *buffer)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_read(handle, node, addr, length, buffer);
	else
		return ieee1394_read(handle, node, addr, length, buffer);
}

int raw1394_write(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                  size_t length, quadlet_t *data)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_write(handle, node, addr, length, data);
	else
		return ieee1394_write(handle, node, addr, length, data);
}

int raw1394_lock(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, quadlet_t data, quadlet_t arg,
                 quadlet_t *result)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_lock(handle, node, addr, extcode, data, arg, result);
	else
		return ieee1394_lock(handle, node, addr, extcode, data, arg, result);
}

int raw1394_lock64(raw1394handle_t handle, nodeid_t node, nodeaddr_t addr,
                 unsigned int extcode, octlet_t data, octlet_t arg,
                 octlet_t *result)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_lock64(handle, node, addr, extcode, data, arg, result);
	else
		return ieee1394_lock64(handle, node, addr, extcode, data, arg, result);
}

int raw1394_async_stream(raw1394handle_t handle, unsigned int channel,
                         unsigned int tag, unsigned int sy, unsigned int speed,
                         size_t length, quadlet_t *data)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_async_stream(handle, channel, tag, sy, speed, length, data);
	else
		return ieee1394_async_stream(handle, channel, tag, sy, speed, length, data);
}

int raw1394_async_send(raw1394handle_t handle,
                       size_t length, size_t header_length,
                       unsigned int expect_response,
                       quadlet_t *data)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_async_send(handle->mode.fw, length, header_length,
			expect_response, data);
	else
		return ieee1394_async_send(handle, length, header_length,
			expect_response, data);
}

int raw1394_start_fcp_listen(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_start_fcp_listen(handle->mode.fw);
	else
		return ieee1394_start_fcp_listen(handle);
}

int raw1394_stop_fcp_listen(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_stop_fcp_listen(handle->mode.fw);
	else
		return ieee1394_stop_fcp_listen(handle);
}

int raw1394_update_config_rom(raw1394handle_t handle, const quadlet_t
        *new_rom, size_t size, unsigned char rom_version)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_update_config_rom(handle->mode.fw, new_rom, size, rom_version);
	else
		return ieee1394_update_config_rom(handle->mode.ieee1394,
			new_rom, size, rom_version);
}

int raw1394_get_config_rom(raw1394handle_t handle, quadlet_t *buffer,
        size_t buffersize, size_t *rom_size, unsigned char *rom_version)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_get_config_rom(handle->mode.fw, buffer, buffersize,
			rom_size, rom_version);
	else
		return ieee1394_get_config_rom(handle->mode.ieee1394, buffer,
			buffersize, rom_size, rom_version);
}

int raw1394_bandwidth_modify (raw1394handle_t handle, unsigned int bandwidth,
	enum raw1394_modify_mode mode)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_bandwidth_modify(handle, bandwidth, mode);
	else
		return ieee1394_bandwidth_modify(handle, bandwidth, mode);
}

int raw1394_channel_modify (raw1394handle_t handle, unsigned int channel,
	enum raw1394_modify_mode mode)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_channel_modify(handle, channel, mode);
	else
		return ieee1394_channel_modify(handle, channel, mode);
}

int raw1394_iso_xmit_init(raw1394handle_t handle,
                          raw1394_iso_xmit_handler_t handler,
                          unsigned int buf_packets,
                          unsigned int max_packet_size,
                          unsigned char channel,
                          enum raw1394_iso_speed speed,
                          int irq_interval)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_xmit_init(handle->mode.fw, handler, buf_packets,
			max_packet_size, channel, speed, irq_interval);
	else
		return ieee1394_iso_xmit_init(handle->mode.ieee1394, handler, buf_packets,
			max_packet_size, channel, speed, irq_interval);
}

int raw1394_iso_recv_init(raw1394handle_t handle,
                          raw1394_iso_recv_handler_t handler,
                          unsigned int buf_packets,
                          unsigned int max_packet_size,
                          unsigned char channel,
                          enum raw1394_iso_dma_recv_mode mode,
                          int irq_interval)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_init(handle->mode.fw, handler, buf_packets,
			max_packet_size, channel, mode, irq_interval);
	else
		return ieee1394_iso_recv_init(handle->mode.ieee1394, handler, buf_packets,
			max_packet_size, channel, mode, irq_interval);
}

int raw1394_iso_multichannel_recv_init(raw1394handle_t handle,
                                       raw1394_iso_recv_handler_t handler,
                                       unsigned int buf_packets,
                                       unsigned int max_packet_size,
                                       int irq_interval)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_multichannel_recv_init(handle->mode.fw, handler, buf_packets,
			max_packet_size, irq_interval);
	else
		return ieee1394_iso_multichannel_recv_init(handle->mode.ieee1394, handler,
			buf_packets, max_packet_size, irq_interval);
}

int raw1394_iso_recv_listen_channel(raw1394handle_t handle,
                                    unsigned char channel)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_listen_channel(handle->mode.fw, channel);
	else
		return ieee1394_iso_recv_listen_channel(handle->mode.ieee1394, channel);
}

int raw1394_iso_recv_unlisten_channel(raw1394handle_t handle,
                                      unsigned char channel)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_unlisten_channel(handle->mode.fw, channel);
	else
		return ieee1394_iso_recv_unlisten_channel(handle->mode.ieee1394, channel);
}

int raw1394_iso_recv_set_channel_mask(raw1394handle_t handle, u_int64_t mask)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_set_channel_mask(handle->mode.fw, mask);
	else
		return ieee1394_iso_recv_set_channel_mask(handle->mode.ieee1394, mask);
}

int raw1394_iso_xmit_start(raw1394handle_t handle, int start_on_cycle,
                           int prebuffer_packets)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_xmit_start(handle,
			start_on_cycle, prebuffer_packets);
	else
		return ieee1394_iso_xmit_start(handle->mode.ieee1394,
			start_on_cycle, prebuffer_packets);
}

int raw1394_iso_recv_start(raw1394handle_t handle, int start_on_cycle,
                           int tag_mask, int sync)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_start(handle->mode.fw,
			start_on_cycle, tag_mask, sync);
	else
		return ieee1394_iso_recv_start(handle->mode.ieee1394,
			start_on_cycle, tag_mask, sync);
}

int raw1394_iso_xmit_write(raw1394handle_t handle, unsigned char *data,
                           unsigned int len, unsigned char tag,
                           unsigned char sy)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_xmit_write(handle, data, len, tag, sy);
	else
		return ieee1394_iso_xmit_write(handle, data, len, tag, sy);
}

int raw1394_iso_xmit_sync(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_xmit_sync(handle);
	else
		return ieee1394_iso_xmit_sync(handle->mode.ieee1394);
}

int raw1394_iso_recv_flush(raw1394handle_t handle)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_iso_recv_flush(handle->mode.fw);
	else
		return ieee1394_iso_recv_flush(handle->mode.ieee1394);
}

void raw1394_iso_stop(raw1394handle_t handle)
{
	if (!handle) {
		return;
	}
	if (handle->is_fw)
		fw_iso_stop(handle->mode.fw);
	else
		ieee1394_iso_stop(handle->mode.ieee1394);
}

void raw1394_iso_shutdown(raw1394handle_t handle)
{
	if (!handle) {
		return;
	}
	if (handle->is_fw)
		fw_iso_shutdown(handle->mode.fw);
	else
		ieee1394_iso_shutdown(handle->mode.ieee1394);
}

int raw1394_read_cycle_timer(raw1394handle_t handle,
                             u_int32_t *cycle_timer, u_int64_t *local_time)
{
	if (!handle) {
		errno = EINVAL;
		return -1;
	}
	if (handle->is_fw)
		return fw_read_cycle_timer(handle->mode.fw,
			cycle_timer, local_time);
	else
		return ieee1394_read_cycle_timer(handle->mode.ieee1394,
			cycle_timer, local_time);
}
