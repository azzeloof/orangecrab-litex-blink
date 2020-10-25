//--------------------------------------------------------------------------------
// Auto-generated by Migen (d11565a) & LiteX (5ebdfd93) on 2020-07-11 10:52:51
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
//#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x82000000
#endif

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x0L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x0L);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(CSR_BASE + 0x4L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x8L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(CSR_BASE + 0x8L);
}

/* timer0 */
#define CSR_TIMER0_BASE (CSR_BASE + 0x2800L)
#define CSR_TIMER0_LOAD_ADDR (CSR_BASE + 0x2800L)
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(CSR_BASE + 0x2800L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2800L);
}
#define CSR_TIMER0_RELOAD_ADDR (CSR_BASE + 0x2804L)
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(CSR_BASE + 0x2804L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2804L);
}
#define CSR_TIMER0_EN_ADDR (CSR_BASE + 0x2808L)
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(CSR_BASE + 0x2808L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2808L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR (CSR_BASE + 0x280cL)
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x280cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x280cL);
}
#define CSR_TIMER0_VALUE_ADDR (CSR_BASE + 0x2810L)
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x2810L);
}
#define CSR_TIMER0_EV_STATUS_ADDR (CSR_BASE + 0x2814L)
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x2814L);
}
static inline void timer0_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2814L);
}
#define CSR_TIMER0_EV_PENDING_ADDR (CSR_BASE + 0x2818L)
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x2818L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2818L);
}
#define CSR_TIMER0_EV_ENABLE_ADDR (CSR_BASE + 0x281cL)
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x281cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x281cL);
}

