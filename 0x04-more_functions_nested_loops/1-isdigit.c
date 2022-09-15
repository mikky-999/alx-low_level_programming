#include "main.h"
#include <stdio.h>

/**
 * _isdigit - to check if c passed in is btw 0 to 9
 * @c: argument passed in to the function _isdigit
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >=0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
