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
	vector<int> result;
	queue<int> pq;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, s;
		cin >> s >> a;
		for (int j = 0; j < s - 1; j++)
		{
			int b;
			cin >> b;
			p[a].push_back(b);
			cnt[b]++;
			a = b;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (!cnt[i])
			pq.push(i);
	}
	for (int i = 1; i <= n; i++)
	{
		if (pq.empty())
			break;
		int a = pq.front();
		result.push_back(a);
		pq.pop();
		for (int j = 0; j < p[a].size(); j++)
		{
			cnt[p[a][j]]--;
			if (!cnt[p[a][j]])
				pq.push(p[a][j]);
		}
	}
	if (result.size() != n)
		cout << 0 << '\n';
	else
	{
		for (int i = 0; i < n; i++)
			cout << result[i] << '\n';
	}
	return 0;
}