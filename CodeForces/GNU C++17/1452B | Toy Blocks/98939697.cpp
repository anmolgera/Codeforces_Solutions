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
 
int a[n+1];
int mx = INT_MIN;
int mn = INT_MAX;
int sum =0;
 
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
  sum+=a[i];
  mx = max(mx,a[i]);
  mn = min(mn,a[i]);
 
}
 
int ans = 0;
int rem = sum%(n-1);
//cout<<rem<<endl;
 
 
int c = sum/(n-1);
 
if(rem!=0){
ans = (n-1)-rem;
 c++;
}
 
if(c>=mx){
  cout<<ans<<endl;
}
 
else{
 
  int can = (mx-c);
  ans+=can*(n-1);
  cout<<ans<<endl;
}
 
return;
 
 
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