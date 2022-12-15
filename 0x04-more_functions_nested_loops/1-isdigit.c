#include "main.h"

/**
 * _isdigit - Entry Point for isdigit like function
 * @c:parameter to be received
 * Return: 1 for values between one to nine, 0 otherwise
 */


int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
