//闰年
#include <stdio.h>

static int listdaysnorm[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //普通年每月天数
static int listdaysleap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //闰年每月天数

int main()
{
	int yr, mon, dy, result;
	scanf("%d-%d-%d", &yr, &mon, &dy); //按样例格式读取年月日
	result = dy;
	if (!((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)) //判断是否为闰年
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