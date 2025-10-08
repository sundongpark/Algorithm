#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int min_x = 987654321, min_y = 987654321;
	int max_x = -987654321, max_y = -987654321;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		min_x = min(min_x, x);
		min_y = min(min_y, y);
		max_x = max(max_x, x);
		max_y = max(max_y, y);
	}
	if (n == 0)
		cout << 0 << '\n';
	else
		cout << (max_x - min_x) * (max_y - min_y) << '\n';

	return 0;
}
