#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a, b;
	while (cin >> a >> b)
	{
		string tmp;
		int cnt = 0;
		for (int i = 0; i < b.size(); i++)
		{
			if (cnt < a.size() && b[i] == a[cnt])
			{
				tmp += b[i];
				cnt++;
			}
		}
		if (tmp != a)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}
