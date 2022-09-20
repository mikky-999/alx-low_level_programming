#include <stdio.h>
#include "main.h"

/**
 * _puts2 - This function prints a string, followed by a new line, to stdout
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i += 2;
	}
	putchar('\n');
}
