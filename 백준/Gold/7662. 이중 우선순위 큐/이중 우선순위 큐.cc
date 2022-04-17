#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	int t;

	cin >> t;	//test case
	for (int i = 0; i < t; i++)
	{
		int k, num, cnt;
		char o;
		bool visited[1000001];
		for (int a = 0; a < 1000001; a++)
			visited[a] = false;
		priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> q1;		//최대
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q2;	//최소
		cnt = 0;	//초기화

		cin >> k;			//연산의 개수를 나타내는 정수 k

		for (int j = 0; j < k; j++)
		{
			cin >> o >> num;
			if (o == 'I')
			{
				q1.push(make_pair(num, j));
				q2.push(make_pair(num, j));
				cnt++;
			}
			else if (o == 'D')
			{
				if (num == 1)
				{
					while (!q1.empty() && visited[q1.top().second])
						q1.pop();
					if (!q1.empty() && cnt > 0)
					{
						visited[q1.top().second] = true;
						q1.pop();
						cnt--;
					}
				}
				else
				{
					while (!q2.empty() && visited[q2.top().second])
						q2.pop();
					if (!q2.empty() && cnt > 0)
					{
						visited[q2.top().second] = true;
						q2.pop();
						cnt--;
					}
				}
			}
		}
		if (cnt == 0)
			cout << "EMPTY\n";
		else
		{
			while (!q1.empty() && visited[q1.top().second])
				q1.pop();
			while (!q2.empty() && visited[q2.top().second])
				q2.pop();
			cout << q1.top().first << " " << q2.top().first << '\n';
		}
	}
	return 0;
}
