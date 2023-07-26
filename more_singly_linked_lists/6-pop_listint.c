#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: head
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
		listint_t *h;
		int n = 0;

	if (*head != NULL)
		{
				h = (*head)->next;
				n = (*head)->n;

				free(*head);
				*head = h;
		}

		return (n);
}
