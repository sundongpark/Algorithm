#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int i = 0, cnt = 0;
	while (1)
	{
		if (to_string(i).find("666") != string::npos)
			cnt++;
		if (cnt == n)
			break;
		i++;
	}
	cout << i;
	return 0;
}