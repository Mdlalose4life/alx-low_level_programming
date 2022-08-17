#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -> inserts a new node at a given position.
 * @head: The pointer to the head of the structure.
 * @idx: indicates the position on which node will be added.
 * @n: The element that will be added together with ned node.
 * Return: if function fails: return NULL
 * otherwise: return the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *ptr = *head;
unsigned int count;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);
temp->n = n;
if (idx == 0)
{
	temp->next = ptr;
	*head = ptr;
	return (temp);
}
for (count = 0; count < (idx - 1); count++)
{
	if (ptr == NULL || ptr->next == NULL)
		return (NULL);
	ptr=ptr->next;
}
temp->next = ptr->next;
ptr->next=temp;
return (temp);
}