/* usb */
#define CSR_USB_BASE (CSR_BASE + 0x4800L)
#define CSR_USB_PULLUP_OUT_ADDR (CSR_BASE + 0x4800L)
#define CSR_USB_PULLUP_OUT_SIZE 1
static inline uint32_t usb_pullup_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x4800L);
}
static inline void usb_pullup_out_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4800L);
}
#define CSR_USB_ADDRESS_ADDR (CSR_BASE + 0x4804L)
#define CSR_USB_ADDRESS_SIZE 1
static inline uint32_t usb_address_read(void) {
	return csr_read_simple(CSR_BASE + 0x4804L);
}
static inline void usb_address_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4804L);
}
#define CSR_USB_ADDRESS_ADDR_OFFSET 0
#define CSR_USB_ADDRESS_ADDR_SIZE 7
#define CSR_USB_NEXT_EV_ADDR (CSR_BASE + 0x4808L)
#define CSR_USB_NEXT_EV_SIZE 1
static inline uint32_t usb_next_ev_read(void) {
	return csr_read_simple(CSR_BASE + 0x4808L);
}
#define CSR_USB_NEXT_EV_IN_OFFSET 0
#define CSR_USB_NEXT_EV_IN_SIZE 1
#define CSR_USB_NEXT_EV_OUT_OFFSET 1
#define CSR_USB_NEXT_EV_OUT_SIZE 1
#define CSR_USB_NEXT_EV_SETUP_OFFSET 2
#define CSR_USB_NEXT_EV_SETUP_SIZE 1
#define CSR_USB_NEXT_EV_RESET_OFFSET 3
#define CSR_USB_NEXT_EV_RESET_SIZE 1
#define CSR_USB_SETUP_DATA_ADDR (CSR_BASE + 0x480cL)
#define CSR_USB_SETUP_DATA_SIZE 1
static inline uint32_t usb_setup_data_read(void) {
	return csr_read_simple(CSR_BASE + 0x480cL);
}
#define CSR_USB_SETUP_DATA_DATA_OFFSET 0
#define CSR_USB_SETUP_DATA_DATA_SIZE 8
#define CSR_USB_SETUP_CTRL_ADDR (CSR_BASE + 0x4810L)
#define CSR_USB_SETUP_CTRL_SIZE 1
static inline uint32_t usb_setup_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x4810L);
}
static inline void usb_setup_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4810L);
}
#define CSR_USB_SETUP_CTRL_RESET_OFFSET 5
#define CSR_USB_SETUP_CTRL_RESET_SIZE 1
#define CSR_USB_SETUP_STATUS_ADDR (CSR_BASE + 0x4814L)
#define CSR_USB_SETUP_STATUS_SIZE 1
static inline uint32_t usb_setup_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x4814L);
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
#define CSR_USB_SETUP_EV_STATUS_ADDR (CSR_BASE + 0x4818L)
#define CSR_USB_SETUP_EV_STATUS_SIZE 1
static inline uint32_t usb_setup_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x4818L);
}
static inline void usb_setup_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4818L);
}
#define CSR_USB_SETUP_EV_PENDING_ADDR (CSR_BASE + 0x481cL)
#define CSR_USB_SETUP_EV_PENDING_SIZE 1
static inline uint32_t usb_setup_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x481cL);
}
static inline void usb_setup_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x481cL);
}
#define CSR_USB_SETUP_EV_ENABLE_ADDR (CSR_BASE + 0x4820L)
#define CSR_USB_SETUP_EV_ENABLE_SIZE 1
static inline uint32_t usb_setup_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4820L);
}
static inline void usb_setup_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4820L);
}
#define CSR_USB_IN_DATA_ADDR (CSR_BASE + 0x4824L)
#define CSR_USB_IN_DATA_SIZE 1
static inline uint32_t usb_in_data_read(void) {
	return csr_read_simple(CSR_BASE + 0x4824L);
}
static inline void usb_in_data_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4824L);
}
#define CSR_USB_IN_DATA_DATA_OFFSET 0
#define CSR_USB_IN_DATA_DATA_SIZE 8
#define CSR_USB_IN_CTRL_ADDR (CSR_BASE + 0x4828L)
#define CSR_USB_IN_CTRL_SIZE 1
static inline uint32_t usb_in_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x4828L);
}
static inline void usb_in_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4828L);
}
#define CSR_USB_IN_CTRL_EPNO_OFFSET 0
#define CSR_USB_IN_CTRL_EPNO_SIZE 4
#define CSR_USB_IN_CTRL_RESET_OFFSET 5
#define CSR_USB_IN_CTRL_RESET_SIZE 1
#define CSR_USB_IN_CTRL_STALL_OFFSET 6
#define CSR_USB_IN_CTRL_STALL_SIZE 1
#define CSR_USB_IN_STATUS_ADDR (CSR_BASE + 0x482cL)
#define CSR_USB_IN_STATUS_SIZE 1
static inline uint32_t usb_in_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x482cL);
}
#define CSR_USB_IN_STATUS_IDLE_OFFSET 0
#define CSR_USB_IN_STATUS_IDLE_SIZE 1
#define CSR_USB_IN_STATUS_HAVE_OFFSET 4
#define CSR_USB_IN_STATUS_HAVE_SIZE 1
#define CSR_USB_IN_STATUS_PEND_OFFSET 5
#define CSR_USB_IN_STATUS_PEND_SIZE 1
#define CSR_USB_IN_EV_STATUS_ADDR (CSR_BASE + 0x4830L)
#define CSR_USB_IN_EV_STATUS_SIZE 1
static inline uint32_t usb_in_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x4830L);
}
static inline void usb_in_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4830L);
}
#define CSR_USB_IN_EV_PENDING_ADDR (CSR_BASE + 0x4834L)
#define CSR_USB_IN_EV_PENDING_SIZE 1
static inline uint32_t usb_in_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x4834L);
}
static inline void usb_in_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4834L);
}
#define CSR_USB_IN_EV_ENABLE_ADDR (CSR_BASE + 0x4838L)
#define CSR_USB_IN_EV_ENABLE_SIZE 1
static inline uint32_t usb_in_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4838L);
}
static inline void usb_in_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4838L);
}
#define CSR_USB_OUT_DATA_ADDR (CSR_BASE + 0x483cL)
#define CSR_USB_OUT_DATA_SIZE 1
static inline uint32_t usb_out_data_read(void) {
	return csr_read_simple(CSR_BASE + 0x483cL);
}
#define CSR_USB_OUT_DATA_DATA_OFFSET 0
#define CSR_USB_OUT_DATA_DATA_SIZE 8
#define CSR_USB_OUT_CTRL_ADDR (CSR_BASE + 0x4840L)
#define CSR_USB_OUT_CTRL_SIZE 1
static inline uint32_t usb_out_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x4840L);
}
static inline void usb_out_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4840L);
}
#define CSR_USB_OUT_CTRL_EPNO_OFFSET 0
#define CSR_USB_OUT_CTRL_EPNO_SIZE 4
#define CSR_USB_OUT_CTRL_ENABLE_OFFSET 4
#define CSR_USB_OUT_CTRL_ENABLE_SIZE 1
#define CSR_USB_OUT_CTRL_RESET_OFFSET 5
#define CSR_USB_OUT_CTRL_RESET_SIZE 1
#define CSR_USB_OUT_CTRL_STALL_OFFSET 6
#define CSR_USB_OUT_CTRL_STALL_SIZE 1
#define CSR_USB_OUT_STATUS_ADDR (CSR_BASE + 0x4844L)
#define CSR_USB_OUT_STATUS_SIZE 1
static inline uint32_t usb_out_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x4844L);
}
#define CSR_USB_OUT_STATUS_EPNO_OFFSET 0
#define CSR_USB_OUT_STATUS_EPNO_SIZE 4
#define CSR_USB_OUT_STATUS_HAVE_OFFSET 4
#define CSR_USB_OUT_STATUS_HAVE_SIZE 1
#define CSR_USB_OUT_STATUS_PEND_OFFSET 5
#define CSR_USB_OUT_STATUS_PEND_SIZE 1
#define CSR_USB_OUT_EV_STATUS_ADDR (CSR_BASE + 0x4848L)
#define CSR_USB_OUT_EV_STATUS_SIZE 1
static inline uint32_t usb_out_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x4848L);
}
static inline void usb_out_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4848L);
}
#define CSR_USB_OUT_EV_PENDING_ADDR (CSR_BASE + 0x484cL)
#define CSR_USB_OUT_EV_PENDING_SIZE 1
static inline uint32_t usb_out_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x484cL);
}
static inline void usb_out_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x484cL);
}
#define CSR_USB_OUT_EV_ENABLE_ADDR (CSR_BASE + 0x4850L)
#define CSR_USB_OUT_EV_ENABLE_SIZE 1
static inline uint32_t usb_out_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4850L);
}
static inline void usb_out_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4850L);
}

