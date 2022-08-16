#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -> Adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The element to the new node.
 * Return: If function fails: return NULL
 * otherwiser: Return adress of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = *head;
new = *head;
return (new);
}
