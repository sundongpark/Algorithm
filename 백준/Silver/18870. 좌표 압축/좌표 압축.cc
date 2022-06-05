#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	map<int, int> m;
	cin >> n;
	vector<int> vt(n);
	for (int& v : vt)
	{
		int a;
		cin >> a;
		v = a;
		m[v] = 0;
	}
	int min = 0;
	for (auto& Iter: m)
		Iter.second = min++;
	for (const int& v : vt)
		cout << m[v] << ' ';
	return 0;
}
