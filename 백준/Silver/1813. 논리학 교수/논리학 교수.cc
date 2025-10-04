#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    for (auto& a : m)
    {
        if (a.first == a.second)
            ans = max(ans, a.first);
    }
    if (!ans && m[0])
        ans = -1;
    cout << ans << '\n';
    return 0;
}
