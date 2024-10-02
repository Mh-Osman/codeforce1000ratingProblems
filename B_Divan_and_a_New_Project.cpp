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
        vector<pair<long long int, int>> v;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            v.push_back(make_pair(a, i));
        }
        sort(v.rbegin(), v.rend());
        vector<long long int> vn(n + 1, 0);
        long long int r = 0;
        vn[0] = r;
        unsigned long int big = 0 + 1;
        long long int small = 0 - 1;
        bool f = true;
        unsigned long long int s = 0;
        for (int i = 0; i < n; i++)
        {
            unsigned long long int temp = 0;
            if (f)
            {
                temp = abs(r - big) * v[i].first;
                s += 2 * temp;
                int idx = v[i].second;
                vn[idx + 1] = big;
                big += 1;
                f = !f;
            }
            else
            {
                temp = abs(r - small) * v[i].first;
                s += 2 * temp;
                int idx = v[i].second;
                vn[idx + 1] = small;
                small -= 1;
                f = !f;
            }
        }

        cout << s << endl;
        for (auto x : vn)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}