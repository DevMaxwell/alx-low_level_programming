#include "main.h"

/**
 * print_square - Entry Point to function
 * @size: Parameter to accepted
 * Return 0
 */

void print_square(int size)
{
	int p, x;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (p = 0; p < size; p++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
