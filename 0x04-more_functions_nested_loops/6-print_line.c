#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@a: parameter to be passed
*Return:returns nothing
*/

void print_line(int a)
{
	while (a-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
