#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int a, b, c;
	int price = 0;
	int total = 0;
	vector<int> cal;
	cin >> n >> a >> b >> c;

	price += a;
	total += c;
	for (int i = 0; i < n; i++)
	{
		int d;
		cin >> d;
		cal.push_back(d);
	}
	sort(cal.begin(), cal.end(), greater<>());

	for (auto& d : cal)
	{
		if ((double)total / price < (double)(total + d) / (price + b))
		{
			total += d;
			price += b;
		}
	}
	cout << (total / price) << '\n';

	return 0;
}
