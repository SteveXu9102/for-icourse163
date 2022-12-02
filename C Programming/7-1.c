#include <stdio.h>

void Move(int* Loc);

int main()
{
	int m, array[10] = { 1,2,3,4,5,6,7,8,9,10 };

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		Move(array);
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%3d", array[i]);
	}
	return 0;
}

void Move(int* Loc)
{
	int a = *(Loc + 9);
	for (int i = 9; i > 0; i--)
	{
		*(Loc + i) = *(Loc + i - 1);
	}
	*Loc = a;
}