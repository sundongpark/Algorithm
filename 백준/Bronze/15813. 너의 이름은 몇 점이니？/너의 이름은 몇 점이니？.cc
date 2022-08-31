#include <iostream>
using namespace std;

int main()
{
	char name[100];
	int n, sum = 0;
	cin >> n;
	cin >> name;
	for (int i = 0; i < n; i++)
		sum += name[i] - 'A' + 1;
	cout << sum;
	return 0;
}