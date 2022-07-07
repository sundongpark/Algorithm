#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout.setf(ios::fixed);
	cout.precision(3);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, cnt = 0;
		int arr[1000];
		cin >> n;
		for (int j = 0; j < n; j++)
			cin >> arr[j];
		float sum = 0;
		for (int j = 0; j < n; j++)
			sum += arr[j];
		sum /= n;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > sum)
				cnt++;
		}
		cout << (float)cnt / n * 100 << "%\n";
	}
	return 0;
}
