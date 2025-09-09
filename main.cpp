#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << n << "\n";

	vector<int> vt(n);

	for (auto &x : vt)
		cin >> x;

	for (auto x : vt)
		cout << x << " ";
	cout << "\n";
}
