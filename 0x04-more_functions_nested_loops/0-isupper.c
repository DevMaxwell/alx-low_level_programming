#include "main.h"

/**
 * _isupper - Entry point to function.
 * @c:parameter to be received.
 * Return:1 if uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
