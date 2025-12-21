#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int cash1, cash2;
    int amount1 = 0;
    int amount2 = 0;
    int up_count = 0;
    int down_count = 0;

    int price[14];
    cin >> cash1;
    cash2 = cash1;
    for (int i = 0; i < 14; i++)
        cin >> price[i];
    for (int i = 0; i < 14; i++)
    {
        if (price[i] <= cash1)
        {
            amount1 += cash1 / price[i];
            cash1 -= cash1 / price[i] * price[i];
        }
        if (i && price[i] > price[i - 1])
        {
            down_count = 0;
            up_count++;
        }
        else if (i && price[i] < price[i - 1])
        {
            up_count = 0;
            down_count++;
        }
        if (up_count >= 3)
        {
            cash2 += price[i] * amount2;
            amount2 = 0;
        }
        else if (down_count >= 3 && price[i] <= cash2)
        {
            amount2 += cash2 / price[i];
            cash2 -= cash2 / price[i] * price[i];
        }
    }
    cash1 += price[13] * amount1;
    cash2 += price[13] * amount2;

    if (cash1 > cash2)
        cout << "BNP" << '\n';
    else if (cash1 < cash2)
        cout << "TIMING" << '\n';
    else
        cout << "SAMESAME" << '\n';

    return 0;
}