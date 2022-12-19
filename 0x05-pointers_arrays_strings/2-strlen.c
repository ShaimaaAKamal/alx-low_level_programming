#include "main.h"
/**
 * _strlen - function used to return string length
 * @s: is an char  pointer
 * Return: integer represents string length
 */
int _strlen(char *s)
{
	int len = 0;
	bool end = true;

	while (end)
	{
		if (*s != '\0')
			len++;
		else
			end = false;
		s++;
	}
	return (len);
}
