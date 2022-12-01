#include <stdio.h>

int main() 
{
	int array[10], count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	int min = array[0], max = array[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (min >= array[i])
		{
			min = array[i];
		}
		if (max <= array[i])
		{
			max = array[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] == min || array[i] == max)
		{
			array[i] = 0;
			count++;
		}
	}
	double total = ((array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9]) * 1.0) / ((10 - count) * 1.0);

	printf("%lf", total);

	return 0;
}