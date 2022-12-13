#include <stdio.h>
#include "main.h"

/**
 * _puts - This function prints a string, followed by a new line, to stdout.
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
