#include <iostream>
using namespace std;

int main()
{
	int a, b, v, d;
	cin >> a >> b >> v;
	d = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b))
		d++;
	cout << d;
	return 0;
}