/* #pragma config XINST = OFF */

#include <stdint.h>
#include <pic18fregs.h>
#include <pic18f8527.h>

#include "configbits.h"
#include "ports.h"

// forward declaration
void initialize();

// integral data types
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;

// test data structure
typedef struct {
    uint8_t x;
} X;

struct Y {
    uint8_t y;
};

// main

int main() {
    initialize();

    while(1) {
    }
}

void initialize() {

    /* disable interrupts */
    RCONbits.IPEN = 0;          /* compatibility mode */
    INTCONbits.GIE_GIEH = 0;    /* no interrupts */
    INTCONbits.PEIE_GIEL = 0;   /* no interrupts */

    /* default state of the ports */
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;
    LATD = 0x00;
    LATE = 0x00;
    LATF = 0x00;
    LATG = 0x00;
    LATH = 0x00;
    LATJ = 0x00;

    /* initial pins outputs*/

    /* port directions */
    TRISA |= TRIS_OR_PORTA;
    TRISB = TRIS_PORTB;
    TRISC = TRIS_PORTC;
    TRISD = TRIS_PORTD;
    TRISE = TRIS_PORTE;
    TRISF = TRIS_PORTF;
    TRISG &= TRIS_AND_PORTG;
    TRISH = TRIS_PORTH;
    TRISJ = TRIS_PORTJ;

    /* setup of A/D-converter */
    ADCON0bits.ADON = 0;
    ADCON1bits.VCFG = 1;    /* external vref+, avss */
    ADCON1bits.PCFG = 8;   /* AN0-AN6 analog, AN7-AN15 digital */

    /* disable slave port, used as general purpose IOs */
    PSPCONbits.PSPMODE = 0;

    /* disable serial port interfaces, used as general purpose IOs */
    SSP1CON1bits.SSPEN = 0;
    SSP2CON1bits.SSPEN = 0;

    /* internal watchdog disabled by config bits CONFIG2H */

    /* disable timer */
    T0CONbits.TMR0ON = 0;
    T1CONbits.TMR1ON = 0;
    T2CONbits.TMR2ON = 0;
    T3CONbits.TMR3ON = 0;
    T4CONbits.TMR4ON = 0;

}

