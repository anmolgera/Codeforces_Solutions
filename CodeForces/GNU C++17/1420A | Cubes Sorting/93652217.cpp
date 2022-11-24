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
 
 
  int n;
  cin>>n;
 
  int a[n];
 
 
  for(int i =0; i<n; i++){
 
    cin>>a[i];
  }
 
  bool flag = true;
  for(int i =1; i<n; i++){
 
    if(a[i-1]<=a[i]){
 
      flag = false;
      break;
    }
  }
 
 
 
if(!flag){
 
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
}
}