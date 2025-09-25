#include <iostream>
#include <vector>

using namespace std;

int best;
vector<int> w;
vector<int> c;

void dfs(int start, int score, int cal, int n, int l)
{
	if (cal > l)
		return;
	
	if (score > best)
		best = score;
	if (start == n)
		return;

	dfs(start + 1, score + w[start], cal + c[start], n, l);
	dfs(start + 1, score, cal, n, l);
}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		int n, l;
		cin >> n >> l;
		
		w.resize(n, 0);
		c.resize(n, 0);
		best = 0;
		for (int i = 0; i < n; i++)
			cin >> w[i] >> c[i];
		dfs(0, 0, 0, n, l);

		cout << "#" << test_case << ' ' << best << '\n';

	}
	return 0;
}