#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end -> Adds new node at the end of the list.
 * @head: The pointer to the head of the list listint_t.
 * @n: Element to be added on the new node's data.
 * Return: If funtion fails: return NULL
 * otherwise: return address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *ptr;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);
temp->n = n;
temp->next = NULL;
if (*head == NULL)
	*head = temp;
else
{
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		ptr->next = temp;
	}
}
return (*head);
}
