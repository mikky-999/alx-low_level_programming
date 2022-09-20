#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - print a given string in reverse
 * @s: string passed in the function
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
