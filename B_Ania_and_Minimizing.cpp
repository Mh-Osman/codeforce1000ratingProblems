#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s.length() == 1 && k == 1)
    {

        cout << 0 << endl;
        return 0;
    }
    int cost = 0;
    int i = 0;
    while (k > 0)
    {

        if (i >= n)
        {

            break;
        }

        if (i == 0 && s[i] == '1')
        {

            i += 1;
        }
        else if (i == 0 && s[i] != '1' && s[i] != '0')
        {

            s[i] = '1';
            k -= 1;
            i += 1;
        }
        else if (i > 0)
        {
            if (s[i] == '0')
            {

                i += 1;
            }
            else
            {
                s[i] = '0';
                i += 1;
                k -= 1;
            }
        }
    }

    cout << s << endl;

    return 0;
}
