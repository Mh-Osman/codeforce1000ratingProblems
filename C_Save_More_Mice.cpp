
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> v(k, 0);
        for (int i = 0; i < k; i++)
        {

            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        int count = 0;
        int catpoint = 0;
        for (int i = 0; i < k; i++)
        {

            if (catpoint >= v[i])
            {

                break;
            }
            catpoint += (n - v[i]);
            count += 1;
        }

        cout << count << endl;
    }
    return 0;
}