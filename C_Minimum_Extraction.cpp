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
        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        int min_sum = v[0];
        vector<int> min_array;
        min_array.push_back(v[0]);
        int curr_min = v[0];
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            v[i] -= min_sum;
            min_sum += v[i];
            min_array.push_back(v[i]);
        }

        sort(min_array.rbegin(), min_array.rend());
        cout << min_array[0] << endl;
    }

    return 0;
}