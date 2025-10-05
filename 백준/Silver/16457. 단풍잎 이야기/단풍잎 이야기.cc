#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int ans = 0;

vector<vector<int>> quest;
vector<bool> visited;

bool check(vector<int> key)
{
    bool s = true;
    for (auto& k : key)
    {
        if (!visited[k])
            s = false;
    }
    return s;
}

void dfs(int idx, int depth)
{
    if (depth == n)
    {
        int cnt = 0;
        for (auto& q : quest)
        {
            if (check(q))
                cnt++;
        }
        ans = max(ans, cnt);
        return;
    }
    for (int j = idx; j < 2 * n + 1; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            dfs(j + 1, depth + 1);
            visited[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    visited.assign(2 * n + 1, false);
    for (int i = 0; i < m; i++)
    {
        vector<int> q;
        for (int j = 0; j < k; j++)
        {
            int key;
            cin >> key;
            q.push_back(key);
        }
        quest.push_back(q);
    }

    dfs(0, 0);

    cout << ans << '\n';
    
    return 0;
}
