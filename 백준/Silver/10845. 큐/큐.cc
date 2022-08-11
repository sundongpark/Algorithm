#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string order;
		int a;
		cin >> order;
		if (order == "push")
		{
			cin >> a;
			q.push(a);
		}
		else if (order == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (order == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (order == "size")
			cout << q.size() << '\n';
		else if (order == "empty")
			cout << (q.empty() ? 1 : 0) << '\n';
		else if (order == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
	return 0;
}