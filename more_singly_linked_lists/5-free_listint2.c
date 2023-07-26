#include "lists.h"
/**
 * free_listint2 - free_listint2 to free a list
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		f = (*head)->next;
		free(*head);
		*head = f;
	}
	*head = NULL;
}
