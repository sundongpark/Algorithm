#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int p, n;
	float d, a, b, f;
	cin >> p;
	for (int i = 0; i < p; i++)
	{
		cin >> n >> d >> a >> b >> f;
		printf("%d %.6f\n", n, d / (a + b) * f);
	}
	
	return 0;
}