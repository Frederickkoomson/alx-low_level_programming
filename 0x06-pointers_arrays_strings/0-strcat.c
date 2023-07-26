/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _strcat - This is thefunction that will take the code
 * @dest: This is the sring that will be modified
 * @src: This is the part will be added to teh @dest
 *
 * Return: This will return to pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int num_01 = 0;
	int num_02 = 0;

	while (dest[num_01] != '\0')
	{
		num_01++;
	}

	while (src[num_02] != '\0')
	{
		dest[num_01 + num_02] = src[num_02];
		num_02++;

	}
	dest[num_01 + num_02] = '\0';

	return (dest);
}

