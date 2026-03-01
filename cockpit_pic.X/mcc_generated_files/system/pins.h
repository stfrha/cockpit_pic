/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2026] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define ROW0_TRIS                 TRISAbits.TRISA0
#define ROW0_LAT                  LATAbits.LATA0
#define ROW0_PORT                 PORTAbits.RA0
#define ROW0_WPU                  WPUAbits.WPUA0
#define ROW0_OD                   ODCONAbits.ODCA0
#define ROW0_ANS                  ANSELAbits.ANSELA0
#define ROW0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ROW0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ROW0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ROW0_GetValue()           PORTAbits.RA0
#define ROW0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ROW0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ROW0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define ROW0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define ROW0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define ROW0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define ROW0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define ROW0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 aliases
#define ROW1_TRIS                 TRISAbits.TRISA1
#define ROW1_LAT                  LATAbits.LATA1
#define ROW1_PORT                 PORTAbits.RA1
#define ROW1_WPU                  WPUAbits.WPUA1
#define ROW1_OD                   ODCONAbits.ODCA1
#define ROW1_ANS                  ANSELAbits.ANSELA1
#define ROW1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ROW1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ROW1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ROW1_GetValue()           PORTAbits.RA1
#define ROW1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ROW1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ROW1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define ROW1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define ROW1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define ROW1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define ROW1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define ROW1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define ROW2_TRIS                 TRISAbits.TRISA2
#define ROW2_LAT                  LATAbits.LATA2
#define ROW2_PORT                 PORTAbits.RA2
#define ROW2_WPU                  WPUAbits.WPUA2
#define ROW2_OD                   ODCONAbits.ODCA2
#define ROW2_ANS                  ANSELAbits.ANSELA2
#define ROW2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ROW2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ROW2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ROW2_GetValue()           PORTAbits.RA2
#define ROW2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ROW2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ROW2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ROW2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ROW2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define ROW2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define ROW2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define ROW2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define ROW3_TRIS                 TRISAbits.TRISA3
#define ROW3_LAT                  LATAbits.LATA3
#define ROW3_PORT                 PORTAbits.RA3
#define ROW3_WPU                  WPUAbits.WPUA3
#define ROW3_OD                   ODCONAbits.ODCA3
#define ROW3_ANS                  ANSELAbits.ANSELA3
#define ROW3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ROW3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ROW3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ROW3_GetValue()           PORTAbits.RA3
#define ROW3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ROW3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ROW3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define ROW3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define ROW3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define ROW3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define ROW3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define ROW3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define ROW4_TRIS                 TRISAbits.TRISA4
#define ROW4_LAT                  LATAbits.LATA4
#define ROW4_PORT                 PORTAbits.RA4
#define ROW4_WPU                  WPUAbits.WPUA4
#define ROW4_OD                   ODCONAbits.ODCA4
#define ROW4_ANS                  ANSELAbits.ANSELA4
#define ROW4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ROW4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ROW4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ROW4_GetValue()           PORTAbits.RA4
#define ROW4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ROW4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ROW4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define ROW4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define ROW4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define ROW4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define ROW4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define ROW4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSELA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define LFT_RE_B_TRIS                 TRISAbits.TRISA6
#define LFT_RE_B_LAT                  LATAbits.LATA6
#define LFT_RE_B_PORT                 PORTAbits.RA6
#define LFT_RE_B_WPU                  WPUAbits.WPUA6
#define LFT_RE_B_OD                   ODCONAbits.ODCA6
#define LFT_RE_B_ANS                  ANSELAbits.ANSELA6
#define LFT_RE_B_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LFT_RE_B_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LFT_RE_B_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LFT_RE_B_GetValue()           PORTAbits.RA6
#define LFT_RE_B_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LFT_RE_B_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LFT_RE_B_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define LFT_RE_B_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define LFT_RE_B_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define LFT_RE_B_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define LFT_RE_B_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define LFT_RE_B_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define LFT_RE_A_TRIS                 TRISAbits.TRISA7
#define LFT_RE_A_LAT                  LATAbits.LATA7
#define LFT_RE_A_PORT                 PORTAbits.RA7
#define LFT_RE_A_WPU                  WPUAbits.WPUA7
#define LFT_RE_A_OD                   ODCONAbits.ODCA7
#define LFT_RE_A_ANS                  ANSELAbits.ANSELA7
#define LFT_RE_A_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LFT_RE_A_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LFT_RE_A_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LFT_RE_A_GetValue()           PORTAbits.RA7
#define LFT_RE_A_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LFT_RE_A_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LFT_RE_A_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LFT_RE_A_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LFT_RE_A_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LFT_RE_A_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LFT_RE_A_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LFT_RE_A_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)
#define RA7_SetInterruptHandler  LFT_RE_A_SetInterruptHandler