/* reboot */
#define CSR_REBOOT_BASE (CSR_BASE + 0x6000L)
#define CSR_REBOOT_CTRL_ADDR (CSR_BASE + 0x6000L)
#define CSR_REBOOT_CTRL_SIZE 1
static inline uint32_t reboot_ctrl_read(void) {
	return csr_read_simple(CSR_BASE + 0x6000L);
}
static inline void reboot_ctrl_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x6000L);
}
#define CSR_REBOOT_CTRL_IMAGE_OFFSET 0
#define CSR_REBOOT_CTRL_IMAGE_SIZE 2
#define CSR_REBOOT_CTRL_KEY_OFFSET 2
#define CSR_REBOOT_CTRL_KEY_SIZE 6
#define CSR_REBOOT_ADDR_ADDR (CSR_BASE + 0x6004L)
#define CSR_REBOOT_ADDR_SIZE 1
static inline uint32_t reboot_addr_read(void) {
	return csr_read_simple(CSR_BASE + 0x6004L);
}
static inline void reboot_addr_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x6004L);
}

/* rgb */
#define CSR_RGB_BASE (CSR_BASE + 0x5000)
#define CSR_RGB__R_ADDR (CSR_BASE + 0x5000)
#define CSR_RGB__R_SIZE 1
static inline uint32_t rgb__r_read(void) {
	return csr_read_simple(CSR_BASE + 0x5000);
}
static inline void rgb__r_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5000);
}
#define CSR_RGB__G_ADDR (CSR_BASE + 0x5004)
#define CSR_RGB__G_SIZE 1
static inline uint32_t rgb__g_read(void) {
	return csr_read_simple(CSR_BASE + 0x5004);
}
static inline void rgb__g_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5004);
}
#define CSR_RGB__B_ADDR (CSR_BASE + 0x5008)
#define CSR_RGB__B_SIZE 1
static inline uint32_t rgb__b_read(void) {
	return csr_read_simple(CSR_BASE + 0x5008);
}
static inline void rgb__b_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5008);
}
#define CSR_RGB_DIV_M_ADDR (CSR_BASE + 0x500c)
#define CSR_RGB_DIV_M_SIZE 1
static inline uint32_t rgb_div_m_read(void) {
	return csr_read_simple(CSR_BASE + 0x500c);
}
static inline void rgb_div_m_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x500c);
}
#define CSR_RGB_CONFIG_ADDR (CSR_BASE + 0x5010)
#define CSR_RGB_CONFIG_SIZE 1
static inline uint32_t rgb_config_read(void) {
	return csr_read_simple(CSR_BASE + 0x5010);
}
static inline void rgb_config_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5010);
}
#define CSR_RGB_CONFIG_BREATH_OFFSET 0
#define CSR_RGB_CONFIG_BREATH_SIZE 1
#define CSR_RGB_CONFIG_RAINBOW_OFFSET 1
#define CSR_RGB_CONFIG_RAINBOW_SIZE 1

