#include "main.h"
/**
 *print_alphabet- Entry Point
 * Return: 0
**/

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	return (0);
}
