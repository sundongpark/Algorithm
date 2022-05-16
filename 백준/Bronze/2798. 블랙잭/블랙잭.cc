#include <iostream>
using namespace std;
int main()
{
	int n, m, ans = 0;
	int card[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> card[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (card[i] + card[j] + card[k] <= m)
					ans = max(ans, card[i] + card[j] + card[k]);
			}
		}
	}
	cout << ans;
	return 0;
}