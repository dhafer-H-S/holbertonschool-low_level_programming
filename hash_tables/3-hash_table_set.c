#include"hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: table
 * @key: key
 * @value: value
 *
 * Return: 1 in success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *val = NULL, *update = NULL;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
return (0);

index = key_index((unsigned char *) key, ht->size);
val = ht->array[index];

if (val && strcmp(key, val->key) == 0)
{
	free(val->value);
val->value = strdup(value);
return (1);
}

update = malloc(sizeof(hash_node_t));
if (update == NULL)
return (0);

update->key = strdup(key);
update->value = strdup(value);
update->next = ht->array[index];
ht->array[index] = update;
return (1);
}
