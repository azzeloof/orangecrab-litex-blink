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
#define CSR_BASE 0x82000000L
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

/* uart */
#define CSR_UART_BASE (CSR_BASE + 0x3000L)
#define CSR_UART_RXTX_ADDR (CSR_BASE + 0x3000L)
#define CSR_UART_RXTX_SIZE 1
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple(CSR_BASE + 0x3000L);
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3000L);
}
#define CSR_UART_TXFULL_ADDR (CSR_BASE + 0x3004L)
#define CSR_UART_TXFULL_SIZE 1
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x3004L);
}
#define CSR_UART_RXEMPTY_ADDR (CSR_BASE + 0x3008L)
#define CSR_UART_RXEMPTY_SIZE 1
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x3008L);
}
#define CSR_UART_EV_STATUS_ADDR (CSR_BASE + 0x300cL)
#define CSR_UART_EV_STATUS_SIZE 1
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x300cL);
}
static inline void uart_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x300cL);
}
#define CSR_UART_EV_PENDING_ADDR (CSR_BASE + 0x3010L)
#define CSR_UART_EV_PENDING_SIZE 1
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x3010L);
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3010L);
}
#define CSR_UART_EV_ENABLE_ADDR (CSR_BASE + 0x3014L)
#define CSR_UART_EV_ENABLE_SIZE 1
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x3014L);
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3014L);
}
#define CSR_UART_TXEMPTY_ADDR (CSR_BASE + 0x3018L)
#define CSR_UART_TXEMPTY_SIZE 1
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x3018L);
}
#define CSR_UART_RXFULL_ADDR (CSR_BASE + 0x301cL)
#define CSR_UART_RXFULL_SIZE 1
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x301cL);
}

/* ddrphy */
#define CSR_DDRPHY_BASE (CSR_BASE + 0x3800L)
#define CSR_DDRPHY_DLY_SEL_ADDR (CSR_BASE + 0x3800L)
#define CSR_DDRPHY_DLY_SEL_SIZE 1
static inline uint32_t ddrphy_dly_sel_read(void) {
	return csr_read_simple(CSR_BASE + 0x3800L);
}
static inline void ddrphy_dly_sel_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3800L);
}
#define CSR_DDRPHY_RDLY_DQ_RST_ADDR (CSR_BASE + 0x3804L)
#define CSR_DDRPHY_RDLY_DQ_RST_SIZE 1
static inline uint32_t ddrphy_rdly_dq_rst_read(void) {
	return csr_read_simple(CSR_BASE + 0x3804L);
}
static inline void ddrphy_rdly_dq_rst_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3804L);
}
#define CSR_DDRPHY_RDLY_DQ_INC_ADDR (CSR_BASE + 0x3808L)
#define CSR_DDRPHY_RDLY_DQ_INC_SIZE 1
static inline uint32_t ddrphy_rdly_dq_inc_read(void) {
	return csr_read_simple(CSR_BASE + 0x3808L);
}
static inline void ddrphy_rdly_dq_inc_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3808L);
}
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_ADDR (CSR_BASE + 0x380cL)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_SIZE 1
static inline uint32_t ddrphy_rdly_dq_bitslip_rst_read(void) {
	return csr_read_simple(CSR_BASE + 0x380cL);
}
static inline void ddrphy_rdly_dq_bitslip_rst_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x380cL);
}
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_ADDR (CSR_BASE + 0x3810L)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_SIZE 1
static inline uint32_t ddrphy_rdly_dq_bitslip_read(void) {
	return csr_read_simple(CSR_BASE + 0x3810L);
}
static inline void ddrphy_rdly_dq_bitslip_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3810L);
}
#define CSR_DDRPHY_BURSTDET_CLR_ADDR (CSR_BASE + 0x3814L)
#define CSR_DDRPHY_BURSTDET_CLR_SIZE 1
static inline uint32_t ddrphy_burstdet_clr_read(void) {
	return csr_read_simple(CSR_BASE + 0x3814L);
}
static inline void ddrphy_burstdet_clr_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3814L);
}
#define CSR_DDRPHY_BURSTDET_SEEN_ADDR (CSR_BASE + 0x3818L)
#define CSR_DDRPHY_BURSTDET_SEEN_SIZE 1
static inline uint32_t ddrphy_burstdet_seen_read(void) {
	return csr_read_simple(CSR_BASE + 0x3818L);
}

