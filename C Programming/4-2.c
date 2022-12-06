
#include <math.h>
#include <stdio.h>

int main()
{
	int initial = 100;
	double mid;

	for (int i, count; initial < 1000; initial++)
	{
		mid = (double)sqrt(initial);
		for (i = 2; i <= mid; i++)
		{
			if (initial % i == 0)
			{
				break;
			}
		}
		if (i > mid)
		{
			count += 1;
			printf("%4d", initial);
			if ((count % 8) == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;
}