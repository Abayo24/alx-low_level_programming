#include <stdio.h>

int main(void)
{
        int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	getchar();
	return (0);
}
