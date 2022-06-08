#include <stdio.h>

/**
 * main - prints fibonacci
 * Return: 0(success)
 */

int main()
{
	int f0 = 1;
	int f1 = 2;

	for (int i = 1; i <=50; i++)
	{
		printf("%d\n", f1);
		int f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
	}
	return (0);
}
