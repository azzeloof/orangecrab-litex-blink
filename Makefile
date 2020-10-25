
CROSS=riscv64-unknown-elf-
CFLAGS=

all: blink_fw.bin

# ---- basic blink Target ----
dfu: blink_fw.bin
	python combine.py
	dfu-util -D combine.dfu

blink_fw.elf: start.s main.c
	$(CROSS)gcc $(CFLAGS) -march=rv32i -mabi=ilp32 -Wl,-Bstatic,-T,sections.ld,--strip-debug -ffreestanding -nostdlib -I. -o blink_fw.elf start.s main.c

blink_fw.hex: blink_fw.elf
	$(CROSS)objcopy -O verilog blink_fw.elf blink_fw.hex

blink_fw.bin: blink_fw.elf
	$(CROSS)objcopy -O binary blink_fw.elf blink_fw.bin

# ---- Clean ----

clean:
	rm -f blink_fw.bin blink_fw.elf combine.dfu

.PHONY: all