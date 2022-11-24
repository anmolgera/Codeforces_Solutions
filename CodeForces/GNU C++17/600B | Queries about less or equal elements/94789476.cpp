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
 
vector<int> a(n,0);
vector<int> b(m,0);
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
 
for(int i =0; i<m; i++){
 
  cin>>b[i];
}
 
 
vector<int> v;
sort(a.begin(),a.end());
 
for(int i =0; i<m; i++){
 
 int count = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
 v.push_back(count);
 
 
}
 
for(int i =0; i<v.size(); i++){
 
  cout<<v[i]<<" ";
}
 
cout<<endl;
 
 
 
 
}