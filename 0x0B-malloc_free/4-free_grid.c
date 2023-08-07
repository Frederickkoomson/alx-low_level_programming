/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up the memory of a 2d array
 * @grid: target memory to free
 * @height: size of array.
 *
 */
void free_grid(int **grid, int height)
{
	int num;

	if (grid == NULL || height <= 0)
		return;
	for (num = 0; num < height; num++)
		free(grid[(height - 1) - num]);
	free(grid);
}

