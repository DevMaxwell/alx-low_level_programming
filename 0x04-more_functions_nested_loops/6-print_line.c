#include "main.h"

/**
 * print_line -Entry Point to function
 * @n: parameter to be received
 * Return:0
 */

void print_line(int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
