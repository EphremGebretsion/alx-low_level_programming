#include "hash_tables.h"

/**
 * key_index - used to return the index using hash djb2 algorithm
 * @key: is a string representing the key
 * @size: the size of the array
 * Return: returns the remainder of the hash value to the size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
