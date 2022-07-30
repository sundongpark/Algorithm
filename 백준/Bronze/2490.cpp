#include <iostream>

using namespace std;

int main()

{

   ios_base::sync_with_stdio(false);

   cin.tie(NULL);

   cout.tie(NULL);

   for (int i = 0; i < 3; i++)

   {

      int in, sum = 0;

      for (int j = 0; j < 4; j++)

      {

         cin >> in;

         sum += in;

      }

      if (sum == 3)

         cout << 'A' << '\n';

      else if(sum == 2)

         cout << 'B' << '\n';

      else if (sum == 1)

         cout << 'C' << '\n';

      else if (sum == 0)

         cout << 'D' << '\n';

      else

         cout << 'E' << '\n';

   }

   return 0;

}
