#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
		{
			break;
		}
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
