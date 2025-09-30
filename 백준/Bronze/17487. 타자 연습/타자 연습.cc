#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string in;

    int space_cnt = 0;
    int left_cnt = 0;
    int right_cnt = 0;

    unordered_set<char> left = { 'q', 'w', 'e', 'r', 't', 'y',
                                'a', 's', 'd', 'f', 'g',
                                'z', 'x', 'c', 'v', 'b' };

    getline(cin, in);

    for (auto& s : in)
    {
        if (s == ' ')
        {
            space_cnt++;
            continue;
        }
        if (s >= 'A' && s <= 'Z') // 대문자
        {
            s += 'a' - 'A'; // 소문자 변환
            space_cnt++;
        }
        if (s >= 'a' && s <= 'z') // 소문자
        {
            if (left.count(s))
                left_cnt++;
            else
                right_cnt++;
        }
    }
    for (int i = space_cnt; i > 0; i--)
    {
        if (right_cnt < left_cnt)
            right_cnt++;
        else
            left_cnt++;
    }
    cout << left_cnt << ' ' << right_cnt << '\n';

    return 0;
}
