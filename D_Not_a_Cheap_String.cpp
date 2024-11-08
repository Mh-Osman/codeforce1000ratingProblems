#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;
int main() {
optimize();

int t;
cin>>t;
while(t--){


    string w;
    int p;
    cin>>w>>p;
    vector<pair<int, int>>v;
    for(int i=0;i<w.length();i++){

      int x= w[i] - 'a' + 1;
      //cout<<x<<endl;
      v.push_back({x,i });

    }
    sort(v.begin(), v.end());
  
   // for(auto x: v)cout<<x.first<<" "<<x.second<<endl;
    vector<pair<int, int> >vnew;
    for(int i=0;i<v.size();i++){

    if(p>= v[i].first){

        p=p-v[i].first;
        vnew.push_back({v[i].second,v[i].first});

    }else{

        break;
    }
         
        
    }
sort(vnew.begin(), vnew.end());
string s;
for(auto it = vnew.begin();it != vnew.end();++it){

s+= w[it->first];
}
cout<<s<<endl;

}

return 0;
}