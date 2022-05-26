#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int min = 9999, max = -9999;
	double sum = 0;
	vector<int> num;
	int cnt[8001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		num.push_back(a);
		max = max < a ? a : max;
		min = min > a ? a : min;
		sum += a;
		cnt[a + 4000]++;
	}
	int cntmax = max_element(cnt, cnt + 8001) - cnt;
	for (int i = 0; i < 8001; i++)
	{
		if (cnt[cntmax] == cnt[i] && i != cntmax)
		{
			cntmax = i;
			break;
		}
	}
	sort(num.begin(), num.end());
	cout << int(round(sum / n)) << '\n';
	cout << num[n / 2] << '\n';
	cout << cntmax - 4000 << '\n';
	cout << max - min;
	return 0;
}