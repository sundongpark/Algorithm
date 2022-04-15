#include <iostream>

int main()
{
	int n, x;
	std::cin >> n;
	int dp[1000001], num[1000001];
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i < n + 1; i++)
	{
		dp[i] = dp[i - 1] + 1;
		x = i - 1;
		if (i % 3 == 0)
		{
			if (dp[(int)(i / 3)] + 1 < dp[i])
			{
				x = i / 3;
				dp[i] = dp[(int)(i / 3)] + 1;
			}
		}
		if (i % 2 == 0)
		{
			if (dp[(int)(i / 2)] + 1 < dp[i])
			{
				x = i / 2;
				dp[i] = dp[(int)(i / 2)] + 1;
			}
		}
		num[i] = x;
	}	
	std::cout << dp[n] << '\n';

	int j = n;
	while (j > 1)
	{
		std::cout << j << ' ';
		j = num[j];
	}
	std::cout << 1;
	return 0;
}