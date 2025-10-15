#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(const string& a,const string& b)
{
    return a+b>b+a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    for(auto & n:numbers)
        strings.push_back(to_string(n));
    sort(strings.begin(), strings.end(), compare);
    for(auto & n:strings)
        answer+=n;
    if (answer[0]=='0')
        answer="0";
    return answer;
}