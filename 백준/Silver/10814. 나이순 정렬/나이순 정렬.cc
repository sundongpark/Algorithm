#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	vector <pair< int, string >> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		v.push_back(pair<int, string>(age, name));
	}
	stable_sort(v.begin(), v.end(), [](auto const& a, auto const& b) { return a.first < b.first; });
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
	return 0;
}