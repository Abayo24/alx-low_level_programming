#include "main.h"

/**
 * main - prints array _putchar
 * Return: 0
 */

int main(void)
{
	char text[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

