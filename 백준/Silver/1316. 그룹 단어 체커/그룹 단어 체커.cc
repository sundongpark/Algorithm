#include <iostream>
#include <string>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        bool c[26] = { false };
        bool check = false;

        for (int j = 0; j < word.length(); j++)
        {
            if (c[word[j] - 'a'])
            {
                check = true;
                break;
            }
            else
            {
                c[word[j] - 'a'] = true;
                while (word[j] == word[j + 1])
                    j++;
            }
        }
        if (!check)
            ans++;
    }

    cout << ans << '\n';
}

