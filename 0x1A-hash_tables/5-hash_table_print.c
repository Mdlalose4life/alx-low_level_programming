#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht) {
  unsigned long int index;
  hash_node_t *tmp;
  char print_check = 0;

  if (ht == NULL || ht->array == NULL)
    return;
  printf("{");
  for (index = 0; index < ht->size; index++) {
    tmp = ht->array[index];
    while (tmp != NULL) {
      if (print_check == 1)
        printf(", ");
      printf("'%s': '%s'", tmp->key, tmp->value);
      print_check = 1;
      tmp = tmp->next;
    }
  }
  printf("}\n");
}
