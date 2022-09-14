#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 *
 *@n: interger argument paased into the function
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	_putchar('\n');
	return (1);
}
