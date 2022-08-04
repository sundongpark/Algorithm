#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n, m;
		set<int> s;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			s.insert(k);
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			int k;
			cin >> k;
			if (s.find(k) == s.end())
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
	}
	return 0;
}
