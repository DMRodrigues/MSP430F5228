/*
  ************************************************************************
  *    pins_energia.h
  *
  *    Energia core files for MSP430
  *        Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Diogo Rodrigues
  *
  ***********************************************************************
  Derived from:
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef Pins_Energia_h
#define Pins_Energia_h

#ifndef BV
#define BV(x) (1 << (x))
#endif

#include <msp430f5xx_6xxgeneric.h>


#if defined(__MSP430_HAS_USCI_A0__) || defined(__MSP430_HAS_USCI_A1__)

/* Default Serial settings */
static const uint8_t DEBUG_UARTRXD = 38; /* Receive Data (RXD) at P4.5 */
static const uint8_t DEBUG_UARTTXD = 37; /* Transmit Data (TXD) at P4.4 */

#define DEBUG_UART_MODULE_OFFSET 0x40
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | (PM_UCA1RXD << 8) | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | (PM_UCA1TXD << 8) | OUTPUT)


/* Serial1 available */
#define SERIAL1_AVAILABLE 1

static const uint8_t AUX_UARTRXD = 32; /* Aux Receive Data (RXD) at P3.4 */
static const uint8_t AUX_UARTTXD = 31; /* Aux Transmit Data (TXD) at P3.3 */

#define AUX_UART_MODULE_OFFSET 0x00
#define AUX_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define AUX_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)


/* Default SPI settings */
static const uint8_t SS   = 27; /* P2.7 */
static const uint8_t SCK  = 30; /* P3.2 */
static const uint8_t MOSI = 28; /* P3.0 */
static const uint8_t MISO = 29; /* P3.1 */

#define SPISCK_SET_MODE (PORT_SELECTION0)
#define SPIMOSI_SET_MODE (PORT_SELECTION0)
#define SPIMISO_SET_MODE (PORT_SELECTION0)


/* Default I2C settings */
#define DEFAULT_I2C 1

static const uint8_t TWISDA1 = 34; /* P4.1 UCB1 */
static const uint8_t TWISCL1 = 35; /* P4.2 UCB1 */

#define TWISDA1_SET_MODE (PORT_SELECTION0 | (PM_UCB1SDA << 8))
#define TWISCL1_SET_MODE (PORT_SELECTION0 | (PM_UCB1SCL << 8))
#define TWISDA TWISDA1
#define TWISCL TWISCL1
#define TWISDA_SET_MODE  TWISDA1_SET_MODE
#define TWISCL_SET_MODE  TWISCL1_SET_MODE


/* Wire1 I2C available */
static const uint8_t TWISDA0 = 28; /* P3.0 UCB0 */
static const uint8_t TWISCL0 = 29; /* P3.1 UCB0 */

#define TWISDA0_SET_MODE (PORT_SELECTION0)
#define TWISCL0_SET_MODE (PORT_SELECTION0)

#endif

#if defined(__MSP430_HAS_USCI_A1__)
#define USE_USCI_A1
#endif

static const uint8_t A0  = 0;
static const uint8_t A1  = 1;
static const uint8_t A2  = 2;
static const uint8_t A3  = 3;
static const uint8_t A4  = 4;
static const uint8_t A5  = 5;
static const uint8_t A6  = 6;
static const uint8_t A7  = 7;
static const uint8_t A8  = 8;
static const uint8_t A9  = 9;
static const uint8_t A10 = 128 + 10; // special. This is the internal temp sensor
static const uint8_t A11 = 128 + 11; // special. This is Vcc/2

/* Pin names based on PACKAGE */
static const uint8_t P6_0 = 0;
static const uint8_t P6_1 = 1;
static const uint8_t P6_2 = 2;
static const uint8_t P6_3 = 3;
static const uint8_t P6_4 = 4;
static const uint8_t P6_5 = 5;
static const uint8_t P6_6 = 6;
static const uint8_t P6_7 = 7;
static const uint8_t P5_0 = 8;
static const uint8_t P5_1 = 9;
static const uint8_t P5_4 = 10;
static const uint8_t P5_5 = 11;

static const uint8_t P1_0 = 12;
static const uint8_t P1_1 = 13;
static const uint8_t P1_2 = 14;
static const uint8_t P1_3 = 15;
static const uint8_t P1_4 = 16;
static const uint8_t P1_5 = 17;
static const uint8_t P1_6 = 18;
static const uint8_t P1_7 = 19;
static const uint8_t P2_0 = 20;
static const uint8_t P2_1 = 21;
static const uint8_t P2_2 = 22;
static const uint8_t P2_3 = 23;
static const uint8_t P2_4 = 24;
static const uint8_t P2_5 = 25;
static const uint8_t P2_6 = 26;

static const uint8_t P2_7 = 27;
static const uint8_t P3_0 = 28;
static const uint8_t P3_1 = 29;
static const uint8_t P3_2 = 30;
static const uint8_t P3_3 = 31;
static const uint8_t P3_4 = 32;
static const uint8_t P4_0 = 33;
static const uint8_t P4_1 = 34;
static const uint8_t P4_2 = 35;
static const uint8_t P4_3 = 36;
static const uint8_t P4_4 = 37;
static const uint8_t P4_5 = 38;
/* P4_6 */
/* P4_7 */

