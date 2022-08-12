#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	deque<int> dq;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string order;
		int a;
		cin >> order;
		if (order == "push_back")
		{
			cin >> a;
			dq.push_back(a);
		}
		else if (order == "push_front")
		{
			cin >> a;
			dq.push_front(a);
		}
		else if (order == "pop_front")
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (order == "pop_back")
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (order == "front")
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.front() << '\n';
		}
		else if (order == "size")
			cout << dq.size() << '\n';
		else if (order == "empty")
			cout << (dq.empty() ? 1 : 0) << '\n';
		else if (order == "back")
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.back() << '\n';
		}
	}
	return 0;
}