#include <iostream>
using namespace std;

int solve(int x1, int y1, int r1, int x2, int y2, int r2)
{
	if (x1 == x2 && y1 == y2)
	{
		if (r1 == r2)
			return -1;
		else
			return 0;
	}
	else
	{
		int dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		if (dist == (r1 + r2) * (r1 + r2) || dist == (r1 - r2) * (r1 - r2))
			return 1;
		else if (dist < (r1 + r2) * (r1 + r2) && dist > (r1 - r2) * (r1 - r2))
			return 2;
		else
			return 0;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		cout << solve(x1, y1, r1, x2, y2, r2) << "\n";
	}
	return 0;
}