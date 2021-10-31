#include "main.h"

#include "CANSPI.h"

uCAN_MSG rxMessage;


uint8_t RxData_can[8];


void can_reciever()
{

	  CANSPI_Receive(&rxMessage);
	  
      rxMessage.frame.idType = rxMessage.frame.idType;
      rxMessage.frame.id = rxMessage.frame.id;
      rxMessage.frame.dlc = rxMessage.frame.dlc;

    if(rxMessage.frame.id == 110)
	{
	    RxData_can[0] = rxMessage.frame.data0;
      RxData_can[1] = rxMessage.frame.data1;
      RxData_can[2] = rxMessage.frame.data2;
      RxData_can[3] = rxMessage.frame.data3;
      RxData_can[4] = rxMessage.frame.data4;
      RxData_can[5] = rxMessage.frame.data5;
      RxData_can[6] = rxMessage.frame.data6;
      RxData_can[7] = rxMessage.frame.data7;
	}

}