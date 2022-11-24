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
 
int t;cin>>t;
while(t--){
 
int n,k;
cin>>n>>k;
 
int ans =0;
while(n!=0){
 
if(n%k==0){
  n = n/k;
  ans++;
}
 
else{ int x = n%k;
      n-=x;
  ans+=x;
  //cout<<ans<<endl;
 }
 
 
}
 
 
 
cout<<ans<<endl;
 
}}