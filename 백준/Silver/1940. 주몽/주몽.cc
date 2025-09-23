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
	int ans = 0;
	cin >> n >> m;

	vector<int> num(n, 0);

	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num.begin(), num.end());

	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		if (num[start] + num[end] < m)
			start++;
		else if (num[start] + num[end] > m)
			end--;
		else
		{
			ans++;
			start++;
			end--;
		}
	}
	cout << ans << '\n';

	return 0;
}