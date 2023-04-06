#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: head pointer
 *
 * Return: head node's data, if empty list 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
