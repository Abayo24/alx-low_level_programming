#include <stdio.h>

int main()
{
	long unsigned int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if((i % 5 == 0) || (i % 3 == 0))
		{
			sum += 1;
		}
	}
	 return (sum);
}
