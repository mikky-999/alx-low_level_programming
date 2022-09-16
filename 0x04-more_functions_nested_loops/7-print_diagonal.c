#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line
 * @a: argument paseed in the function
 * Return: nothing
 */
void print_diagonal(int a)
{
	int len, space;

	if (a > 0)
	{
		for (len = 0; len < a; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (a - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
