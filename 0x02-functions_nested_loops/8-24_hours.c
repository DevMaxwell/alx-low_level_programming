#include "main.h"
/**
 * jack_bauer-Entry Point for function
 * Return: 0
**/

void jack_bauer(void)
{
	int ho, hour, min, minutes;

	for (ho = 0; ho <= 2; ho++)
	{
		for (hour = 0; hour <= 3; hour++)
		{
			for (min = 0; min <= 5; min++)
			{
				for (minutes = 0; minutes <= 9; minutes++)
				{
					if (ho == 2 && hour  > 3)
					{
						break;
					}
					_putchar(ho + '0');
					_putchar(hour + '0');
					_putchar(':');
					_putchar(min + '0');
					_putchar(minutes + '0');
					_putchar('\n');
				}
			}
		}
	}
}
