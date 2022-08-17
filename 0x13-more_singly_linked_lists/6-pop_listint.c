#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -deletes the head node of a listint_t linked list.
 * @head: The pointer to the head of the list.
 * Return: the head node’s data (n).
 * or reurn 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int c;
if (*head == NULL)
return (0);
ptr = *head;
c = (*head)->n;
*head = (*head)->next;
free(ptr);
return (c);
}
