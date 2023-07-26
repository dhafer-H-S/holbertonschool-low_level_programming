#include "lists.h"
/**
 * add_node - function that adds new node at the begining of a list
 * @head: head list
 * @str: the string to add
 * Return: the adress of the new element NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *L;

	if (head != NULL && str != NULL)
	{
		L = malloc(sizeof(list_t));
		if (L == NULL)
			return (NULL);

		L->str = strdup(str);
		L->len = strlen(str);
		L->next = *head;
		*head = L;
		return (L);
	}
	return (NULL);
}
