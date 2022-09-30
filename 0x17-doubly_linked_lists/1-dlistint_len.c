#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - counts the number of nodes in dlistint_t.
 * @h: The pointer to the head of a structure.
 * Return: The number of nodes on the struct dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
	h = h->next;
return (i);
}
