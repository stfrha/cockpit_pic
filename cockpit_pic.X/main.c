 
#include "mcc_generated_files/system/system.h"

#define I2C_CLIENT_LOCATION_SIZE 10

//Private functions
static bool Client_Application(i2c_client_transfer_event_t event);

volatile static uint8_t CLIENT_DATA[I2C_CLIENT_LOCATION_SIZE] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09
};

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

 
    
    I2C_client_example_polling();
    
    CLIENT_DATA[4] = 0x55;
    CLIENT_DATA[5] = 0xaa;

    ANSELH = 0;
    ANSEL = 64;
    
    ADC_SelectChannel(posChannel_AN6);
    BUTTON_SetDigitalInput();
    
    //BUTTON_SetDigitalMode();

    while (1)
    {
        I2C1_Client.Tasks();
        
        // Check if command for general processing
        if (CLIENT_DATA[0] == 0x10)
        {
            ADC_StartConversion();
            while(!ADC_IsConversionDone());
            uint16_t res = ADC_GetConversionResult();
            CLIENT_DATA[1] = (res >> 8) & 0xff;
            CLIENT_DATA[2] = res & 0xff;
            CLIENT_DATA[3] = BUTTON_GetValue();

            // Reset command register
            CLIENT_DATA[9] = 0;
        }
        
        if (BUTTON_GetValue())
        {
            LED_SetHigh();
        }
        else
        {
            LED_SetLow();
        }
    }
}