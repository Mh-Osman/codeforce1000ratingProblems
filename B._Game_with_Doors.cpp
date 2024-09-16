#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){



    int l, r;
    int L,R;
    cin>>l>>r;
    cin>>L>>R;
    int maxl=max(l, L);
    int minr=min(r,R);
    if(r<L || R<l){

        cout<<1<<endl;
    }else if(l==L && r==R){


        cout<<abs(l-r)<<endl;
    }else{

         int one=1 , two=1;
         if(L == l ){

            one =0;
         }
         if(r==R){

            two=0;
         }
        cout<<one+two+abs(maxl-minr)<<endl;
    }
}


    return 0;
}