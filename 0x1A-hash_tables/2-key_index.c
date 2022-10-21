#include "hash_tables.h"
/**
 * key_index -  gives an index of a key.
 * @size: size of an array of the hash table
 * @key: the key
 * Return: index of from the key as an interger.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
