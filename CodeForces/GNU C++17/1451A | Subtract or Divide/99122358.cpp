/* Author : Anmol Gera
NSIT 4th Year */
 
#include<bits/stdc++.h>
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
 
 
 
 
 
void solve(){
 
int n;
cin>>n;
 
if(n==1){
  cout<<0<<endl;
  return;
}
 
else if(n==2){
 
  cout<<1<<endl;
}
 
else if(n==3){
 
  cout<<2<<endl;
}
 
else if(n%2){
 
  cout<<3<<endl;
}
 
else cout<<2<<endl;
 
 
 
 
}
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  ///t =1;
  cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
        // look for base cases always 
 
 
 
  }
 
}