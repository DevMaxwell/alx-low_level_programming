#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry Point
 *
 * Return:0(success)
 *
**/

int main(void)
{
	char numb = '0';

	while (numb <= '9')
	{
		putchar(numb);
		numb++;
	}
	putchar('\n');
	return (0);
}
