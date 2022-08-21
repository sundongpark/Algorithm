#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, i, cnt;
	i = 1;
	cnt = 1;
	cin >> n;
	while (n > i)
	{
		i += 6 * cnt;
		cnt++;
	}
	cout << cnt;
	return 0;
}