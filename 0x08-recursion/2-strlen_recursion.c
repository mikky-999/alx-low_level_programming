#include "main.h"

/**
 * _strlen_recursion - The function prints out a string in reverse
 * @s: string variable to be passed in
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
