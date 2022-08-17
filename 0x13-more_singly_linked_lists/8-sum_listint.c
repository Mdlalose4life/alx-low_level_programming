#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint -> returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: THe pointer to the head of the list.
 * Return: Sum of all the data of a list.
 * Or NULL if the list is empty.
 */
int sum_listint(listint_t *head)
{
unsigned int sum = 0;
if (head == NULL)
	return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
