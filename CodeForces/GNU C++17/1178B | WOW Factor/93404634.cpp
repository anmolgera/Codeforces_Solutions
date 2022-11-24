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
 
string s;
cin>>s;
 
int n = s.length();
int dp[n] ={0};
int suf[n] ={0};
 
 
for(int i=1; i<n; i++){
  
  dp[i] = dp[i-1];
  if(s[i]=='v'&&s[i-1]=='v'){
    dp[i]++;
   // dp[i]+=dp[i-1];
   
  }
 
 
}
 
 
for(int i =n-2; i>=0; i--){
  suf[i] = suf[i+1];
  if(s[i]=='v' && s[i+1]=='v'){
    suf[i]++;
    //suf[i]+=suf[i+1];
    
  }
 
 
}
 
int ans =0;
for(int i =0; i<n; i++){
 
if(s[i]=='o'){
  //cout<<dp[i]<<" "<<suf[i]<<endl;
  ans+=(dp[i]*suf[i]);
}
 
 
}
 
 
cout<<ans<<endl;
}
 