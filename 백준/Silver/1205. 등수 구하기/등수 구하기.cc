#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s, p;
    int cnt = 1;
    int same = 0;
    vector<int> vt;

    cin >> n >> s >> p;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        if (in > s)
            cnt++;
        else if (in == s)
            same++;

        if (cnt + same > p)
        {
            cnt = -1;
            break;
        }
    }
    cout << cnt << '\n';

    return 0;
}