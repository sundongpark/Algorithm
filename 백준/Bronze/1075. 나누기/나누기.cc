#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, f;
	cin >> n >> f;
	int m = n - n % 100;
	printf("%02d", ((m + f - 1) / f) * f % 100);

	return 0;
}