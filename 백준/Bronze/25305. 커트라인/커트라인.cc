#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	vector<int> vt;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		vt.push_back(in);
	}
	sort(vt.begin(), vt.end(), greater<>());
	cout << vt[k - 1];
}