/* PU_0 */
/* PU_1 */
static const uint8_t P5_2 = 39;
static const uint8_t P5_3 = 40;
static const uint8_t PJ_0 = 41;
static const uint8_t PJ_1 = 42;
static const uint8_t PJ_2 = 43;
static const uint8_t PJ_3 = 44;

static const uint8_t LED_BUILTIN = 15;
static const uint8_t TEMPSENSOR = 128 + 10;

#ifdef ARDUINO_MAIN
const uint16_t port_to_input[] = {
   NOT_A_PORT,
   (uint16_t) (P1_BASE+OFS_P1IN),
   (uint16_t) (P2_BASE+OFS_P2IN),
#ifdef __MSP430_HAS_PORT3_R__
   (uint16_t) (P3_BASE+OFS_P3IN),
#endif
#ifdef __MSP430_HAS_PORT4_R__
   (uint16_t) (P4_BASE+OFS_P4IN),
#endif
#ifdef __MSP430_HAS_PORT5_R__
   (uint16_t) (P5_BASE+OFS_P5IN),
#endif
#ifdef __MSP430_HAS_PORT6_R__
   (uint16_t) (P6_BASE+OFS_P6IN),
#endif
#ifdef __MSP430_HAS_PORT7_R__
   (uint16_t) (P7_BASE+OFS_P7IN),
#endif
#ifdef __MSP430_HAS_PORT8_R__
   (uint16_t) (P8_BASE+OFS_P8IN),
#endif
#ifdef __MSP430_HAS_PORT9_R__
   (uint16_t) (P9_BASE+OFS_P9IN),
#endif
#ifdef __MSP430_HAS_PORT10_R__
   (uint16_t) (P10_BASE+OFS_P10IN),
#endif
#ifdef __MSP430_HAS_PORTJ_R__
   (uint16_t) (PJ_BASE+OFS_PJIN),
#endif
};

const uint16_t port_to_output[] = {
   NOT_A_PORT,
   (uint16_t) (P1_BASE+OFS_P1OUT),
   (uint16_t) (P2_BASE+OFS_P2OUT),
#ifdef __MSP430_HAS_PORT3_R__
   (uint16_t) (P3_BASE+OFS_P3OUT),
#endif
#ifdef __MSP430_HAS_PORT4_R__
   (uint16_t) (P4_BASE+OFS_P4OUT),
#endif
#ifdef __MSP430_HAS_PORT5_R__
   (uint16_t) (P5_BASE+OFS_P5OUT),
#endif
#ifdef __MSP430_HAS_PORT6_R__
   (uint16_t) (P6_BASE+OFS_P6OUT),
#endif
#ifdef __MSP430_HAS_PORT7_R__
   (uint16_t) (P7_BASE+OFS_P7OUT),
#endif
#ifdef __MSP430_HAS_PORT8_R__
   (uint16_t) (P8_BASE+OFS_P8OUT),
#endif
#ifdef __MSP430_HAS_PORTJ_R__
   (uint16_t) (PJ_BASE+OFS_PJOUT),
#endif
};

const uint16_t port_to_dir[] = {
   NOT_A_PORT,
   (uint16_t) (P1_BASE+OFS_P1DIR),
   (uint16_t) (P2_BASE+OFS_P2DIR),
#ifdef __MSP430_HAS_PORT3_R__
   (uint16_t) (P3_BASE+OFS_P3DIR),
#endif
#ifdef __MSP430_HAS_PORT4_R__
   (uint16_t) (P4_BASE+OFS_P4DIR),
#endif
#ifdef __MSP430_HAS_PORT5_R__
   (uint16_t) (P5_BASE+OFS_P5DIR),
#endif
#ifdef __MSP430_HAS_PORT6_R__
   (uint16_t) (P6_BASE+OFS_P6DIR),
#endif
#ifdef __MSP430_HAS_PORT7_R__
   (uint16_t) (P7_BASE+OFS_P7DIR),
#endif
#ifdef __MSP430_HAS_PORT8_R__
   (uint16_t) (P8_BASE+OFS_P8DIR),
#endif
#ifdef __MSP430_HAS_PORTJ_R__
   (uint16_t) (PJ_BASE+OFS_PJDIR),
#endif
};

const uint16_t port_to_ren[] = {
   NOT_A_PORT,
   (uint16_t) (P1_BASE+OFS_P1REN),
   (uint16_t) (P2_BASE+OFS_P2REN),
#ifdef __MSP430_HAS_PORT3_R__
   (uint16_t) (P3_BASE+OFS_P3REN),
#endif
#ifdef __MSP430_HAS_PORT4_R__
   (uint16_t) (P4_BASE+OFS_P4REN),
#endif
#ifdef __MSP430_HAS_PORT5_R__
   (uint16_t) (P5_BASE+OFS_P5REN),
#endif
#ifdef __MSP430_HAS_PORT6_R__
   (uint16_t) (P6_BASE+OFS_P6REN),
#endif
#ifdef __MSP430_HAS_PORT7_R__
   (uint16_t) (P7_BASE+OFS_P7REN),
#endif
#ifdef __MSP430_HAS_PORT8_R__
   (uint16_t) (P8_BASE+OFS_P8REN),
#endif
#ifdef __MSP430_HAS_PORTJ_R__
   (uint16_t) (PJ_BASE+OFS_PJREN),
#endif
};

