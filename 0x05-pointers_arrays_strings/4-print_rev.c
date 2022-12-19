#include "main.h"
#include <stdbool.h>
/**
 * print_rev - function used to print string
 * @s: is an char  pointer
 * Return: Nothing
 */
void print_rev(char *s)
{
	bool end = true;
	char *last = NULL;
	bool rev = true;
	char *start = s;

	while (end)
	{
		if (*s != '\0')
			continue;
		else
		{
			end = false;
			last = s;
		}
		s++;
	}
	while (rev)
	{
		if (last != start)
			_putchar(*last);
		else
		{
			-putchar(*last);
			break;
		}
		last--;
	}
	_putchar('\n');
}
