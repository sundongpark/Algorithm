#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	int n;
	vector<pair<int, int>> vt;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		vt.push_back(make_pair(a, b));
	}
	sort(vt.begin(), vt.end(), compare);
	for (auto i : vt)
		cout << i.first << ' ' << i.second << '\n';
	return 0;
}