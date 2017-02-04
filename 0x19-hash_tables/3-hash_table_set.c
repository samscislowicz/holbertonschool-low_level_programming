#include "hash_tables.h"
/**
 * key_index - Turn the hash key into an index
 *@key:hash key
 *@size:size of the table
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
