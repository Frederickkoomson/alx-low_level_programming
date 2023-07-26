/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * leet - I really like the function
 * @s: This is the string to make 1337
 *
 * Return: This is the pointer
 */
char *leet(char *s)
{
	char letters[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int num = 0;
	int count = 0;

	while (s[num] != '\0')
	{
		while (letters[count][0] != '\0')
		{
			if (s[num] == letters[count][0])
				s[num] = letters[count][1];
			count++;
		}
		count = 0;
		num++;
	}
	return (s);
}

