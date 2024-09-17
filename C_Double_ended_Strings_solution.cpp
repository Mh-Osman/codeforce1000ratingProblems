#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
optimize();

    int T;
    cin >> T;
    while (T--)
    {

        string a;
        string b;
        cin >> a;
        cin >> b;
        string y;
        string x;
        int max_length = 0;
        if (a.length() < b.length())
        {

            x = a;
            y = b;
        }
        else
        {
            x = b;//bc
            y = a;//abcd
        }
        int l = 0;
        for (int i = 0; i < x.length(); i++)
        {

            int j=0;
            int flag =0;
             int p;
            int k=i;
             l=0;
            while(j<y.length() && k<x.length()){
               
                 
                  if(x[k]==y[j] && flag ==0){//k=1,b=b
                    p=j;
                    l+=1;
                    max_length = max(max_length, l);
                    flag =1;
                    j+=1;
                    k+=1;
                    continue;
                  }

                  if(flag ==1 && x[k]== y[j]){

                    l+=1;
                    max_length = max(l,max_length);
                    j+=1;
                    k+=1;
                    continue;
                  }

                  if(flag ==1 && x[k]!= y[j]){

                    l=0;
                    max_length = max(l,max_length);
                    j=p;
                    k=i;
                    flag=0;
                  }

                  if(flag == 0){
                       j+=1;//0->1

                  }


            }
        }

      //  cout<<max_length<<endl;
        int n=x.length() - max_length + y.length() - max_length;
        cout<<n<<endl;
    }

    return 0;
}