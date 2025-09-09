#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, f;
	cin >> n >> f;

	n = n / 100 * 100;
	int i = 0;
	for (i = 0; i < 100; i++)
		if (!((n + i) % f))
			break;

	cout << setw(2) << setfill('0') << i;

	return 0;
}