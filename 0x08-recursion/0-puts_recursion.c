/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * _puts_recursion - prints a string follow by a new line. recursively.
 * @s: pointer to the string to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}

