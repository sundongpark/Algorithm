#include <iostream>
using namespace std;

int n, ans = 0;
int col[15];
bool promising(int i);
void queens(int i);

int main()
{
	cin >> n;
	for (int i = 0; i < 15; i++)
		col[i] = 0;
	queens(-1);
	cout << ans;
	return 0;
}

void queens(int i)
{
	if (promising(i))
	{
		if (i == n - 1)
			ans++;
		else
		{
			for (int j = 0; j < n; j++)
			{
				col[i + 1] = j;
				queens(i + 1);
			}
		}
	}
}
bool promising(int i)
{
	bool swit = true;
	int k = 0;
	while (k < i && swit)
	{
		if (col[i] == col[k] || abs(col[i] - col[k]) == i - k)
			swit = false;
		k++;
	}
	return swit;
}