#include <iostream>
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

	for(int i = n; i > 0; i--)
	{
		dq.push_back(i);
		for (int j = 0; j < i; j++)
		{
			dq.push_back(dq.front());
			dq.pop_front();
		}
	}
	while (!dq.empty())
	{
		cout << dq.back() << ' ';
		dq.pop_back();
	}
	return 0;
}