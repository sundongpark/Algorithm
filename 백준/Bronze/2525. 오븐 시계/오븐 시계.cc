#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	b += c;
	while (b >= 60)
	{
		b -= 60;
		a++;
	}
	a = a < 24 ? a : a - 24;
	cout << a << ' ' << b;
	return 0;
}