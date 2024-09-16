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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;

            v1.push_back(a);
        }

        vector<int> v2 = v;
        reverse(v2.begin(), v2.end());
        if (v == v1)
        {
            cout << "Bob" << endl;
        }
        else if (v2 == v1)
        {
            cout << "Bob" << endl;
        }
        else
        {

            cout << "Alice" << endl;
        }
    }
    return 0;
}