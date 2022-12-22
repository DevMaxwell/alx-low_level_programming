#include <unistd.h>

/**
 * _putchar - Function to act as standard putchar funchar
 * @c: prarameter to be printed as character
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
