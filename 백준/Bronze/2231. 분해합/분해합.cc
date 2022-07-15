#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, ans;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int a = i;
		string s = to_string(i);
		for (auto c : s)
			a += c - '0';
		if (a == n)
		{
			ans = i;
			break;
		}
		ans = 0;
	}
	cout << ans;
	return 0;
}