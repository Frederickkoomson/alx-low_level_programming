/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * _isalpha - This is where the program is going to be doing
 * @chars: checking characters
 * Return: This section will always be 0 succes
 */
int _isalpha(int chars)
{
	if ((chars >= 97 && chars <= 122) || (chars >= 65 && chars <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
