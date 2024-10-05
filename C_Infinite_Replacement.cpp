//My name is Osman Gani
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
 int t;
 cin>>t;
 while(t--){
 
     string s;
     cin>>s;
     string t;
     cin>>t;
     int f=0;
     int ans=0;
     int a=0;
     for(int i=0;i<t.length();i++){



        if(t[i] =='a'){

             f=1;
             a+=1;
        }else{


            if(f==1){
                   ans=-1;

            }
        }
     }

     if( a==1 && t.length()==1){

        cout<<1<<endl;
     }else if( f==0){

        cout<<(1<<s.length())<<endl;
     }else{

        cout<<-1<<endl;
     }


 }
      
   

   
       
   
    

     
    return 0;
}