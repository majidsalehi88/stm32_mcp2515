#include "main.h"
#include "CANSPI.h"

extern uCAN_MSG txMessage;

uint8_t TxData_can[9];
uint32_t TxMailbox;

void can_transmitter()
{
	//txMessage.frame.idType = 110;
    txMessage.frame.id = 0x02;   ////Id transmit
    txMessage.frame.dlc = 8;
    txMessage.frame.data0 = TxData_can[0]; 
    txMessage.frame.data1 = TxData_can[1];
    txMessage.frame.data2 = TxData_can[2];
    txMessage.frame.data3 = TxData_can[3];
    txMessage.frame.data4 = TxData_can[4];
    txMessage.frame.data5 = TxData_can[5];
    txMessage.frame.data6 = TxData_can[6];
    txMessage.frame.data7 = TxData_can[7];
    CANSPI_Transmit(&txMessage);
		
}