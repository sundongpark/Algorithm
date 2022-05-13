#include <iostream>
#include <string>
using namespace std;
char board[20][20];
bool visited[26];
int ans = 0;
int cnt = 0;
int r, c;
void dfs(int x, int y)
{
    int dx[4] = { 1,-1,0,0 };
    int dy[4] = { 0,0,1,-1 };
    visited[board[x][y] - 'A'] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            continue;
        if (!visited[board[nx][ny] - 'A'])
        {
            dfs(nx, ny);
            cnt--;
            visited[board[nx][ny] - 'A'] = false;
        }
    }
    ans = max(cnt, ans);
}

int main()
{
    cin >> r >> c;
    for (int i = 0; i < 26; i++)
        visited[i] = false;
    for (int i = 0; i < r; i++)
        cin >> board[i];
    dfs(0, 0);
    cout << ans;
    return 0;
}