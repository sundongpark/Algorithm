#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (!a)
			break;
		if (!(a % b))
			cout << "multiple\n";
		else if (!(b % a))
			cout << "factor\n";
		else
			cout << "neither\n";
	}
	return 0;
}
