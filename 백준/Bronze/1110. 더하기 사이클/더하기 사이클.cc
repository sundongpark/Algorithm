#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num, cnt = 0;
	cin >> n;
	num = n;
	do
	{
		if (num < 10)
			num = num * 10 + num;
		else
			num = (num % 10) * 10 + (num / 10 + num % 10) % 10;
		cnt++;
	} while (n != num);
	cout << cnt;
	return 0;
}