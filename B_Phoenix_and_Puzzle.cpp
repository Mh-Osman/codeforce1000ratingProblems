
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {

        int n;
        cin >> n;
        if (n == 2 || n == 4)
        {

            cout << "YES" << endl;
            continue;
        }

        if (n & 1)
        {

            cout << "NO" << endl;
        }
        else
        {
            double boxWithTwo = n / 2.0;//2 triangle can make 1 box or
            double boxWithFour = n / 4.0;//4 triangle can make 1 box 
            //if the box number of box is  non fractional then the n is valid for making a sqaure.
            //The below code is checking that
            // cout<<"boxWithTwo"<<boxWithTwo<<" "<<"boxWithFour"<<boxWithFour<<endl;
            double a = sqrt(boxWithTwo);
            int b = static_cast<int>(a);

            if (boxWithTwo == pow(b, 2))
            {

                cout << "YES" << endl;
                continue;
            }


            a = sqrt(boxWithFour);
            b = static_cast<int>(a);
            if (boxWithFour == pow(b, 2))
            {

                cout << "YES" << endl;
            }
            else
            {

                cout << "NO" << endl;
            }
        }
    }

    return 0;
}