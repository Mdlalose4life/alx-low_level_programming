#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end -> adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t.
 * @str: String that needs to be duplicated.
 * Return: If function fails return NULL.
 * otherwise return a pointer to current1.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char src;
int len;
list_t *current1, *current;
current1 = malloc(sizeof(list_t));
if (current1 == NULL)
	return (NULL);
src = strstr(str);
if (str == NULL)
{
	free(current1);
	return (NULL);
}
for (len = 0; str[len]; len++)
	current1->str = src;
	current1->len = len;
	current1->next = NULL;
if (*head == NULL)
	*head = current1;
else
{
	current = *head;
	while (current->next != NULL)
		last = last->next;
	last->next = current1;
}
return (*head);
}
