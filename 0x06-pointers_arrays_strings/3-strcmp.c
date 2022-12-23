#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string to be compared one
 * @s2: string to be compared two
 * Return: 0 if successful
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int aux;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		i++;
	}
	return (0);
}

