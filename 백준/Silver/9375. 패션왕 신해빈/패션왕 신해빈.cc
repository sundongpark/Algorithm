#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		int ans = 1;
		unordered_map<string, int> m;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string a, b;
			cin >> a >> b;
			m[b]++;
		}
		for (auto& Iter : m)
		{
			if (Iter.second > 0)
				ans *= (Iter.second + 1);
		}
		cout << ans - 1 << '\n';
	}
	return 0;
}
