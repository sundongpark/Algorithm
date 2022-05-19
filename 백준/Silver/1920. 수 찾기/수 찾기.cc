#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	vector<int> vt;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vt.push_back(num);
	}
	sort(vt.begin(), vt.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		cout << binary_search(vt.begin(), vt.end(), num) << '\n';
	}
	return 0;
}