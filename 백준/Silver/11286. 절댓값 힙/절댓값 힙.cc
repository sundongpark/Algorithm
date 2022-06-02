#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a;
	priority_queue<int, vector<int>, less<int>> q1;
	priority_queue<int, vector<int>, greater<int>> q2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 0)
		{
			if (q1.empty() && q2.empty())
				cout << "0\n";
			else
			{
				if (q1.empty() || !q2.empty() && (abs(q1.top()) > q2.top()))
				{
					cout << q2.top() << '\n';
					q2.pop();
				}
				else
				{
					cout << q1.top() << '\n';
					q1.pop();
				}
			}
		}
		else
		{
			if (a > 0)
				q2.push(a);
			else
				q1.push(a);

		}
			
	}
	return 0;
}
