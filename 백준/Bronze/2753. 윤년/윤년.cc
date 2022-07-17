#include <iostream>

using namespace std;

int main()
{
	int y;
	cin >> y;
	if ((!(y % 4) && (y % 100)) || !(y % 400))
		cout << 1;
	else
		cout << 0;
	return 0;
}