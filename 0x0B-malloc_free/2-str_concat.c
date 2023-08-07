/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - this function concatenates two strings.
 * @s1: string 1/2 to concat.
 * @s2: string 2/2 to concat.
 *
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int num, count, digit;
	char *array;

	num = count = 0;
	if (s1 != NULL)
		for (num = 0; s1[num]; num++)
			;
	if (s2 != NULL)
		for (count = 0; s2[count]; count++)
			;

	array = malloc(sizeof(char) * (num + count + 1));
	if (array == NULL)
		return (NULL);

	digit = 0;
	while (digit < (num + count))
	{
		if (digit < num)
			array[digit] = s1[digit];
		else
			array[digit] = s2[digit - num];

		digit++;
	}
	array[digit] = 0;

	return (array);
}

