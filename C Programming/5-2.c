
//哥德巴赫猜想

#include <stdio.h>
#include <math.h>

int judgePrime(int n); //声明质数判断函数

int main()
{
	int count = 0;
	for (int i = 4; i <= 2000; i += 2) //从4开始遍历2000以内的所有偶数
	{
		for (int j = 2; j <= i; j++)
		{
			if (judgePrime(j) && judgePrime(i - j)) //将该数拆分成两数之和并分别判断是否为质数
			{
				printf("%4d=%4d+%4d", i, j, i - j); //若满足条件，打印该偶数
				count += 1; //对每行已经打印的偶数的数量进行统计
				if (count == 4) //一行有10个偶数时进行换行
				{
					printf("\n");
					count = 0;
				}
				else
				{
					printf(" ");
				}
				break;
			}
		}
	}
	return 0;
}

int judgePrime(int n)
{
	int max = (int)sqrt(n), i;
	for (i = 2; i <= max; i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i <= max)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
