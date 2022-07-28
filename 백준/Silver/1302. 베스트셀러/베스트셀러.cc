#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, max = 0;
	string ans;
	map<string, int> mp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a;
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