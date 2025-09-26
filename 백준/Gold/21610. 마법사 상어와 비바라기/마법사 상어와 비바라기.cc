#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> water;
vector<pair<int,int>> cloud;
vector<vector<int>> cloud_check;

const int dx[] = { 0, 0, -1, -1,-1,0,1,1,1 };
const int dy[] = { 0, -1, -1, 0,1,1,1,0,-1 };

const int ckx[] = { -1, -1, 1, 1 };
const int cky[] = { -1, 1, -1, 1 };

void init_cloud()
{
	cloud.push_back({ n - 1,0 });
	cloud.push_back({ n - 1,1 });
	cloud.push_back({ n - 2,0 });
	cloud.push_back({ n - 2,1 });
}

void move(int d, int s)
{
	for (auto& c : cloud)
	{
		c.first = ((c.first + dx[d] * s) % n + n) % n;
		c.second = ((c.second + dy[d] * s) % n + n) % n;
	}
}

void rain()
{
	cloud_check.assign(n, vector<int>(n, 0));
	for (const auto& c : cloud)
	{
		water[c.first][c.second]++; // 비가 오고
		cloud_check[c.first][c.second] = 1;

	}
	for (const auto& c : cloud)
	{
		int cnt = 0;
		for (int i = 0; i < 4; i++)
		{
			int nx = c.first + ckx[i];
			int ny = c.second + cky[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && water[nx][ny])
				cnt++;
		}
		water[c.first][c.second] += cnt;
	}
	cloud.clear(); // 사라진다


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (water[i][j] >= 2 && !cloud_check[i][j])
			{
				cloud.push_back({ i,j });
				water[i][j] -= 2;
			}
		}
	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	water.assign(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> water[i][j];
	}

	init_cloud();

	// 이동
	for (int i = 0; i < m; i++)
	{
		int d, s;
		cin >> d >> s;

		move(d, s);
		rain();

	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			sum += water[i][j];
	}
	cout << sum << '\n';

	return 0;
}