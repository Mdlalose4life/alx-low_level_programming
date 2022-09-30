#include "lists.h"
/**
 * free_dlistint - frees the memory of linked list dlistint_t.
 * @head: The pointer to the head of a linked list.
 * return : Always 0.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
	temp = head->next;
	free(head);
	head = temp;
}
}
