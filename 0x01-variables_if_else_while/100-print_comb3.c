#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry Point
 *
 * Return: 0
 *
**/

int main(void)
{
	int numb;
	int sec = 0;

	while (sec < 10)
	{
		numb = 0;

		while (numb < 10)
		{
			if (sec != numb && sec < numb)
			{
				putchar('0' + sec);
				putchar('0' + numb);

				if (sec + numb != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numb++;
		}
		sec++;
	}
	putchar('\n');
	return (0);
}

