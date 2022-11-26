
//��°ͺղ���

#include <stdio.h>
#include <math.h>

int judgePrime(int n); //���������жϺ���

int main()
{
	int count = 0;
	for (int i = 4; i <= 2000; i += 2) //��4��ʼ����2000���ڵ�����ż��
	{
		for (int j = 2; j <= i; j++)
		{
			if (judgePrime(j) && judgePrime(i - j)) //��������ֳ�����֮�Ͳ��ֱ��ж��Ƿ�Ϊ����
			{
				printf("%4d=%4d+%4d", i, j, i - j); //��������������ӡ��ż��
				count += 1; //��ÿ���Ѿ���ӡ��ż������������ͳ��
				if (count == 4) //һ����10��ż��ʱ���л���
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
