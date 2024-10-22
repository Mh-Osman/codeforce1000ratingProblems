// My name is Osman Gani
#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while (t--)
   {

      int n, r, b;
      cin >> n >> r >> b;
      b = b + 1;
      vector<string> v(b, "B");
      v[0] = "";

      while (b != 0)
      {

         int s = r / (b);
         string str(s, 'R');
         for (int i = 0; i < b; i++)
         {

            v[i] += str;
         }
         if (r % b == 0)
         {
            b = 0;
            break;
         }
         else
         {

            r = r % b;
            b = r;
         }
      }

      for (auto x : v)
      {

         cout << x;
      }
      cout << endl;
   }

   return 0;
}