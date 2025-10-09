#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long s1 = 0, s2 = 0, s3 = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		s1 += i;
		s3 += i * i * i;
	}
	s2 = s1 * s1;

	cout << s1 << '\n' << s2 << '\n' << s3 << '\n';

	return 0;
}