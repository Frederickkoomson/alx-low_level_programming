#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 * _isdigit - This is a function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 * @c: This is to define the character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
