#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @dlistint_t: The list whose elements will be printed.
 * @h: The head of a linked list.
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t i = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}
