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
 
string s;
cin>>s;
 
int n = s.length();
 
for(int i =0; i<n; i++){
 
if(i ==0 && s[i]=='9'){
  continue;
}
 
if((9-(s[i]-'0'))<(s[i]-'0')){
 
  s[i] = (9-(s[i]-'0')) + '0';
}
 
 
 
}
 
cout<<s<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 