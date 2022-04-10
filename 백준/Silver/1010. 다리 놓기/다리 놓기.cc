#include <iostream>

int main()
{
	int pas[30][30];
	int n, a, b;
	pas[0][0] = 1;
	for (int i = 1; i < 30; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				pas[i][j] = 1;
			else
				pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
		}
	}

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		std::cout << pas[b][a] << '\n';
	}

	return 0;
}