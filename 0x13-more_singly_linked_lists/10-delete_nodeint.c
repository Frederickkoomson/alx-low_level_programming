#include "list_operations.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
