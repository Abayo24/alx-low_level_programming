#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return: 0
*/

int main(void)
{
	int n = 48;
	int l = 97;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
