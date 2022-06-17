#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int d, h, m;
	int time;
	cin >> d >> h >> m;
	time = (d - 11) * 24 * 60 + (h - 11) * 60 + m - 11;
	if (time < 0)
		time = -1;
	cout << time;
	return 0;
}
