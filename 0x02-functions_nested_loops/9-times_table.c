#include "main.h"
/**
 *times_table-entry point to function
 *Return: 0
**/

void times_table(void)
{
	int num, dig, ans;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (dig = 0; dig <= 9; dig++)
		{
			ans = num * dig;
			_putchar(44);
			_putchar(32);

			if (ans < 10)
			{
				_putchar(32);
				_putchar (ans + '0');
			}
			else
			{
				_putchar((ans / 10) + 48);
				_putchar((ans % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
