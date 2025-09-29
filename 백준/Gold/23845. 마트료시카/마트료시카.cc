#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
long long res = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	vector<int> a(n);
	vector<int> c(100001);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[a[i]]++;	// 몇 개인지
	}

	sort(a.begin(), a.end(), greater<int>());

	for (int i = 0; i < n; i++)
	{
		if (c[a[i]]) // 있으면
		{
			int q, cnt;
			q = a[i];
			cnt = 0;
			int j = q;
			while (c[j])
			{
				cnt++;
				c[j]--;
				j--;
			}
			res += (long long)q * cnt;
		}
	}

	
	cout << res << '\n';

	return 0;
}
