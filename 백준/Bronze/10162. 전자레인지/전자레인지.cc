#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	if (t % 10)
	{
		cout << -1;
	}
	else
	{
		int a = t / 300;
		int b = (t % 300) / 60;
		int c = (t % 60) / 10;

		cout << a << " " << b << " " << c;
	}
	return 0;
}