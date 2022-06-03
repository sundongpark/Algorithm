#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> st;
	int k;
	long long sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int a;
		cin >> a;
		if (a == 0)
			st.pop();
		else
			st.push(a);
	}

	while(!st.empty())
	{ 
		sum += st.top();
		st.pop();
	}
	cout << sum;
	return 0;
}
