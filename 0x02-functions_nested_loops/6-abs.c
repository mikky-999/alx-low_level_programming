#include "main.h"
#include <stdio.h>
/**
 * _abs(int) -Find the absolute number
 * @n: integer argument to be passed
 * Return: (n)
 */
int _abs(int n)
{
	if (n >= '0')
	{
		return (n);
	}
	else
	{
		return (n / -1);
	}
}
