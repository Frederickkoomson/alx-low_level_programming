/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This will print the results that will be adjusted
 *                the count position and the length as well,
 *                then displaying the right answer.
 * @b: This is the buffer that will be the results
 * @size: This is the results that wil be out
 */
void print_buffer(char *b, int size)
{
	int count, len_01;

	for (count = 0; count < size; count += 10)
	{
		printf("%08x: ", count);

		for (len_01 = 0; len_01 < 10; len_01++)
		{
			if ((len_01 + count) >= size)
				printf("  ");

			else
				printf("%02x", *(b + len_01 + count));

			if ((len_01 % 2) != 0 && len_01 != 0)
				printf(" ");
		}

		for (len_01 = 0; len_01 < 10; len_01++)
		{
			if ((len_01 + count) >= size)
				break;

			else if (*(b + len_01 + count) >= 31 &&
				 *(b + len_01 + count) <= 126)
				printf("%c", *(b + len_01 + count));

			else
				printf(".");
		}

		if (count >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
