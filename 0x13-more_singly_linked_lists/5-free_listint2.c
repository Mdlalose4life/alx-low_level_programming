#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -> frees th list free_listint.
 *@head: A pointer to the adress of head.
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
	return;
while (*head)
{
	ptr = (*head)->next;
	free(*head);
	*head  = ptr;
}
head = NULL;
}
