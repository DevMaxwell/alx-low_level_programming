#include "main.h"
/**
 * print_times_table-Entrypoint to print n multiplication table
 * @n:parameter to be received
 * Return:0
**/

void print_times_table(int n)
{
	int num, dig, ans;

	if (n >= 0 &&  n < 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (dig = 1; dig <= n; dig++)
			{
				ans = num * dig;
				_putchar(44);
				_putchar(32);
				if (ans > 9 && ans <= 99)
				{
					_putchar(32);
					_putchar((ans / 10) + 48);
					_putchar((ans % 10) + 48);
				}
				else if (ans > 99)
				{
					_putchar(((ans / 100) % 10) + 48);
					_putchar(((ans / 10) % 10) + 48);
					_putchar((ans % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar(ans + 48);
				}
			}
			_putchar('\n');
		}
	}
}
