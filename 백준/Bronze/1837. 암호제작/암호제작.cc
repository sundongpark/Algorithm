#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string p;
	int k;
	cin >> p >> k;

	vector<bool> isPrime(k, true);
	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i * i < k; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j < k; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i < k; i++)
	{
		if (isPrime[i])
		{
			int mod = 0;
			for (char c : p)
				mod = (mod * 10 + (c - '0')) % i;
			if (mod == 0)
			{
				cout << "BAD " << i;
				return 0;
			}
		}
	}
	cout << "GOOD";
	return 0;
}