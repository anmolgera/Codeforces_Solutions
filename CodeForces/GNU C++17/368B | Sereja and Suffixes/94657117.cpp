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
 
int n,m;
cin>>n>>m;
 
 
int a[n];
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
vector<int> v;
 
for(int i =0; i<m; i++){
 
   int x;
   cin>>x;
   v.push_back(x);
}
 
int dp[n] ={0};
set<int> s;
 
for(int i = n-1; i>=0; i--){
 
  if(s.count(a[i])==0) {
 
    s.insert(a[i]);
  }
 
  dp[i] = s.size();
 
}
 
for(int i =0; i<m; i++){
 
  cout<<dp[v[i]-1]<<endl;
}
 
 
 
 
}