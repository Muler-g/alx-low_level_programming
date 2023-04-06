#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head pointer
 * @n: new node
 *
 * Return: address of the new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
