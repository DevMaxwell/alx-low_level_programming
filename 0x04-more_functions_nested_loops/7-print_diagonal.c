#include "main.h"

/**
 * print_diagonal - Entry point to function
 * @n: parameter to be accepted
 * Return: 0
 */

void print_diagonal(int n)
{
	int p, x;

	for (p = 0; p < n; p++)
	{
		for (x = 0; x < p; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
