#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0)
			break;
		if (a > b && a > c)
		{
			if (a * a == b * b + c * c)
				cout << "right\n";
			else
				cout << "wrong\n";
		}
		else if (b > a && b > c)
		{
			if (b * b == a * a + c * c)
				cout << "right\n";
			else
				cout << "wrong\n";
		}
		else
		{
			if (c * c == a * a + b * b)
				cout << "right\n";
			else
				cout << "wrong\n";
		}
	}
	return 0;
}