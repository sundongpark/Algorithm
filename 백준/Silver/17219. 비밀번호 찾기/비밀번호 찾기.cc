#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	unordered_map<string, string> hash;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		hash.insert(make_pair(a, b));
	}
	for (int i = 0; i < m; i++)
	{
		string a;
		cin >> a;
		cout << hash[a] << '\n';
	}
	return 0;
}
