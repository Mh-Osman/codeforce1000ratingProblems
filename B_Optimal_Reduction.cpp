#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
//optimize();

int t;
cin>>t;
while(t--){

 long long n;//change the variable according char according postion a+0.example as n is first so n= a; 
 cin>>n;
 vector<int>v(n);//change with a+1;
 long long maxi = INT_MIN;
int idx = 0;
int maxi_idx=-1;
 for(auto &i: v){

    cin>>i;
    if(maxi <= i){

        maxi =i;
        maxi_idx =idx;

    }
    idx+=1;



 }

 //cout<<maxi <<" "<<maxi_idx<<endl;

 int tag =1;
 for(int i=0;i<maxi_idx;i++){

       if( v[i] > v[i+1]){

        tag =0;
       }



 }
if(tag == 1){

 for(int i=maxi_idx;i<n-1;i++){

       if(v[i] < v[i+1]){

        tag =0;
       }



 }


}

if(tag){

    cout<<"YES"<<endl;
}else{


    cout<<"NO"<<endl;
}

}
return 0;
}
