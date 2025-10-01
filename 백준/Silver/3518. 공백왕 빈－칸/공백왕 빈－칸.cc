#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<string>> words;

    while (1)
    {
        string input;
        string word;
        vector<string> sentence;

        getline(cin, input);
        stringstream ss(input);

        if (input[0] == 0)
            break;

        while (getline(ss, word, ' '))
        {
            if (word.size() == 0)
                continue;
            sentence.push_back(word);
        }
        words.push_back(sentence);
    }

    int rows = words.size();

    int maxCols = 0;
    for (const auto& row : words)
        maxCols = max(maxCols, (int)row.size());

    vector<int> maxLen(maxCols, 0);

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < words[r].size(); c++)
            maxLen[c] = max(maxLen[c], (int)words[r][c].size());
    }

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < words[r].size(); c++)
        {
            cout << words[r][c];
            if (c == words[r].size() - 1)
                continue;
            for (int i = (int)words[r][c].size(); i <= maxLen[c]; i++)
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
