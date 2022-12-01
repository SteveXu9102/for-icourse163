//fun

#include <stdio.h>

int fun(int a, int b, int r[]);

int main()
{
	int a, b, r[1000] = {0};
	scanf("%d%d", &a, &b);
	int c = fun(a, b, r);
	for (int i = 0; i < c; i++)
	{
		printf("%d", r[i]);
		if (i == (c - 1))
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}

int fun(int a, int b, int r[]) 
{
	int count = 0;
	for (int i = a; i <= b; i++)
	{
		if (((i%11==0)||(i%7==0))&&(i%77!=0))
		{
			r[count] = i;
			count++;
		}
	}
	return count;
}