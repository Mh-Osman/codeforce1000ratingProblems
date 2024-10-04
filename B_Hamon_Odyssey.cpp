#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin>>n;
      vector<int>v(n,0);
      for(int i=0;i<n;i++){

        cin>>v[i];
      }

     int c=0;
     int a=v[0];
      
      for(int i=0;i<n;i++){
           a=a&v[i];
          // cout<<a<<endl;
           if(a==0){

            c+=1;
            a=v[i+1];
        
           }

      }
     if(c==0){

        cout<<1<<endl;
     }else{
            cout<<c<<endl;

     }
      


    }
    return 0;
}