/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
#include <stdio.h>

/**
 * rot13 - This is our function
 * @s: this is to make the changes
 *
 * Return: This is the pointer
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		while (((s[a] >= 'a' && s[a] <= 'm') || (s[a] >= 'A' && s[a] <= 'M')))
		{
			s[a] += 13;
			a++;
		}
		if ((s[a] >=  'n' && s[a] <= 'z') || (s[a] >=  'N' && s[a] <= 'Z'))
			s[a] -= 13;
		a++;
	}
	return (s);
}

