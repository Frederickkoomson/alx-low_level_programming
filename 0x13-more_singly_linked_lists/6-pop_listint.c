/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 *
 * Author: Frederick B. Koomson
 * File: 6-pop_listint.c
 */

#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	int data = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *temp = *head;

		data = temp->n;
		*head = temp->next;
		free(temp);
	}

	return (data);
}
