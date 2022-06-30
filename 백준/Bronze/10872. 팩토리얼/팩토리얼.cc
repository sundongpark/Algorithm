#include <iostream>

using namespace std;
int fac(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return fac(n - 1) * n;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << fac(n);
	return 0;
}
