
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m, 0);
        for (auto &i : v) cin >> i;
           
        vector<int> a(q);
        for (auto &i : a) cin >> i;
           
        sort(v.begin(), v.end());
        // cout<<v[0]<<" "<<v[m-1];
        for (int i = 0; i < q; i++)
        {

            if (v[0] < a[i] && a[i] < v[m - 1])
            {

                auto it = upper_bound(v.begin(), v.end(), a[i]);
                int hi = *it;
                int lo = *(--it);
                int pos = (lo + hi) / 2;
                cout << min(abs(pos - lo), abs(hi - pos)) << endl;
                
            }
            else if (a[i] < v[0])
            {

                cout << abs(1 - v[0]) << endl;
            }
            else
            {

                cout << abs(n - v[m - 1]) << endl;
                
            }
        }
    }

    return 0;
}