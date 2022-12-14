#include "main.h"
/**
 *print_sign-Entry point to check the sign of a number
 *@n: parameter to be accepted
 *Return:1 if its a positive, 0 if its a zero and -1 if its less than zero
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
