#include "usart.h"

int main(void)
{
	uint8_t data;
	Usart_ConfigType config = {ON,EIGHT,DISABLED,ONE,9600};
	UART_init(&config);
	while(1)
	{
		data = UART_receiveByte(); //Receive Byte from Terminal1
		UART_sendByte(data); //Resend the received byte to Terminal2
	}

}
