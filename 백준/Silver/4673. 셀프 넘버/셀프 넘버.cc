#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int gen(int n)
{
    string num = to_string(n);
    int res = n;
    for (auto& s : num)
        res += (s - '0');
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool self_num[10001];
    memset(self_num, true, 10001 * sizeof(bool));

    for (int i = 1; i <= 10000; i++)
    {
        int res = gen(i);
        if (res > 10000)
            continue;
        self_num[gen(i)] = false;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (self_num[i])
            cout << i << '\n';
    }
    return 0;
}