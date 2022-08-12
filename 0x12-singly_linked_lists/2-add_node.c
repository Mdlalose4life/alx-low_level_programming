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
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *current;
current = malloc(sizeof(list_t));
if (current == NULL)
	return (NULL);
dup =  strdup(str);
if (dup == NULL)
{
	free(current);
	return (NULL);
}
for (len = 0; str[len];)
	len++;
current->str = dup;
current->len = len;
current->next = *head;
*head = current;
return (*head);
}
