
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<pair<int, int>> vp;
    vector<pair<int, int>> vp2;
    int open_bracket = 0;
    int close_bracket = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int balance = open_bracket - close_bracket;
        vp.push_back(make_pair(balance, i + 1));
        vp2.push_back(make_pair(i + 1, balance));
        if (s[i] == '(')
        {

            open_bracket += 1;
        }
        else
        {

            close_bracket += 1;
        }
    }

    sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
             if (a.first == b.first)
                 return a.second > b.second; // Sort by second in decreasing order if first elements are equal
             return a.first < b.first;       // Otherwise, sort by first in increasing order
         });

    // for (auto it = vp.begin(); it != vp.end(); ++it)
    // {

    //     cout << it->first << "- " << it->second << endl;
    // }

    string s2;
    for (auto it = vp.begin(); it != vp.end(); ++it)
    {
        int pos = it->second - 1;
        s2 += s[pos];
    }
    cout << s2 << endl;

    return 0;
}