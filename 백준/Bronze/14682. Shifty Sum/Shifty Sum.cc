#include <iostream>
using namespace std;
int main()
{
	int n, k, sum = 0;
	cin >> n >> k;
	for (int i = 0; i <= k; i++)
	{
		sum += n;
		n *= 10;
	}
	cout << sum;
	return 0;
}