#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	unsigned int count = 0;
	int loop_detected = 0;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		count++;

		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= head && !loop_detected)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			printf("Error: List contains a loop\n");
			exit(98);
		}

		loop_detected = 1;
	}

	return (count);
}
