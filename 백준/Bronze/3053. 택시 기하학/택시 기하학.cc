#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << 3.14159265358979 * r * r << '\n' << 2.0 * r * r;
	return 0;
}