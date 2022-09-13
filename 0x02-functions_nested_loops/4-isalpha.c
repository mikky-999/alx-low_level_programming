#include "main.h"
/**
 * _isalpha(int c)- check if c is an alphabet
 *
 * Return: 1 (success) else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
