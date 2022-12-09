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
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
