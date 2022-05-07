#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int h, w, n, j;
		j = 1;
		cin >> h >> w >> n;
		while (n > h)
		{
			n -= h;
			j++;
		}
		cout << n * 100 + j << '\n';
	}
	return 0;
}