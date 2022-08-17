#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -> returns the nth node of
 * a listint_t linked list.
 * @head: The pointer to the head of the list.
 * @index: index of the node.
 * Return: The nth of the of a node of the list.
 * or retuns NULL if node does not esixt.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
for (count = 0; count > index; count++)
{
	if (head == NULL)
		return (NULL);
	head=head->next;
}
return (head);
}
