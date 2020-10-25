/* Copyright 2020 Gregory Davill <greg.davill@gmail.com> */
/* Repurposed by Adam and Sam Zeloof */

/*  
 *  Barebones RISCV blinky demo for the OrangeCrab Board.
 */


/* ---- Includes ---- */
#include <generated/csr.h>

/* ---- Function Prototypes ---- */
void msleep(int ms);

/* ---- Main Function ---- */
int main() {

    /* This write sets up RAW output to the LED */
    rgb_config_write(0x00);

    while(1){

        /* Delay so we can see what is happening */
        msleep(1000);

        /* Turn LED ON */
        rgb__r_write(255);
        rgb__b_write(0);
        rgb__g_write(0);
        
        msleep(1000);

        rgb__r_write(0);
        rgb__b_write(255);
        rgb__g_write(0);

        msleep(1000);

        rgb__r_write(0);
        rgb__b_write(0);
        rgb__g_write(255);

    }
    
    return 0;
}


/* ---- Helper Functions ---- */

/* ISRs will cause the CPU to jump here */
void isr() {

}

/* Simple sleep function that uses our timer0 peripheral */
void msleep(int ms)
{
    timer0_en_write(0);
    timer0_reload_write(0);
    timer0_load_write(CONFIG_CLOCK_FREQUENCY/1000*ms);
    timer0_en_write(1);
    timer0_update_value_write(1);
    while(timer0_value_read()) timer0_update_value_write(1);
}