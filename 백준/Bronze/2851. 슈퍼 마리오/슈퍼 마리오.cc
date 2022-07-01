#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a[10], sum = 0;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum >= 100)
		{
			if (sum - 100 > 100 - (sum - a[i]))
				sum -= a[i];
			break;
		}
	}
	cout << sum;
	return 0;
}
