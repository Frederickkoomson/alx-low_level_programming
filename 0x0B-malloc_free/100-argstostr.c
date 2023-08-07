/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *array, *sum;
	int num, count, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (num = 0; num < ac; num++)
	{
		sum = *(av + num);
		for (count = 0; sum[count]; count++)
		{
			len++;
		}
		len += 1;
	}
	array = malloc(sizeof(char) * len + 1);
	len = 0;
	for (num = 0; num < ac; num++)
	{
		sum = *(av + num);
		for (count = 0; sum[count]; ++count)
		{
			array[len] = sum[count];
			len++;
		}
			array[len] = '\n';
			len++;
	}
	array[len] = '\0';
	return (array);
}


