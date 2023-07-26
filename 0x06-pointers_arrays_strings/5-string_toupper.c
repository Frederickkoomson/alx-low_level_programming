/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * string_toupper - This will be our starting point
 * @s: This is a string
 *
 * Return: This will retunr a pointer
 */
char *string_toupper(char *s)
{
	int num;

	num = 0;
	while (s[num] != '\0')
	{
		if (s[num] >= 'a' && s[num] <= 'z')
			s[num] -= 32;
		num++;
	}
	s[num] = '\0';

	return (s);
}


