#include "main.h"
/**
 * _abs-Entry point for abs function
 * @a:parameter to be accepted
 * Return:abs value of parameter
**/

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
