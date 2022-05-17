#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, nums[10001];
	for (int i = 0; i < 10001; i++)
		nums[i] = 0;
	cin >> n;
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a = max(num, a);
		nums[num]++;
	}
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j < nums[i]; j++)
			cout << i << '\n';
	}
	return 0;
}