#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	long long ans = 0, max = 0;
	map<long long, int> mp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		mp[a]++;
	}
	for (auto m:mp)
	{
		if (m.second > max)
		{
			max = m.second;
			ans = m.first;
		}
	}
	cout << ans;
	return 0;
}