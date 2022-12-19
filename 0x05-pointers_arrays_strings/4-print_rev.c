#include "main.h"
#include <stdbool.h>
#include <stddef.h>
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
			last=s;
			end = false;
		}
		s++;
	}
	while (rev)
	{
		if (last != start)
			_putchar(*last);
		else
		{
			_putchar(*last);
			break;
		}
		last--;
	}
	_putchar('\n');
}
