#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

vector<vector<int>> board;
vector<vector<int>> visited;
vector<vector<int>> dist;
int n, m;

const int dx[] = { 1, 0, -1, 0 };
const int dy[] = { 0, 1, 0, -1 };

bool is_out(int cx, int cy)
{
	return (cx < 0 || cx >= n || cy < 0 || cy >= m);
}

int bfs(int cx, int cy)
{
	queue<pair<int, int>> q;
	visited[cx][cy] = 1;
	dist[cx][cy] = 1;
	q.push({ cx, cy });

	while (!q.empty())
	{
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = cx + dx[i];
			int ny = cy + dy[i];
			if (is_out(nx, ny)) // 벗어나면
				continue;
			if (board[nx][ny] && !visited[nx][ny]) // 길이고 안 가봤으면
			{
				visited[nx][ny] = 1;
				q.push({ nx, ny });
				dist[nx][ny] = dist[cx][cy] + 1;
			}
		}

	}

	return dist[n - 1][m - 1];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	board.assign(n, vector<int>(m));
	visited.assign(n, vector<int>(m));
	dist.assign(n, vector<int>(m));

	for (int i = 0; i < n; i++)
	{
		string row;
		cin >> row;
		for (int j = 0; j < m; j++)
			board[i][j] = row[j] - '0';
	}

	cout << bfs(0, 0) << '\n';
	return 0;
}