#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool visited[100001] = { false };
vector<int> v[100001];
queue<int> q;
int result[100001] = { 0 };
int cnt = 0;

void bfs(int r) 
{
	result[r] = ++cnt;
	visited[r] = true;
	q.push(r);
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for (auto i : v[u])
			if (!visited[i])
			{
				visited[i] = true;
				result[i] = ++cnt;
				q.push(i);
			}
		}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, r, a, b;
	cin >> n >> m >> r;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(v[i].begin(), v[i].end(), [](int a, int b) {return a > b; });
	bfs(r);
	for (int i = 1; i <= n; i++)
		cout << result[i] << '\n';
	return 0;
}