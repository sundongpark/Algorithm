#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> ranks;
bool cmp(vector<int> & a, vector<int> & b)
{
    if(a[0] == b[0])
        return a[1] < b[1];
    else
        return a[0] > b[0];
}
int solution(vector<vector<int>> scores) {
    int answer = 0;
    
    int a = scores[0][0], b = scores[0][1];
    int max_b = -1;
    int max_a = -1;
    sort(scores.begin(), scores.end(), cmp);
    for(auto & s: scores)
    {
        if (s[0] > a && s[1] > b)
            return -1;
        if(s[1] >= max_b || s[0] >= max_a)
        {
            if (max_b < s[1])
            {
                max_b = s[1];
                max_a = s[0];
            }
            ranks.push_back(s[0]+s[1]);
        }
    }
    sort(ranks.begin(), ranks.end(), greater<>());
    answer = find(ranks.begin(), ranks.end(), a+b) - ranks.begin()+1;
    return answer;
}