#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int dp[50001];

	scanf("%d", &n);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = 99999;
		for (int j = 0; j < (int)(sqrt(i) + 1); j++)
		{
			if (i - j * j >= 0)
				dp[i] = dp[i - j * j] + 1 < dp[i] ? dp[i - j * j] + 1 : dp[i];
		}
	}
	printf("%d", dp[n]);

	return 0;
}