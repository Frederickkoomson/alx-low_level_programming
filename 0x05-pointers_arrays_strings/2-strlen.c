/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * _strlen - This is where the program is going to be doing
 * @s: THis is the pointer
 * Return: This section will always be 0 succes
 */
int _strlen(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	return (num);
}
