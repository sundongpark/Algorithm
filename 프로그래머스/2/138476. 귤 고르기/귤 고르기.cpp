#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>
using namespace std;

unordered_map<int, int> m;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    for(auto & t: tangerine)
        m[t]++;
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for(auto & t: v)
    {
        k -= t.second;
        answer++;
        if(k<=0)
            break;
    }
    return answer;
}