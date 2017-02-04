#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hash function
 * found at: http://www.cse.yorku.ca/~oz/hash.html
 * @str: string to hash
 * Return: returns hashed string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
