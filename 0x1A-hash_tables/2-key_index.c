#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: the size of array
 * Return: index of a key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = hash_djb2(key);
	unsigned long int index = n % size;
	return (index);
}
