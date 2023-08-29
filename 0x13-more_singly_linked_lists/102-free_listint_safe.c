#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, even if it contains a loop.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (size);

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		temp->next = NULL;
		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}
