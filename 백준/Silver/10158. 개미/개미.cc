#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int w, h, p, q, t;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
	cout << w - abs(w - (p + t) % (2 * w)) << ' ' << h - abs(h - (q + t) % (2 * h));
	return 0;
}