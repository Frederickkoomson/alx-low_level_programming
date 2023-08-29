/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 *
 * Author: Frederick B. Koomson
 * File: 1-listint_len.c
 */

#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}
