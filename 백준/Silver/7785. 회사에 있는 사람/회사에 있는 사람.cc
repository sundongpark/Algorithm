#include <iostream>

#include <map>

#include <string>

using namespace std;

int main()

{

   ios_base::sync_with_stdio(false);

   cin.tie(NULL);

   cout.tie(NULL);

   int n;

   map<string, bool, greater<>> um;

   cin >> n;

   for (int i = 0; i < n; i++)

   {

      string a, b;

      cin >> a >> b;

      if (b == "enter")

         um[a] = true;

      else

         um[a] = false;

   }

   for (auto m: um)

   {

      if (m.second)

         cout << m.first << '\n';

   }

   return 0;

}