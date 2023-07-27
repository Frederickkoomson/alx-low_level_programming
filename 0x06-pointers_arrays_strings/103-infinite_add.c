/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int count, lens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		count = (*n1 - '0') + (*n2 - '0');
		count += lens;
		*(r + r_index) = (count % 10) + '0';
		lens = count / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		count = (*n1 - '0') + lens;
		*(r + r_index) = (count % 10) + '0';
		lens = count / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		count = (*n2 - '0') + lens;
		*(r + r_index) = (count % 10) + '0';
		lens = count / 10;
	}

	if (lens && r_index >= 0)
	{
		*(r + r_index) = (lens % 10) + '0';
		return (r + r_index);
	}

	else if (lens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, n1_count = 0, n2_count = 0;

	for (num = 0; *(n1 + num); num++)
		n1_count++;

	for (num = 0; *(n2 + num); num++)
		n2_count++;

	if (size_r <= n1_count + 1 || size_r <= n2_count + 1)
		return (0);

	n1 += n1_count - 1;
	n2 += n2_count - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