// get/set RB0 aliases
#define KEY0_TRIS                 TRISBbits.TRISB0
#define KEY0_LAT                  LATBbits.LATB0
#define KEY0_PORT                 PORTBbits.RB0
#define KEY0_WPU                  WPUBbits.WPUB0
#define KEY0_OD                   ODCONBbits.ODCB0
#define KEY0_ANS                  ANSELBbits.ANSELB0
#define KEY0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define KEY0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define KEY0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define KEY0_GetValue()           PORTBbits.RB0
#define KEY0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define KEY0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define KEY0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define KEY0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define KEY0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define KEY0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define KEY0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define KEY0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define KEY1_TRIS                 TRISBbits.TRISB1
#define KEY1_LAT                  LATBbits.LATB1
#define KEY1_PORT                 PORTBbits.RB1
#define KEY1_WPU                  WPUBbits.WPUB1
#define KEY1_OD                   ODCONBbits.ODCB1
#define KEY1_ANS                  ANSELBbits.ANSELB1
#define KEY1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define KEY1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define KEY1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define KEY1_GetValue()           PORTBbits.RB1
#define KEY1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define KEY1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define KEY1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define KEY1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define KEY1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define KEY1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define KEY1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define KEY1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define KEY2_TRIS                 TRISBbits.TRISB2
#define KEY2_LAT                  LATBbits.LATB2
#define KEY2_PORT                 PORTBbits.RB2
#define KEY2_WPU                  WPUBbits.WPUB2
#define KEY2_OD                   ODCONBbits.ODCB2
#define KEY2_ANS                  ANSELBbits.ANSELB2
#define KEY2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define KEY2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define KEY2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define KEY2_GetValue()           PORTBbits.RB2
#define KEY2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define KEY2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define KEY2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define KEY2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define KEY2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define KEY2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define KEY2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define KEY2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 aliases
#define KEY3_TRIS                 TRISBbits.TRISB3
#define KEY3_LAT                  LATBbits.LATB3
#define KEY3_PORT                 PORTBbits.RB3
#define KEY3_WPU                  WPUBbits.WPUB3
#define KEY3_OD                   ODCONBbits.ODCB3
#define KEY3_ANS                  ANSELBbits.ANSELB3
#define KEY3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define KEY3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define KEY3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define KEY3_GetValue()           PORTBbits.RB3
#define KEY3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define KEY3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define KEY3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define KEY3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define KEY3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define KEY3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define KEY3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define KEY3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define KEY4_TRIS                 TRISBbits.TRISB4
#define KEY4_LAT                  LATBbits.LATB4
#define KEY4_PORT                 PORTBbits.RB4
#define KEY4_WPU                  WPUBbits.WPUB4
#define KEY4_OD                   ODCONBbits.ODCB4
#define KEY4_ANS                  ANSELBbits.ANSELB4
#define KEY4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define KEY4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define KEY4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define KEY4_GetValue()           PORTBbits.RB4
#define KEY4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define KEY4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define KEY4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define KEY4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define KEY4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define KEY4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define KEY4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define KEY4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define DEBUG_TRIS                 TRISBbits.TRISB5
#define DEBUG_LAT                  LATBbits.LATB5
#define DEBUG_PORT                 PORTBbits.RB5
#define DEBUG_WPU                  WPUBbits.WPUB5
#define DEBUG_OD                   ODCONBbits.ODCB5
#define DEBUG_ANS                  ANSELBbits.ANSELB5
#define DEBUG_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define DEBUG_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define DEBUG_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define DEBUG_GetValue()           PORTBbits.RB5
#define DEBUG_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define DEBUG_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define DEBUG_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define DEBUG_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define DEBUG_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define DEBUG_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define DEBUG_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define DEBUG_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSELC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSELC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 aliases
#define RGT_RE_A_TRIS                 TRISCbits.TRISC2
#define RGT_RE_A_LAT                  LATCbits.LATC2
#define RGT_RE_A_PORT                 PORTCbits.RC2
#define RGT_RE_A_WPU                  WPUCbits.WPUC2
#define RGT_RE_A_OD                   ODCONCbits.ODCC2
#define RGT_RE_A_ANS                  ANSELCbits.ANSELC2
#define RGT_RE_A_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RGT_RE_A_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RGT_RE_A_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RGT_RE_A_GetValue()           PORTCbits.RC2
#define RGT_RE_A_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RGT_RE_A_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RGT_RE_A_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define RGT_RE_A_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define RGT_RE_A_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define RGT_RE_A_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define RGT_RE_A_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RGT_RE_A_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)
#define RC2_SetInterruptHandler  RGT_RE_A_SetInterruptHandler

