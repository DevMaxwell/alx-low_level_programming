#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry Point
 *
 * Return: 0
 *
**/

int main(void)
{
	int numb = 0;

	while (numb < 10)
	{
		putchar(48 + numb);
		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}
	putchar('\n');
	return (0);
}
