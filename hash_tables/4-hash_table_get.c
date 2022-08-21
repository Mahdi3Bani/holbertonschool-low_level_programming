#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size;
	int i = 0;
	hash_node_t *tmp;
	char *valeur;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];

		if (tmp->key == key)
		{
			valeur = tmp->value;
			return (valeur);
		}
	}
	return (NULL);
}
