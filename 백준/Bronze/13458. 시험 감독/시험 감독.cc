#include <iostream>
#include <vector>

using namespace std;

int n;
int b, c;
vector<int> a;
long res = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	a.assign(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> b >> c;

	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		res++;
		if (a[i] <= 0)
			continue;
		else
		{
			int n = a[i] / c;
			int m = a[i] % c;
			res += n + (m > 0);
		}
	}
	cout << res << '\n';

	return 0;
}