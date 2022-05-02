#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, min, l, r, left, right, sum;
	int a[100001];
	min = 2000000001;
	cin >> n;
	l = left = 0;
	r = right = n - 1;
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		a[i] = in;
	}
	sort(a, a + n);
	while (l < r)
	{
		sum = a[l] + a[r];
		if (abs(sum) < abs(min))
		{
			left = l;
			right = r;
			min = sum;
		}
		if (sum > 0)
			r--;
		else if (sum < 0)
			l++;
		else
			break;
	}
	cout << a[left] << ' ' << a[right];
	
	return 0;
}