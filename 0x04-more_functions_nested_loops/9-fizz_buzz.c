#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 * @sz: argument passed
 * Return: nothing
 */

void print_square(int sz)
{
	int re1, re2;

	if(sz > 0)
	{
		for (re1 = 0; re1 < size; re1++)
		{
			for (re2 = 0; re2 < (size - 1); re2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
