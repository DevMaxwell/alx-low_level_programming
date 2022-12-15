#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry Point
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" fizzbuzz ");
		}
		else if (a % 5 == 0)
		{
			printf(" buzz ");
		}
		else if (a % 3 == 0)
		{
			printf(" fizz ");
		}
		else
		{
			printf(" %d ", a);
		}
	}
	putchar('\n');
	return (0);
}
