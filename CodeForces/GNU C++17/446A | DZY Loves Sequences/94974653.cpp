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
 
if(n==1 || n==2){
  cout<<n<<endl;
  return 0;
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
 
ans = max(ans,lf[n-2] +1);
ans = max(ans, rg[1]+1);
 
for(int i =0; i<n-2; i++){
 
 if(a[i]<a[i+2] && (a[i+2]-a[i])>1){
 
  ans = max(ans, lf[i] + rg[i+2] +1 );
 
 }
 
 else {
 
   ans = max(ans,lf[i]+1);
   ans = max(ans,rg[i+2]+1);
 
 
 
 }
 
}
 
cout<<ans<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 