#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> primenumber;
	const int MAX = 4000001;
	bool prime[MAX];
	for (int i = 0; i < MAX; i++)
		prime[i] = false;
	for (int i = 2; i < MAX; i++)
	{
		if (!prime[i])
		{
			primenumber.push_back(i);
			for (int j = 2 * i; j < MAX; j += i)
				prime[j] = true;
		}
	}
	int count = 0, sum = 0, n, end = 0;
	cin >> n;
	for (int start = 0; start < primenumber.size(); start++)
	{
		while (sum < n && end < primenumber.size())
		{
			sum += primenumber[end];
			end++;
		}
		if (sum == n)
			count++;
		sum -= primenumber[start];
	}
	cout << count;
	return 0;
}