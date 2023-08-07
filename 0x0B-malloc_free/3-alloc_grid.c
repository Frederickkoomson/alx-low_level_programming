/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of
 * integers.
 * @width: colums.
 * @height: rows.
 *
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int num, count, digit;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(*array) * height);
	if (array == NULL)
		return (NULL);
	for (digit = 0; digit < height; digit++)
	{
		array[digit] = (int *)malloc(sizeof(int) * width);
		if (array[digit] == NULL)
		{
			while (digit--)
				free(array[digit]);
			free(array);
			return (NULL);
		}
	}

	for (num = 0; num < height; num++)
		for (count = 0; count < width; count++)
			array[num][count] = 0;

	return (array);
}
