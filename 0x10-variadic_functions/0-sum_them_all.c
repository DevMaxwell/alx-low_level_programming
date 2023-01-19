#include <variadic_functions.h>

/**
 * sum_them_all - Sums number of varibles given
 * @n: param
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
