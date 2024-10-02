#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n, 0);
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            if (v[i] >= maxi)
            {

                maxi = v[i];
            }
        }

        if (maxi == v[0] || maxi == v[n - 1])
        {

            if (maxi == v[0])
            {

                reverse(v.begin(), v.end());
              //  cout << "0" << endl;
            }
            else
            {

                v.pop_back();
                reverse(v.begin(), v.end());
               // cout << "1" << endl;
                v.push_back(maxi);
            }

            for (auto x : v)
                cout << x << " ";
            cout << endl;
        }
        else
        {

            cout << -1 << endl;
        }
    }

    return 0;
}