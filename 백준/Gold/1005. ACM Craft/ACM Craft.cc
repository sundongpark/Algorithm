#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n, m, w;
		int time[1001];
		vector<int> p[1001];
		int dp[1001] = { 0 };
		int cnt[1001] = { 0 };
		vector<int> result;
		queue<int> q;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			cin >> time[i];
		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			p[a].push_back(b);
			cnt[b]++;
		}
		cin >> w;
		for (int i = 1; i <= n; i++)
		{
			if (!cnt[i])
			{
				q.push(i);
				dp[i] = time[i];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (q.empty())
				break;
			int a = q.front();
			if (a == w)
				break;
			result.push_back(a);
			q.pop();
			for (int j = 0; j < p[a].size(); j++)
			{
				cnt[p[a][j]]--;
				dp[p[a][j]] = max(dp[p[a][j]], dp[a] + time[p[a][j]]);
				if (!cnt[p[a][j]])
					q.push(p[a][j]);
			}
		}

		cout << dp[w] << '\n';
	}
	return 0;
}