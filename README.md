# stm32_mcp2515
SPI MCP2515 BY STM32F103 

INITIAL MCP2515:

CANSPI_Initialize();

HAL_Delay(2000);

  while (1)
  {
	
can_reciever();

can_transmitter();

HAL_Delay(100);

  }


CONFIGURE SPI :

static void MX_SPI1_Init(void)
{

  hspi1.Instance = SPI1;
	
  hspi1.Init.Mode = SPI_MODE_MASTER;
	
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
	
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
	
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
	
  hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
	
  hspi1.Init.NSS = SPI_NSS_SOFT;
	
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
	
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
	
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
	
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	
  hspi1.Init.CRCPolynomial = 10;
	
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
}
