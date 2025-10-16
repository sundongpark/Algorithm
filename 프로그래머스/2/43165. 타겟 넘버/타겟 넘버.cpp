#include <string>
#include <vector>
#include <iostream>
using namespace std;

int answer = 0;

void dfs(vector<int> numbers, int x, int n, int target)
{
    if(n==numbers.size())
    {
        if(x==target)
        {
            answer++;
            return;
        }
        else
            return;
    }
    dfs(numbers, x+numbers[n], n+1, target);
    dfs(numbers, x-numbers[n], n+1, target);
}
int solution(vector<int> numbers, int target) {
    dfs(numbers, 0, 0, target);
    return answer;
}