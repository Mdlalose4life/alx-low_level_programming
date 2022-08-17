#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -> deletes the node at index
 * index of a listint_t linked list.
 * @head: The pointer to the head of the structure.
 * @index: The posision on which a nodes will be deleted
 * Return: index of the node that should be deleted
 * or return 1 if function succeeds
 * then -1 if function fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *ptr = *head;
unsigned int count;
temp = malloc(sizeof(listint_t));
if (ptr == NULL)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(ptr);
	return (1);
}
for (count = 0; count < (index - 1); count++)
{
	if (ptr->next == NULL)
		return (-1);
	ptr = ptr->next;
}
temp = ptr->next;
ptr->next = temp->next;
return (1);
}
