#include "main.h"
/**
 * _islower - Check if char is in lower case
 * @c: interger argument to be passed
 * Return: 1 (success) else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
