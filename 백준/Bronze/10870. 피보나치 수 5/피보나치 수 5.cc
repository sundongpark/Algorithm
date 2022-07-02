#include <iostream>

using namespace std;
int pi(int n)
{
	if (n == 1)
		return 1;
	else if (n == 0)
		return 0;
	else
		return pi(n - 1) + pi(n - 2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << pi(n);
	return 0;
}
