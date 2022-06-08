#include <stdio.h>

/**
 * main - prints fibonacci
 * Return: 0(success)
 */

int main()
{
	int f0 = 1;
	int f1 = 2;
	int i;
	int f2

	for (i = 3; i <=50; i++)
	{
		printf("%d\n", f1);
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
	}
	return (0);
}
