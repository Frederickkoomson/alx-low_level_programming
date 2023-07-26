/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _strncat - This is the function that will be added to it
 *
 * @dest: This is the function that will be added
 * @src: This is where we will be added to @dest.
 * @n: This will be the position by copying it to 'n'
 *
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num_01 = 0;
	int num_02 = 0;

	while (dest[num_01] != '\0')
	{
		num_01++;
	}

	while (num_02 < n && src[num_02] != '\0')
	{
		dest[num_01 + num_02] = src[num_02];
		num_02++;

	}
	dest[num_01 + num_02] = '\0';

	return (dest);
}

