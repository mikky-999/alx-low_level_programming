#include "main.h"
/**
 * print_last_digit - print last digit of n
 * @n: integer argument to be passed
 * Return: Value of the last number
 */
int print_last_digit(int n)
{
	int last_number = n % 10;

	if (last_number < 0)
	{
		last_number *= -1;
	}
	_putchar(last_number + '0');
	return (last_number);
}
