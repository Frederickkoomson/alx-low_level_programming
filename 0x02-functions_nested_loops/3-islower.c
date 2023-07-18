/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * _islower - This is where the program is going to be doing
 * @alphabets: character to test
 * Return: This section will always be 0 succes
 */
int _islower(int alphabets)
{
	if (alphabets >= 'a' && alphabets <= 'z')
		return (1);
	else
		return (0);

}