const uint16_t port_to_sel0[] = {  /* put this PxSEL register under the group of PxSEL0 */
   NOT_A_PORT,
   (uint16_t) (P1_BASE+OFS_P1SEL),
   (uint16_t) (P2_BASE+OFS_P2SEL),
#ifdef __MSP430_HAS_PORT3_R__
   (uint16_t) (P3_BASE+OFS_P3SEL),
#endif
#ifdef __MSP430_HAS_PORT4_R__
   (uint16_t) (P4_BASE+OFS_P4SEL),
#endif
#ifdef __MSP430_HAS_PORT5_R__
   (uint16_t) (P5_BASE+OFS_P5SEL),
#endif
#ifdef __MSP430_HAS_PORT6_R__
   (uint16_t) (P6_BASE+OFS_P6SEL),
#endif
#ifdef __MSP430_HAS_PORT7_R__
   (uint16_t) (P7_BASE+OFS_P7SEL),
#endif
#ifdef __MSP430_HAS_PORT8_R__
   (uint16_t) (P8_BASE+OFS_P8SEL),
#endif
#ifdef __MSP430_HAS_PORTJ_R__
   (uint16_t) (PJ_BASE+OFS_PJSEL),
#endif
};

const uint16_t port_to_pmap[] = {
   NOT_A_PORT, /* PMAP starts at port P1 */
   NOT_A_PORT,
   NOT_A_PORT,
   NOT_A_PORT,
   (uint16_t) P4MAP_BASE,
   NOT_A_PORT,
   NOT_A_PORT,
   NOT_A_PORT,
   NOT_A_PORT,
   NOT_A_PORT,
};

const uint8_t digital_pin_to_timer[] = {
   NOT_ON_TIMER, /* 0 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER, /* 10 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   T0A1,         /* 14 - P1.2 */
   T0A2,         /* 15 - P1.3 */
   T0A3,         /* 16 - P1.4 */
   T0A4,         /* 17 - P1.5 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   T1A1,         /* 20 - P2.0 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   T2A1,         /* 24 - P2.4 */
   T2A2,         /* 25 - P2.5 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER, /* 30 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER, /* 40 */
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
   NOT_ON_TIMER,
};

const uint8_t digital_pin_to_port[] = {
   P6, /* 0 */
   P6,
   P6,
   P6,
   P6,
   P6,
   P6,
   P6,
   P5,
   P5,
   P5,
   P5, /* 11 */

   P1, /* 12 */
   P1,
   P1,
   P1,
   P1,
   P1,
   P1,
   P1,
   P2,
   P2,
   P2,
   P2,
   P2,
   P2,
   P2, /* 26 */

   P2, /* 27 */
   P3,
   P3,
   P3,
   P3,
   P3,
   P4,
   P4,
   P4,
   P4,
   P4,
   P4, /* 38 */

   P5, /* 39 */
   P5,
   PJ,
   PJ,
   PJ,
   PJ,
};

const uint8_t digital_pin_to_bit_mask[] = {
   BV(0), /* 0 */
   BV(1),
   BV(2),
   BV(3),
   BV(4),
   BV(5),
   BV(6),
   BV(7),
   BV(0),
   BV(1),
   BV(4),
   BV(5), /* 11 */
   
   BV(0), /* 12 */
   BV(1),
   BV(2),
   BV(3),
   BV(4),
   BV(5),
   BV(6),
   BV(7),
   BV(0),
   BV(1),
   BV(2),
   BV(3),
   BV(4),
   BV(5),
   BV(6), /* 26 */
   
   BV(7), /* 27 */
   BV(0),
   BV(1), 
   BV(2),
   BV(3),
   BV(4),
   BV(0),
   BV(1),
   BV(2),
   BV(3),
   BV(4),
   BV(5), /* 38 */

   BV(2), /* 39 */
   BV(3),
   BV(0),
   BV(1),
   BV(2),
   BV(3),
};

const uint32_t digital_pin_to_analog_in[] = {
   0,          /* 0 - P6.0 */
   1,          /* 1 - P6.1 */
   2,          /* 2 - P6.2 */
   3,          /* 3 - P6.3 */
   4,          /* 4 - P6.4 */
   5,          /* 5 - P6.5 */
   6,          /* 6 - P6.6 */
   7,          /* 7 - P6.7 */
   8,          /* 8 - P5.0 */
   9,          /* 9 - P5.1 */
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC, /* 20 */
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC, /* 30 */
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC, /* 40 */
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
   NOT_ON_ADC,
};

#endif // #ifdef ARDUINO_MAIN
#endif // #ifndef Pins_Energia_h
