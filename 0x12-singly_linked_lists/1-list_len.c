#include "lists.h"
/**
 * list_t - Function that retuns number of
 * elemente in a single linked list.
 * @h: The list.
 * Return: Number of elements on the list.
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while(h)
{
	i++;
	h=h->next;
}
return(i);
}
