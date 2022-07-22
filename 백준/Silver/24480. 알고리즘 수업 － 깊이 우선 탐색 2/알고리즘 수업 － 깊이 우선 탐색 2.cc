#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[100001] = { false };
vector<int> v[100001];
int result[100001] = { 0 };
int cnt = 0;
void dfs(int r)
{
	result[r] = ++cnt;
	visited[r] = true;
	for (int i = 0; i < v[r].size(); i++)
	{
		if (!visited[v[r][i]])
			dfs(v[r][i]);
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
	dfs(r);
	for (int i = 1; i <= n; i++)
		cout << result[i] << '\n';
	return 0;
}