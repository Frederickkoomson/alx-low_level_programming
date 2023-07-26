/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
* is_sep - check if a char is a seperator.
* @s: the char to test.
*
* Return: 1 if seperator is found else 0
*/
int is_sep(char s)
{
	char count[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int num = 0;

	while (count[num] != '\0')
	{
		if (s == count[num])
			return (1);
		num++;
	}
	return (0);
}

/**
* cap_string - This function capitalizes all words of a string.
* @s: sring to be processed.
*
* Return: pointer to the modified string.
*/

char *cap_string(char *s)
{
	int count;
	int num;

	count = 1;
	num = 0;
	while (s[num] != '\0')
	{
		if (count == 1 && (s[num] >= 'a' && s[num] <= 'z'))
		{
			s[num] -= 32;
			count = 0;
		}
		count = is_sep(s[num]);
		num++;
}
	return (s);
}
