#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long a, b;
	vector<long long> primenumber;
	cin >> a >> b;
	bool prime[1000001];
	for (int i = 0; i < 1000001; i++)
		prime[i] = false;
	for (int i = 2; i < 1000001; i++)
	{
		if (!prime[i])
		{
			if (a <= i && i <= b)
				primenumber.push_back(i);
			for (int j = 2 * i; j < 1000001; j += i)
				prime[j] = true;
		}
	}
	int sum = 0;
	for (int i = 0; i < primenumber.size(); i++)
	{
		sum += primenumber[i];
	}
	if (!primenumber.empty())
		cout << sum << '\n' << primenumber[0];
	else
		cout << -1;
	return 0;
}