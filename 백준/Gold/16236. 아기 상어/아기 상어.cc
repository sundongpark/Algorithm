#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> board;
vector<vector<int>> v;
vector<vector<int>> d;
int n;
int sx, sy;
const int dx[] = { 1, 0, -1, 0 };
const int dy[] = { 0, 1, 0, -1 };

int shark_size = 2;
int shark_exp = 2;

int dist(int x1, int y1, int x2, int y2)
{
	return abs(x1 - x2) + abs(y1 - y2);
}

bool is_out(int x, int y)
{
	return (x < 0 || y < 0 || x >= n || y >= n);
}

int move()
{
	int cx = sx;
	int cy = sy;

	int min_dist = 9999;

	v.assign(n, vector<int>(n, 0));
	d.assign(n, vector<int>(n, -1));

	queue<pair<int, int>> q;
	v[cx][cy] = 1;
	d[cx][cy] = 0;

	q.push({ cx,cy });

	while (!q.empty())
	{
		cx = q.front().first;
		cy = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int nx = cx + dx[i];
			int ny = cy + dy[i];
			if (is_out(nx, ny))
				continue;
			if (!v[nx][ny] && board[nx][ny] <= shark_size) // 안 가봤고 지나갈 수 있다
			{
				v[nx][ny] = 1;
				d[nx][ny] = d[cx][cy] + 1;
				q.push({ nx,ny });
				// 가장 가까운 물고기
				if (board[nx][ny] > 0 && board[nx][ny] < shark_size && min_dist >= d[nx][ny])
				{
					if (min_dist == d[nx][ny])
					{
						if (sx > nx)
						{
							sx = nx;
							sy = ny;
							min_dist = d[nx][ny];
						}
						else if (sx == nx)
						{
							if (sy > ny)
							{
								sx = nx;
								sy = ny;
								min_dist = d[nx][ny];
							}
						}
					}
					else
					{
						sx = nx;
						sy = ny;
						min_dist = d[nx][ny];
					}
				}

			}
		}
	}

	return min_dist; // 목적지까지의 시간
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	board.assign(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 9)
			{
				board[i][j] = 0;
				sx = i;
				sy = j;
			}
		}
	}

	int t = 0;
	while (true)
	{
		int res = move();

		if (res > 999) // 가는 방법이 없으면 호출
			break;
		else
		{
			board[sx][sy] = 0;

			shark_exp--;
			if (shark_exp == 0)
			{
				shark_size++;
				shark_exp = shark_size;
			}
			
			t += res;
		}

	}
	cout << t << '\n';
	return 0;
}