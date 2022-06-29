#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	set<int> sum;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		sum.insert(k);
	}
	for (int i = 0; i < m; i++)
	{
		int k;
		cin >> k;
		sum.insert(k);
	}
	cout << sum.size() * 2 - (n + m);
	return 0;
}
