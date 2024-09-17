
#include <bits/stdc++.h>
using namespace std;

int main() {



int t;
cin>>t;
while(t--){


   string s;
   cin>>s;
   string temp =s;
   sort(temp.begin(),temp.end());
   if(s == temp){
        cout<<"YES"<<endl;

   }else{

   int i = s.find("11");
   int j= s.rfind("00");
   if(i != -1 && j != -1 && i<j ){
      
      cout<<"No"<<endl;

   }else{

    cout<<"YES"<<endl;
   }
   }
   
}



    return 0;
}