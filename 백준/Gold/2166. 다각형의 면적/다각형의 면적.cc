#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	double x, y, sum;
	pair<double, double> arr[10001];
	sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		arr[i] = make_pair(x, y);
	}
	arr[n] = arr[0];
	for (int i = 0; i < n; i++)
		sum += (double)arr[i].first * arr[i + 1].second - arr[i].second * arr[i + 1].first;
	sum = sum > 0 ? sum : -sum;
	cout << fixed;
	cout.precision(1);
	cout << sum / 2;
	return 0;
}