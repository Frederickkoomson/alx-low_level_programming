/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to measure.
 *
 * Return: Length of the string as an integer.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive call: Move to the next character and call the function */
	return (1 + _strlen_recursion(s + 1));

}
