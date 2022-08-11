#include "lists.h"
#include <stdio.h>
/**
 * size_t - A function that prints all elements in
 * list_t list.
 * @h: The pointer to the head of the list.
 * return: if str is NULL print [0] (nil)
 * otherwise: return the number of nodes.
 */
size_t list_len(const list_t *h)
{
size_t node = 0;
while(h)
{
if ((*h).str == NULL)
	printf("[0](nil)");
else
	printf("[%d] %s\n", (*h).len, (*h).str);
	node++;
	h = (*h).next;
}
return (node);
}
