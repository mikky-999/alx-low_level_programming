#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Funtion that print number of nodes and data in the list
 * @count - Number of nodes 
 * Return - Count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	count = 0;

	while(h != NULL)
	{
		printf("%d\n, h -> next")
		count++
	}
	return(count)
}
