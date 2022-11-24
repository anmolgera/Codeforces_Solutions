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
 
const int inf = 1ll << 32;
 
int32_t main(){
 
anmol();
 
int n;
cin>>n;
 
stack<int> st;
st.push(1);
int res =0;
while(n--){
 
 
 string s;
 cin>>s;
 
 if(s=="for"){
 int x;
 cin>>x;
 st.push(min(inf,st.top()*x));
 
 }
 
 
 else if(s=="end"){
 
  st.pop();
 }
 
 
 else {
 
res+=st.top();
 
 }
 
 
 
 
}
 
if(res>=inf){
  cout<<"OVERFLOW!!!"<<endl;
}
 
else cout<<res<<endl;}