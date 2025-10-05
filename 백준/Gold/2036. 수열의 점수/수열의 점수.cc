#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long sum = 0;
    vector<long long> neg;
    vector<long long> pos;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x <= 0)
            neg.push_back(x);
        else
            pos.push_back(x);
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end(), greater<long long>());

    for (int i = 0; i < neg.size(); i++)
    {
        if (i + 1 < neg.size() && neg[i + 1] <= 0)
        {
            sum += neg[i] * neg[i + 1];
            i++;
            continue;
        }
        else
        {
            sum += neg[i];
            continue;
        }
    }
    for (int i = 0; i < pos.size(); i++)
    {
        if (i + 1 < pos.size() && pos[i + 1] != 1)
        {
            sum += pos[i] * pos[i + 1];
            i++;
            continue;
        }
        else
        {
            sum += pos[i];
            continue;
        }
    }

    cout << sum << '\n';
    return 0;
}
