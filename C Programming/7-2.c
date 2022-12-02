#include <stdio.h>
#include <malloc.h>


void sort(int* a, int n);

int main()
{
	int n;
	scanf("%d", &n);
	
	int* array = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	sort(array, n);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", array[i]);
	}

	printf("\n");
	return 0;
}

void sort(int* a, int n)
{
	int mid;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j = j++)
		{
			if (*(a+i) >= *(a+j))
			{
				mid = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = mid;
			}
		}
	}
}