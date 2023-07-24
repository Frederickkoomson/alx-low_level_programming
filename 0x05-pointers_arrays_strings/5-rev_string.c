/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * rev_string - This is where the program is going to be doing
 * @s: character to test
 * Return: This section will always be 0 succes
 */
void rev_string(char *s)
{
	char swap;
	int num1, num2, len1;

	num1 = 0;
	num2 = 0;

	while (s[num2] != '\0')
	{
		num2++;
	}

	len1 = num2 - 1;

	for (num1 = 0; num1 < num2 / 2; num1++)
	{
		swap = s[num1];
		s[num1] = s[len1];
		s[len1--] = swap;
	}
}
