#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a, se;
	set<string> s;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		se = "";
		for (int j = i; j < a.length(); j++)
		{
			se += a[j];
			s.insert(se);
		}
	}
	cout << s.size();
	return 0;
}
