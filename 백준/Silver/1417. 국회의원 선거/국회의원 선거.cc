#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, in, cnt = 0;
	vector<int> vt;
	priority_queue<int> pq;
	cin >> n;
	cin >> in;
	vt.push_back(in);
	for (int i = 1; i < n; i++)
	{
		cin >> in;
		vt.push_back(in);
		pq.push(in);
	}
	while (n > 1 && vt[0] <= pq.top())
	{
		in = pq.top();
		pq.pop();
		pq.push(--in);
		vt[0]++;
		cnt++;
	}
	cout << cnt;
	return 0;
}