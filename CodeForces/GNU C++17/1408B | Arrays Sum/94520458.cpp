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
cin>>t;
 
while(t--){
 
int n,k;
cin>>n>>k;
 
int a[n];
set<int> s;
for(int i =0; i<n; i++){
 
  cin>>a[i];
  s.insert(a[i]);
}
 
int unique=0;
 
if(k==1){
 
   if(s.size()==1){
    cout<<1<<endl;
   }
 
   else cout<<-1<<endl;
 
 
 
}
 
else {
 
for(int i =1; i<n; i++){
 
  if(a[i]!=a[i-1]){
    unique++;
  }
}
 
 
int ans = (unique+(k-2))/(k-1);
if(ans<1){
  ans =1;
}
cout<<ans<<endl;
 
 
 
}
}
}