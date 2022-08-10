#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string order;
		int a;
		cin >> order;
		if (order == "push")
		{
			cin >> a;
			st.push(a);
		}
		else if (order == "pop")
		{
			if (st.empty())
				cout << -1 << '\n';
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (order == "top")
		{
			if (st.empty())
				cout << -1 << '\n';
			else
				cout << st.top() << '\n';
		}
		else if (order == "size")
			cout << st.size() << '\n';
		else if (order == "empty")
			cout << (st.empty() ? 1 : 0) << '\n';
	}
	return 0;
}