#include <iostream>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   cin >> n;
   if (n != 1)
   {
      for (int i = 2; i <= n; i++)
      {
         while (!(n % i))
         {
            cout << i << '\n';
            n /= i;
         }
      }
   }
      
   return 0;
}
