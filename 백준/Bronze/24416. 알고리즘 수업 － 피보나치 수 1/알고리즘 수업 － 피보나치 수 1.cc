#include <iostream>

using namespace std;
int fi(int n)
{
	if (n == 1)
		return 1;
	else if (n == 0)
		return 0;
	else
		return fi(n - 1) + fi(n - 2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << fi(n) << ' ' << n - 2;
	return 0;
}
