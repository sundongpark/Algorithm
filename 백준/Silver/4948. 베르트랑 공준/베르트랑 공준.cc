#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (1)
	{
		long long n;
		vector<long long> primenumber;
		cin >> n;
		if (!n)
			break;
		bool prime[250000];
		for (int i = 0; i < 250000; i++)
			prime[i] = false;
		for (int i = 2; i < 250000; i++)
		{
			if (!prime[i])
			{
				if (n < i && i <= n * 2)
					primenumber.push_back(i);
				for (int j = 2 * i; j < 250000; j += i)
					prime[j] = true;
			}
		}
		cout << primenumber.size() << '\n';
	}
	return 0;
}