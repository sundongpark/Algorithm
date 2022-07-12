#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<long long> primenumber;
	bool prime[10001];
	for (int i = 0; i < 10001; i++)
		prime[i] = false;
	for (int i = 2; i < 10001; i++)
	{
		if (!prime[i])
		{
			primenumber.push_back(i);
			for (int j = 2 * i; j < 10001; j += i)
				prime[j] = true;
		}
	}
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n;
		int i = 0;
		cin >> n;
		while (1)
		{
			if ((find(primenumber.begin(), primenumber.end(), n / 2 - i) != primenumber.end()) && (find(primenumber.begin(), primenumber.end(), n / 2 + i) != primenumber.end()))
				break;
			i++;
		}
		cout << n / 2 - i << ' ' << n / 2 + i << '\n';
	}
	return 0;
}