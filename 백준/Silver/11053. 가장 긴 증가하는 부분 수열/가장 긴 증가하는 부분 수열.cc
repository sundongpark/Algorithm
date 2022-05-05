#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int n, a, len;
	int INF = 1000000001;

	pair<int, int> info[1000001];
	stack<int> st;
	vector<int> vec;

	len = 1;
	cin >> n;
	vec.push_back(-INF);
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (vec.back() < a)
		{
			vec.push_back(a);
			len++;
		}
		else
		{
			for (int j = 1; j <= i; j++)
			{
				if (vec[j] >= a)
				{
					vec[j] = a;
					break;
				}
			}
		}
	}

	cout << len - 1;
	return 0;
}