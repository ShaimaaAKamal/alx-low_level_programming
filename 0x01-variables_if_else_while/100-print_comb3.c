#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		for( j = i+1 ; J <=57 ; j++)
		{
			putchar(j);
			 if (i != 57 && j != 57)
                	{
                        	putchar(',');
                        	putchar(' ');
                	}
		}
	}
	putchar('\n');

	return (0);
}
