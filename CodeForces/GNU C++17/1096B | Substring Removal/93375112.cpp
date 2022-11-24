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
 
 
int n;
cin>>n;
 
 
string s;
cin>>s;
 
int count0 =1;
int count1 =1;
 
 
if(n==1){
 
  cout<<2<<endl;
  return 0;
}
 
for(int i=1; i<n; i++){
 
    if(s[i]==s[i-1]){
 
        count0++;
    }
 
    else break;
}
 
//cout<<count0<<endl;
//cout<<s[n-1]<<" "<<s[n-2]<<endl;
for(int i = n-2; i>=0; i--){
 
    if(s[i]==s[i+1]){
 
      count1++;
    }
  else break;
}
 
//cout<<count1<<endl;
 
if(count0==n){
 
    cout<<(n*(n-1)/2)%998244353<<endl;
}
 
int ans = (count0+count1+1)% 998244353;
//cout<<ans<<endl;
 
if(s[0]==s[n-1]){
 
    ans+=(count0*count1)% 998244353;
    ans%= 998244353;
}
 
 cout<<ans<<endl;
 
}
 