 
#include "mcc_generated_files/system/system.h"

#define I2C_CLIENT_LOCATION_SIZE 10

//Private functions
static bool Client_Application(i2c_client_transfer_event_t event);

volatile static uint8_t CLIENT_DATA[I2C_CLIENT_LOCATION_SIZE] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09
};

// CLIENT_DATA holds all measurements and acts as command
// The following is how to decode the CLIENT_DATA:
// 0 - Not used (or used for addressing, not really sure) 
// 1 - MSB potentiometer 0
// 2 - LSB potentiometer 0
// 3 - MSB potentiometer 1
// 4 - LSB potentiometer 1
// 5 - Button state 31 - 24
// 6 - Button state 23 - 16
// 7 - Button state 15 - 8
// 8 - Button state 7 - 0
// 9 - PIC will do measurements when this is set to 0x10, will set to 0x00 when
//     read from PIC


static uint8_t clientLocation  = 0x00;
static bool isClientLocation = false;

int I2C_client_example_polling(void)
{
    I2C1_Client.CallbackRegister(Client_Application);
}

static bool Client_Application(i2c_client_transfer_event_t event)
{
    // LATD = 3;
    switch (event)
    {
        case I2C_CLIENT_TRANSFER_EVENT_ADDR_MATCH: //Address Match occured
        if (I2C1_Client.TransferDirGet() == I2C_CLIENT_TRANSFER_DIR_WRITE)
        {
            // LATD = 4;
            isClientLocation  = true;
        }
        break;

        case I2C_CLIENT_TRANSFER_EVENT_RX_READY: //Read the data sent by I2C Host
        
        
        if (isClientLocation )
        {
            clientLocation  = I2C1_Client.ReadByte();
            isClientLocation  = false;
            // LATD = 5;
            break;
        }
        else
        {
            uint8_t data = I2C1_Client.ReadByte();
            CLIENT_DATA[clientLocation ++] = data;
            
            //LATD = data;
            if (clientLocation  >= I2C_CLIENT_LOCATION_SIZE)
            {
                clientLocation  = 0x00;
                //LATD = 7;
            }
        }
        break;

        case I2C_CLIENT_TRANSFER_EVENT_TX_READY: // Provide the Client data requested by the I2C Host
            
        // LATD = 8;
        
        I2C1_Client.WriteByte(CLIENT_DATA[clientLocation ++]);
        if (clientLocation  >= I2C_CLIENT_LOCATION_SIZE)
        {
            clientLocation  = 0x00;
            // LATD = 9;
        }
        break;

        case I2C_CLIENT_TRANSFER_EVENT_STOP_BIT_RECEIVED: //Stop Communication
            
        // LATD = 10;
        
        clientLocation  = 0x00;
        break;

        case I2C_CLIENT_TRANSFER_EVENT_ERROR: //Error Event Handler
            
        // LATD = 11;        
        
        clientLocation  = 0x00;
        i2c_client_error_t errorState = I2C1_Client.ErrorGet();
        if(errorState == I2C_CLIENT_ERROR_BUS_COLLISION)
        {
            // Bus Collision Error Handling
            // LATD = 12;
        }
        else if(errorState == I2C_CLIENT_ERROR_WRITE_COLLISION)
        {
            // Write Collision Error Handling
            // LATD = 13;
        }
        else if (errorState == I2C_CLIENT_ERROR_RECEIVE_OVERFLOW)
        {
            // Receive Overflow Error Handling
            // LATD = 14;
        }
        else if (errorState == I2C_CLIENT_ERROR_TRANSMIT_UNDERFLOW)
        {
            // Transmit Underflow Error Handling
            // LATD = 15;
        }
        else if (errorState == I2C_CLIENT_ERROR_READ_UNDERFLOW)
        {
            // Read Underflow Error Handling
            // LATD = 16;
        }
        break;

        default:
        break;
    }
    return true;
}




/*
    Main application
*/

// Private variable

int main(void)
{
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 

    // Change SPI Slave address to use GPIO as lsbs
    //SSPADD = 0x18;
    
    uint8_t i2cAddr = 0xC | (A1_GetValue() << 1) | A0_GetValue();
    i2cAddr = i2cAddr << 1;
    SSP1ADD = i2cAddr;
    
    I2C_client_example_polling();
    
    int16_t adcResponse = 0;

    // Prepare to start channel 0
    ADC_ChannelSelect(ADC_CHANNEL_ANC0);
    
    while (1)
    {
        I2C1_Client.Tasks();
        
        // Check if command for general processing
        if (CLIENT_DATA[0] == 0x10)
        {
            // Measure ADC 0
            ADC_ConversionStart();
            while(!ADC_IsConversionDone());
            adcResponse = ADC_ConversionResultGet();
            CLIENT_DATA[1] = (adcResponse >> 8) & 0xff;
            CLIENT_DATA[2] = adcResponse & 0xff;

            // Prepare for next channel
            ADC_ChannelSelect(ADC_CHANNEL_ANC1);

            uint8_t row[5];

            // Fetch all key presses
            // for (uint8_t i = 0; i < 4; i++)
            // {
            //    LATA = 0x01 << i;
            //     row[i] = LATB;                
            // }
            
            //// Decode key presses into CLIENT_DATA
            //CLIENT_DATA[5] = 0; // Zero for now, TODO: Add more keys
            //CLIENT_DATA[6] = ((row[3] & 0x1e) >> 1);
            //CLIENT_DATA[7] = ((row[3] & 0x1) << 7) | ((row[2] & 0x1f) << 2) | ((row[1] & 0x18) >> 3);
            //CLIENT_DATA[8] = ((row[1] & 0x7) << 5) | (row[0] & 0x1f);

            LATA = 0x1f;
            TRISA = 0xfe;
            CLIENT_DATA[5] = PORTB;
            // TRISA = 0xfd;
            // LATA = 0x2;
            // CLIENT_DATA[6] = PORTB;
            // TRISA = 0xfb;
            // LATA = 0x4;
            // CLIENT_DATA[7] = PORTB;
            // TRISA = 0xf7;
            // LATA = 0x8;
            // CLIENT_DATA[8] = PORTB;

            // LATA = 0x2;
            // CLIENT_DATA[6] = LATB;
            // LATA = 0x4;
            // CLIENT_DATA[7] = LATB;
            //LATA = 0x8;
            //CLIENT_DATA[8] = LATB;
            
            // Measure ADC 1
            
            __delay_us(10);
            
            ADC_ConversionStart();
            while(!ADC_IsConversionDone());
            adcResponse = ADC_ConversionResultGet();
            CLIENT_DATA[3] = (adcResponse >> 8) & 0xff;
            CLIENT_DATA[4] = adcResponse & 0xff;


            // Reset command register
            CLIENT_DATA[9] = 0;
            
            // Prepare to start channel 0 again for next round robin
            ADC_ChannelSelect(ADC_CHANNEL_ANC0);

        }
    }
}