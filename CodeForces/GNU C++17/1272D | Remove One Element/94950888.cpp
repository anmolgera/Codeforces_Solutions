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
cin>>n;
 
int a[n];
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
 
vector<int> lf(n,1);
vector<int> rg(n,1);
 
int ans =0;
 
for(int i = n-2; i>=0; i--){
 
 
  if(a[i+1]>a[i]) {
    rg[i] = rg[i+1] +1; 
  }
 
  ans = max(ans,rg[i]);
}
 
 
for(int i =1; i<n; i++){
 
   if(a[i]>a[i-1]){
    lf[i] = lf[i-1] +1;
   }
 
   ans = max(ans,lf[i]);
 
 
}
 
 
for(int i =0; i<n-2; i++){
 
 if(a[i]<a[i+2]){
 
  ans = max(ans, lf[i] + rg[i+2] );
 
 }
 
}
 
cout<<ans<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 