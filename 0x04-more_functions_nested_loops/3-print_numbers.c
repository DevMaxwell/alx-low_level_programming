#include "main.h"

/**
 * print_numbers - Entry Point to function
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
