#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int ans = 0;
	int arr[1001] = { 0 };
	cin >> n;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10007;
	cout << arr[n];
	return 0;
}