#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, l, r, ans;
	long long s, sum;
	long long a[100000];
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	l = 0;
	r = 0;
	ans = 100001;
	sum = a[0];

	while (l <= r && r < n)
	{
		if (sum >= s)
		{
			ans = min(ans, r - l + 1);
			sum -= a[l++];
		}
		else
			sum += a[++r];
	}
	if (ans == 100001)
		ans = 0;
	cout << ans;
	return 0;
}