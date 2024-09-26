#include <bits/stdc++.h>
using namespace std;
int n=3e5+123;
int main() {

int t;
cin>>t;
vector<int>v(n,0);
for(int i=1;i<n;i++){
    v[i]= v[i-1]^i;

}
while(t--){

    int a , b;
    cin>>a>>b;

    if(  v[a-1] == b){

        cout<<a<<endl;
        continue;
    }
    int x= v[a-1] ^ b;

     if( x == a){
       // cout<<x<<endl;
        cout<<a+2<<endl;
     }else{

      cout<<a+1<<endl;
     }

}



    return 0;
}