#include <iostream>
using namespace std;

long long count(long long num, int n)
{
	long long cnt = 0;
	while (num)
	{
		num /= n;
		cnt += num;
	}
	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, five, t;
	cin >> n >> m;

	t = count(n, 2) - count(m, 2) - count(n - m, 2);
	five = count(n, 5) - count(m, 5) - count(n - m, 5);

	cout << min(five, t);
	return 0;
}