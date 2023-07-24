/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * *_strcpy - This is where the program is going to be doing
 * @dest: character to test
 * @src: This is the 2nd one
 * Return: This section will always be 0 succes
 */
char *_strcpy(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;

	while (src[len1] != '\0')
	{
		len1++;
	}

	for (len2 = 0; len2 < len1; len2++)
	{
		dest[len2] = src[len2];
	}
	dest[len2] = '\0';

	return (dest);
}
