#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> s(100001);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		s[i] = num + s[i - 1];
	}
	for (int i = 0; i < m; i++)
	{
		int begin, end;
		cin >> begin >> end;
		cout << s[end] - s[begin - 1] << '\n';
	}
	return 0;
}