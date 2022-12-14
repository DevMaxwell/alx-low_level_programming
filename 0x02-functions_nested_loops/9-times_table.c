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
		for (dig = 0; dig <= 9; dig++)
		{
			ans = num * dig;
			if (ans < 10)
			{
				_putchar (ans + '0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				putchar((ans / 10) + '0');
				putchar((ans % 10) + '0');
				putchar (',');
				putchar (' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
