#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long min, max;
	cin >> min >> max;

	vector<int> c(max - min + 1, 1);

	for (long i = 2; i * i <= max; i++)
	{
		long pow = i * i;
		long start = min / pow;

		for (long j = start; pow * j <= max; j++)
		{
			if (pow * j < min)
				continue;
			c[(pow * j) - min] = 0;
		}
	}
	int ans = 0;
	for (const auto& s : c)
		ans += s;
	cout << ans << '\n';
	return 0;
}