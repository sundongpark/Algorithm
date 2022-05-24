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
	vector<int> p[32001];
	int cnt[32001] = { 0 };
	int result[32001];
	priority_queue<int, vector<int>, greater<int>> pq;
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
			pq.push(i);
	}
	for (int i = 1; i <= n; i++)
	{
		int a = pq.top();
		result[i] = a;
		pq.pop();
		for (int j = 0; j < p[a].size(); j++)
		{
			cnt[p[a][j]]--;
			if (!cnt[p[a][j]])
				pq.push(p[a][j]);
		}
	}
	for (int i = 1; i <= n; i++)
		cout << result[i] << ' ';
	return 0;
}