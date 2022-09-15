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
				_putchae(' ');
			}
			_putchar('\\');

			if (len == (n -1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
