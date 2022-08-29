#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x, n, sum = 0;
	cin >> x >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == x)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}