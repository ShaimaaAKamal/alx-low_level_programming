#include "main.h"

/**
 * _isdigit - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isdigit(int c)
{
	char i;
	int isDigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			isDigit = 1;
			break;
		}
	}

	return (isDigit);
}
