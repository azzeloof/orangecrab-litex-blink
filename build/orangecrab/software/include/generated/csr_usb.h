//--------------------------------------------------------------------------------
// Auto-generated by Migen (cb88406) & LiteX (c474272f) on 2020-10-25 15:11:23
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x90000000L
#endif

/* usb */
#define CSR_USB_BASE (CSR_BASE + 0x0L)
#define CSR_USB_PULLUP_OUT_ADDR (CSR_BASE + 0x0L)
#define CSR_USB_PULLUP_OUT_SIZE 1
static inline uint32_t usb_pullup_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x0L);
}
static inline void usb_pullup_out_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x0L);
}
#define CSR_USB_ADDRESS_ADDR (CSR_BASE + 0x4L)
#define CSR_USB_ADDRESS_SIZE 1
static inline uint32_t usb_address_read(void) {
	return csr_read_simple(CSR_BASE + 0x4L);
}
static inline void usb_address_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4L);
}
#define CSR_USB_ADDRESS_ADDR_OFFSET 0
#define CSR_USB_ADDRESS_ADDR_SIZE 7
#define CSR_USB_NEXT_EV_ADDR (CSR_BASE + 0x8L)
#define CSR_USB_NEXT_EV_SIZE 1
static inline uint32_t usb_next_ev_read(void) {
	return csr_read_simple(CSR_BASE + 0x8L);
}
#define CSR_USB_NEXT_EV_IN_OFFSET 0
#define CSR_USB_NEXT_EV_IN_SIZE 1
#define CSR_USB_NEXT_EV_OUT_OFFSET 1
#define CSR_USB_NEXT_EV_OUT_SIZE 1
#define CSR_USB_NEXT_EV_SETUP_OFFSET 2
#define CSR_USB_NEXT_EV_SETUP_SIZE 1
#define CSR_USB_NEXT_EV_RESET_OFFSET 3
#define CSR_USB_NEXT_EV_RESET_SIZE 1
#define CSR_USB_SETUP_DATA_ADDR (CSR_BASE + 0xcL)
#define CSR_USB_SETUP_DATA_SIZE 1
static inline uint32_t usb_setup_data_read(void) {
	return csr_read_simple(CSR_BASE + 0xcL);
}
#define CSR_USB_SETUP_DATA_DATA_OFFSET 0
#define CSR_USB_SETUP_DATA_DATA_SIZE 8
#define CSR_USB_SETUP_CTRL_ADDR (CSR_BASE + 0x10L)
#define CSR_USB_SETUP_CTRL_SIZE 1
static inline uint32_t usb_setup_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x10L);
}
static inline void usb_setup_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x10L);
}
#define CSR_USB_SETUP_CTRL_RESET_OFFSET 5
#define CSR_USB_SETUP_CTRL_RESET_SIZE 1
#define CSR_USB_SETUP_STATUS_ADDR (CSR_BASE + 0x14L)
#define CSR_USB_SETUP_STATUS_SIZE 1
static inline uint32_t usb_setup_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x14L);
}
#define CSR_USB_SETUP_STATUS_EPNO_OFFSET 0
#define CSR_USB_SETUP_STATUS_EPNO_SIZE 4
#define CSR_USB_SETUP_STATUS_HAVE_OFFSET 4
#define CSR_USB_SETUP_STATUS_HAVE_SIZE 1
#define CSR_USB_SETUP_STATUS_PEND_OFFSET 5
#define CSR_USB_SETUP_STATUS_PEND_SIZE 1
#define CSR_USB_SETUP_STATUS_IS_IN_OFFSET 6
#define CSR_USB_SETUP_STATUS_IS_IN_SIZE 1
#define CSR_USB_SETUP_STATUS_DATA_OFFSET 7
#define CSR_USB_SETUP_STATUS_DATA_SIZE 1
#define CSR_USB_SETUP_EV_STATUS_ADDR (CSR_BASE + 0x18L)
#define CSR_USB_SETUP_EV_STATUS_SIZE 1
static inline uint32_t usb_setup_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x18L);
}
static inline void usb_setup_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x18L);
}
#define CSR_USB_SETUP_EV_PENDING_ADDR (CSR_BASE + 0x1cL)
#define CSR_USB_SETUP_EV_PENDING_SIZE 1
static inline uint32_t usb_setup_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x1cL);
}
static inline void usb_setup_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1cL);
}
#define CSR_USB_SETUP_EV_ENABLE_ADDR (CSR_BASE + 0x20L)
#define CSR_USB_SETUP_EV_ENABLE_SIZE 1
static inline uint32_t usb_setup_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x20L);
}
static inline void usb_setup_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x20L);
}
#define CSR_USB_IN_DATA_ADDR (CSR_BASE + 0x24L)
#define CSR_USB_IN_DATA_SIZE 1
static inline uint32_t usb_in_data_read(void) {
	return csr_read_simple(CSR_BASE + 0x24L);
}
static inline void usb_in_data_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x24L);
}
#define CSR_USB_IN_DATA_DATA_OFFSET 0
#define CSR_USB_IN_DATA_DATA_SIZE 8
#define CSR_USB_IN_CTRL_ADDR (CSR_BASE + 0x28L)
#define CSR_USB_IN_CTRL_SIZE 1
static inline uint32_t usb_in_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x28L);
}
static inline void usb_in_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x28L);
}
#define CSR_USB_IN_CTRL_EPNO_OFFSET 0
#define CSR_USB_IN_CTRL_EPNO_SIZE 4
#define CSR_USB_IN_CTRL_RESET_OFFSET 5
#define CSR_USB_IN_CTRL_RESET_SIZE 1
#define CSR_USB_IN_CTRL_STALL_OFFSET 6
#define CSR_USB_IN_CTRL_STALL_SIZE 1
#define CSR_USB_IN_STATUS_ADDR (CSR_BASE + 0x2cL)
#define CSR_USB_IN_STATUS_SIZE 1
static inline uint32_t usb_in_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x2cL);
}
#define CSR_USB_IN_STATUS_IDLE_OFFSET 0
#define CSR_USB_IN_STATUS_IDLE_SIZE 1
#define CSR_USB_IN_STATUS_HAVE_OFFSET 4
#define CSR_USB_IN_STATUS_HAVE_SIZE 1
#define CSR_USB_IN_STATUS_PEND_OFFSET 5
#define CSR_USB_IN_STATUS_PEND_SIZE 1
#define CSR_USB_IN_EV_STATUS_ADDR (CSR_BASE + 0x30L)
#define CSR_USB_IN_EV_STATUS_SIZE 1
static inline uint32_t usb_in_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x30L);
}
static inline void usb_in_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x30L);
}
#define CSR_USB_IN_EV_PENDING_ADDR (CSR_BASE + 0x34L)
#define CSR_USB_IN_EV_PENDING_SIZE 1
static inline uint32_t usb_in_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x34L);
}
static inline void usb_in_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x34L);
}
#define CSR_USB_IN_EV_ENABLE_ADDR (CSR_BASE + 0x38L)
#define CSR_USB_IN_EV_ENABLE_SIZE 1
static inline uint32_t usb_in_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x38L);
}
static inline void usb_in_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x38L);
}
#define CSR_USB_OUT_DATA_ADDR (CSR_BASE + 0x3cL)
#define CSR_USB_OUT_DATA_SIZE 1
static inline uint32_t usb_out_data_read(void) {
	return csr_read_simple(CSR_BASE + 0x3cL);
}
#define CSR_USB_OUT_DATA_DATA_OFFSET 0
#define CSR_USB_OUT_DATA_DATA_SIZE 8
#define CSR_USB_OUT_CTRL_ADDR (CSR_BASE + 0x40L)
#define CSR_USB_OUT_CTRL_SIZE 1
static inline uint32_t usb_out_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x40L);
}
static inline void usb_out_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x40L);
}
#define CSR_USB_OUT_CTRL_EPNO_OFFSET 0
#define CSR_USB_OUT_CTRL_EPNO_SIZE 4
#define CSR_USB_OUT_CTRL_ENABLE_OFFSET 4
#define CSR_USB_OUT_CTRL_ENABLE_SIZE 1
#define CSR_USB_OUT_CTRL_RESET_OFFSET 5
#define CSR_USB_OUT_CTRL_RESET_SIZE 1
#define CSR_USB_OUT_CTRL_STALL_OFFSET 6
#define CSR_USB_OUT_CTRL_STALL_SIZE 1
#define CSR_USB_OUT_STATUS_ADDR (CSR_BASE + 0x44L)
#define CSR_USB_OUT_STATUS_SIZE 1
static inline uint32_t usb_out_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x44L);
}
#define CSR_USB_OUT_STATUS_EPNO_OFFSET 0
#define CSR_USB_OUT_STATUS_EPNO_SIZE 4
#define CSR_USB_OUT_STATUS_HAVE_OFFSET 4
#define CSR_USB_OUT_STATUS_HAVE_SIZE 1
#define CSR_USB_OUT_STATUS_PEND_OFFSET 5
#define CSR_USB_OUT_STATUS_PEND_SIZE 1
#define CSR_USB_OUT_EV_STATUS_ADDR (CSR_BASE + 0x48L)
#define CSR_USB_OUT_EV_STATUS_SIZE 1
static inline uint32_t usb_out_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x48L);
}
static inline void usb_out_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x48L);
}
#define CSR_USB_OUT_EV_PENDING_ADDR (CSR_BASE + 0x4cL)
#define CSR_USB_OUT_EV_PENDING_SIZE 1
static inline uint32_t usb_out_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x4cL);
}
static inline void usb_out_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4cL);
}
#define CSR_USB_OUT_EV_ENABLE_ADDR (CSR_BASE + 0x50L)
#define CSR_USB_OUT_EV_ENABLE_SIZE 1
static inline uint32_t usb_out_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x50L);
}
static inline void usb_out_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x50L);
}

#endif