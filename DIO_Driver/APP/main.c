#include "../MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>

u8 Pin_Value0;
u8 Pin_Value1;
int main(void)
{
	DIO_u8SetPinDirection(0, 0, 0);
	DIO_u8SetPinDirection(0, 5, 0);
	DIO_u8SetPortDirection(2, 1);

	while (1)
	{
		DIO_u8GetPinValue(0, 0, &Pin_Value0);
		DIO_u8GetPinValue(0, 5, &Pin_Value1);
		if (Pin_Value0)
		{
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 1, 1, 1, 0, 0); // 0
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 0, 0, 0, 0, 1, 1, 0, 0); // 1
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 1, 0, 1, 1, 0, 1, 0); // 2
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 1, 0, 0, 1, 0); // 3
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 0, 1, 1, 0, 0, 1, 1, 0); // 4
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 1, 1, 0, 1, 1, 0); // 5
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 1, 1, 1, 1, 1, 0); // 6
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 0, 0, 0, 0, 0); // 7
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 1, 1, 1, 1, 0); // 8
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 1, 0, 1, 1, 0); // 9
			_delay_ms(50);
		}

		else if (Pin_Value1)
		{
			DIO_u8SetValueToAllPins(2, 1, 1, 1, 0, 1, 1, 1, 0); // A
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 0, 0, 1, 1, 1, 1, 1, 0); // b
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 0, 1, 1, 1, 0, 0); // C
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 0, 1, 1, 1, 1, 0, 1, 0); // d
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 0, 1, 1, 1, 1, 0); // E
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 0, 0, 1, 1, 1, 0); // F
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 1, 0, 1, 1, 1, 1, 0, 0); // G
			_delay_ms(50);
			DIO_u8SetValueToAllPins(2, 0, 1, 1, 0, 1, 1, 1, 0); // H
			_delay_ms(50);
		}

		else
		{
			DIO_u8SetPortDirection(2, 0);
		}
	}

	return 0;
}
