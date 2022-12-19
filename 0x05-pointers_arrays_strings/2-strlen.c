#include "main.h"
/**
 * _strlen - Entry Point to function
 * @s: parameter to be accepted
 * Return: 0
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}

	return (p);
}
