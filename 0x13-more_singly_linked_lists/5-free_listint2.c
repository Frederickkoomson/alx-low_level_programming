#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description:
 *   This function frees the memory allocated for a listint_t list
 *   and sets the head pointer to NULL.
 *
 * @head: The pointer to a pointer to the head of the list.
 *        After freeing the list, the head will be set to NULL.
 *
 * Author: Frederick B. Koomson
 * File: 5-free_listint2.c
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}
