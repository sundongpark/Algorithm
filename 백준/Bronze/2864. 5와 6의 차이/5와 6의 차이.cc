#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;
	string a1 = a, a2 = a, b1 = b, b2 = b;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '6')
			a1[i] = '5';
		if (a[i] == '5')
			a2[i] = '6';
	}
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '6')
			b1[i] = '5';
		if (b[i] == '5')
			b2[i] = '6';
	}
	cout << stoi(a1) + stoi(b1) << ' ' << stoi(a2) + stoi(b2);
	return 0;
}
