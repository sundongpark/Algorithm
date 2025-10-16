#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack <int> st;
    for(int i = 0; i < prices.size(); i++)
    {
        // st.top() - 가장 높은 값 인덱스
        while(!st.empty() && prices[st.top()] > prices[i])
        {
            answer[st.top()] = i-st.top();
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        answer[st.top()] = prices.size()-st.top()-1;
        st.pop();
    }
    return answer;
}