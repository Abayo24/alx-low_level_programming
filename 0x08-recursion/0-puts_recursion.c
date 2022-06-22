#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: success 1, -1 error
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
