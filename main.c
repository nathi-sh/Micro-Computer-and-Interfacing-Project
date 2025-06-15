#include <LPC213x.h>

// Accurate 1ms delay using Timer0 and 15 MHz PCLK
void timer_delay_ms(unsigned int ms) {
    T0TCR = 0x02;        // Reset Timer
    T0PR  = 15000 - 1;   // Prescaler: 15,000 ticks @ 15 MHz = 1 ms
    T0TCR = 0x01;        // Start Timer

    while (T0TC < ms);   // Wait until TC reaches the target ms

    T0TCR = 0x00;        // Stop Timer
    T0TC  = 0;           // Reset TC
}

int main() {
    VPBDIV = 0x02;        // Set PCLK = 15 MHz (CCLK / 4)
    PINSEL0 = 0;
    IO0DIR = 0x003FFFFF;

    while (1) {

        // SEGMENT B - Displays 0 
        IO0SET |= (1<<19);
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0SET |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0SET |= (1<<12);
        IO0CLR |= (1<<13);

        // SEGMENT A //9
        IO0SET |= (1<<18); 
        IO0CLR |= (1<<16); 
        IO0SET |= (1<<0);
        IO0SET |= (1<<1);
        IO0CLR |= (1<<2);
        IO0SET |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //8
        IO0SET |= (1<<0);
        IO0SET |= (1<<1);
        IO0SET |= (1<<2);
        IO0SET |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //7
        IO0SET |= (1<<0);
        IO0SET |= (1<<1);
        IO0CLR |= (1<<2);
        IO0CLR |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0CLR |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //6
        IO0SET |= (1<<0);
        IO0SET |= (1<<1);
        IO0SET |= (1<<2);
        IO0SET |= (1<<3); 
        IO0SET |= (1<<4);
        IO0CLR |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //5
        IO0SET |= (1<<0);
        IO0SET |= (1<<1);
        IO0CLR |= (1<<2); 
        IO0SET |= (1<<3); 
        IO0SET |= (1<<4);
        IO0CLR |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //4
        IO0CLR |= (1<<0);
        IO0SET |= (1<<1);
        IO0CLR |= (1<<2);
        IO0CLR |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //3
        IO0SET |= (1<<0); 
        IO0CLR |= (1<<1); 
        IO0CLR |= (1<<2);
        IO0SET |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0SET |= (1<<6);
        IO0CLR |= (1<<18);
        IO0SET |= (1<<17);
        timer_delay_ms(280);

        // SEGMENT A //2
        IO0SET |= (1<<0);
        IO0CLR |= (1<<1);
        IO0SET |= (1<<2);
        IO0SET |= (1<<3);
        IO0CLR |= (1<<4);
        IO0SET |= (1<<5);
        IO0SET |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //1
        IO0CLR |= (1<<0);
        IO0CLR |= (1<<1);
        IO0CLR |= (1<<2);
        IO0CLR |= (1<<3);
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0CLR |= (1<<6);
        timer_delay_ms(280);

        // SEGMENT A //0
        IO0SET |= (1<<0); 
        IO0SET |= (1<<1); 
        IO0SET |= (1<<2); 
        IO0SET |= (1<<3); 
        IO0SET |= (1<<4);
        IO0SET |= (1<<5);
        IO0CLR |= (1<<6);
        IO0SET |= (1<<16);
        IO0CLR |= (1<<17);
        timer_delay_ms(1000);                          

        // SEGMENT B //9
        IO0SET |= (1<<21); 
        IO0CLR |= (1<<19);
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0CLR |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0SET |= (1<<12);
        IO0SET |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //8
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0SET |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0SET |= (1<<12); 
        IO0SET |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //7
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0CLR |= (1<<9);
        IO0CLR |= (1<<10);
        IO0SET |= (1<<11); 
        IO0SET |= (1<<12);
        IO0CLR |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //6
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0SET |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0CLR |= (1<<12);
        IO0SET |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //5
        IO0SET |= (1<<7);
        IO0SET |= (1<<8);
        IO0CLR |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0CLR |= (1<<12);
        IO0SET |= (1<<13);
        timer_delay_ms(280);                   

        // SEGMENT B //4
        IO0CLR |= (1<<7);
        IO0SET |= (1<<8);
        IO0CLR |= (1<<9);
        IO0CLR |= (1<<10);
        IO0SET |= (1<<11);
        IO0SET |= (1<<12);
        IO0SET |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //3 
        IO0SET |= (1<<7); 
        IO0CLR |= (1<<8); 
        IO0CLR |= (1<<9);
        IO0SET |= (1<<10);
        IO0SET |= (1<<11); 
        IO0SET |= (1<<12);
        IO0SET |= (1<<13);
        IO0CLR |= (1<<21);
        IO0SET |= (1<<20);
        timer_delay_ms(280);

        // SEGMENT B //2
        IO0SET |= (1<<7);
        IO0SET |= (1<<9);
        IO0SET |= (1<<10);
        IO0CLR  |= (1<<11);
        IO0SET |= (1<<12); 
        IO0SET |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //1
        IO0CLR |= (1<<7);
        IO0CLR |= (1<<8); 
        IO0CLR |= (1<<9);
        IO0CLR |= (1<<10); 
        IO0SET |= (1<<11); 
        IO0SET |= (1<<12); 
        IO0CLR |= (1<<13);
        timer_delay_ms(280);

        // SEGMENT B //0
        IO0SET |= (1<<7); 
        IO0SET |= (1<<8); 
        IO0SET |= (1<<9); 
        IO0SET |= (1<<10);
        IO0SET |= (1<<11);
        IO0SET |= (1<<12); 
        IO0CLR |= (1<<13); 
        IO0CLR |= (1<<20);
        IO0SET |= (1<<19);
        timer_delay_ms(2);
    }
}
