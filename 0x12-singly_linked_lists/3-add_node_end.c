#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the start of list_t list.
 * @str: string to be added on the list.
 * Return: The address of the new added string.
 * Null if a function fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int i;
list_t *current1, current;
current1 = malloc(sizeof(list_t));
if (current1 == NULL)
	return (NULL);
dup = strdup(str);
if (str == NULL)
{
	free(current1);
	return (NULL);
}
for (i = 0; str[i];)
	i++;
current1->str = dup;
current1->i = i;
current1->next = NULL;
if (*head == NULL)
	*head = current1;
else
{
current = *head;
while (current->next != NULL)
	current = current->next;
current->next = current1;
}
return (*head);
}
