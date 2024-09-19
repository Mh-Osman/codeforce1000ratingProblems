
#include <bits/stdc++.h>
using namespace std;

int main() {

int k;
cin>>k;
while(k--){

unsigned long long int  n,x,t;
cin>>n>>x>>t;
unsigned long long int m = t/x;
if(n<=m){

    cout<<((n-1)*n)/2<<endl;
}else{

cout<<((m-1)*m)/2 + (n-m)*m<<endl;

}
  

}



    return 0;
}