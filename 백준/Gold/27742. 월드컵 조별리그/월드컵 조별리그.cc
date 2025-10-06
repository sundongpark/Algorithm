#include <iostream>
#include <algorithm>
using namespace std;

struct team
{
    int num;
    long long point = 0;
    long long difference = 0;
    long long goals = 0;
    int record;
};

long long t, k;
team teams[4];
long long w[4][4];
pair<int, int> xy;

bool compare(team& a, team& b)
{
    if (a.point != b.point)
        return a.point > b.point;
    else if (a.difference != b.difference)
        return a.difference > b.difference;
    else if (a.goals != b.goals)
        return a.goals > b.goals;
    else if (a.record != b.record)
        return a.record > b.record;
}

void win()
{
    for (int i = 0; i < 4; i++)
    {
        teams[i].num = i;
        teams[i].point = 0;
        teams[i].difference = 0;
        teams[i].goals = 0;
        teams[i].record = -i;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (w[i][j] > w[j][i])
                teams[i].point += 3;
            else if (w[i][j] < w[j][i])
                teams[j].point += 3;
            else
            {
                teams[i].point++;
                teams[j].point++;
            }
            teams[i].difference += (w[i][j] - w[j][i]);
            teams[j].difference += (w[j][i] - w[i][j]);

            teams[i].goals += w[i][j];
            teams[j].goals += w[j][i];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t >> k;
    t--;
    k++;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> w[i][j];
            if (w[i][j] == -1)
                xy.first = i, xy.second = j;
        }
    }
    long long upper = k;
    long long best = k;
    long long lower = 0;
    long long mid;

    while (lower <= upper)
    {
        mid = lower + (upper - lower) / 2;
        w[xy.first][xy.second] = mid;
        win();
        sort(teams, teams + 4, compare);
        if (teams[0].num == t || teams[1].num == t)
        {
            best = min(best, mid);
            upper = mid - 1;
        }
        else
            lower = mid + 1;
    }
    if (best == k)
        best = -1;

    cout << best << '\n';
    return 0;
}
