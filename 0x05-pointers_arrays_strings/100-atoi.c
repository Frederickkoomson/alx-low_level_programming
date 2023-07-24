/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * _atoi - This is where the program is going to be doing
 * @s: character to test
 * Return: This section will always be 0 succes
 */
int _atoi(char *s)
{
	int num1, num2, num3, len, num4, numbers;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	len = 0;
	num4 = 0;
	numbers = 0;

	while (s[len] != '\0')
		len++;

	while (num1 < len && num4 == 0)
	{
		if (s[num1] == '-')
			++num2;

		if (s[num1] >= '0' && s[num1] <= '9')
		{
			numbers = s[num1] - '0';
			if (num2 % 2)
				numbers = -numbers;
			num3 = num3 * 10 + numbers;
			num4 = 1;
			if (s[num1 + 1] < '0' || s[num1 + 1] > '9')
				break;
			num4 = 0;
		}
		num1++;
	}

	if (num4 == 0)
		return (0);

	return (num3);
}
