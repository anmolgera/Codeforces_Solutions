#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
int32_t main(){
 
 
anmol();
 
int t;
t =1;
while(t--){
 
vector<pair<int,int>>v;
 
int n;
cin>>n;
for(int i =0; i<n; i++)
{
 
   int x,y;
   cin>>x>>y;
 
   v.push_back({x,y});
 
 
 
}
 
sort(v.begin(),v.end());
 
 
int mx =0;
 
for(int i =0; i<n; i++){
 
 
  if(mx<=v[i].second){
    mx = v[i].second;
  }
 
  else {
 
     mx = v[i].first;
 
  }
 
 
 
 
 
}
 
 
 
cout<<mx<<endl;
 
 
 
 
}
 
 
 
 
}