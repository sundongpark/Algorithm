#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    int h = n/w+1;
    
    int x, y;
    vector<vector<int>> v;
    v.assign(h, vector<int>(w, 0));
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int number;
            if (i%2==0)
                number = i*w+j+1;
            else
                number = (i+1)*w-(j);
            if (number > n)
                number = 0;
            if(number == num)
            {
                x = i;
                y = j;
            }
            v[i][j] = number;
        }
    }
    for(int i = x; i < h; i++)
    {
        if(v[i][y])
            answer++;
    }
    return answer;
}