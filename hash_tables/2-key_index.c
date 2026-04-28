#include "hash_tables.h"
/**
 * key_index - returns the index of a key in a hash table
 * @key: key to hash
 * @size: size of hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_val = hash_djb2(key);
	return (hashed_val % size);
}
