#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

unordered_map<string, int> m;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    for(auto & c : clothes)
        m[c[1]]++;
    for(auto & a : m)
        answer *= (a.second+1); // 안 고르는 선택지 +1
    
    return answer-1; // 안 입는 선택지 -1
}