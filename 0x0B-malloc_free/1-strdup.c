/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdlib.h>
/* #include <stdio.h> */

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str)
{
	int num;
	char *count;

	if (str == 0)
		return (0);
	for (num = 0; str[num]; num++)
		;
	count = malloc(sizeof(char) * (num + 1));
	if (count == 0)
		return (0);
	count[num] = '\0';
		/* printf("%d: %c\n", num, count[num]);*/
	while (num--)
	{
		count[num] = str[num];
		/*printf("%d: %c\n", num, count[num]);*/
	}
	return (count);
}


