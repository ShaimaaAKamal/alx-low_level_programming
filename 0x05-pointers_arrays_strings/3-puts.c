#include "main.h"
#include <stdbool.h>
/**
 * _puts - function used to print string
 * @s: is an char  pointer
 * Return: Nothing
 */
void _puts(char *s)
{
	bool end = true;

	while (end)
	{
		if (*s != '\0')
			_putchar(*s);
		else
			end = false;
		s++;
	}
	_putchar('\n');
}
