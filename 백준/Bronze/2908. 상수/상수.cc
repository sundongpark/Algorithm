#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int ai, bi;
    cin >> a >> b;
    ai = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
    bi = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0] - '0');
    int ans = (ai > bi) ? ai : bi;
    cout << ans;
    return 0;
}