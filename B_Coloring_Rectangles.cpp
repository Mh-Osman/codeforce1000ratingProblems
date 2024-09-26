
#include <bits/stdc++.h>
using namespace std;

int main() {


int t;
cin>>t;
while(t--){


    int a, b;
    cin>>a>>b;
    if((a*b) % 3 ==0){

        cout<<(a*b)/3<<endl;

    }else{

         cout<< ((a*b)/3)+1<<endl;

    }
}


    return 0;
}