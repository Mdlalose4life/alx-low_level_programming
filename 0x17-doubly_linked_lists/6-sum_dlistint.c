#include "lists.h"
/**
 * sum_dlistint - returns the sum of the values of the nodes.
 * @head: The pointer the head of the linked list.
 * Return: 0 if the linked list is empty.
 * otherwise: return the sum of the values.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == 0)
	return (0);
while (head != NULL)
{
	sum += head->n
	head = head(next)
}
return (sum)
}
