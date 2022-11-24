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
 
 
bool ifperfect ( int num){
return (!(num-sqrt(num)*sqrt(num)));
}
int32_t main(){
 
 
 //int a,b,c,d,e,f;
 //cin>>a>>b>>c>>d>>e>>f;
 anmol();
 int r,x,y,x1,y1;
 cin>>r>>x>>y>>x1>>y1;
 
 
 
 
 int count = (x1-x)*(x1-x) + (y1-y)*(y1-y);
 
 if(!ifperfect(count)){
  count = sqrt(count) +1;
 }
 
 else count = sqrt(count);
 
 int ans = (count + 2*(r)-1) /(2*r);
 
 
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
}