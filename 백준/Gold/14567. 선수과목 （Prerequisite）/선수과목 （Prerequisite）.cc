#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	vector<int> p[1001];
	int cnt[1001] = { 0 };
	int d[1001] = { 0 };
	queue<int> q;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		p[a].push_back(b);
		cnt[b]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!cnt[i])
		{
			q.push(i);
			d[i] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		int a = q.front();
		q.pop();
		for (int j = 0; j < p[a].size(); j++)
		{
			cnt[p[a][j]]--;
			if (!cnt[p[a][j]])
			{
				q.push(p[a][j]);
				d[p[a][j]] = d[a] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		cout << d[i] << ' ';
	return 0;
}