/****************************************************************************************/
/**
    @file
    @verbatim
        Filename:     configbits.h
        Description:  microcontroller configuration settings

    @endverbatim
*****************************************************************************************/

#ifndef CONFIGBITS_INCLUDED
#define CONFIGBITS_INCLUDED

#pragma config OSC = HSPLL
#pragma config FCMEN = OFF
#pragma config IESO = OFF
#pragma config PWRT = ON
#pragma config BOREN = SBORDIS
#pragma config BORV = 0
#pragma config WDT = OFF
// WDTPS
#pragma config MODE = MC
// ADDRBW, DATABW, WAIT
// CCP2MX, ECCPMX
#pragma config MCLRE = ON
#pragma config LPT1OSC = OFF
#pragma config STVREN = ON
#pragma config LVP = OFF
#pragma config XINST = OFF
#pragma config BBSIZ = BB2K
#pragma config DEBUG = OFF
#pragma config CP0 = OFF
#pragma config CP1 = OFF
#pragma config CP2 = OFF
#pragma config CPB = OFF
#pragma config CPD = OFF
#pragma config WRT0 = OFF
#pragma config WRT1 = OFF
#pragma config WRT2 = OFF
#pragma config WRTC = OFF
#pragma config WRTB = OFF
#pragma config WRTD = OFF
#pragma config EBTR0 = OFF
#pragma config EBTR1 = OFF
#pragma config EBTR2 = OFF
#pragma config EBTRB = OFF

#endif /* CONFIGBITS_INCLUDED */

