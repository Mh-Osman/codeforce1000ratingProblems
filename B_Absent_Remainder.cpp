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
        vector<int> v;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;
            v.push_back(a);
            m[a] = 1;
        }

        sort(v.begin(), v.end());

        vector<pair<int, int>> vp;
        int count = 0;
        int limit = floor(n / 2);
        // cout<<limit<<endl;
        for (int i = 0; i < n - limit; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                int md = v[j] % v[i];

                if (m[md] == 0 && (count < limit))
                {

                    vp.push_back(make_pair(v[j], v[i]));
                    count += 1;
                }
                else if (count >= limit)
                {

                    break;
                }
            }
        }

        for (auto it = vp.begin(); it != vp.end(); ++it)
        {

            cout << it->first << " " << it->second << endl;
        }
    }

    return 0;
}