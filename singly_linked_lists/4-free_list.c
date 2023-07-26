#include "lists.h"
/**
 * free_list - free_list to free a list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
