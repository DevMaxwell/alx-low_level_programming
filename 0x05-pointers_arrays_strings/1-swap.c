#include "main.h"

/**
 * swap_int - Entry Point to function
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