/* sdram */
#define CSR_SDRAM_BASE (CSR_BASE + 0x4000L)
#define CSR_SDRAM_DFII_CONTROL_ADDR (CSR_BASE + 0x4000L)
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
static inline uint32_t sdram_dfii_control_read(void) {
	return csr_read_simple(CSR_BASE + 0x4000L);
}
static inline void sdram_dfii_control_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4000L);
}
#define CSR_SDRAM_DFII_CONTROL_SEL_OFFSET 0
#define CSR_SDRAM_DFII_CONTROL_SEL_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_CKE_OFFSET 1
#define CSR_SDRAM_DFII_CONTROL_CKE_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_ODT_OFFSET 2
#define CSR_SDRAM_DFII_CONTROL_ODT_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_RESET_N_OFFSET 3
#define CSR_SDRAM_DFII_CONTROL_RESET_N_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR (CSR_BASE + 0x4004L)
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
static inline uint32_t sdram_dfii_pi0_command_read(void) {
	return csr_read_simple(CSR_BASE + 0x4004L);
}
static inline void sdram_dfii_pi0_command_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4004L);
}
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4008L)
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
static inline uint32_t sdram_dfii_pi0_command_issue_read(void) {
	return csr_read_simple(CSR_BASE + 0x4008L);
}
static inline void sdram_dfii_pi0_command_issue_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4008L);
}
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR (CSR_BASE + 0x400cL)
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 1
static inline uint32_t sdram_dfii_pi0_address_read(void) {
	return csr_read_simple(CSR_BASE + 0x400cL);
}
static inline void sdram_dfii_pi0_address_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x400cL);
}
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR (CSR_BASE + 0x4010L)
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
static inline uint32_t sdram_dfii_pi0_baddress_read(void) {
	return csr_read_simple(CSR_BASE + 0x4010L);
}
static inline void sdram_dfii_pi0_baddress_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4010L);
}
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR (CSR_BASE + 0x4014L)
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 2
static inline uint64_t sdram_dfii_pi0_wrdata_read(void) {
	uint64_t r = csr_read_simple(CSR_BASE + 0x4014L);
	r <<= 32;
	r |= csr_read_simple(CSR_BASE + 0x4018L);
	return r;
}
static inline void sdram_dfii_pi0_wrdata_write(uint64_t v) {
	csr_write_simple(v >> 32, CSR_BASE + 0x4014L);
	csr_write_simple(v, CSR_BASE + 0x4018L);
}
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR (CSR_BASE + 0x401cL)
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 2
static inline uint64_t sdram_dfii_pi0_rddata_read(void) {
	uint64_t r = csr_read_simple(CSR_BASE + 0x401cL);
	r <<= 32;
	r |= csr_read_simple(CSR_BASE + 0x4020L);
	return r;
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR (CSR_BASE + 0x4024L)
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
static inline uint32_t sdram_dfii_pi1_command_read(void) {
	return csr_read_simple(CSR_BASE + 0x4024L);
}
static inline void sdram_dfii_pi1_command_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4024L);
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4028L)
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
static inline uint32_t sdram_dfii_pi1_command_issue_read(void) {
	return csr_read_simple(CSR_BASE + 0x4028L);
}
static inline void sdram_dfii_pi1_command_issue_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4028L);
}
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR (CSR_BASE + 0x402cL)
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 1
static inline uint32_t sdram_dfii_pi1_address_read(void) {
	return csr_read_simple(CSR_BASE + 0x402cL);
}
static inline void sdram_dfii_pi1_address_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x402cL);
}
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR (CSR_BASE + 0x4030L)
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
static inline uint32_t sdram_dfii_pi1_baddress_read(void) {
	return csr_read_simple(CSR_BASE + 0x4030L);
}
static inline void sdram_dfii_pi1_baddress_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4030L);
}
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR (CSR_BASE + 0x4034L)
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 2
static inline uint64_t sdram_dfii_pi1_wrdata_read(void) {
	uint64_t r = csr_read_simple(CSR_BASE + 0x4034L);
	r <<= 32;
	r |= csr_read_simple(CSR_BASE + 0x4038L);
	return r;
}
static inline void sdram_dfii_pi1_wrdata_write(uint64_t v) {
	csr_write_simple(v >> 32, CSR_BASE + 0x4034L);
	csr_write_simple(v, CSR_BASE + 0x4038L);
}
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR (CSR_BASE + 0x403cL)
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 2
static inline uint64_t sdram_dfii_pi1_rddata_read(void) {
	uint64_t r = csr_read_simple(CSR_BASE + 0x403cL);
	r <<= 32;
	r |= csr_read_simple(CSR_BASE + 0x4040L);
	return r;
}

