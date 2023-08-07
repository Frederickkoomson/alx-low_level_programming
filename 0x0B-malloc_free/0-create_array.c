/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 *
 * Return: An array of charactures.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *array;

	if (size <= 0)
		return (0);
	array = malloc(size);
	if (array == 0)
		return (0);
	num = 0;
	while (num < size)
	{
		array[num] = c;
		num++;
	}
	return (array);
}

