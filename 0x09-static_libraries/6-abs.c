#include "main.h"
#include <stdio.h>
/**
 * _abs - Find the absolute number
 * @n: integer argument to be passed
 * Return: value of n
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
