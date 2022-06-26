#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, sum = 0;
	unordered_map<string, int> um;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		um[a]++;
	}
	for (int i = 0; i < m; i++)
	{
		string a;
		cin >> a;
		sum += um[a];
	}
	cout << sum;
	return 0;
}
