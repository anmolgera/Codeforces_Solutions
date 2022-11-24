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
 
vector<int> v;
 
for(int i =0; i<n; i++){
  
  int x;
  cin>>x;
 
  v.push_back(x);
 
 
}
 
vector<int> v2;
 
v2.push_back(1);
 
int sum =v[0];
int sum1 =0;
for(int i =1; i<n; i++){
 
   if(v[0]>=2*v[i]){
     v2.push_back(i+1);
     sum+=v[i];
 
   }
 
  else sum1+=v[i];
 
}
 
if(sum>sum1){
 
  cout<<v2.size()<<endl;
  for(int i =0; i<v2.size(); i++){
 
    cout<<v2[i]<<" ";
  }
 
  cout<<endl;
}
 
else cout<<0<<endl;
 
 
}
 