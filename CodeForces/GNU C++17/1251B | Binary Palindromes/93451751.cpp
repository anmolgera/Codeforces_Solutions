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
 
 
int sum[2] ={0};
 
 
int odd =0;
for(int i =1; i<=n; i++){
 
 
  string s;
  cin>>s;
   
  //cout<<s.length()<<" "<<i<<endl;
  if(s.length()%2==1){
    odd++;
  }
 
 
  for(int i =0; i<s.length(); i++){
 
    sum[s[i]-'0']++;
  }
 
 
}
 
 
int count = (sum[0]&1) + (sum[1]&1);
//cout<<sum[0]<<" "<<sum[1]<<endl;
//cout<<count<<" "<<odd<<endl;
if(count>odd){
 
  cout<<n-1<<endl;
}
 
else cout<<n<<endl;
}
 
}