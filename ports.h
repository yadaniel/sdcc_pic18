/****************************************************************************************/
/**
    @file
    @verbatim
        Filename:     ports.h
        Description:  i/o mapping of the microcontroller

    @endverbatim
*****************************************************************************************/

#ifndef ports_INCLUDED
#define ports_INCLUDED

/* porta */
#define ADC0_IN             PORTAbits.RA0   /* input */
#define ADC1_IN             PORTAbits.RA1   /* input */
#define ADC2_IN             PORTAbits.RA2   /* input */
#define VREF_ADC            PORTAbits.RA3   /* input */
#define DIGIN0              PORTAbits.RA4   /* input */
#define ADC3_IN             PORTAbits.RA5   /* input */
#define TRIS_OR_PORTA       0x3F    /* MSB --11.1111 LSB */

/* portb */
#define DIGIN1_IN           PORTBbits.RB0   /* input */
#define DIGIN2_IN           PORTBbits.RB1   /* input */
#define DIGIN3_IN           PORTBbits.RB2   /* input */
#define DIGIN4_IN           PORTBbits.RB3   /* input */
#define DIGOUT1_OUT         LATBbits.LATB4  /* output */
#define PGM                 LATBbits.LATB5  /* output */
#define PGC                 PORTBbits.RB6   /* input */
#define PGD                 PORTBbits.RB7   /* input */
#define TRIS_PORTB          0xCF    /* MSB 1100.1111 LSB */

/* portc */
#define DIGIN5_IN           PORTCbits.RC0   /* input */
#define DIGIN6_IN           PORTCbits.RC1   /* input */
#define DIGIN7_IN           PORTCbits.RC2   /* input */
#define DIGIN8_IN           PORTCbits.RC3   /* input */
#define DIGOUT2_IN          LATCbits.LATC4  /* output */
#define DIGOUT3_IN          LATCbits.LATC5  /* output */
#define RS232_TX            LATCbits.LATC6  /* output */
#define RS232_RX            PORTCbits.RC7   /* input */
#define TRIS_PORTC          0x8F    /* MSB 1000.1111 LSB */

/* portd */
#define DIGIN9_IN           PORTDbits.RD0   /* input */
#define DIGIN10_IN           PORTDbits.RD1   /* input */
#define DIGIN11_IN          PORTDbits.RD2   /* input */
#define DIGIN12_IN          PORTDbits.RD3   /* input */
#define DIGOUT4             LATDbits.LATD4  /* output */
#define DIGIN13_IN          PORTDbits.RD5   /* input */
#define DIGOUT5             LATDbits.LATD6  /* output */
#define DIGOUT6             LATDbits.LATD7  /* output */
#define TRIS_PORTD          0x2F    /* MSB 0010.1111 LSB */

/* porte */
#define DIGIN14             PORTEbits.RE0   /* input */
#define DIGIN15             PORTEbits.RE1   /* input */
#define DIGIN16             PORTEbits.RE2   /* input */
#define DIGIN17             PORTEbits.RE3   /* input */
#define DIGIN18             PORTEbits.RE4   /* input */
#define DIGIN19             PORTEbits.RE5   /* input */
#define DIGIN20             PORTEbits.RE6   /* input */
#define DIGIN21             PORTEbits.RE7   /* input */
#define TRIS_PORTE          0xFF    /* MSB 1111.1111 LSB */

/* portf */
#define ADC4_IN             PORTFbits.RF0   /* input */
#define ADC5_IN             PORTFbits.RF1   /* input */
#define DIGOUT7             LATFbits.LATF2  /* output */
#define DIGOUT8             LATFbits.LATF3  /* output */
#define DIGOUT9             LATFbits.LATF4  /* output */
#define DIGOUT10            LATFbits.LATF5  /* output */
#define DIGOUT11            LATFbits.LATF6  /* output */
#define DIGOUT12            LATFbits.LATF7  /* output */
#define TRIS_PORTF          0x03    /* MSB 0000.0011 LSB */

/* portg */
#define DIGOUT13            LATGbits.LATG0  /* output */
#define DIGOUT14            LATGbits.LATG1  /* output */
#define DIGOUT15            LATGbits.LATG2  /* output */
#define DIGOUT16            LATGbits.LATG3  /* output */
#define DIGOUT17            LATGbits.LATG4  /* output */
#define TRIS_AND_PORTG      0xE0    /* MSB ---0.0000 LSB */

/* porth */
#define DIGIN22             PORTHbits.RH0   /* input */
#define DIGIN23             PORTHbits.RH1   /* input */
#define DIGIN24             PORTHbits.RH2   /* input */
#define DIGIN25             PORTHbits.RH3   /* input */
#define DIGIN26             PORTHbits.RH4   /* input */
#define DIGIN27             PORTHbits.RH5   /* input */
#define DIGIN28             PORTHbits.RH6   /* input */
#define DIGIN29             PORTHbits.RH7   /* input */
#define TRIS_PORTH          0xFF    /* MSB 1111.1111 LSB */

/* portj */
#define DIGIN30             PORTJbits.RJ0   /* input */
#define DIGIN31             PORTJbits.RJ1   /* input */
#define DIGIN32             PORTJbits.RJ2   /* input */
#define DIGIN33             PORTJbits.RJ3   /* input */
#define DIGIN34             PORTJbits.RJ4   /* input */
#define DIGIN35             PORTJbits.RJ5   /* input */
#define DIGIN36             PORTJbits.RJ6   /* input */
#define DIGIN37             PORTJbits.RJ7   /* input */
#define TRIS_PORTJ          0xFF    /* MSB 1111.1111 LSB */

/* pins used as input and output */
#define IO_PIN_OUTPUT       0
#define IO_PIN_INPUT        1

#endif /* ports_INCLUDED */

