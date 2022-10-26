#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to.
 * @key: The key
 * @value: The value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *i, *new_item;
size_t index;
char *key_copy, *value_copy;
if (!key || !value || !ht)
	return (0);
new_item = malloc(sizeof(hash_node_t));
if (!new_item)
	return (0);
index = key_index((const unsigned char *)key, ht->size)
key_copy = strdup(key)
value_copy = strdup(value)
for (i = ht->array[index]; i != NULL; i = i->next)
{
	if (strcmp(i->key, key) == 0)
	{
		if (i->value)
			free(i->value);
		i->value = value_copy;
		free(new_item);
		return (1);
	}
}
new_item->key = key_copy;
new_item->value = value_copy;
new_item->next = ht->array[index];
ht->array[index] = new_item;
return (1);
}
