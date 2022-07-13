#include <iostream>

using namespace std;

int main()
{
	int a[10], b[42] = { 0 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
		b[a[i] % 42]++;
	for (int i = 0; i < 42; i++)
	{
		if (b[i])
			sum++;
	}
	cout << sum;
	return 0;
}