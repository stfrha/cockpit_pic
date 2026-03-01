/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.1.1
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

#include "../pins.h"

void (*LFT_RE_A_InterruptHandler)(void);
void (*RGT_RE_A_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x18;
    /**
    ODx registers
    */
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0xC0;
    TRISB = 0xDF;
    TRISC = 0xFF;

    /**
    ANSELx registers
    */
    ANSELA = 0x0;
    ANSELB = 0xC0;
    ANSELC = 0x3;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUE = 0x0;


    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;

    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLE = 0x8;

   /**
    RxyI2C | RxyFEAT registers   
    */
    /**
    PPS registers
    */
    SSP1CLKPPS = 0x13;  //RC3->MSSP1:SCL1;
    RC3PPS = 0x0D;  //RC3->MSSP1:SCL1;
    SSP1DATPPS = 0x14;  //RC4->MSSP1:SDA1;
    RC4PPS = 0x0E;  //RC4->MSSP1:SDA1;

   /**
    IOCx registers 
    */
    IOCAP = 0x80;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x4;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    LFT_RE_A_SetInterruptHandler(LFT_RE_A_DefaultInterruptHandler);
    RGT_RE_A_SetInterruptHandler(RGT_RE_A_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin LFT_RE_A
    if(IOCAFbits.IOCAF7 == 1)
    {
        LFT_RE_A_ISR();  
    }
    // interrupt on change for pin RGT_RE_A
    if(IOCCFbits.IOCCF2 == 1)
    {
        RGT_RE_A_ISR();  
    }
}
   
/**
   LFT_RE_A Interrupt Service Routine
*/
void LFT_RE_A_ISR(void) {

    // Add custom LFT_RE_A code

    // Call the interrupt handler for the callback registered at runtime
    if(LFT_RE_A_InterruptHandler)
    {
        LFT_RE_A_InterruptHandler();
    }
    IOCAFbits.IOCAF7 = 0;
}

/**
  Allows selecting an interrupt handler for LFT_RE_A at application runtime
*/
void LFT_RE_A_SetInterruptHandler(void (* InterruptHandler)(void)){
    LFT_RE_A_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for LFT_RE_A
*/
void LFT_RE_A_DefaultInterruptHandler(void){
    // add your LFT_RE_A interrupt custom code
    // or set custom function using LFT_RE_A_SetInterruptHandler()
}
   
/**
   RGT_RE_A Interrupt Service Routine
*/
void RGT_RE_A_ISR(void) {

    // Add custom RGT_RE_A code

    // Call the interrupt handler for the callback registered at runtime
    if(RGT_RE_A_InterruptHandler)
    {
        RGT_RE_A_InterruptHandler();
    }
    IOCCFbits.IOCCF2 = 0;
}

/**
  Allows selecting an interrupt handler for RGT_RE_A at application runtime
*/
void RGT_RE_A_SetInterruptHandler(void (* InterruptHandler)(void)){
    RGT_RE_A_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for RGT_RE_A
*/
void RGT_RE_A_DefaultInterruptHandler(void){
    // add your RGT_RE_A interrupt custom code
    // or set custom function using RGT_RE_A_SetInterruptHandler()
}
/**
 End of File
*/