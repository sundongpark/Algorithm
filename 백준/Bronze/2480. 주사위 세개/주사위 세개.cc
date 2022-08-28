#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c;
	int dice[7] = { 0 };
	cin >> a >> b >> c;
	dice[a]++;
	dice[b]++;
	dice[c]++;
	int max = 0;
	for (int i = 1; i <= 6; i++)
	{
		if (dice[i] == 3)
		{
			cout << 10000 + i * 1000;
			return 0;
		}
		else if (dice[i] == 2)
		{
			cout << 1000 + i * 100;
			return 0;
		}
		else if (dice[i])
			max = i;
	}
	cout << max * 100;
	return 0;
}