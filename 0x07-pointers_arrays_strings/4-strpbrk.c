/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int num, len;

	num = 0;
	len = 0;
	while (s[num] != '\0')
	{
		len = 0;
		while (accept[len] != '\0')
		{
			if (s[num] == accept[len])
				return ((s + num));
			len++;
		}
		num++;
	}
	return (NULL);
}

