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
 
int z;
cin>>z;
 
 
 
int a[n];
 
vector<bool> v (false,n);
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
sort(a,a+n);
int ptr =0;
int ans =0;
for(int i = n/2; i<n; i++){
 
if(ptr==n/2){
  break;
}
 
if(a[i]-a[ptr]>=z){
 
  ptr++;
  ans++;
}
 
 
 
}
 
 
cout<<ans<<endl;
 
 
}