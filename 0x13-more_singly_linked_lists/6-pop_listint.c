#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The data (n) stored in the deleted head node, or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (!head || !*head)
		return (data);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
