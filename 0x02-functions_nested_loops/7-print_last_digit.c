#include "main.h"
/**
 * print_last_digit-Entry point to print the last number
 * @l:parameter to be accepted
 * Return:last digit
**/

int print_last_digit(int l)
{
	int digit;

	digit = l % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
