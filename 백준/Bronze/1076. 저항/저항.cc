#include <iostream>
#include <cmath>

using namespace std;

int main()

{

   ios_base::sync_with_stdio(false);

   cin.tie(NULL);

   cout.tie(NULL);

   string a;

   long long b[3];

   for (int i = 0; i < 3; i++)

   {

      cin >> a;

      if (a == "black")

         b[i] = 0;

      else if (a == "brown")

         b[i] = 1;

      else if (a == "red")

         b[i] = 2;

      else if (a == "orange")

         b[i] = 3;

      else if (a == "yellow")

         b[i] = 4;

      else if (a == "green")

         b[i] = 5;

      else if (a == "blue")

         b[i] = 6;

      else if (a == "violet")

         b[i] = 7;

      else if (a == "grey")

         b[i] = 8;

      else if (a == "white")

         b[i] = 9;

   }

   cout << (b[0] * 10 + b[1]) * (long long)pow(10, b[2]);

   return 0;

}