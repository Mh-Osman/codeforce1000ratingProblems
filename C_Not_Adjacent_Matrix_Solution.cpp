//My name is Osman Gani
#include <bits/stdc++.h>
using namespace std;

int main() {
     
      int T;
      cin>>T;
      while(T--){
       int n;
       cin>>n;
       int j=1;
      
       if(n==2){

        cout<<-1<<endl;
        continue;
       }
       vector<vector<int>>v(n,vector<int>(n,0));
       for(int k=0;k<n;k++){

        for(int z=0;z<n;z++){

            cout<<j<<" ";
             j+=2;
            if(j > n*n){

                j=2;
            }

                 
            
                  
           
        }
           
           cout<<endl;
             
       }




      }
    return 0;
}
