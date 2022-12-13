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
		if (j < 10)
		{
			_putchar(j);
			_putchar(j);
		}
		else
			-putchar(j);
		_putchar(':');
		for (i = 0; i <= 59 ; i++)
		{
			if (i < 10)
			{
				_putchar(i);
				_putchar(i);
			}
			_putchar(i);
		}
		_putchar('\n');
	}
}
