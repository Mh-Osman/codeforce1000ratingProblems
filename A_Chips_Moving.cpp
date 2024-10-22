//My name is Osman Gani
#include <bits/stdc++.h>
using namespace std;

int main() {
 
int n;
cin>>n;
vector<int>v(n,0);
map<int , int>m;
for(int i=0;i<n;i++){

    cin>>v[i];
    m[v[i]]+=1;
}
int maxi=INT_MIN;
int idx=-1;
for(auto it =m.begin();it!=m.end();++it){

if(it->second >=maxi){

maxi = it->second;
idx=it->first;

}


}


int myvalue=v[idx];
long long int sum=0;
for(int i=0;i<n;i++){

  int temp=abs(v[i]-myvalue);
  sum+=temp%2;

}

cout<<sum<<endl;
    return 0;
}
