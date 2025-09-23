#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	long long res = 0;
	cin >> n >> m;
	vector<int> s(n);
	vector<int> cnt(n);

	cin >> s[0];
	s[0] %= m;
	if (!s[0])
		res++;
	cnt[s[0]]++;

	for (int i = 1; i < n; i++)
	{
		int num;
		cin >> num;
		s[i] = (num + s[i - 1]) % m;
		if (!s[i])
			res++;
		cnt[s[i]]++;
	}
	for (int i = 0; i < m; i++)
	{
		if (cnt[i] > 1)
			res = res + (long long)cnt[i] * (cnt[i] - 1) / 2;
	}
	cout << res << '\n';
	return 0;
}