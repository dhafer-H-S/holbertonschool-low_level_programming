#include "lists.h"
/**
 * add_nodeint - function that adds new node at the begining of a list
 * @head: head list
 * @n: the number to add
 * Return: the adress of the new element NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *A;

		A = malloc(sizeof(listint_t));
		if (A == NULL)
			return (NULL);

		A->n = n;
		A->next = *head;
		*head = A;
		return (A);
}
