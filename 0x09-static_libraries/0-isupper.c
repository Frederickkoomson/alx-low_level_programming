#include "main.h"
/*
 * File: This is the file _isupper.c
 * Author: Frederick B. Koomson
 */

/**
 * _isupper - This is a function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 * @c: This is to define the character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
