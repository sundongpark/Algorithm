#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	if (b == c)
		cout << -1;
	else
	{
		int r = a / (c - b) + 1;
		if (r <= 0)
			cout << -1;
		else
			cout << r;
	}
	return 0;
}