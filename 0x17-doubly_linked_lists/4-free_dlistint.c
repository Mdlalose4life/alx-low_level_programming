#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees the memory of struct dlistint_t.
 * @head: The pointer to the head of a struct.
 * return : Always 0.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
	temp = head->next;
	free(head);
	temp = head;
}
}
