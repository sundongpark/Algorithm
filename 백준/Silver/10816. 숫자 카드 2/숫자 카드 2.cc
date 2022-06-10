#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	unordered_map<int, int> um;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		um[a]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		cout << um[a] << ' ';
	}
	return 0;
}
