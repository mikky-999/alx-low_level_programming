#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - This function prints a string, followed by a new line, to stdout
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = strlen(str);

	while (i+=2)
	{
		put(str);
	}
	putchar('\n');
}
