#include <iostream>
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
		int n, m, in, cnt = 0;
		priority_queue<int> pq;
		queue<pair<int, int>> q;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> in;
			q.push(make_pair(i, in));
			pq.push(in);
		}
		while (!q.empty())
		{
			int f, s;
			f = q.front().first;
			s = q.front().second;
			q.pop();
			if (pq.top() == s)
			{
				pq.pop();
				cnt++;
				if (f == m)
				{
					cout << cnt << '\n';
					break;
				}
			}
			else
				q.push(make_pair(f, s));
		}
	}
	return 0;
}