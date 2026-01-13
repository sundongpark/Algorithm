#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s;
    int days;
    int future;

    cin >> s;
    cin >> days;

    int y = stoi(s.substr(0, 4));
    int m = stoi(s.substr(5, 2)) - 1;
    int d = stoi(s.substr(8, 2)) - 1;

    future = y * 360 + m * 30 + d + days;

    y = future / 360;
    future %= 360;
    m = future / 30 + 1;
    future %= 30;
    d = future + 1;

    cout << y << '-';
    if (m < 10)
        cout << '0';
    cout << m << '-';
    if (d < 10)
        cout << '0';
    cout << d << '\n';

    return 0;
}