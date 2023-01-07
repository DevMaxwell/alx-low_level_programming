#include "main.h"
/**
 * _isalpha - Entry Point
 * @c: parameter to be accepted
 * Return: 1 if parameter is a leter, lowercase or uppercase, 0 otherwise
**/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
