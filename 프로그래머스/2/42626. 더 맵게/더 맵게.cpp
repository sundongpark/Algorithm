#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto & s: scoville)
        pq.push(s);
    while(true)
    {
        if(pq.top() >= K)
            break;
        if(pq.size() <= 1)
        {
            answer = -1;
            break;
        }
        int a, b;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a+b*2);
        answer++;
    }
    return answer;
}