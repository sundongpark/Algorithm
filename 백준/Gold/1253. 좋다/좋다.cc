#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int ans = 0;
	cin >> n;

	vector<long> num(n, 0);

	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num.begin(), num.end());

	for (int i = 0; i < n; i++)
	{
		int start = 0;
		int end = n - 1;
		long target = num[i];
		while (start < end)
		{
			if (num[start] + num[end] < target)
				start++;
			else if (num[start] + num[end] > target)
				end--;
			else
			{
				if (start != i && end != i)
				{
					ans++;
					break;
				}
				else if (start == i)
					start++;
				else if (end == i)
					end--;
			}
		}
	}
	cout << ans << '\n';

	return 0;
}