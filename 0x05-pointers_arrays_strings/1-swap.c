#include "main.h"
/**
 * swap_int - function used to swap two numbers
 * @a: is an input pointer
 * @b: is a second input pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