/* rgb */
#define CSR_RGB_BASE (CSR_BASE + 0x5000L)
#define CSR_RGB_R_ADDR (CSR_BASE + 0x5000L)
#define CSR_RGB_R_SIZE 1
static inline uint32_t rgb_r_read(void) {
	return csr_read_simple(CSR_BASE + 0x5000L);
}
static inline void rgb_r_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5000L);
}
#define CSR_RGB_G_ADDR (CSR_BASE + 0x5004L)
#define CSR_RGB_G_SIZE 1
static inline uint32_t rgb_g_read(void) {
	return csr_read_simple(CSR_BASE + 0x5004L);
}
static inline void rgb_g_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5004L);
}
#define CSR_RGB_B_ADDR (CSR_BASE + 0x5008L)
#define CSR_RGB_B_SIZE 1
static inline uint32_t rgb_b_read(void) {
	return csr_read_simple(CSR_BASE + 0x5008L);
}
static inline void rgb_b_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5008L);
}
#define CSR_RGB_DIV_M_ADDR (CSR_BASE + 0x500cL)
#define CSR_RGB_DIV_M_SIZE 1
static inline uint32_t rgb_div_m_read(void) {
	return csr_read_simple(CSR_BASE + 0x500cL);
}
static inline void rgb_div_m_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x500cL);
}
#define CSR_RGB_CONFIG_ADDR (CSR_BASE + 0x5010L)
#define CSR_RGB_CONFIG_SIZE 1
static inline uint32_t rgb_config_read(void) {
	return csr_read_simple(CSR_BASE + 0x5010L);
}
static inline void rgb_config_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5010L);
}
#define CSR_RGB_CONFIG_BREATH_OFFSET 0
#define CSR_RGB_CONFIG_BREATH_SIZE 1
#define CSR_RGB_CONFIG_RAINBOW_OFFSET 1
#define CSR_RGB_CONFIG_RAINBOW_SIZE 1

