/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _strcmp - This is the function that will create
 *
 * @s1: This is to compare the first
 * @s2: the next string to compare next
 *
 * Return: this will be the value
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num] != '\0' && s2[num] != '\0')
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}

	return (s1[num] - s2[num]);
}
