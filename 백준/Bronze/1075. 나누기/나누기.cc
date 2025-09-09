#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, f;
	cin >> n >> f;
	printf("%02d", (((n - n % 100) + f - 1) / f) * f % 100);

	return 0;
}