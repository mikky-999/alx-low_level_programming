#include "main.h"
/**
 * print_sign - show if n is greater, less or = 0
 * @n- interger argument
 * Return: 1 if true else -1 else 0
 */
int print_sign(int n)
{
	if (n > '1')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
