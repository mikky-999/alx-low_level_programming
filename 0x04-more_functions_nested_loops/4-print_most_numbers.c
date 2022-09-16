#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if ((a == 50) || (a == 52))
		{
			continue;
		}
		putchar(a);
	}
	putchar(10);
}
