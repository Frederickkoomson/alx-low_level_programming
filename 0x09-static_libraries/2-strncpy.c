/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _strncpy - This is the function that will be added to it
 *
 * @dest: This is the function that will be added
 * @src: This is where we will be added to @dest.
 * @n: This will be the position by copying it to 'n'
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_01 = 0;

	for (count_01 = 0; count_01 < n && src[count_01] != '\0'; count_01++)
		dest[count_01] = src[count_01];

	for ( ; count_01 < n ; count_01++)
		dest[count_01] = '\0';

	return (dest);
}
