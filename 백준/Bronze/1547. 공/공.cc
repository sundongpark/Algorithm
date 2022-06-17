#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m;
	int a1[] = {0, 1, 2, 3};
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b, tmp;
		cin >> a >> b;
		tmp = a1[a];
		a1[a] = a1[b];
		a1[b] = tmp;
	}
	for (int i = 1; i < 4; i++)
	{
		if (a1[i] == 1)
			cout << i;
	}
	return 0;
}
