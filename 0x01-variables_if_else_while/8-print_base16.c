#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry Point
 *
 * Return:0
 *
**/

int main(void)
{
	char item;

	for (item = '0'; item <= '9'; item++)
	{
		putchar(item);
	}

	for (item = 'a'; item <= 'f'; item++)
	{
		putchar(item);
	}
	putchar('\n');
	return (0);
}
