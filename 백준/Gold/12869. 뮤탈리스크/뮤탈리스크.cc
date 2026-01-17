#include <iostream>
#include <vector>
#include <array>

using namespace std;

int dp[61][61][61];
bool visited[61][61][61];

vector<array<int, 3>> dmg = {
    {9,3,1}, {9,1,3},
    {3,9,1}, {3,1,9},
    {1,9,3}, {1,3,9}
};

int solve(int a, int b, int c) {
    a = max(0, a);
    b = max(0, b);
    c = max(0, c);

    if (a == 0 && b == 0 && c == 0)
        return 0;

    if (visited[a][b][c])
        return dp[a][b][c];

    visited[a][b][c] = true;

    int best = 987654321;
    for (auto d : dmg) {
        int na = max(0, a - d[0]);
        int nb = max(0, b - d[1]);
        int nc = max(0, c - d[2]);
        best = min(best, 1 + solve(na, nb, nc));
    }
    return dp[a][b][c] = best;
}

int main() {
    int n;
    int hp[3] = { 0,0,0 };

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> hp[i];

    cout << solve(hp[0], hp[1], hp[2]) << "\n";

    return 0;
}