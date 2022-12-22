#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes from src
 * Return:concatenated srint to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
i
	dest = '\0';
	return (dest);
}
