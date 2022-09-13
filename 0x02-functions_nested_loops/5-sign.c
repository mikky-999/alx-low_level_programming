#include "main.h"
/**
 * print_sign(int n)- show if n is greater, less or = 0
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
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
