//--------------------------------------------------------------------------------
// Auto-generated by Migen (cb88406) & LiteX (c474272f) on 2020-10-25 15:11:23
//--------------------------------------------------------------------------------
#ifndef __GENERATED_SOC_H
#define __GENERATED_SOC_H
#define CONFIG_CLOCK_FREQUENCY 48000000
static inline int config_clock_frequency_read(void) {
	return 48000000;
}
#define CONFIG_CPU_HAS_INTERRUPT
#define CONFIG_CPU_RESET_ADDR 0
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
#define CONFIG_CPU_TYPE_VEXRISCV
#define CONFIG_CPU_VARIANT_STANDARD
#define CONFIG_CPU_HUMAN_NAME "VexRiscv"
static inline const char * config_cpu_human_name_read(void) {
	return "VexRiscv";
}
#define CONFIG_CPU_NOP "nop"
static inline const char * config_cpu_nop_read(void) {
	return "nop";
}
#define CONFIG_L2_SIZE 8192
static inline int config_l2_size_read(void) {
	return 8192;
}
#define FLASH_BOOT_ADDRESS 537919488
static inline int flash_boot_address_read(void) {
	return 537919488;
}
#define CONFIG_CSR_DATA_WIDTH 32
static inline int config_csr_data_width_read(void) {
	return 32;
}
#define CONFIG_CSR_ALIGNMENT 32
static inline int config_csr_alignment_read(void) {
	return 32;
}
#define CONFIG_BUS_STANDARD "WISHBONE"
static inline const char * config_bus_standard_read(void) {
	return "WISHBONE";
}
#define CONFIG_BUS_DATA_WIDTH 32
static inline int config_bus_data_width_read(void) {
	return 32;
}
#define CONFIG_BUS_ADDRESS_WIDTH 32
static inline int config_bus_address_width_read(void) {
	return 32;
}
#define TIMER0_INTERRUPT 2
static inline int timer0_interrupt_read(void) {
	return 2;
}
#define UART_INTERRUPT 0
static inline int uart_interrupt_read(void) {
	return 0;
}
#define USB_INTERRUPT 3
static inline int usb_interrupt_read(void) {
	return 3;
}

#endif
