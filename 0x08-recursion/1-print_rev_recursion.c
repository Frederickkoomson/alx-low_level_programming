/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print in reverse.
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, return */
	if (*s == '\0')

		return;
	_print_rev_recursion((s + 1));
	_putchar(*s);
}

