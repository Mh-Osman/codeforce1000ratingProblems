#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        string s,a;
        cin>>s;
        cin>>a;
        int sum =0;
        int i=0;
        while( i<n)
        {
          if(s[i] != a[i]){

                sum +=2;
                i+=1;
          }else if(s[i] == '0'  && a[i] == '0'){
              //    cout<<"28"<<" ";
                     if( (i+1<n) && (s[i+1] == '1' && a[i+1] == '1')){

                        sum+=2;
                        i+=2;
                     }else{
                          sum +=1;
                          i+=1;
                       //    cout<<"36"<<" ";
                     }



          }else if(  s[i]=='1'   && a[i] == '1'){
                   if( (i+1<n) && (s[i+1] == '1' && a[i+1] == '1')){

                        sum +=0;
                        i+=1;

                   }else if(i+1>=n){

                    sum +=0;
                    i+=1;

                   }else{

                       sum+=2;
                       i+=2;


                   }

          }



        }

        cout<<sum<<endl;

    }


    return 0;
}