// get/set RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSELC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSELC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define RGT_RE_B_TRIS                 TRISCbits.TRISC5
#define RGT_RE_B_LAT                  LATCbits.LATC5
#define RGT_RE_B_PORT                 PORTCbits.RC5
#define RGT_RE_B_WPU                  WPUCbits.WPUC5
#define RGT_RE_B_OD                   ODCONCbits.ODCC5
#define RGT_RE_B_ANS                  ANSELCbits.ANSELC5
#define RGT_RE_B_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RGT_RE_B_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RGT_RE_B_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RGT_RE_B_GetValue()           PORTCbits.RC5
#define RGT_RE_B_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RGT_RE_B_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RGT_RE_B_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RGT_RE_B_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RGT_RE_B_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RGT_RE_B_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RGT_RE_B_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RGT_RE_B_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define A1_TRIS                 TRISCbits.TRISC6
#define A1_LAT                  LATCbits.LATC6
#define A1_PORT                 PORTCbits.RC6
#define A1_WPU                  WPUCbits.WPUC6
#define A1_OD                   ODCONCbits.ODCC6
#define A1_ANS                  ANSELCbits.ANSELC6
#define A1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define A1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define A1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define A1_GetValue()           PORTCbits.RC6
#define A1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define A1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define A1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define A1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define A1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define A1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define A1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define A0_TRIS                 TRISCbits.TRISC7
#define A0_LAT                  LATCbits.LATC7
#define A0_PORT                 PORTCbits.RC7
#define A0_WPU                  WPUCbits.WPUC7
#define A0_OD                   ODCONCbits.ODCC7
#define A0_ANS                  ANSELCbits.ANSELC7
#define A0_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define A0_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define A0_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define A0_GetValue()           PORTCbits.RC7
#define A0_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define A0_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define A0_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define A0_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define A0_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define A0_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define A0_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define A0_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the LFT_RE_A pin functionality
 * @param none
 * @return none
 */
void LFT_RE_A_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LFT_RE_A pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for LFT_RE_A at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void LFT_RE_A_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for LFT_RE_A pin.
 *        This is a dynamic interrupt handler to be used together with the LFT_RE_A_SetInterruptHandler() method.
 *        This handler is called every time the LFT_RE_A ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*LFT_RE_A_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LFT_RE_A pin. 
 *        This is a predefined interrupt handler to be used together with the LFT_RE_A_SetInterruptHandler() method.
 *        This handler is called every time the LFT_RE_A ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void LFT_RE_A_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the RGT_RE_A pin functionality
 * @param none
 * @return none
 */
void RGT_RE_A_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for RGT_RE_A pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for RGT_RE_A at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void RGT_RE_A_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for RGT_RE_A pin.
 *        This is a dynamic interrupt handler to be used together with the RGT_RE_A_SetInterruptHandler() method.
 *        This handler is called every time the RGT_RE_A ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*RGT_RE_A_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for RGT_RE_A pin. 
 *        This is a predefined interrupt handler to be used together with the RGT_RE_A_SetInterruptHandler() method.
 *        This handler is called every time the RGT_RE_A ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void RGT_RE_A_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/