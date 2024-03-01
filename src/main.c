#define F_CPU 1000000L

#include "uart/uart.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    setPin13Out();
    //DDRB |= (1 << 5);

    for(;;){
        turnPin13On();
        //PORTB |= (1 << 5);
        _delay_ms(500);

        turnPin13Off();
        //PORTB &= 0;
        _delay_ms(500);
    }

    return 0;
}

/*//#define F_CPU 1000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set PIN 13 (PORTB, bit 5) as an output
    DDRB |= (1 << 5);

    while (1) {
        // Set PIN 13 high
        PORTB |= (1 << 5);
        _delay_ms(500); // Delay for 500 milliseconds

        // Set PIN 13 low
        PORTB &= ~(1 << 5);
        _delay_ms(500); // Delay for 500 milliseconds
    }
    return 0;
}*/