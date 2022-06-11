#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k, tmp;
	queue<int> q;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << '<';
	while (q.size() > 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		tmp = q.front();
		cout << tmp << ", ";
		q.pop();
	}
	cout << q.front() << '>';
	return 0;
}
