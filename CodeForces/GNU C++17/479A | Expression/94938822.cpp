#include <bits/stdc++.h>
using namespace std;
//#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
int main(){
 
 
anmol();
 
int t;
//cin>>t;
t =1;
while(t--){
 
int a[3];
int sum =0;
int pro =1;
for(int i =0; i<3; i++){
 
  cin>>a[i];
  sum+=a[i];
  pro *=a[i];
}
 
//sort(a,a+3);
 
//cout<<(a[0]+a[1])*a[2]<<endl;
 
int ans = sum;
ans = max(ans,pro);
 
ans = max(ans, (a[0]+a[1])*a[2]);
ans = max(ans, a[0]*(a[1]+a[2]));
 
cout<<ans<<endl;
 
 
 
}
 
 
 
 
}