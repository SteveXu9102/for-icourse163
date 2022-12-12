#include <stdio.h>

int main()
{
	char s[] = "0123456789ABCDEF", weight[8] = { "\0" }, result[8] = {"\0"};
	long input;
	int count = 0;
	scanf("%ld", &input);

	do
	{
		weight[count] = s[input % 16];
		input /= 16;
		count++;
	} while (input%16!=0);
	for (int i = count - 1; i >= 0; i--)
	{
		result[count - 1 - i] = weight[i];
	}
	printf("%s\n", result);

	return 0;
}