/*
Configuration settings available for processor PIC18F8527

  Oscillator Selection bits:
    OSC = LP       	LP oscillator
    OSC = XT       	XT oscillator
    OSC = HS       	HS oscillator
    OSC = RC       	External RC oscillator, CLKO function on RA6
    OSC = EC       	EC oscillator, CLKO function on RA6
    OSC = ECIO6    	EC oscillator, port function on RA6
    OSC = HSPLL    	HS oscillator, PLL enabled (Clock Frequency = 4 x
                        FOSC1)
    OSC = RCIO6    	External RC oscillator, port function on RA6
    OSC = INTIO67  	Internal oscillator block, port function on RA6 and RA7
    OSC = INTIO7   	Internal oscillator block, CLKO function on RA6, port
                        function on RA7

  Fail-Safe Clock Monitor Enable bit:
    FCMEN = OFF    	Fail-Safe Clock Monitor disabled
    FCMEN = ON     	Fail-Safe Clock Monitor enabled

  Internal/External Oscillator Switchover bit:
    IESO = OFF     	Two-Speed Start-up disabled
    IESO = ON      	Two-Speed Start-up enabled

  Power-up Timer Enable bit:
    PWRT = ON      	PWRT enabled
    PWRT = OFF     	PWRT disabled

  Brown-out Reset Enable bits:
    BOREN = OFF    	Brown-out Reset disabled in hardware and software
    BOREN = ON     	Brown-out Reset enabled and controlled by software
                        (SBOREN is enabled)
    BOREN = NOSLP  	Brown-out Reset enabled in hardware only and disabled
                        in Sleep mode (SBOREN is disabled)
    BOREN = SBORDIS	Brown-out Reset enabled in hardware only (SBOREN is
                        disabled)

  Brown-out Voltage bits:
    BORV = 0       	Maximum setting
    BORV = 1
    BORV = 2
    BORV = 3       	Minimum setting

  Watchdog Timer:
    WDT = OFF      	WDT disabled (control is placed on the SWDTEN bit)
    WDT = ON       	WDT enabled

  Watchdog Timer Postscale Select bits:
    WDTPS = 1      	1:1
    WDTPS = 2      	1:2
    WDTPS = 4      	1:4
    WDTPS = 8      	1:8
    WDTPS = 16     	1:16
    WDTPS = 32     	1:32
    WDTPS = 64     	1:64
    WDTPS = 128    	1:128
    WDTPS = 256    	1:256
    WDTPS = 512    	1:512
    WDTPS = 1024   	1:1024
    WDTPS = 2048   	1:2048
    WDTPS = 4096   	1:4096
    WDTPS = 8192   	1:8192
    WDTPS = 16384  	1:16384
    WDTPS = 32768  	1:32768

  Processor Data Memory Mode Select bits:
    MODE = EM      	Extended Microcontroller mode
    MODE = MPB     	Microprocessor with Boot Block mode
    MODE = MP      	Microprocessor mode
    MODE = MC      	Microcontroller mode

  Address Bus Width Select bits:
    ADDRBW = ADDR8BIT	8-bit Address Bus
    ADDRBW = ADDR12BIT	12-bit Address Bus
    ADDRBW = ADDR16BIT	16-bit Address Bus
    ADDRBW = ADDR20BIT	20-bit Address Bus

  Data Bus Width Select bit:
    DATABW = DATA8BIT	8-bit External Bus mode
    DATABW = DATA16BIT	16-bit External Bus mode

  External Bus Data Wait Enable bit:
    WAIT = ON      	Wait selections for table reads and table writes are
                        determined by the WAIT1:WAIT0 bits
    WAIT = OFF     	Wait selections are unavailable for table reads and
                        table writes

  CCP2 MUX bit:
    . Or with RE7 in Microcontroller mode.	ECCP2 is multiplexed with RB3 in Extended
                        Microcontroller, Microprocessor or Microprocessor with Boot Block mode. Or with RE7 in Microcontroller mode.
    CCP2MX = PORTC 	ECCP2 input/output is multiplexed with RC1

  ECCP MUX bit:
    ECCPMX = PORTH 	ECCP1/3 (P1B/P1C/P3B/P3C) are multiplexed onto RH7,
                        RH6, RH5 and RH4 respectively
    ECCPMX = PORTE 	ECCP1/3 (P1B/P1C/P3B/P3C) are multiplexed onto RE6,
                        RE5, RE4 and RE3 respectively

  Low-Power Timer1 Oscillator Enable bit:
    LPT1OSC = OFF  	Timer1 configured for higher power operation
    LPT1OSC = ON   	Timer1 configured for low-power operation

  MCLR Pin Enable bit:
    MCLRE = OFF    	RG5 input pin enabled; MCLR disabled
    MCLRE = ON     	MCLR pin enabled; RG5 input pin disabled

  Stack Full/Underflow Reset Enable bit:
    STVREN = OFF   	Stack full/underflow will not cause Reset
    STVREN = ON    	Stack full/underflow will cause Reset

  Single-Supply ICSP Enable bit:
    LVP = OFF      	Single-Supply ICSP disabled
    LVP = ON       	Single-Supply ICSP enabled

  Boot Block Size Select bits:
    BBSIZ = BB2K   	1K word (2 Kbytes) Boot Block size
    BBSIZ = BB4K   	2K words (4 Kbytes) Boot Block size
    BBSIZ = BB8K   	4K words (8 Kbytes) Boot Block size

  Extended Instruction Set Enable bit:
    XINST = OFF    	Instruction set extension and Indexed Addressing mode
                        disabled (Legacy mode)
    XINST = ON     	Instruction set extension and Indexed Addressing mode
                        enabled

  Background Debugger Enable bit:
    DEBUG = ON     	Background debugger enabled, RB6 and RB7 are dedicated
                        to In-Circuit Debug
    DEBUG = OFF    	Background debugger disabled, RB6 and RB7 configured
                        as general purpose I/O pins

  Code Protection bit Block 0:
    CP0 = ON       	Block 0 (000800, 001000 or 002000-003FFFh)
                        code-protected
    CP0 = OFF      	Block 0 (000800, 001000 or 002000-003FFFh) not
                        code-protected

  Code Protection bit Block 1:
    CP1 = ON       	Block 1 (004000-007FFFh) code-protected
    CP1 = OFF      	Block 1 (004000-007FFFh) not code-protected

  Code Protection bit Block 2:
    CP2 = ON       	Block 2 (008000-00BFFFh) code-protected
    CP2 = OFF      	Block 2 (008000-00BFFFh) not code-protected

  Boot Block Code Protection bit:
    CPB = ON       	Boot Block (000000-0007FFh) code-protected
    CPB = OFF      	Boot Block (000000-0007FFh) not code-protected

  Data EEPROM Code Protection bit:
    CPD = ON       	Data EEPROM code-protected
    CPD = OFF      	Data EEPROM not code-protected

  Write Protection bit Block 0:
    WRT0 = ON      	Block 0 (000800, 001000 or 002000-003FFFh)
                        write-protected
    WRT0 = OFF     	Block 0 (000800, 001000 or 002000-003FFFh) not
                        write-protected

  Write Protection bit Block 1:
    WRT1 = ON      	Block 1 (004000-007FFFh) write-protected
    WRT1 = OFF     	Block 1 (004000-007FFFh) not write-protected

  Write Protection bit Block 2:
    WRT2 = ON      	Block 2 (008000-00BFFFh) write-protected
    WRT2 = OFF     	Block 2 (008000-00BFFFh) not write-protected

  Configuration Register Write Protection bit:
    WRTC = ON      	Configuration registers (300000-3000FFh)
                        write-protected
    WRTC = OFF     	Configuration registers (300000-3000FFh) not
                        write-protected

  Boot Block Write Protection bit:
    WRTB = ON      	Boot Block (000000-007FFF, 000FFF or 001FFFh)
                        write-protected
    WRTB = OFF     	Boot Block (000000-007FFF, 000FFF or 001FFFh) not
                        write-protected

  Data EEPROM Write Protection bit:
    WRTD = ON      	Data EEPROM write-protected
    WRTD = OFF     	Data EEPROM not write-protected

  Table Read Protection bit Block 0:
    EBTR0 = ON     	Block 0 (000800, 001000 or 002000-003FFFh) protected
                        from table reads executed in other blocks
    EBTR0 = OFF    	Block 0 (000800, 001000 or 002000-003FFFh) not
                        protected from table reads executed in other blocks

  Table Read Protection bit Block 1:
    EBTR1 = ON     	Block 1 (004000-007FFFh) protected from table reads
                        executed in other blocks
    EBTR1 = OFF    	Block 1 (004000-007FFFh) not protected from table
                        reads executed in other blocks

  Table Read Protection bit Block 2:
    EBTR2 = ON     	Block 2 (008000-00BFFFh) protected from table reads
                        executed in other blocks
    EBTR2 = OFF    	Block 2 (008000-00BFFFh) not protected from table
                        reads executed in other blocks

  Boot Block Table Read Protection bit:
    EBTRB = ON     	Boot Block (000000-007FFF, 000FFF or 001FFFh)
                        protected from table reads executed in other blocks
    EBTRB = OFF    	Boot Block (000000-007FFF, 000FFF or 001FFFh) not
                        protected from table reads executed in other blocks
*/
