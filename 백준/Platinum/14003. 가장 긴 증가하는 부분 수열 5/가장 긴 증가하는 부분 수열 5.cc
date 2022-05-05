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
			info[i] = { len, a };
			len++;
		}
		else
		{
			auto it = lower_bound(vec.begin(), vec.end(), a);
			*it = a;
			info[i] = { (it - vec.begin()), a };
		}
	}

	cout << len - 1 << '\n';
	for (int i = n; i > 0; i--)
	{
		if (info[i].first == len - 1)
		{
			st.push(info[i].second);
			len--;
		}
	}
	while (!st.empty())
	{
		cout << st.top() << ' ';
		st.pop();
	}
	return 0;
}