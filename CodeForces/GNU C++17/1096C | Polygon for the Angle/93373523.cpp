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
 
 
 
/*bool check(string s){
 
 if(s.length()==1){
  return true;
 }
 
 for(int i =1; i<s.length(); i++){
 
  if(abs(s[i]-s[i-1])==1){
    return false;
  }
 
 
 }
 
 return true;
 
*/
 
 
int32_t main(){
 
anmol();
 
 
int t;
cin>>t;
 
while(t--){
 
  int n;
  cin>>n;
 
 
  int x = n;
  int y = 180-x;
 
  int mx = __gcd(x,y);
 
  x/=mx;
  y/=mx;
 
  if(y==1){
 
    x*=2;
    y*=2;
  }
 
 cout<<x+y<<endl;
 
}
 
 
}
 