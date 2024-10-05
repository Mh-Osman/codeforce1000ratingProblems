//My name is Osman Gani
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
   int t;
   cin>>t;
   while(t--){

       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++){
            
             cin>>v[i];
       }
      vector<int>vf(n,0);
      int f=0;
       int c=0;
       map<int , int>m;
       for(int i=1;i<n;i++){

          int x=v[i] - v[i-1];
          if(x>3){
            f=1;
            break;
          }else{

            m[x]+=1;
          }

          }


          if(m[2] >2 || m[3]>1){

            f=1;
          }else if(m[2] !=0 && m[3]!=0){
            f=1;
          }
        if(f==0 || n==1){

         cout<<"YES"<<endl;
        }  else{

            cout<<"NO"<<endl;
        }
              
     }
      
   

   
       
   
    

     
    return 0;
}