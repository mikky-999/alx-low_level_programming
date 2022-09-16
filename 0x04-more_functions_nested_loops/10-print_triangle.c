#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @sz: argument passed ing the function
 * Return: nothing
 */
void print_triangle(int sz)
{
	int re1, re2;

	if (sz > 0)
	{
		for (re1 = 1; re1 <= size; re1++)
		{
			for ((re2 = size - re1); re2 > 0; re2--)
			{
				_putchar(' ');
			}
			for (re2 = 0; re2 < re1; re2++)
			{
				_putchar('#');
			}
			if (incl == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
