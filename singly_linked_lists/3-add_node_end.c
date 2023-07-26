#include "lists.h"
/**
 * add_node_end - add node to the end of list
 * @head: head
 * @str: char
 * Return: value of i
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(list_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->str = strdup(str);
	if (a->str == NULL)
	{
		free(a);
		return (NULL);
	}
	a->len = strlen(a->str);
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next)
		b = b->next;
	b->next = a;

	return (a);
}
