#include <stdio.h>

int main()
{
	char str[10];
	for (int i = 0; i < 10; i++)
	{
		str[i] = getchar();
		if (str[i] == '\n')
			break;
	}
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[j] == i + 48)
				printf("%d", i);
		}
	}
	return 0;
}