 
 #include<bits/stdc++.h>
#include<map>
 
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
 
 
 
 
int32_t main() 
{ 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 //anmol();
 int t;
 cin>>t;
 while(t--){
 
 int a,b,c;
 cin>>a>>b>>c;
 
 
 
 int x,y,z;
 cin>>x>>y>>z;
 
 
 int ans =0;
 
 ans+=2*min(c,y);
 
 c = c-min(c,y);
 y = y-min(c,y);
 
 z = z-c;
 z = z-a;
 
 if(z<0){
 
  cout<<ans<<endl;
 }
 
 
 else {
 
  cout<<ans-2*min(z,b)<<endl;
 }
 
 
}
 
 
 }
 
 
 
 