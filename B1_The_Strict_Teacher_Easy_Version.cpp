#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){

    int n, m, q;
    cin>>n>>m>>q;
    vector<int>v(m,0);
    for(auto &i:v)cin>>i;
    int a;
    cin>>a;
    sort(v.begin(), v.end());
   // cout<<v[0]<<" "<<v[m-1];
    if(v[0]<a && a<v[m-1]){

     auto it = upper_bound(v.begin() , v.end(),a);
     int hi=*it;
     int lo= *(--it);
     int pos = (lo+hi)/2;
     cout<<min(abs(pos-lo) , abs(hi-pos))<<endl;;

    }else if(a<v[0]){

       cout<<abs(1 - v[0])<<endl; 
    }else{

        cout<<abs(n - v[m-1])<<endl;; 
    }
}




    return 0;
}