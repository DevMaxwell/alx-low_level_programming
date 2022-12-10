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

	while (numb <= 9)
	{
		putchar(48 + numb);
		numb++;
	}
	putchar('\n');
	return (0);
}
