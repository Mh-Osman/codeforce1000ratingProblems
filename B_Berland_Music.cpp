
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
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p.push_back(a);
        }
        string s;
        cin >> s;
        vector<pair<int, int>> zro;
        vector<pair<int, int>> one;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {

                zro.push_back({p[i], i});
            }
            else
            {

                one.push_back({p[i], i});
            }
        }

        int flag = 0;
        if (zro.empty())
        {

            flag = 1;
        }
        else if (one.empty())
        {

            flag = 1;
        }
        vector<int> q(n, 0);
        if (flag == 0)
        {

            sort(zro.begin(), zro.end());
            int m = zro[0].first;
            int zromax = zro[zro.size() - 1].first;
            sort(one.begin(), one.end());
            int onemin = one[0].first;
            m = min(m, onemin);

            if (onemin > zromax)
            {

                flag = 1;
            }
            else
            {

                for (auto it = zro.begin(); it != zro.end(); ++it)
                {

                    int idx = it->second;
                    q[idx] = m;
                    m += 1;
                }

                for (auto it = one.begin(); it != one.end(); ++it)
                {

                    int idx = it->second;
                    if (p[idx] > m)
                    {
                        q[idx] = p[idx];
                    }
                    else
                    {

                        q[idx] = m;
                        m += 1;
                    }
                }
            }
        }

        if (flag == 1)
        {

            for (auto x : p)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {

            for (auto x : q)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}