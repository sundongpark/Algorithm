#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string in;
	cin >> in;
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (in.find(i) == string::npos)
			cout << -1 << ' ';
		else
			cout << in.find(i) << ' ';
	}
	return 0;
}
