#include "main.h"

/**
 * jack_bauer - Check description
 * Description: It prints minutes, fed by a new line.
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0 ; j <= 23; j++)
	{
		for (i = 0; i <= 59 ; i++)
		{
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			_putchar(':');
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
