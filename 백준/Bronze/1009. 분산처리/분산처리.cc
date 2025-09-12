#include <iostream>
using namespace std;

int solve(int a, int b)
{
	int r = 1;
	for (int i = 0; i < b; i++)
		r = r * a % 10;
	if (!r)
		r = 10;
	return r;
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
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << "\n";
	}
	return 0;
}