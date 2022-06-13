#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	long long num;
	vector<int> ans;
	cin >> num;

	if (num == 0)
		ans.push_back(0);
	while (num > 0)
	{
		ans.push_back(num % 2);
		num /= 2;
	}
	reverse(ans.begin(), ans.end());
	for (auto i : ans)
		cout << i;
	return 0;
}
