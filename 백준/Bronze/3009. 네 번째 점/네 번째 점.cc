#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x[3], y[3];
	for(int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];
	cout << (x[0] ^ x[1] ^ x[2]) << ' ' << (y[0] ^ y[1] ^ y[2]);
	return 0;
}