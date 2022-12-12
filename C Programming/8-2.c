#include <stdio.h>
#include <string.h>

int main()
{
	char input[100] = {"\0"};
	gets(input);
	int length = strlen(input);
    prune:
	for (int i = 0; i < length; i++)
	{
		if (input[i]>57 || input[i]<48)
		{
			for (int j = i; j <= length; j++)
			{
				input[j] = input[j + 1];
			}
			length = strlen(input);
		}
	}
    for (int i = 0; i < strlen(input); ++i)
    {
        if (input[i]>57 || input[i]<48) goto prune;
    }
    printf("%s\n", input);
	return 0;
}