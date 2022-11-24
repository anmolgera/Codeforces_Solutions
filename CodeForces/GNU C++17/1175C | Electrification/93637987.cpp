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
 
const int inf = 1ll << 32;
 
int32_t main(){
 
anmol();
int t;
cin>>t;
 
while(t--){
 
 int n,k;
 cin>>n>>k;
 
 
int a[n];
 for(int i =0; i<n; i++){
 
  cin>>a[i];
 }
 
 
 int mx = INT_MAX;
 int x =0;
for(int i =0; i+k<n; i++){
 
 if(a[i+k]-a[i] < mx){
 
  mx = (a[i+k]-a[i]);
  x = (a[i]+ a[i+k])/2;
 
   }
 
 
}
 
 
cout<<x<<endl;
 
 
 
 
}
}