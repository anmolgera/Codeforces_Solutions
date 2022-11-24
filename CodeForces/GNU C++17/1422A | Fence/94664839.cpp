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
 
 
  int b,c;
 
 int a[3];
 for(int i =0; i<3; i++){
  cin>>a[i];
 }
 
 sort(a,a+3);
 
 cout<<a[2]+1<<endl;
 
 
}
 
 
 
 
}