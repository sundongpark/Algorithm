#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int time = 0;
    if (a < 0)
    {
        time += (-1 * a) * c + d;
        a = 0;
    }
    time += (b - a) * e;
    cout << time << '\n';

    return 0;
}
