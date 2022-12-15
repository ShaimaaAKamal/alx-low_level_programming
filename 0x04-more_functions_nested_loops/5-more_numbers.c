#include "main.h"

/**
 * more_numbers - A function that checks for uppercase character.
 * Return: Nothing
 */
void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0' ; j <= 14 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
