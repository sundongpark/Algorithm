#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[3][3];
	pair<int, int> d[9] = { make_pair(-1,-1), make_pair(-1,0), make_pair(-1,1), make_pair(0,-1), make_pair(0,1), make_pair(1,1), make_pair(1,-1), make_pair(1,0) };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 9)
			{
				for (int k = 0; k < 9; k++)
				{
					if (i + d[k].first >= 0 && i + d[k].first < 3 && j + d[k].second < 3 && j + d[k].second >= 0)
					{
						if (arr[i + d[k].first][j + d[k].second] != 9)
							arr[i + d[k].first][j + d[k].second]++;
					}
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
