#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n, m, a, b;
		cin >> n >> m;
		for (int i = 1; i <= m; i++)
			cin >> a >> b;
		cout << n - 1 << '\n';
	}
	return 0;
}