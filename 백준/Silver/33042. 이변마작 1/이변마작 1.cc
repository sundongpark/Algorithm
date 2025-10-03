#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    unordered_map<string, int> cards;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string card;
        cin >> card;
        cards[card]++;
        if (cards[card] >= 5)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';

    return 0;
}
