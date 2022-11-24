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
 
int n;
cin>>n;
 
string s;
cin>>s;
 
 
map<int,string> mp;
 
mp[2] = "2";
mp[3] = "3";
mp[4] = "322";
mp[5] = "5";
mp[6] = "53";
mp[7] = "7";
mp[8] = "7222";
mp[9] = "7332";
 
string ans ="";
for(int i =0; i<n; i++){
 
    if(s[i]-'0'==0 || s[i]-'0'==1){
      continue;
    }
 
 
    else {
 
            ans += mp[s[i]-'0'];
 
    }
 
}
 
sort(ans.begin(),ans.end());
reverse(ans.begin(),ans.end());
 
cout<<ans<<endl;
 
 
 
 
}