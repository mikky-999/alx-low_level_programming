#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line
 * @a: parameter
 * Return: nothing
 */
void print_line(int a)
{
	while (a-- > 0)
	{
		_putchar('_');
	}
	_purchar('\n');
}
