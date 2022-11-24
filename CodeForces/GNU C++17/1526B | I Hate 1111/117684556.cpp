#include<bits/stdc++.h>
using namespace std;
//#define int long long
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main(){
anmol();
int t;
t=1;
 
cin>>t;
//int z =0;
while(t--){
 
  int n;
  cin>>n;
 
  int x = n%11;
  while(x){
      x--;
      n-=111;
  }
 
  if(n%11==0 && n>=0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
   
 
 
}
 
}