#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int dp[1001][1001];
    cin >> n >> k;
    dp[0][0] = 1;
    for (int i = 1; i < 1001; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }
    cout << dp[n][k];
    return 0;
}