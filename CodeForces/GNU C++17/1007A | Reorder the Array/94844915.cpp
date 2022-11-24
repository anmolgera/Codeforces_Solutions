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
 
int n;
cin>>n;
 
vector<int> v(n,0);
set<int> s;
 
for(int i =0; i<n; i++){
 
  cin>>v[i];
  //s.insert(v[i]);
}
 
 
sort(v.begin(),v.end());
int nxt =0;
int ans =0;
for(int i =0; i<n; i++){
 
  if(v[i]>v[nxt]){
    nxt++;
    ans++;
  }
 
 
 
}
 
cout<<ans<<endl;
 
 
 
 
 
}