/* version */
#define CSR_VERSION_BASE (CSR_BASE + 0x7000L)
#define CSR_VERSION_MAJOR_ADDR (CSR_BASE + 0x7000L)
#define CSR_VERSION_MAJOR_SIZE 1
static inline uint32_t version_major_read(void) {
	return csr_read_simple(CSR_BASE + 0x7000L);
}
#define CSR_VERSION_MINOR_ADDR (CSR_BASE + 0x7004L)
#define CSR_VERSION_MINOR_SIZE 1
static inline uint32_t version_minor_read(void) {
	return csr_read_simple(CSR_BASE + 0x7004L);
}
#define CSR_VERSION_REVISION_ADDR (CSR_BASE + 0x7008L)
#define CSR_VERSION_REVISION_SIZE 1
static inline uint32_t version_revision_read(void) {
	return csr_read_simple(CSR_BASE + 0x7008L);
}
#define CSR_VERSION_GITREV_ADDR (CSR_BASE + 0x700cL)
#define CSR_VERSION_GITREV_SIZE 1
static inline uint32_t version_gitrev_read(void) {
	return csr_read_simple(CSR_BASE + 0x700cL);
}
#define CSR_VERSION_GITEXTRA_ADDR (CSR_BASE + 0x7010L)
#define CSR_VERSION_GITEXTRA_SIZE 1
static inline uint32_t version_gitextra_read(void) {
	return csr_read_simple(CSR_BASE + 0x7010L);
}
#define CSR_VERSION_DIRTY_ADDR (CSR_BASE + 0x7014L)
#define CSR_VERSION_DIRTY_SIZE 1
static inline uint32_t version_dirty_read(void) {
	return csr_read_simple(CSR_BASE + 0x7014L);
}
#define CSR_VERSION_DIRTY_DIRTY_OFFSET 0
#define CSR_VERSION_DIRTY_DIRTY_SIZE 1
#define CSR_VERSION_MODEL_ADDR (CSR_BASE + 0x7018L)
#define CSR_VERSION_MODEL_SIZE 1
static inline uint32_t version_model_read(void) {
	return csr_read_simple(CSR_BASE + 0x7018L);
}
#define CSR_VERSION_MODEL_MODEL_OFFSET 0
#define CSR_VERSION_MODEL_MODEL_SIZE 8
#define CSR_VERSION_SEED_ADDR (CSR_BASE + 0x701cL)
#define CSR_VERSION_SEED_SIZE 1
static inline uint32_t version_seed_read(void) {
	return csr_read_simple(CSR_BASE + 0x701cL);
}

/* lxspi */
#define CSR_LXSPI_BASE (CSR_BASE + 0x7800L)
#define CSR_LXSPI_BITBANG_ADDR (CSR_BASE + 0x7800L)
#define CSR_LXSPI_BITBANG_SIZE 1
static inline uint32_t lxspi_bitbang_read(void) {
	return csr_read_simple(CSR_BASE + 0x7800L);
}
static inline void lxspi_bitbang_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x7800L);
}
#define CSR_LXSPI_BITBANG_MOSI_OFFSET 0
#define CSR_LXSPI_BITBANG_MOSI_SIZE 1
#define CSR_LXSPI_BITBANG_CLK_OFFSET 1
#define CSR_LXSPI_BITBANG_CLK_SIZE 1
#define CSR_LXSPI_BITBANG_CS_N_OFFSET 2
#define CSR_LXSPI_BITBANG_CS_N_SIZE 1
#define CSR_LXSPI_BITBANG_DIR_OFFSET 3
#define CSR_LXSPI_BITBANG_DIR_SIZE 1
#define CSR_LXSPI_MISO_ADDR (CSR_BASE + 0x7804L)
#define CSR_LXSPI_MISO_SIZE 1
static inline uint32_t lxspi_miso_read(void) {
	return csr_read_simple(CSR_BASE + 0x7804L);
}
#define CSR_LXSPI_BITBANG_EN_ADDR (CSR_BASE + 0x7808L)
#define CSR_LXSPI_BITBANG_EN_SIZE 1
static inline uint32_t lxspi_bitbang_en_read(void) {
	return csr_read_simple(CSR_BASE + 0x7808L);
}
static inline void lxspi_bitbang_en_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x7808L);
}

/* messible */
#define CSR_MESSIBLE_BASE (CSR_BASE + 0x8000L)
#define CSR_MESSIBLE_IN_ADDR (CSR_BASE + 0x8000L)
#define CSR_MESSIBLE_IN_SIZE 1
static inline uint32_t messible_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x8000L);
}
static inline void messible_in_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x8000L);
}
#define CSR_MESSIBLE_OUT_ADDR (CSR_BASE + 0x8004L)
#define CSR_MESSIBLE_OUT_SIZE 1
static inline uint32_t messible_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x8004L);
}
#define CSR_MESSIBLE_STATUS_ADDR (CSR_BASE + 0x8008L)
#define CSR_MESSIBLE_STATUS_SIZE 1
static inline uint32_t messible_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x8008L);
}
#define CSR_MESSIBLE_STATUS_FULL_OFFSET 0
#define CSR_MESSIBLE_STATUS_FULL_SIZE 1
#define CSR_MESSIBLE_STATUS_HAVE_OFFSET 1
#define CSR_MESSIBLE_STATUS_HAVE_SIZE 1

/* button */
#define CSR_BUTTON_BASE (CSR_BASE + 0x8800L)
#define CSR_BUTTON_I_ADDR (CSR_BASE + 0x8800L)
#define CSR_BUTTON_I_SIZE 1
static inline uint32_t button_i_read(void) {
	return csr_read_simple(CSR_BASE + 0x8800L);
}

#endif
