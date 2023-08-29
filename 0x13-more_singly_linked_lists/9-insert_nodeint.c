#include <stdlib.h>
#include "your_header_file.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Value to be assigned to the data field of the new node.
 *
 * Return: Address of the new node, or NULL if it failed or if it is not possible
 *         to add the new node at index idx.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current;
	if (previous != NULL)
		previous->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
