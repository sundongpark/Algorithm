#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, a, len;
	int INF = 1000001;
	vector<int> vec;
	len = 0;
	cin >> n;

	vec.push_back(-INF);
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (vec.back() < a)
		{
			vec.push_back(a);
			len++;
		}
		else
		{
			auto it = lower_bound(vec.begin(), vec.end(), a);
			*it = a;
		}
	}
	cout << len;
	return 0;
}