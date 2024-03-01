#include "Pin13.h"
#include <avr/io.h>

void setupPin13(){
    DDRB |= (1 << 5);
}

void pin13On(){
    PORTB |= (1 << 5);
}

void pin13Off(){
    PORTB &= ~(1 << 5);
}
