#include <iostream>
using namespace std;

int main()
{
	int n, f, t;
	f = 0;
	t = 0;
	cin >> n;
	for(int i = n; i > 0; i--)
	{ 
		int num = i;
		while(num % 5 == 0)
		{
			num /= 5;
			f++;
		}
		while (num % 2 == 0)
		{
			num /= 2;
			t++;
		}
	}
	cout << min(f, t);
	return 0;
}