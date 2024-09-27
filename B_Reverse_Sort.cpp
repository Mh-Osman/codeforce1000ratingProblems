 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 
int t;
cin>>t;
while(t--){
 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0;
    int r=n-1;
    vector<int>v;
 
    while(l<=r){
 
        if(s[l] == '1' ){
 
           if(s[r] == '0'){
 
            swap(s[l] , s[r]);
            v.push_back(l);
            v.push_back(r);
            l+=1;
            r-=1;
 
           }else{
 
 
           r-=1;
 
           }
 
        }else{
 
        l+=1;
 
 
        }
 
    }
   if(v.empty()){
 
    cout<<0<<endl;
    continue;
   }
    sort(v.begin() , v.end());
    cout<<1<<endl;
    cout<<v.size()<<" ";
    for(auto x: v){
 
        cout<<x+1<<" ";
    }
    cout<<endl;
 
 
}
 
 
    return 0;
}