#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a, cnt = 1;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		st.push(a);
	}
	int t = st.top();
	st.pop();
	for (int i = 1; i < n; i++)
	{
		if (st.top() > t)
		{
			t = st.top();
			cnt++;
		}
		st.pop();
	}
	cout << cnt;
	return 0;
}