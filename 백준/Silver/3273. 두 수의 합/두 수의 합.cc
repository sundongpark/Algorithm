#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, min, l, r, sum, cnt, x;
	int a[100001];
	min = 2000000001;
	cnt = 0;
	cin >> n;
	l = 0;
	r = n - 1;
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		a[i] = in;
	}
	cin >> x;
	sort(a, a + n);
	while (l < r)
	{
		sum = a[l] + a[r];
		if (sum == x)
		{
			cnt++;
			l++;
		}
		else if (sum > x)
			r--;
		else if (sum < x)
			l++;
	}
	cout << cnt;

	return 0;
}