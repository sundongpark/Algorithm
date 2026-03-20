#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    int l_min;
    int ans = 1;

    vector<vector<int>> vt;

    cin >> n >> m;
    vt.assign(n, vector<int>(m));

    l_min = n < m ? n : m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
            vt[i][j] = s[j] - '0';
    }

    bool find = false;
    for (int i = l_min - 1; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            for (int k = 0; k < m - i; k++)
            {
                if (vt[j][k] == vt[j][k + i] && vt[j][k + i] == vt[j + i][k] && vt[j + i][k] == vt[j + i][k + i])
                {
                    find = true;
                    ans = i + 1;
                    break;
                }
            }
            if (find)
                break;
        }
        if (find)
            break;
    }

    cout << ans * ans << '\n';
    return 0;
}