/* gpio */
#define CSR_GPIO_BASE (CSR_BASE + 0x5800L)
#define CSR_GPIO_OE_ADDR (CSR_BASE + 0x5800L)
#define CSR_GPIO_OE_SIZE 1
static inline uint32_t gpio_oe_read(void) {
	return csr_read_simple(CSR_BASE + 0x5800L);
}
static inline void gpio_oe_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5800L);
}
#define CSR_GPIO_OE_IO0_OFFSET 0
#define CSR_GPIO_OE_IO0_SIZE 1
#define CSR_GPIO_OE_IO1_OFFSET 1
#define CSR_GPIO_OE_IO1_SIZE 1
#define CSR_GPIO_OE_IO5_OFFSET 5
#define CSR_GPIO_OE_IO5_SIZE 1
#define CSR_GPIO_OE_IO6_OFFSET 6
#define CSR_GPIO_OE_IO6_SIZE 1
#define CSR_GPIO_OE_IO9_OFFSET 9
#define CSR_GPIO_OE_IO9_SIZE 1
#define CSR_GPIO_OE_IO10_OFFSET 10
#define CSR_GPIO_OE_IO10_SIZE 1
#define CSR_GPIO_OE_IO11_OFFSET 11
#define CSR_GPIO_OE_IO11_SIZE 1
#define CSR_GPIO_OE_IO12_OFFSET 12
#define CSR_GPIO_OE_IO12_SIZE 1
#define CSR_GPIO_OE_IO13_OFFSET 13
#define CSR_GPIO_OE_IO13_SIZE 1
#define CSR_GPIO_OE_IO18_OFFSET 18
#define CSR_GPIO_OE_IO18_SIZE 1
#define CSR_GPIO_OE_IO19_OFFSET 19
#define CSR_GPIO_OE_IO19_SIZE 1
#define CSR_GPIO_OE_IO20_OFFSET 20
#define CSR_GPIO_OE_IO20_SIZE 1
#define CSR_GPIO_OE_IO21_OFFSET 21
#define CSR_GPIO_OE_IO21_SIZE 1
#define CSR_GPIO_IN_ADDR (CSR_BASE + 0x5804L)
#define CSR_GPIO_IN_SIZE 1
static inline uint32_t gpio_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x5804L);
}
#define CSR_GPIO_IN_IO0_OFFSET 0
#define CSR_GPIO_IN_IO0_SIZE 1
#define CSR_GPIO_IN_IO1_OFFSET 1
#define CSR_GPIO_IN_IO1_SIZE 1
#define CSR_GPIO_IN_IO5_OFFSET 5
#define CSR_GPIO_IN_IO5_SIZE 1
#define CSR_GPIO_IN_IO6_OFFSET 6
#define CSR_GPIO_IN_IO6_SIZE 1
#define CSR_GPIO_IN_IO9_OFFSET 9
#define CSR_GPIO_IN_IO9_SIZE 1
#define CSR_GPIO_IN_IO10_OFFSET 10
#define CSR_GPIO_IN_IO10_SIZE 1
#define CSR_GPIO_IN_IO11_OFFSET 11
#define CSR_GPIO_IN_IO11_SIZE 1
#define CSR_GPIO_IN_IO12_OFFSET 12
#define CSR_GPIO_IN_IO12_SIZE 1
#define CSR_GPIO_IN_IO13_OFFSET 13
#define CSR_GPIO_IN_IO13_SIZE 1
#define CSR_GPIO_IN_IO18_OFFSET 18
#define CSR_GPIO_IN_IO18_SIZE 1
#define CSR_GPIO_IN_IO19_OFFSET 19
#define CSR_GPIO_IN_IO19_SIZE 1
#define CSR_GPIO_IN_IO20_OFFSET 20
#define CSR_GPIO_IN_IO20_SIZE 1
#define CSR_GPIO_IN_IO21_OFFSET 21
#define CSR_GPIO_IN_IO21_SIZE 1
#define CSR_GPIO_OUT_ADDR (CSR_BASE + 0x5808L)
#define CSR_GPIO_OUT_SIZE 1
static inline uint32_t gpio_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x5808L);
}
static inline void gpio_out_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5808L);
}
#define CSR_GPIO_OUT_IO0_OFFSET 0
#define CSR_GPIO_OUT_IO0_SIZE 1
#define CSR_GPIO_OUT_IO1_OFFSET 1
#define CSR_GPIO_OUT_IO1_SIZE 1
#define CSR_GPIO_OUT_IO5_OFFSET 5
#define CSR_GPIO_OUT_IO5_SIZE 1
#define CSR_GPIO_OUT_IO6_OFFSET 6
#define CSR_GPIO_OUT_IO6_SIZE 1
#define CSR_GPIO_OUT_IO9_OFFSET 9
#define CSR_GPIO_OUT_IO9_SIZE 1
#define CSR_GPIO_OUT_IO10_OFFSET 10
#define CSR_GPIO_OUT_IO10_SIZE 1
#define CSR_GPIO_OUT_IO11_OFFSET 11
#define CSR_GPIO_OUT_IO11_SIZE 1
#define CSR_GPIO_OUT_IO12_OFFSET 12
#define CSR_GPIO_OUT_IO12_SIZE 1
#define CSR_GPIO_OUT_IO13_OFFSET 13
#define CSR_GPIO_OUT_IO13_SIZE 1
#define CSR_GPIO_OUT_IO18_OFFSET 18
#define CSR_GPIO_OUT_IO18_SIZE 1
#define CSR_GPIO_OUT_IO19_OFFSET 19
#define CSR_GPIO_OUT_IO19_SIZE 1
#define CSR_GPIO_OUT_IO20_OFFSET 20
#define CSR_GPIO_OUT_IO20_SIZE 1
#define CSR_GPIO_OUT_IO21_OFFSET 21
#define CSR_GPIO_OUT_IO21_SIZE 1
#define CSR_GPIO_ALT0_ADDR (CSR_BASE + 0x580cL)
#define CSR_GPIO_ALT0_SIZE 1
static inline uint32_t gpio_alt0_read(void) {
	return csr_read_simple(CSR_BASE + 0x580cL);
}
static inline void gpio_alt0_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x580cL);
}
#define CSR_GPIO_ALT0_CTRL_OFFSET 0
#define CSR_GPIO_ALT0_CTRL_SIZE 8
#define CSR_GPIO_ALT1_ADDR (CSR_BASE + 0x5810L)
#define CSR_GPIO_ALT1_SIZE 1
static inline uint32_t gpio_alt1_read(void) {
	return csr_read_simple(CSR_BASE + 0x5810L);
}
static inline void gpio_alt1_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5810L);
}
#define CSR_GPIO_ALT1_CTRL_OFFSET 0
#define CSR_GPIO_ALT1_CTRL_SIZE 8
#define CSR_GPIO_ALT5_ADDR (CSR_BASE + 0x5814L)
#define CSR_GPIO_ALT5_SIZE 1
static inline uint32_t gpio_alt5_read(void) {
	return csr_read_simple(CSR_BASE + 0x5814L);
}
static inline void gpio_alt5_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5814L);
}
#define CSR_GPIO_ALT5_CTRL_OFFSET 0
#define CSR_GPIO_ALT5_CTRL_SIZE 8
#define CSR_GPIO_ALT6_ADDR (CSR_BASE + 0x5818L)
#define CSR_GPIO_ALT6_SIZE 1
static inline uint32_t gpio_alt6_read(void) {
	return csr_read_simple(CSR_BASE + 0x5818L);
}
static inline void gpio_alt6_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5818L);
}
#define CSR_GPIO_ALT6_CTRL_OFFSET 0
#define CSR_GPIO_ALT6_CTRL_SIZE 8
#define CSR_GPIO_ALT9_ADDR (CSR_BASE + 0x581cL)
#define CSR_GPIO_ALT9_SIZE 1
static inline uint32_t gpio_alt9_read(void) {
	return csr_read_simple(CSR_BASE + 0x581cL);
}
static inline void gpio_alt9_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x581cL);
}
#define CSR_GPIO_ALT9_CTRL_OFFSET 0
#define CSR_GPIO_ALT9_CTRL_SIZE 8
#define CSR_GPIO_ALT10_ADDR (CSR_BASE + 0x5820L)
#define CSR_GPIO_ALT10_SIZE 1
static inline uint32_t gpio_alt10_read(void) {
	return csr_read_simple(CSR_BASE + 0x5820L);
}
static inline void gpio_alt10_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5820L);
}
#define CSR_GPIO_ALT10_CTRL_OFFSET 0
#define CSR_GPIO_ALT10_CTRL_SIZE 8
#define CSR_GPIO_ALT11_ADDR (CSR_BASE + 0x5824L)
#define CSR_GPIO_ALT11_SIZE 1
static inline uint32_t gpio_alt11_read(void) {
	return csr_read_simple(CSR_BASE + 0x5824L);
}
static inline void gpio_alt11_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5824L);
}
#define CSR_GPIO_ALT11_CTRL_OFFSET 0
#define CSR_GPIO_ALT11_CTRL_SIZE 8
#define CSR_GPIO_ALT12_ADDR (CSR_BASE + 0x5828L)
#define CSR_GPIO_ALT12_SIZE 1
static inline uint32_t gpio_alt12_read(void) {
	return csr_read_simple(CSR_BASE + 0x5828L);
}
static inline void gpio_alt12_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5828L);
}
#define CSR_GPIO_ALT12_CTRL_OFFSET 0
#define CSR_GPIO_ALT12_CTRL_SIZE 8
#define CSR_GPIO_ALT13_ADDR (CSR_BASE + 0x582cL)
#define CSR_GPIO_ALT13_SIZE 1
static inline uint32_t gpio_alt13_read(void) {
	return csr_read_simple(CSR_BASE + 0x582cL);
}
static inline void gpio_alt13_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x582cL);
}
#define CSR_GPIO_ALT13_CTRL_OFFSET 0
#define CSR_GPIO_ALT13_CTRL_SIZE 8
#define CSR_GPIO_ALT18_ADDR (CSR_BASE + 0x5830L)
#define CSR_GPIO_ALT18_SIZE 1
static inline uint32_t gpio_alt18_read(void) {
	return csr_read_simple(CSR_BASE + 0x5830L);
}
static inline void gpio_alt18_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5830L);
}
#define CSR_GPIO_ALT18_CTRL_OFFSET 0
#define CSR_GPIO_ALT18_CTRL_SIZE 8
#define CSR_GPIO_ALT19_ADDR (CSR_BASE + 0x5834L)
#define CSR_GPIO_ALT19_SIZE 1
static inline uint32_t gpio_alt19_read(void) {
	return csr_read_simple(CSR_BASE + 0x5834L);
}
static inline void gpio_alt19_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5834L);
}
#define CSR_GPIO_ALT19_CTRL_OFFSET 0
#define CSR_GPIO_ALT19_CTRL_SIZE 8
#define CSR_GPIO_ALT20_ADDR (CSR_BASE + 0x5838L)
#define CSR_GPIO_ALT20_SIZE 1
static inline uint32_t gpio_alt20_read(void) {
	return csr_read_simple(CSR_BASE + 0x5838L);
}
static inline void gpio_alt20_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5838L);
}
#define CSR_GPIO_ALT20_CTRL_OFFSET 0
#define CSR_GPIO_ALT20_CTRL_SIZE 8
#define CSR_GPIO_ALT21_ADDR (CSR_BASE + 0x583cL)
#define CSR_GPIO_ALT21_SIZE 1
static inline uint32_t gpio_alt21_read(void) {
	return csr_read_simple(CSR_BASE + 0x583cL);
}
static inline void gpio_alt21_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x583cL);
}
#define CSR_GPIO_ALT21_CTRL_OFFSET 0
#define CSR_GPIO_ALT21_CTRL_SIZE 8

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

/* button */
#define CSR_BUTTON_BASE (CSR_BASE + 0x8800L)
#define CSR_BUTTON_IN_ADDR (CSR_BASE + 0x8800L)
#define CSR_BUTTON_IN_SIZE 1
static inline uint32_t button_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x8800L);
}

#endif