#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string a;
    cin >> a;
    for (auto c : a)
    {
        if (c >= 'A' && c <= 'C')
            sum += 3;
        else if (c >= 'D' && c <= 'F')
            sum += 4;
        else if (c >= 'G' && c <= 'I')
            sum += 5;
        else if (c >= 'J' && c <= 'L')
            sum += 6;
        else if (c >= 'M' && c <= 'O')
            sum += 7;
        else if (c >= 'P' && c <= 'S')
            sum += 8;
        else if (c >= 'T' && c <= 'V')
            sum += 9;
        else
            sum += 10;
    }
    cout << sum;
    return 0;
}