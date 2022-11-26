#include <stdio.h>

static int listdaysnorm[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
static int listdaysleap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

int main()
{
	int yr, mon, dy, result;
	scanf("%d-%d-%d", &yr, &mon, &dy);
	result = dy;
	if (!((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0))
	{
		for (int i = 0; i < mon - 1; i++)
		{
			result += listdaysnorm[i];
		}
	}
	else
	{
		for (int i = 0; i < mon - 1; i++)
		{
			result += listdaysleap[i];
		}
	}
	printf("%d", result);
}