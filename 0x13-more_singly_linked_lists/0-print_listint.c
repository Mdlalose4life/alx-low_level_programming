#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a list.
 * @h: pointer to the head of the structure.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
}
return (nodes);
}
