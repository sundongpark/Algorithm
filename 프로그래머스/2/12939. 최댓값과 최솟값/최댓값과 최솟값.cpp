#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    
    int x;
    int max = -987654321;
    int min = 987654321;
    while (ss >> x) {
        if(x > max)
            max = x;
        if(x < min)
            min = x;
    }
    answer+= to_string(min) + " ";
    answer+= to_string(max);
    return answer;
}