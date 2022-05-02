#include <iostream>
using namespace std;

int main()
{
	int n;
	int dp[1000001];

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= 1000000; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
	cin >> n;
	if (n < 0)
	{
		if (n % 2)
			cout << "1\n";
		else
			cout << "-1\n";
		cout << dp[-n];
	}
	else if (n > 0)
	{
		cout << "1\n";
		cout << dp[n];
	}
	else
		cout << "0\n0";
	return 0;
}