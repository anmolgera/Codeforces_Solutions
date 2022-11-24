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
 
 
 
bool check(string s){
 
 if(s.length()==1){
  return true;
 }
 
 for(int i =1; i<s.length(); i++){
 
  if(abs(s[i]-s[i-1])==1){
    return false;
  }
 
 
 }
 
 return true;
 
 
 
}
int32_t main(){
 
anmol();
 
int t;
cin>>t;
 
 
while(t--){
 
 
 string s;
 cin>>s;
 
 int n = s.length();
 
 sort(s.begin(),s.end());
 
 int count =0;
 string odd ="";
 string even ="";
 
 
 for(int i =0; i<n; i++){
 
 
  if((s[i]-'0')%2==0){
 
    odd+=s[i];
  }
 
  else even +=s[i];
 }
 
  
if(check(odd+even)){
 
  cout<<odd+even<<endl;
}
 
else if(check(even+odd)){
 
  cout<<even+odd<<endl;
 
 
}
 
 
else cout<<"No answer"<<endl;
 
 
 
}
 
 
//cout<<ans<<endl;
 
 
}