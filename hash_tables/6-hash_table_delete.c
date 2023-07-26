#include"hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht:  hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i;
hash_node_t *val;

if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i])
{
	val = ht->array[i]->next;
	free(ht->array[i]->key);
	free(ht->array[i]->value);
	free(ht->array[i]);
	ht->array[i] = val;
}
free(ht->array[i]);
}
free(ht->array);
free(ht);
}
