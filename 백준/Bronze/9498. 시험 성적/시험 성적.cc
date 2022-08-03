#include <iostream>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   cin >> n;
   if (n >= 90)
      cout << 'A';
   else if (n >= 80)
      cout << 'B';
   else if (n >= 70)
      cout << 'C';
   else if (n >= 60)
      cout << 'D';
   else
      cout << 'F';

   return 0;
}