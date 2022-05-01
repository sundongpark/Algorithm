#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, l, r, left, right, mid;
	long long min, sum;
	long long a[5000];
	min = 3000000001;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	for (int i = 0; i < n - 2; i++)
	{
		l = i + 1;
		r = n - 1;
		while (l < r)
		{
			sum = a[l] + a[r] + a[i];
			if (abs(sum) < min)
			{
				left = i;
				right = r;
				mid = l;
				min = abs(sum);
			}
			if (sum > 0)
				r--;
			else if (sum < 0)
				l++;
			else
				break;
		}
	}
	cout << a[left] << " " << a[mid] << " " << a[right];
	return 0;
}