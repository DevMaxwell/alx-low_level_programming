#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry to function
 * @dest: first parameter
 * @src: second parameter
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
