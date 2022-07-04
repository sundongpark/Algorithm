#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int cnt[27] = { 0 };
	string in;
	cin >> in;
	for (auto c : in)
	{
		if (c >= 'a' && c <= 'z')
			cnt[c - 'a']++;
		else
			cnt[c - 'A']++;
	}
	int max = 0;
	int m;
	bool o = false;
	for (int i = 0; i < 27; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			m = i;
			o = false;
		}
		else if (cnt[i] == max)
			o = true;
	}
	if (o)
		cout << '?';
	else
		cout << (char)(m + 'A');
	return 0;
}
