#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dist[5000000];
bool visited[5000000];

int bfs(int k)
{
    memset(dist, 0, sizeof(dist));
    memset(visited, false, sizeof(visited));

    bool find = false;
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    visited[1] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        if (x == k)
        {
            find = true;
            break;
        }
        if ((x * 2) <= 5000000 && !visited[x * 2])
        {
            q.push(x * 2);
            visited[x * 2] = true;
            dist[x * 2] = dist[x] + 1;
        }
        if ((x - 1) > 0 && !visited[x - 1])
        {
            q.push(x - 1);
            visited[x - 1] = true;
            dist[x - 1] = dist[x] + 1;
        }

    }
    if (find)
        return dist[k];
    else
        return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        int d = bfs(k);
        if (d == -1)
            cout << "Wrong proof!" << '\n';
        else
            cout << d << '\n';
    }
    return 0;
}
