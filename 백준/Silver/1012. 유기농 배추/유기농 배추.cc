#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
vector<vector<int>> board;
int n, m;

const int dx[] = { 1, 0, -1, 0 };
const int dy[] = { 0, 1, 0, -1 };

bool is_out(int cx, int cy)
{
	return (cx < 0 || cx >= m || cy < 0 || cy >= n);
}

void dfs(int cx, int cy)
{
	board[cy][cx] = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = cx + dx[i];
		int ny = cy + dy[i];
		if (is_out(nx, ny))
			continue;
		if (board[ny][nx])
			dfs(nx, ny);
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++)
	{
		int k;
		cin >> m >> n >> k;
		board.assign(n, vector<int>(m, 0));
		cnt = 0;

		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < m; x++)
			{
				if (board[y][x])
				{
					cnt++;
					dfs(x, y);
				}
			}
				
		}
		cout << cnt << '\n';
	}


	return 0;
}